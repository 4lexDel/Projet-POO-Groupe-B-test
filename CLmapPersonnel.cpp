#include "CLmapPersonnel.h"

/*using System::Data::SqlPersonnel::SqlParameter;*/

String^ NS_Comp_Mappage::CLmapPersonnel::Select(void)
{
	return "select E.IDEmploye, E.Nom, E.Prenom, Numero, NomAdresse as Adresse, nomVille as Ville, S.Nom as [Nom supérieur], S.Prenom as [Prenom supérieur] from Employe as E left join Employe as S on E.IDEmploye_EtreDiriger = S.IDEmploye join Adresse as A on A.IDAdresse = E.IDAdresse join Ville as V on V.IDVille = A.IDVille";
}

String^ NS_Comp_Mappage::CLmapPersonnel::Insert(void)
{
	return "exec ajouterPersonnel " + "'" + this->nom + "', '" + this->prenom + "', '" + this->dateEmbauche + "',"+ this->Numero+",'"+ this->NomAdresse + "','"+ this->ville+"',"+this->IDSupPersonnel;
}

String^ NS_Comp_Mappage::CLmapPersonnel::Delete(void)
{
	return "exec supprimerPersonnel " + IDPersonnel;
}

String^ NS_Comp_Mappage::CLmapPersonnel::Update(void)
{
	return "UPDATE Employe SET Nom = '" + this->nom + "', Prenom = '" + this->prenom + "', DateEmbauche ='" + this->dateEmbauche + "' ,  WHERE IDPersonnel = '" + this->IDPersonnel + "'; ";
}
void NS_Comp_Mappage::CLmapPersonnel::setIDPersonnel(String^ value)
{
	this->IDPersonnel = value;
}

void NS_Comp_Mappage::CLmapPersonnel::setNom(String^ value)
{
	this->nom = value;
}

void NS_Comp_Mappage::CLmapPersonnel::setPrenom(String^ value)
{
	this->prenom = value;
}

void NS_Comp_Mappage::CLmapPersonnel::setdateEmbauche(String^ value)
{
	this->dateEmbauche = value;
}
