

/*CREATE PROCEDURE modifierClient
@NumeroClient INT, 

@NomClient CHAR(20),
@PrenomClient CHAR(20), 
@DateNaissance DATE,

@NumeroFacturation INT,
@NomAdresseFacturation CHAR(20), 
@villeFacturation CHAR(20), 

@NumeroLivraison int,
@NomAdresseLivraison CHAR(20), 
@villeLivraison CHAR(20)
AS

update Client 
set Nom = @NomClient,	
	Prenom = @PrenomClient,
	DateNaissance = @DateNaissance
where NumeroClient = @NumeroClient


update Adresse 
set Numero = @NumeroFacturation, 
    NomAdresse = @NomAdresseFacturation,
	IDVille = (select IDVille from Ville where NomVille = @villeFacturation) 
where IDAdresse = (select IDAdresse from Posseder where (NumeroClient = @NumeroClient) and (TypeAdresse = 'Facturation') )


update Adresse 
set Numero = @NumeroLivraison,
    NomAdresse = @NomAdresseLivraison,
	IDVille = (select IDVille from Ville where NomVille = @villeLivraison) 
where IDAdresse = (select IDAdresse from Posseder where (NumeroClient = @NumeroClient) and (TypeAdresse = 'Livraison') )


GO*/

exec modifierClient 1, 'LAPORTE', 'Xavier', '2002-03-28', 15, 'Rue de la glacière', 'Fontainebleau', 18, 'Rue des verts', 'St-Nazaire'

select C.NumeroClient, Nom, Prenom, Numero, NomAdresse as Adresse, nomVille as Ville from Client as C join Posseder as P on C.NumeroClient = P.NumeroClient join Adresse as A on A.IDAdresse = P.IDAdresse join Ville as V on V.IDVille = A.IDVille;


