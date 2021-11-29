#include "CLmapPersonnel.h"

/*using System::Data::SqlPersonnel::SqlParameter;*/

String^ NS_Comp_Mappage::CLmapPersonnel::Select(void)
{
	return "SELECT Nom, Prenom, DateEmbauche FROM Personnel";
}

String^ NS_Comp_Mappage::CLmapPersonnel::Insert(void)
{
	return "INSERT INTO Client (Nom, Prenom, DateEmbauche) VALUES('" + this->nom + "','" + this->prenom + "','" + this->dateEmbauche + "');";
}

String^ NS_Comp_Mappage::CLmapPersonnel::Delete(void)
{
	return "DELETE FROM Client WHERE IDPersonnel = " + IDPersonnel;
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
