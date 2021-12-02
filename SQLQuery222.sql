/* drop procedure modifierStock */

CREATE PROCEDURE modifierStock
@IDProduit INT,
@QuantiteStock INT,
@NouveauPrixProduit INT,
@NouveauSeuilReapprovisionnement INT,
@NouveauPrixAchat INT
AS


update Article 
set QuantiteStock = @QuantiteStock,		/*--Update de client--*/
	PrixProduit = @NouveauPrixProduit,
	SeuilReapprovisionnement = @NouveauSeuilReapprovisionnement,
	PrixAchat = @NouveauPrixAchat
where Reference = @IDProduit

GO