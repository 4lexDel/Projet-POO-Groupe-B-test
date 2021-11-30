#include "CLmapPersonnel.h"

/*using System::Data::SqlPersonnel::SqlParameter;*/

String^ NS_Comp_Mappage::CLmapPersonnel::Select(void)
{
	return "select E.IDEmploye, E.Nom, E.Prenom, Numero, NomAdresse as Adresse, nomVille as Ville, S.Nom as [Nom supérieur], S.Prenom as [Prenom supérieur] from Employe as E left join Employe as S on E.IDEmploye_EtreDiriger = S.IDEmploye join Adresse as A on A.IDAdresse = E.IDAdresse join Ville as V on V.IDVille = A.IDVille";
}

String^ NS_Comp_Mappage::CLmapPersonnel::Insert(void)
{
	return "exec ajouterPersonnel " + "'" + this->nom + "', '" + this->prenom + "', '" + this->dateEmbauche + "'," + this->IDSupPersonnel + "," + this->Numero+",'"+ this->NomAdresse + "','"+ this->ville+"'";
}

String^ NS_Comp_Mappage::CLmapPersonnel::Delete(void)
{
	return "exec supprimerEmploye " + IDPersonnel;
}

String^ NS_Comp_Mappage::CLmapPersonnel::Update(void)
{
	//System::Windows::Forms::MessageBox::Show("exec modifierPersonnel " + this->IDPersonnel + ",'" + this->nom + "', '" + this->prenom + "', '" + this->dateEmbauche + "'," + this->IDSupPersonnel + "," + this->Numero + ",'" + this->NomAdresse + "','" + this->ville + "'");
	return "exec modifierPersonnel " +this->IDPersonnel+ ",'" + this->nom + "', '" + this->prenom + "', '" + this->dateEmbauche + "'," + this->IDSupPersonnel + "," + this->Numero + ",'" + this->NomAdresse + "','" + this->ville + "'";
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

void NS_Comp_Mappage::CLmapPersonnel::setNumero(String^ value)
{
	this->Numero = value;
}

void NS_Comp_Mappage::CLmapPersonnel::setNomAdresse(String^ value)
{
	this->NomAdresse = value;
}

void NS_Comp_Mappage::CLmapPersonnel::setVille(String^ value)
{
	this->ville = value;
}

void NS_Comp_Mappage::CLmapPersonnel::setIDSupPersonnel(String^ value)
{
	this->IDSupPersonnel = value;
}
