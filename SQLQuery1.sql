/*------------------------------------------------------------
*        Script SQLSERVER 
------------------------------------------------------------*/


/*------------------------------------------------------------
-- Table: Client
------------------------------------------------------------*/
CREATE TABLE Client(
	NumeroClient    INT IDENTITY (1,1) NOT NULL ,
	Nom             CHAR (20)  NOT NULL ,
	Prenom          CHAR (20)  NOT NULL ,
	DateNaissance   DATETIME NOT NULL  ,
	CONSTRAINT Client_PK PRIMARY KEY (NumeroClient)
);


/*------------------------------------------------------------
-- Table: Commande
------------------------------------------------------------*/
CREATE TABLE Commande(
	RefCommande     VARCHAR (20) NOT NULL ,
	DateLivraison   DATETIME NOT NULL ,
	DateEmission    DATETIME NOT NULL ,
	NumeroClient    INT  NOT NULL  ,
	CONSTRAINT Commande_PK PRIMARY KEY (RefCommande)
);


/*------------------------------------------------------------
-- Table: Ville
------------------------------------------------------------*/
CREATE TABLE Ville(
	IDVille    INT IDENTITY (1,1) NOT NULL ,
	NomVille   CHAR (20)  NOT NULL  ,
	CONSTRAINT Ville_PK PRIMARY KEY (IDVille)
);


/*------------------------------------------------------------
-- Table: Adresse
------------------------------------------------------------*/
CREATE TABLE Adresse(
	IDAdresse      INT IDENTITY (1,1) NOT NULL ,
	Numero         INT  NOT NULL ,
	NomAdresse     CHAR (20)  NOT NULL ,
	TypeAdresse    CHAR (20)  NOT NULL ,
	NumeroClient   INT   ,
	IDVille        INT  NOT NULL  ,
	CONSTRAINT Adresse_PK PRIMARY KEY (IDAdresse)
);


/*------------------------------------------------------------
-- Table: ModePaiement
------------------------------------------------------------*/
CREATE TABLE ModePaiement(
	IDMoyenPaiement   INT IDENTITY (1,1) NOT NULL ,
	MoyenPaiement     CHAR (20)  NOT NULL  ,
	CONSTRAINT ModePaiement_PK PRIMARY KEY (IDMoyenPaiement)
);


/*------------------------------------------------------------
-- Table: Article
------------------------------------------------------------*/
CREATE TABLE Article(
	Reference                  INT IDENTITY (1,1) NOT NULL ,
	Nom                        CHAR (20)  NOT NULL ,
	QuantiteStock              INT  NOT NULL ,
	PrixProduit                INT  NOT NULL ,
	SeuilReapprovisionnement   INT  NOT NULL  ,
	CONSTRAINT Article_PK PRIMARY KEY (Reference)
);


/*------------------------------------------------------------
-- Table: Taxe
------------------------------------------------------------*/
CREATE TABLE Taxe(
	IDTaxe            INT IDENTITY (1,1) NOT NULL ,
	NomTaxe           CHAR (20)  NOT NULL ,
	PourcentageTaxe   FLOAT  NOT NULL  ,
	CONSTRAINT Taxe_PK PRIMARY KEY (IDTaxe)
);


/*------------------------------------------------------------
-- Table: Paiement
------------------------------------------------------------*/
CREATE TABLE Paiement(
	IDPaiement        INT IDENTITY (1,1) NOT NULL ,
	DatePaiement      DATETIME NOT NULL ,
	MontantPaiement   INT  NOT NULL ,
	RefCommande       VARCHAR (20) NOT NULL ,
	IDMoyenPaiement   INT  NOT NULL  ,
	CONSTRAINT Paiement_PK PRIMARY KEY (IDPaiement)
);


/*------------------------------------------------------------
-- Table: Remise
------------------------------------------------------------*/
CREATE TABLE Remise(
	IDRemise            INT IDENTITY (1,1) NOT NULL ,
	PourcentageRemise   FLOAT  NOT NULL  ,
	CONSTRAINT Remise_PK PRIMARY KEY (IDRemise)
);


/*------------------------------------------------------------
-- Table: Composer
------------------------------------------------------------*/
CREATE TABLE Composer(
	Reference        INT  NOT NULL ,
	RefCommande      VARCHAR (20) NOT NULL ,
	NombreArticle    INT  NOT NULL ,
	PrixUHT          INT  NOT NULL ,
	PourcentageTVA   FLOAT  NOT NULL ,
	Couleur          CHAR (20)  NOT NULL  ,
	CONSTRAINT Composer_PK PRIMARY KEY (Reference,RefCommande)
);


/*------------------------------------------------------------
-- Table: Taxer
------------------------------------------------------------*/
CREATE TABLE Taxer(
	IDTaxe      INT  NOT NULL ,
	Reference   INT  NOT NULL  ,
	CONSTRAINT Taxer_PK PRIMARY KEY (IDTaxe,Reference)
);


/*------------------------------------------------------------
-- Table: Beneficier
------------------------------------------------------------*/
CREATE TABLE Beneficier(
	IDRemise      INT  NOT NULL ,
	RefCommande   VARCHAR (20) NOT NULL  ,
	CONSTRAINT Beneficier_PK PRIMARY KEY (IDRemise,RefCommande)
);


/*------------------------------------------------------------
-- Table: Employe
------------------------------------------------------------*/
CREATE TABLE Employe(
	IDEmploye               INT IDENTITY (1,1) NOT NULL ,
	Nom                     CHAR (20)  NOT NULL ,
	Prenom                  CHAR (20)  NOT NULL ,
	DateEmbauche            DATETIME NOT NULL ,
	IDAdresse               INT  NOT NULL ,
	IDEmploye_EtreDiriger   INT    ,
	CONSTRAINT Employe_PK PRIMARY KEY (IDEmploye)
);




ALTER TABLE Commande
	ADD CONSTRAINT Commande_Client0_FK
	FOREIGN KEY (NumeroClient)
	REFERENCES Client(NumeroClient);

ALTER TABLE Adresse
	ADD CONSTRAINT Adresse_Client0_FK
	FOREIGN KEY (NumeroClient)
	REFERENCES Client(NumeroClient);

ALTER TABLE Adresse
	ADD CONSTRAINT Adresse_Ville1_FK
	FOREIGN KEY (IDVille)
	REFERENCES Ville(IDVille);

ALTER TABLE Paiement
	ADD CONSTRAINT Paiement_Commande0_FK
	FOREIGN KEY (RefCommande)
	REFERENCES Commande(RefCommande);

ALTER TABLE Paiement
	ADD CONSTRAINT Paiement_ModePaiement1_FK
	FOREIGN KEY (IDMoyenPaiement)
	REFERENCES ModePaiement(IDMoyenPaiement);

ALTER TABLE Composer
	ADD CONSTRAINT Composer_Article0_FK
	FOREIGN KEY (Reference)
	REFERENCES Article(Reference);

ALTER TABLE Composer
	ADD CONSTRAINT Composer_Commande1_FK
	FOREIGN KEY (RefCommande)
	REFERENCES Commande(RefCommande);

ALTER TABLE Taxer
	ADD CONSTRAINT Taxer_Taxe0_FK
	FOREIGN KEY (IDTaxe)
	REFERENCES Taxe(IDTaxe);

ALTER TABLE Taxer
	ADD CONSTRAINT Taxer_Article1_FK
	FOREIGN KEY (Reference)
	REFERENCES Article(Reference);

ALTER TABLE Beneficier
	ADD CONSTRAINT Beneficier_Remise0_FK
	FOREIGN KEY (IDRemise)
	REFERENCES Remise(IDRemise);

ALTER TABLE Beneficier
	ADD CONSTRAINT Beneficier_Commande1_FK
	FOREIGN KEY (RefCommande)
	REFERENCES Commande(RefCommande);

ALTER TABLE Employe
	ADD CONSTRAINT Employe_Adresse0_FK
	FOREIGN KEY (IDAdresse)
	REFERENCES Adresse(IDAdresse);

ALTER TABLE Employe
	ADD CONSTRAINT Employe_Employe1_FK
	FOREIGN KEY (IDEmploye_EtreDiriger)
	REFERENCES Employe(IDEmploye);

ALTER TABLE Employe 
	ADD CONSTRAINT Employe_Adresse0_AK 
	UNIQUE (IDAdresse);
