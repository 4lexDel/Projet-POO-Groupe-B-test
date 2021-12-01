select MONTH(DatePaiement) as Mois, sum(MontantPaiement) as [Chiffre d affaire]
from Paiement
group by MONTH(DatePaiement)
having MONTH(DatePaiement) = 5