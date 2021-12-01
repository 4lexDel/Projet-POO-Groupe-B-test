select NumeroClient, Commande.RefCommande, DateLivraison, DateEmission, Nom, NombreArticle, PrixUHT
from Commande
    join Composer on Commande.RefCommande = Composer.RefCommande
    join Article on Article.Reference = Composer.Reference

where NumeroClient = 9
order by Commande.RefCommande asc 