/*drop procedure supprimerClient*/

CREATE PROCEDURE supprimerClient
@inputIDClient int AS
DECLARE @IDValue table (IDAdresse int)

insert @IDValue		/*--Stockage des adresses--*/
select Adresse.IDAdresse FROM Posseder join Adresse on Posseder.IDAdresse = Adresse.IDAdresse WHERE Posseder.NumeroClient = @inputIDClient

SELECT * from @IDValue

delete from Posseder where NumeroClient = @inputIDClient	/*--Delete de Posseder--*/
delete from Adresse where IDAdresse in (select * from @IDValue)				/*--Delete Adresse--*/

update Commande set NumeroClient = NULL where NumeroClient = @inputIDClient		/*--Update de commande--*/

delete from Client where NumeroClient in (select * from @IDValue)			/*--Delete Client--*/
GO

exec supprimerClient 50

