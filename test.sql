--select A.Reference, Nom, QuantiteStock, PrixProduit, SeuilReapprovisionnement, NomTaxe, PourcentageTaxe from Taxer Tr join Article as A on Tr.Reference = A.Reference join Taxe as Ta on Tr.IDTaxe = Ta.IDTaxe

--select * from Taxe

