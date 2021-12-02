CREATE PROCEDURE ajouterArticle
@Nom CHAR(20),
@QuantiteStock int,
@PrixProduit int,
@Seuil int,
@PrixAchat int 
AS

insert into Article Values(@Nom, @QuantiteStock, @PrixProduit, @Seuil, @PrixAchat)

declare @IDArticle int = (select top 1 Reference from Article order by Reference desc) 

insert into Taxer Values(1, @IDArticle), 
(2, @IDArticle)

GO