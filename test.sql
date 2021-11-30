CREATE PROCEDURE supprimerEmploye
@inputIDEmploye int AS
DECLARE @IDAdresse int = (select Employe.IDAdresse from Employe where IDEmploye = @inputIDEmploye)

update Employe set IDEmploye_EtreDiriger = NULL where IDEmploye_EtreDiriger = @inputIDEmploye	/*--Update de commande--*/

delete from Employe where IDEmploye = @inputIDEmploye	/*--Delete de Employe--*/

delete from Adresse where Adresse.IDAdresse = @IDAdresse		/*--Delete Adresse--*/


GO