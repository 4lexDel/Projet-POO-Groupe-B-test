
/****** Object:  Table [dbo].[Adresse]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Adresse](
	[IDAdresse] [int] IDENTITY(1,1) NOT NULL,
	[Numero] [int] NOT NULL,
	[NomAdresse] [char](50) NOT NULL,
	[IDVille] [int] NOT NULL,
 CONSTRAINT [Adresse_PK] PRIMARY KEY CLUSTERED 
(
	[IDAdresse] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Article]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Article](
	[Reference] [int] IDENTITY(1,1) NOT NULL,
	[Nom] [char](20) NOT NULL,
	[QuantiteStock] [int] NOT NULL,
	[PrixProduit] [int] NOT NULL,
	[SeuilReapprovisionnement] [int] NOT NULL,
	[PrixAchat] [int] NULL,
 CONSTRAINT [Article_PK] PRIMARY KEY CLUSTERED 
(
	[Reference] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Beneficier]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Beneficier](
	[IDRemise] [int] NOT NULL,
	[RefCommande] [int] NOT NULL,
 CONSTRAINT [Beneficier_PK] PRIMARY KEY CLUSTERED 
(
	[IDRemise] ASC,
	[RefCommande] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Client]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Client](
	[NumeroClient] [int] IDENTITY(1,1) NOT NULL,
	[Nom] [char](20) NOT NULL,
	[Prenom] [char](20) NOT NULL,
	[DateNaissance] [date] NOT NULL,
 CONSTRAINT [Client_PK] PRIMARY KEY CLUSTERED 
(
	[NumeroClient] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Commande]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Commande](
	[RefCommande] [int] IDENTITY(1,1) NOT NULL,
	[DateLivraison] [date] NULL,
	[DateEmission] [date] NULL,
	[NumeroClient] [int] NULL,
 CONSTRAINT [Commande_PK] PRIMARY KEY CLUSTERED 
(
	[RefCommande] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Composer]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Composer](
	[Reference] [int] NOT NULL,
	[RefCommande] [int] NOT NULL,
	[NombreArticle] [int] NOT NULL,
	[PrixUHT] [int] NOT NULL,
	[PourcentageTVA] [float] NOT NULL,
	[Couleur] [char](20) NOT NULL,
 CONSTRAINT [Composer_PK] PRIMARY KEY CLUSTERED 
(
	[Reference] ASC,
	[RefCommande] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Employe]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Employe](
	[IDEmploye] [int] IDENTITY(1,1) NOT NULL,
	[Nom] [char](20) NOT NULL,
	[Prenom] [char](20) NOT NULL,
	[DateEmbauche] [date] NOT NULL,
	[IDAdresse] [int] NOT NULL,
	[IDEmploye_EtreDiriger] [int] NULL,
 CONSTRAINT [Employe_PK] PRIMARY KEY CLUSTERED 
(
	[IDEmploye] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[ModePaiement]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[ModePaiement](
	[IDMoyenPaiement] [int] IDENTITY(1,1) NOT NULL,
	[MoyenPaiement] [char](20) NOT NULL,
 CONSTRAINT [ModePaiement_PK] PRIMARY KEY CLUSTERED 
(
	[IDMoyenPaiement] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Paiement]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Paiement](
	[IDPaiement] [int] IDENTITY(1,1) NOT NULL,
	[DatePaiement] [date] NOT NULL,
	[MontantPaiement] [int] NOT NULL,
	[RefCommande] [int] NOT NULL,
	[IDMoyenPaiement] [int] NOT NULL,
 CONSTRAINT [Paiement_PK] PRIMARY KEY CLUSTERED 
(
	[IDPaiement] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Posseder]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Posseder](
	[NumeroClient] [int] NOT NULL,
	[IDAdresse] [int] NOT NULL,
	[TypeAdresse] [char](20) NOT NULL,
 CONSTRAINT [Posseder_PK] PRIMARY KEY CLUSTERED 
(
	[NumeroClient] ASC,
	[IDAdresse] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Remise]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Remise](
	[IDRemise] [int] IDENTITY(1,1) NOT NULL,
	[PourcentageRemise] [float] NOT NULL,
 CONSTRAINT [Remise_PK] PRIMARY KEY CLUSTERED 
(
	[IDRemise] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Taxe]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Taxe](
	[IDTaxe] [int] IDENTITY(1,1) NOT NULL,
	[NomTaxe] [char](20) NOT NULL,
	[PourcentageTaxe] [float] NOT NULL,
 CONSTRAINT [Taxe_PK] PRIMARY KEY CLUSTERED 
(
	[IDTaxe] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Taxer]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Taxer](
	[IDTaxe] [int] NOT NULL,
	[Reference] [int] NOT NULL,
 CONSTRAINT [Taxer_PK] PRIMARY KEY CLUSTERED 
(
	[IDTaxe] ASC,
	[Reference] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Ville]    Script Date: 02/12/2021 10:15:54 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Ville](
	[IDVille] [int] IDENTITY(1,1) NOT NULL,
	[NomVille] [char](20) NOT NULL,
 CONSTRAINT [Ville_PK] PRIMARY KEY CLUSTERED 
(
	[IDVille] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
SET IDENTITY_INSERT [dbo].[Adresse] ON 
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (1, 23, N'Rue des verts                                     ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (2, 37, N'Route de la sortie                                ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (3, 25, N'Rue du chenapan                                   ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (4, 27, N'Rue du patato                                     ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (5, 62, N'Rue Mirabeau                                      ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (6, 12, N'Rue Herge                                         ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (7, 3, N'Boulevard Amiral Gauchet                          ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (8, 73, N'rue du chat qui dort                              ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (9, 28, N'Rue de la métallurgie                             ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (10, 100, N'Rue de la forestière                              ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (11, 57, N'Rue Saint-Marc                                    ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (12, 6, N'Rue du docteur rayer                              ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (13, 2, N'Place Maréchal Foch                               ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (14, 23, N'Avenue de Bruxelles                               ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (15, 172, N'Rue de la délivrande                              ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (16, 24, N'Rue Françoise de cezelly                          ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (17, 19, N'Rue maxwell taylor                                ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (18, 11, N'Residence Lebelvedere                             ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (19, 16, N'Rue du villiers                                   ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (20, 6, N'Rue du paradis                                    ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (21, 45, N'Rue du jeu                                        ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (22, 24, N'Rue des flibustiers                               ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (23, 56, N'Rue de Bourgogne                                  ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (24, 89, N'Rue de la baraque                                 ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (25, 14, N'Rue des hortensias                                ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (26, 28, N'Chemin de la boire                                ', 4)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (27, 5, N'Rue Balkany                                       ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (28, 19, N'Rue Richard Lenoir                                ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (29, 11, N'Rue de l Horizon                                  ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (30, 1, N'Rue du Géneral de Gaulle                          ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (31, 43, N'Rue de Stalingrad                                 ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (32, 412, N'Boulevard de angeldeath                           ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (33, 99, N'Rue de Noisy le Sec                               ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (34, 89, N'Boulevard du Vendée globe                         ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (35, 120, N'Route de keradenneck huella                       ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (36, 69, N'Boulevard du respect                              ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (37, 8, N'Rue les lupins                                    ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (38, 420, N'Rue des inconnus                                  ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (39, 27, N'Avenue de Gaulle                                  ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (40, 3, N'rue lechat                                        ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (41, 3, N'Rue Christian Pauc                                ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (42, 38, N'Rue de la méduse                                  ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (43, 31, N'Rue du phare de la teignouse                      ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (44, 31, N'Rue du phare de la teignouse                      ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (45, 34, N'Rue Alice Monti                                   ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (46, 56, N'Boulevard Le Fevre                                ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (47, 39, N'Petit avenue de Longchamp                         ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (48, 2, N'Impasse des Pieds Froids                          ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (49, 1, N'Boulevard François Hollande                       ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (50, 23, N'Rue de trevi                                      ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (51, 33, N'Rue du bouquet                                    ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (52, 8, N'Rue des camélias                                  ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (53, 10, N'Rue des pivoines                                  ', 4)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (54, 167, N'Rue de Drek                                       ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (55, 2, N'Boulevard Einstein                                ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (56, 1, N'Boulevard de la République                        ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (57, 24, N'Rue Carnot                                        ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (58, 32, N'Rue du 11 novembre                                ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (59, 79, N'Route des vignerons                               ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (60, 157, N'Rue de la vie                                     ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (61, 7, N'Rue Androuet                                      ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (62, 57, N'Avenue Foch                                       ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (63, 78, N'Avenue Loulou cacahuète                           ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (64, 189, N'Rue Raymond Losserand                             ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (65, 11, N'Avenue de Suffren                                 ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (66, 309, N'Boulevard du désert                               ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (67, 3, N'Chemin du bourg neuf                              ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (68, 1, N'Village de gueutteville                           ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (69, 17, N'Rue de ronsouze                                   ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (70, 12, N'Louis bodelio                                     ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (71, 7, N'Chemin des prés de l étang                        ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (72, 11, N'Route D ermur                                     ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (73, 81, N'Rue Bentz                                         ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (74, 12, N'Rue Danton                                        ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (75, 22, N'Rue de Nantes                                     ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (76, 28, N'Rue René Fleuriel                                 ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (77, 115, N'Impasse de la tranquillité                        ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (78, 7, N'Hameau                                            ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (79, 156, N'Route des Moulins                                 ', 4)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (80, 18, N'Rue Rivoli                                        ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (81, 39, N'Boulevard de l université                         ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (82, 100, N'Rue Jean Gutenberg                                ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (83, 12, N'Rue Gabriel Péri                                  ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (84, 14, N'Rue Alain gerbault                                ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (85, 28, N'Allée de la grande aigrette                       ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (86, 13, N'Rue jules massenet                                ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (87, 100, N'Rue jean Gutenberg                                ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (88, 4, N'Rue Jean Daurat                                   ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (89, 55, N'Rue de paris                                      ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (90, 6, N'Résidence Le Clos des Chênes                      ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (91, 1, N'Les landes                                        ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (92, 11, N'Chemin des Plantades                              ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (93, 24, N'Lotissement de la Poitevinière                    ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (94, 5, N'Allée Jean de la Fontaine                         ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (95, 27, N'Route du roquier                                  ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (96, 84, N'Rue des acacias                                   ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (97, 32, N'rue de la cignoge                                 ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (98, 33, N'Rue de la forêt                                   ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (99, 65, N'Avenue de Paris                                   ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (100, 8, N'Ecluse de Hérant                                  ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (101, 2, N'Place du général De Gaulle                        ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (102, 28, N'Rue des potiers                                   ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (103, 12, N'Rue Sevin                                         ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (104, 47, N'Rue de Seine                                      ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (105, 45, N'Rue du bois                                       ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (106, 70, N'Rue Victor Hugo                                   ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (107, 68, N'Boulevard Emile Zola                              ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (108, 68, N'Impasse des paquerettes                           ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (109, 37, N'Rue des myosotis                                  ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (110, 52, N'Rue des coquelicots                               ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (111, 57, N'Rue des Chardonnrets                              ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (112, 69, N'Rue de la gare                                    ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (113, 89, N'Allée des albatros                                ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (114, 62, N'Rue Napoléon                                      ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (115, 45, N'Rue du vignoble                                   ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (116, 27, N'Place de la cathédrale                            ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (117, 8, N'Allée des chatons                                 ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (118, 11, N'Rue des kiwis                                     ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (119, 13, N'Allée du chêne vert                               ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (120, 61, N'Rue beauregard                                    ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (121, 15, N'Rue de la glacière                                ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (122, 37, N'Route de la sortie                                ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (123, 25, N'Rue du chenapan                                   ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (124, 27, N'Rue du patato                                     ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (125, 75, N'Rue du port                                       ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (126, 12, N'Rue Herge                                         ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (127, 3, N'Boulevard Amiral Gauchet                          ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (128, 73, N'rue du chat qui dort                              ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (129, 28, N'Rue de la métallurgie                             ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (130, 100, N'Rue de la forestière                              ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (131, 57, N'Rue Saint-Marc                                    ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (132, 55, N'Rue des belles feuilles                           ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (133, 2, N'Place Maréchal Foch                               ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (134, 23, N'Avenue de Bruxelles                               ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (135, 3, N'Rue des coquelicots                               ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (136, 24, N'Rue Françoise de cezelly                          ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (137, 13, N'Rue des franboises                                ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (138, 11, N'Residence Lebelvedere                             ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (139, 16, N'Rue du villiers                                   ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (140, 6, N'Rue du paradis                                    ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (141, 45, N'Rue du jeu                                        ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (142, 24, N'Rue des flibustiers                               ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (143, 56, N'Rue de Bourgogne                                  ', 4)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (144, 89, N'Rue de la baraque                                 ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (145, 14, N'Rue des hortensias                                ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (146, 28, N'Chemin de la boire                                ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (147, 5, N'Rue Balkany                                       ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (148, 19, N'Rue Richard Lenoir                                ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (149, 11, N'Rue de l Horizon                                  ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (150, 1, N'Rue du Géneral de Gaulle                          ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (151, 43, N'Rue de Stalingrad                                 ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (152, 412, N'Boulevard de angeldeath                           ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (153, 99, N'Rue de Noisy le Sec                               ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (154, 89, N'Boulevard du Vendée globe                         ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (155, 120, N'Route de keradenneck huella                       ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (156, 69, N'Boulevard du respect                              ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (157, 8, N'Rue les lupins                                    ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (158, 420, N'Rue des inconnus                                  ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (159, 27, N'Avenue de Gaulle                                  ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (160, 3, N'rue lechat                                        ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (161, 3, N'Rue Christian Pauc                                ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (162, 38, N'Rue de la méduse                                  ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (163, 31, N'Rue du phare de la teignouse                      ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (164, 31, N'Rue du phare de la teignouse                      ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (165, 34, N'Rue Alice Monti                                   ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (166, 56, N'Boulevard Le Fevre                                ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (167, 39, N'Petit avenue de Longchamp                         ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (168, 2, N'Impasse des Pieds Froids                          ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (169, 1, N'Boulevard François Hollande                       ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (170, 23, N'Rue de trevi                                      ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (171, 33, N'Rue du bouquet                                    ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (172, 8, N'Rue des camélias                                  ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (173, 10, N'Rue des pivoines                                  ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (174, 167, N'Rue de Drek                                       ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (175, 2, N'Boulevard Einstein                                ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (176, 1, N'Boulevard de la République                        ', 4)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (177, 24, N'Rue Carnot                                        ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (178, 32, N'Rue du 11 novembre                                ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (179, 79, N'Route des vignerons                               ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (180, 157, N'Rue de la vie                                     ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (181, 7, N'Rue Androuet                                      ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (182, 57, N'Avenue Foch                                       ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (183, 78, N'Avenue Loulou cacahuète                           ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (184, 189, N'Rue Raymond Losserand                             ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (185, 11, N'Avenue de Suffren                                 ', 4)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (186, 309, N'Boulevard du désert                               ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (187, 3, N'Chemin du bourg neuf                              ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (188, 1, N'Village de gueutteville                           ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (189, 17, N'Rue de ronsouze                                   ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (190, 12, N'Louis bodelio                                     ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (191, 7, N'Chemin des prés de l étang                        ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (192, 11, N'Route D ermur                                     ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (193, 81, N'Rue Bentz                                         ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (194, 12, N'Rue Danton                                        ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (195, 22, N'Rue de Nantes                                     ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (196, 28, N'Rue René Fleuriel                                 ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (197, 115, N'Impasse de la tranquillité                        ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (198, 7, N'Hameau                                            ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (199, 156, N'Route des Moulins                                 ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (200, 18, N'Rue Rivoli                                        ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (201, 39, N'Boulevard de l université                         ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (202, 100, N'Rue Jean Gutenberg                                ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (203, 12, N'Rue Gabriel Péri                                  ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (204, 14, N'Rue Alain gerbault                                ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (205, 28, N'Allée de la grande aigrette                       ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (206, 13, N'Rue jules massenet                                ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (207, 100, N'Rue jean Gutenberg                                ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (208, 4, N'Rue Jean Daurat                                   ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (209, 55, N'Rue de paris                                      ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (210, 6, N'Résidence Le Clos des Chênes                      ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (211, 1, N'Les landes                                        ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (212, 11, N'Chemin des Plantades                              ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (213, 24, N'Lotissement de la Poitevinière                    ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (214, 5, N'Allée Jean de la Fontaine                         ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (215, 27, N'Route du roquier                                  ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (216, 84, N'Rue des acacias                                   ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (217, 32, N'rue de la cignoge                                 ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (218, 33, N'Rue de la forêt                                   ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (219, 65, N'Avenue de Paris                                   ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (220, 8, N'Ecluse de Hérant                                  ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (221, 2, N'Place du général De Gaulle                        ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (222, 28, N'Rue des potiers                                   ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (223, 12, N'Rue Sevin                                         ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (224, 47, N'Rue de Seine                                      ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (225, 45, N'Rue du bois                                       ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (226, 70, N'Rue Victor Hugo                                   ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (227, 68, N'Boulevard Emile Zola                              ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (228, 68, N'Impasse des paquerettes                           ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (229, 37, N'Rue des myosotis                                  ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (230, 52, N'Rue des coquelicots                               ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (231, 57, N'Rue des Chardonnrets                              ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (232, 69, N'Rue de la gare                                    ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (233, 89, N'Allée des albatros                                ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (234, 62, N'Rue Napoléon                                      ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (235, 45, N'Rue du vignoble                                   ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (236, 27, N'Place de la cathédrale                            ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (237, 8, N'Allée des chatons                                 ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (238, 11, N'Rue des kiwis                                     ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (239, 13, N'Allée du chêne vert                               ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (240, 61, N'Rue beauregard                                    ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (241, 18, N'Rue de la paix                                    ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (242, 54, N'Boulevard Amiral Courbet                          ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (243, 59, N'Quai des Belges                                   ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (244, 94, N'Rue de Verdun                                     ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (245, 98, N'Boulevard de la Liberation                        ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (246, 5, N'Rue Charles Corbeau                               ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (247, 60, N'Quai Saint-Nicolas                                ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (248, 97, N'Faubourg Saint Honoré                             ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (249, 91, N'Place du Jeu de Paume                             ', 4)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (250, 47, N'Boulevard Amiral Courbet                          ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (251, 84, N'Boulevard de Prague                               ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (252, 86, N'Rue du Clair Bocage                               ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (253, 40, N'Rue Pierre Motte                                  ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (254, 44, N'Rue du Gue Jacquet                                ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (255, 5, N'Avenue de Bouvines                                ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (256, 13, N'Avenue Millies Lacroix                            ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (257, 71, N'Rue du Fossé des Tanneurs                         ', 4)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (258, 83, N'Rue du Château                                    ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (259, 5, N'Chemin Des Bateliers                              ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (260, 18, N'Rue Gouin de Beauchesne                           ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (261, 18, N'Avenue De Marlioz                                 ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (262, 44, N'Rue Ernest Renan                                  ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (263, 2, N'Avenue des Tuileries                              ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (264, 13, N'Rue Descartes                                     ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (265, 40, N'Rue Marie de Médicis                              ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (266, 94, N'Rue de Geneve                                     ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (267, 98, N'Rue Porte d Orange                                ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (268, 7, N'Rue de la Hulotais                                ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (269, 44, N'Route de Lyon                                     ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (270, 85, N'Quai des Belges                                   ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (271, 32, N'Cours Marechal-Joffre                             ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (272, 15, N'Rue Lenotre                                       ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (273, 98, N'Rue des Chaligny                                  ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (274, 6, N'Rue de l Epeule                                   ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (275, 42, N'Rue de la Mare aux Carats                         ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (276, 18, N'Rue Sébastopol                                    ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (277, 56, N'Boulevard Bryas                                   ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (278, 91, N'Rue de la Pompe                                   ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (279, 47, N'Rue Hubert de Lisle                               ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (280, 20, N'Place Maurice-Charretier                          ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (281, 17, N'Avenue Jules Ferry                                ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (282, 72, N'Rue Gouin de Beauchesne                           ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (283, 62, N'Rue du Faubourg National                          ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (284, 90, N'Rue du Président Roosevelt                        ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (285, 98, N'Rue Michel Ange                                   ', 3)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (286, 36, N'Boulevard de la Liberation                        ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (287, 27, N'Place Napoléon                                    ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (288, 67, N'Place de la Gare                                  ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (289, 37, N'Rue du Clair Bocage                               ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (290, 47, N'Cours Franklin Roosevelt                          ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (291, 21, N'Rue Goya                                          ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (292, 82, N'Rue Sébastopol                                    ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (293, 63, N'Avenue des Sartiaux                               ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (294, 19, N'Route de Vonèche                                  ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (295, 99, N'Rue Gouin de Beauchesne                           ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (296, 30, N'Rue Bonnet                                        ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (297, 99, N'Rue Sadi Carnot                                   ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (298, 54, N'Rue du Fossé des Tanneurs                         ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (299, 29, N'Rue Descartes                                     ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (300, 51, N'Rue de Penthièvre                                 ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (301, 81, N'Cours Marechal-Joffre                             ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (302, 29, N'Rue de l Aigle                                    ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (303, 38, N'Rue de la Boétie                                  ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (304, 73, N'Place Napoléon                                    ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (305, 36, N'Boulevard de Normandie                            ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (306, 88, N'Quai Saint-Nicolas                                ', 4)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (307, 77, N'Place Stanislas                                   ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (308, 49, N'Cours Marechal-Joffre                             ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (309, 65, N'Boulevard Amiral Courbet                          ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (310, 75, N'Avenue de l Amandier                              ', 4)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (311, 52, N'Rue des Lacs                                      ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (312, 18, N'Place Maurice-Charretier                          ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (313, 81, N'Rue Marguerite                                    ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (314, 90, N'Rue des Soeurs                                    ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (315, 81, N'Rue Porte d Orange                                ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (316, 58, N'Rue du Fossé des Tanneurs                         ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (317, 44, N'Rue du Limas                                      ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (318, 60, N'Rue Petite Fusterie                               ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (319, 1, N'Rue du Château                                    ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (320, 99, N'Place de la Madeleine                             ', 4)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (321, 88, N'Rue des Coudriers                                 ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (322, 24, N'Rue de l arbre                                    ', 8)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (323, 40, N'Rue Grande Fusterie                               ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (324, 19, N'Avenue Millies Lacroix                            ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (325, 90, N'Rue des Lacs                                      ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (326, 84, N'Avenue Jean Portalis                              ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (327, 96, N'Rue de Groussay                                   ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (328, 87, N'Rue Bois des Fosses                               ', 9)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (329, 25, N'Route de Neufchateau                              ', 2)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (330, 65, N'Rue du Moulin                                     ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (331, 73, N'Rue des Honnelles                                 ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (332, 65, N'Chaussée de Wavre                                 ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (333, 37, N'Rue de Fontigny                                   ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (334, 23, N'Rue de Piétrain                                   ', 6)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (335, 86, N'Rue Camille Joset                                 ', 5)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (336, 35, N'Rue de Fromelenne                                 ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (337, 11, N'Rue Fosse Piron                                   ', 11)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (338, 96, N'Rue du Pont Simon                                 ', 7)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (339, 27, N'Rue du Chapy                                      ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (340, 26, N'Rue des Laderies                                  ', 12)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (2012, 4, N'Rue de la rue                                     ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (2017, 26, N'Allée des tomates                                 ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (2018, 74, N'Rue des paquerettes                               ', 1)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (3005, 26, N'Rue de la baleine                                 ', 10)
GO
INSERT [dbo].[Adresse] ([IDAdresse], [Numero], [NomAdresse], [IDVille]) VALUES (3006, 26, N'Rue de la baleine                                 ', 10)
GO
SET IDENTITY_INSERT [dbo].[Adresse] OFF
GO
SET IDENTITY_INSERT [dbo].[Article] ON 
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (1, N'Résistance (10)     ', 986, 10, 200, 8)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (2, N'Condensateur (40)   ', 644, 6, 150, 4)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (3, N'Diode (30)          ', 702, 7, 160, 5)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (4, N'Transistor (4)      ', 811, 10, 250, 8)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (5, N'Microprocesseur     ', 331, 15, 70, 12)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (6, N'Capteur BME280      ', 103, 2, 120, 1)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (7, N'LED (20)            ', 1018, 3, 400, 2)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (8, N'Fusible             ', 358, 4, 200, 3)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (9, N'Capteur de pression ', 528, 1, 100, 1)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (10, N'Capteur optique     ', 575, 1, 100, 1)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (11, N'Interrupteur (10)   ', 823, 2, 150, 1)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (12, N'Potentiomètre       ', 956, 2, 210, 1)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (13, N'Plaquette (2)       ', 570, 3, 130, 2)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (14, N'Afficheur LCD       ', 126, 6, 200, 4)
GO
INSERT [dbo].[Article] ([Reference], [Nom], [QuantiteStock], [PrixProduit], [SeuilReapprovisionnement], [PrixAchat]) VALUES (15, N'Arduino UNO         ', 841, 15, 450, 12)
GO
SET IDENTITY_INSERT [dbo].[Article] OFF
GO
INSERT [dbo].[Beneficier] ([IDRemise], [RefCommande]) VALUES (1, 1)
GO
INSERT [dbo].[Beneficier] ([IDRemise], [RefCommande]) VALUES (1, 3)
GO
INSERT [dbo].[Beneficier] ([IDRemise], [RefCommande]) VALUES (2, 1)
GO
INSERT [dbo].[Beneficier] ([IDRemise], [RefCommande]) VALUES (3, 1)
GO
INSERT [dbo].[Beneficier] ([IDRemise], [RefCommande]) VALUES (3, 3)
GO
SET IDENTITY_INSERT [dbo].[Client] ON 
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (1, N'LAPORTE             ', N'Xavier              ', CAST(N'2000-01-25' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (2, N'LECLERCQ            ', N'Josselin            ', CAST(N'1973-07-16' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (3, N'PARENT              ', N'Agrippin            ', CAST(N'1992-07-01' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (4, N'LE BRUN             ', N'Elise               ', CAST(N'1972-09-16' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (5, N'THERY               ', N'Venceslas           ', CAST(N'1991-10-04' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (6, N'JOLIVET             ', N'Angeline            ', CAST(N'1962-07-23' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (7, N'LECLERE             ', N'Marcel              ', CAST(N'1950-02-20' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (8, N'COLLIN              ', N'Lorraine            ', CAST(N'1972-04-13' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (9, N'BONNEAU             ', N'Japhet              ', CAST(N'1973-12-14' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (10, N'BAUDOUIN            ', N'Acace               ', CAST(N'1959-07-15' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (11, N'ARNOUX              ', N'Fabrice             ', CAST(N'1972-01-25' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (12, N'DUPONT              ', N'Thierry             ', CAST(N'2001-04-29' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (13, N'GERMAIN             ', N'Aubin               ', CAST(N'1952-01-16' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (14, N'LEGROS              ', N'Aglaé               ', CAST(N'1956-08-23' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (15, N'DELARUE             ', N'Lambert             ', CAST(N'1971-05-20' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (16, N'BLANCHARD           ', N'Clémentine          ', CAST(N'1960-01-31' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (17, N'PINEL               ', N'Arcade              ', CAST(N'1950-11-03' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (18, N'SIMONNET            ', N'Aymardine           ', CAST(N'1968-06-10' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (19, N'GUIRAUD             ', N'Jocelyne            ', CAST(N'1979-06-03' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (20, N'COCHET              ', N'Chrystèle           ', CAST(N'1971-02-03' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (21, N'JAMES               ', N'Timothée            ', CAST(N'1953-04-20' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (22, N'LEBLOND             ', N'Suzon               ', CAST(N'1980-06-25' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (23, N'JUNG                ', N'Elisée              ', CAST(N'1951-05-11' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (24, N'VIGIER              ', N'Coralie             ', CAST(N'1960-08-15' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (25, N'BINET               ', N'Diane               ', CAST(N'1993-09-16' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (26, N'MAUGER              ', N'Félix               ', CAST(N'1963-07-22' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (27, N'LE BRETON           ', N'Priscille           ', CAST(N'1990-11-18' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (28, N'BAPTISTE            ', N'Pécine              ', CAST(N'1952-08-15' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (29, N'LATOUR              ', N'Angélique           ', CAST(N'1953-04-14' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (30, N'MARIN               ', N'Amarynthe           ', CAST(N'1960-06-05' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (31, N'REBOUL              ', N'Pollyanna           ', CAST(N'2000-01-29' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (32, N'DUMAS               ', N'Françoise           ', CAST(N'1989-09-30' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (33, N'ROLLAND             ', N'Apolline            ', CAST(N'2001-06-11' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (34, N'RIGAL               ', N'Dominique           ', CAST(N'1986-07-22' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (35, N'BOUQUET             ', N'Ameliane            ', CAST(N'1993-11-14' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (36, N'MENAGER             ', N'Sixte               ', CAST(N'1976-04-30' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (37, N'CONTE               ', N'Aquiline            ', CAST(N'1971-09-25' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (38, N'DEVILLE             ', N'Gaston              ', CAST(N'2002-07-16' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (39, N'CHARDON             ', N'Théophraste         ', CAST(N'1951-07-15' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (40, N'PETIT               ', N'Roland              ', CAST(N'1988-02-28' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (41, N'PICARD              ', N'Camillien           ', CAST(N'1950-06-06' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (42, N'TORRES              ', N'Claudien            ', CAST(N'1997-10-24' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (43, N'BONNEFOY            ', N'Achaire             ', CAST(N'1991-08-14' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (44, N'BERTON              ', N'Pacôme              ', CAST(N'1969-01-14' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (45, N'BOREL               ', N'Bénigne             ', CAST(N'1976-08-10' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (46, N'MARION              ', N'Cyprien             ', CAST(N'1961-11-28' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (47, N'AMIOT               ', N'Arnaud              ', CAST(N'1964-12-10' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (48, N'PIERRON             ', N'Anastase            ', CAST(N'1980-11-09' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (49, N'DENIS               ', N'Grégoire            ', CAST(N'1967-05-14' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (50, N'BAILLY              ', N'Olympe              ', CAST(N'1956-10-05' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (51, N'JACQUET             ', N'Arnaud              ', CAST(N'1956-06-05' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (52, N'CHARBONNIER         ', N'Aloys               ', CAST(N'1973-04-28' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (53, N'DELCOURT            ', N'Ulrich              ', CAST(N'1952-12-17' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (54, N'COUDERT             ', N'Martine             ', CAST(N'1960-11-08' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (55, N'SAUVAGE             ', N'Loup                ', CAST(N'1951-09-14' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (56, N'BARTHE              ', N'Brice               ', CAST(N'1978-09-05' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (57, N'DURAND              ', N'Léonne.             ', CAST(N'1994-06-25' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (58, N'AUBERT              ', N'Anne                ', CAST(N'1980-03-21' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (59, N'MARTINEAU           ', N'Guilhemine          ', CAST(N'1980-01-31' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (60, N'RIBEIRO             ', N'Eliane              ', CAST(N'2002-07-24' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (61, N'GILLET              ', N'Salomon             ', CAST(N'1983-06-14' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (62, N'CONSTANT            ', N'Abdonie             ', CAST(N'2000-07-30' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (63, N'BRIAND              ', N'Camille             ', CAST(N'1971-03-19' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (64, N'MONNET              ', N'Eusèbe              ', CAST(N'1950-05-23' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (65, N'REBOUL              ', N'Orlane              ', CAST(N'1990-01-13' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (66, N'MAGNIN              ', N'Amandine            ', CAST(N'1967-08-23' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (67, N'RAYMOND             ', N'Dorothée            ', CAST(N'1966-03-25' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (68, N'GODIN               ', N'Falba               ', CAST(N'1980-07-16' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (69, N'MARCHAL             ', N'Léonne.             ', CAST(N'1964-03-05' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (70, N'BUISSON             ', N'Arian               ', CAST(N'1978-08-12' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (71, N'THIBAULT            ', N'Adonis              ', CAST(N'1969-12-13' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (72, N'MAUGER              ', N'Athanase            ', CAST(N'1958-12-22' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (73, N'GONCALVES           ', N'Lilou               ', CAST(N'1975-12-24' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (74, N'JANVIER             ', N'Pascal              ', CAST(N'1982-04-28' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (75, N'HUET                ', N'René                ', CAST(N'1994-01-16' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (76, N'VIDAL               ', N'Théodore            ', CAST(N'1959-01-14' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (77, N'CHARTIER            ', N'Arian               ', CAST(N'1989-12-17' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (78, N'LE CORRE            ', N'William             ', CAST(N'2003-12-16' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (79, N'FOUCAULT            ', N'Loïc                ', CAST(N'1967-02-08' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (80, N'FERRARI             ', N'Ludivine            ', CAST(N'1990-06-17' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (81, N'BOUSQUET            ', N'Joachim             ', CAST(N'1961-02-09' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (82, N'CADET               ', N'Théophile           ', CAST(N'1950-02-07' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (83, N'DUPOUY              ', N'Alcime              ', CAST(N'1985-03-22' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (84, N'HAMELIN             ', N'Sylvain             ', CAST(N'1980-01-05' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (85, N'HUARD               ', N'Jocelyne            ', CAST(N'1982-08-21' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (86, N'BAUDOIN             ', N'Marina              ', CAST(N'1999-03-02' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (87, N'FAVIER              ', N'Alcyone             ', CAST(N'1953-08-26' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (88, N'SIMONIN             ', N'Arsènie             ', CAST(N'1984-11-08' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (89, N'BLANCHET            ', N'Méline              ', CAST(N'2004-07-10' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (90, N'CHERON              ', N'Yvette              ', CAST(N'1972-02-04' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (91, N'PAYEN               ', N'Pélagie             ', CAST(N'2000-10-14' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (92, N'BASTIEN             ', N'Martine             ', CAST(N'1990-04-04' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (93, N'LACOUR              ', N'Audebert            ', CAST(N'1965-03-11' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (94, N'BARRET              ', N'Bruno               ', CAST(N'1994-01-25' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (95, N'VASSEUR             ', N'Landry              ', CAST(N'1999-12-06' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (96, N'LACOSTE             ', N'Anastasie           ', CAST(N'1970-01-09' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (97, N'COSTE               ', N'Méline              ', CAST(N'1962-12-06' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (98, N'HILAIRE             ', N'Aymardine           ', CAST(N'1988-04-30' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (99, N'FAYOLLE             ', N'Adéodat             ', CAST(N'1974-08-03' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (100, N'ARNOUX              ', N'Pascal              ', CAST(N'1972-07-17' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (101, N'LEGROS              ', N'Claudien            ', CAST(N'1986-08-29' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (102, N'BOULANGER           ', N'Camille             ', CAST(N'1979-10-22' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (103, N'JANIN               ', N'Adraste             ', CAST(N'1973-04-05' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (104, N'LHOMME              ', N'Acace               ', CAST(N'2005-10-24' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (105, N'DROUET              ', N'Ségolène            ', CAST(N'1965-10-05' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (106, N'BERTHET             ', N'Armance             ', CAST(N'1982-06-07' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (107, N'TOUTAIN             ', N'Chantal             ', CAST(N'1999-01-21' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (108, N'COUSIN              ', N'Justine             ', CAST(N'1994-05-03' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (109, N'LANGLET             ', N'Edith               ', CAST(N'1988-04-08' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (110, N'THERY               ', N'Adalbaude           ', CAST(N'1957-02-07' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (111, N'POUGET              ', N'Antoinette          ', CAST(N'1967-08-16' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (112, N'PELLETIER           ', N'Enimie              ', CAST(N'1992-11-06' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (113, N'CHARTON             ', N'Axeline             ', CAST(N'1966-11-19' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (114, N'POISSON             ', N'Stéphan             ', CAST(N'1966-03-21' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (115, N'LEBRETON            ', N'Antigone            ', CAST(N'1962-10-27' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (116, N'MIQUEL              ', N'Bruno               ', CAST(N'1989-01-09' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (117, N'ROBINET             ', N'Camélien            ', CAST(N'1980-12-24' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (118, N'BONNEFOY            ', N'Gaël                ', CAST(N'1969-11-17' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (119, N'GROS                ', N'Césaire             ', CAST(N'1971-11-03' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (120, N'POUGET              ', N'Armandie            ', CAST(N'1955-10-29' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (1008, N'PIERRE              ', N'Jean                ', CAST(N'1990-04-03' AS Date))
GO
INSERT [dbo].[Client] ([NumeroClient], [Nom], [Prenom], [DateNaissance]) VALUES (2003, N'MICHEL              ', N'Jean                ', CAST(N'1985-10-15' AS Date))
GO
SET IDENTITY_INSERT [dbo].[Client] OFF
GO
SET IDENTITY_INSERT [dbo].[Commande] ON 
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (1, CAST(N'2011-12-27' AS Date), CAST(N'2012-01-01' AS Date), 1)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (2, CAST(N'2012-01-02' AS Date), CAST(N'2012-01-08' AS Date), 1)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (3, CAST(N'2018-03-05' AS Date), CAST(N'2018-03-14' AS Date), 2)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (4, CAST(N'2013-07-15' AS Date), CAST(N'2013-07-19' AS Date), 3)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (5, CAST(N'2021-08-27' AS Date), CAST(N'2021-09-07' AS Date), 3)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (6, CAST(N'2013-12-14' AS Date), CAST(N'2013-12-17' AS Date), 4)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (7, CAST(N'2016-08-01' AS Date), CAST(N'2016-08-11' AS Date), 5)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (8, CAST(N'2016-02-11' AS Date), CAST(N'2016-02-23' AS Date), 5)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (9, CAST(N'2019-10-10' AS Date), CAST(N'2019-10-23' AS Date), 6)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (10, CAST(N'2018-04-07' AS Date), CAST(N'2018-04-20' AS Date), 7)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (11, CAST(N'2016-10-09' AS Date), CAST(N'2016-10-13' AS Date), 8)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (12, CAST(N'2014-10-10' AS Date), CAST(N'2014-10-25' AS Date), 9)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (13, CAST(N'2020-11-02' AS Date), CAST(N'2020-11-14' AS Date), 9)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (14, CAST(N'2012-03-22' AS Date), CAST(N'2012-04-06' AS Date), 10)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (15, CAST(N'2021-07-14' AS Date), CAST(N'2021-07-19' AS Date), 10)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (16, CAST(N'2020-08-10' AS Date), CAST(N'2020-08-23' AS Date), 10)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (17, CAST(N'2016-07-23' AS Date), CAST(N'2016-07-28' AS Date), 10)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (18, CAST(N'2013-04-13' AS Date), CAST(N'2013-04-27' AS Date), 11)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (19, CAST(N'2015-02-08' AS Date), CAST(N'2015-02-15' AS Date), 12)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (20, CAST(N'2016-05-20' AS Date), CAST(N'2016-05-31' AS Date), 13)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (21, CAST(N'2021-04-05' AS Date), CAST(N'2021-04-09' AS Date), 14)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (22, CAST(N'2019-09-26' AS Date), CAST(N'2019-10-09' AS Date), 15)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (23, CAST(N'2021-01-03' AS Date), CAST(N'2021-01-06' AS Date), 15)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (24, CAST(N'2012-03-10' AS Date), CAST(N'2012-03-22' AS Date), 16)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (25, CAST(N'2016-07-31' AS Date), CAST(N'2016-08-13' AS Date), 17)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (26, CAST(N'2017-10-15' AS Date), CAST(N'2017-10-31' AS Date), 18)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (27, CAST(N'2021-07-23' AS Date), CAST(N'2021-08-02' AS Date), 18)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (28, CAST(N'2012-03-07' AS Date), CAST(N'2012-03-18' AS Date), 19)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (29, CAST(N'2018-12-05' AS Date), CAST(N'2018-12-14' AS Date), 20)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (30, CAST(N'2015-08-08' AS Date), CAST(N'2015-08-11' AS Date), 20)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (31, CAST(N'2015-11-01' AS Date), CAST(N'2015-11-14' AS Date), 21)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (32, CAST(N'2020-04-02' AS Date), CAST(N'2020-04-09' AS Date), 22)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (33, CAST(N'2012-03-06' AS Date), CAST(N'2012-03-22' AS Date), 23)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (34, CAST(N'2021-01-12' AS Date), CAST(N'2021-01-19' AS Date), 23)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (35, CAST(N'2017-06-29' AS Date), CAST(N'2017-07-11' AS Date), 23)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (36, CAST(N'2014-10-30' AS Date), CAST(N'2014-11-05' AS Date), 24)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (37, CAST(N'2015-05-07' AS Date), CAST(N'2015-05-17' AS Date), 25)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (38, CAST(N'2016-07-04' AS Date), CAST(N'2016-07-18' AS Date), 26)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (39, CAST(N'2011-11-29' AS Date), CAST(N'2011-12-09' AS Date), 26)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (40, CAST(N'2017-06-25' AS Date), CAST(N'2017-07-01' AS Date), 27)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (41, CAST(N'2016-01-30' AS Date), CAST(N'2016-02-13' AS Date), 28)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (42, CAST(N'2021-04-21' AS Date), CAST(N'2021-04-24' AS Date), 28)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (43, CAST(N'2017-07-01' AS Date), CAST(N'2017-07-16' AS Date), 28)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (44, CAST(N'2014-08-26' AS Date), CAST(N'2014-09-04' AS Date), 28)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (45, CAST(N'2021-09-03' AS Date), CAST(N'2021-09-07' AS Date), 29)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (46, CAST(N'2012-08-18' AS Date), CAST(N'2012-08-28' AS Date), 30)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (47, CAST(N'2014-10-30' AS Date), CAST(N'2014-11-14' AS Date), 31)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (48, CAST(N'2018-11-28' AS Date), CAST(N'2018-12-03' AS Date), 32)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (49, CAST(N'2011-12-21' AS Date), CAST(N'2011-12-27' AS Date), 33)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (50, CAST(N'2019-02-08' AS Date), CAST(N'2019-02-13' AS Date), 34)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (51, CAST(N'2014-04-01' AS Date), CAST(N'2014-04-11' AS Date), 35)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (52, CAST(N'2017-09-10' AS Date), CAST(N'2017-09-24' AS Date), 35)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (53, CAST(N'2015-03-03' AS Date), CAST(N'2015-03-16' AS Date), 36)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (54, CAST(N'2015-12-09' AS Date), CAST(N'2015-12-14' AS Date), 37)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (55, CAST(N'2017-10-23' AS Date), CAST(N'2017-11-08' AS Date), 38)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (56, CAST(N'2021-05-04' AS Date), CAST(N'2021-05-13' AS Date), 39)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (57, CAST(N'2016-07-30' AS Date), CAST(N'2016-08-15' AS Date), 39)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (58, CAST(N'2012-04-23' AS Date), CAST(N'2012-05-06' AS Date), 40)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (59, CAST(N'2013-02-25' AS Date), CAST(N'2013-03-09' AS Date), 41)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (60, CAST(N'2017-01-26' AS Date), CAST(N'2017-01-31' AS Date), 41)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (61, CAST(N'2017-05-10' AS Date), CAST(N'2017-05-24' AS Date), 42)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (62, CAST(N'2021-06-16' AS Date), CAST(N'2021-06-19' AS Date), 43)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (63, CAST(N'2021-05-07' AS Date), CAST(N'2021-05-10' AS Date), 44)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (64, CAST(N'2021-06-15' AS Date), CAST(N'2021-06-21' AS Date), 45)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (65, CAST(N'2017-08-21' AS Date), CAST(N'2017-09-02' AS Date), 45)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (66, CAST(N'2020-05-27' AS Date), CAST(N'2020-06-12' AS Date), 46)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (67, CAST(N'2019-06-12' AS Date), CAST(N'2019-06-26' AS Date), 47)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (68, CAST(N'2017-09-01' AS Date), CAST(N'2017-09-17' AS Date), 48)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (69, CAST(N'2015-05-06' AS Date), CAST(N'2015-05-12' AS Date), 48)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (70, CAST(N'2019-04-28' AS Date), CAST(N'2019-05-01' AS Date), 48)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (71, CAST(N'2018-06-06' AS Date), CAST(N'2018-06-09' AS Date), 49)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (72, CAST(N'2013-08-14' AS Date), CAST(N'2013-08-27' AS Date), 50)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (73, CAST(N'2017-05-30' AS Date), CAST(N'2017-06-12' AS Date), 51)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (74, CAST(N'2016-02-11' AS Date), CAST(N'2016-02-22' AS Date), 52)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (75, CAST(N'2012-06-15' AS Date), CAST(N'2012-06-22' AS Date), 52)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (76, CAST(N'2018-02-01' AS Date), CAST(N'2018-02-13' AS Date), 53)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (77, CAST(N'2019-05-01' AS Date), CAST(N'2019-05-15' AS Date), 54)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (78, CAST(N'2021-07-05' AS Date), CAST(N'2021-07-08' AS Date), 54)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (79, CAST(N'2012-04-27' AS Date), CAST(N'2012-04-30' AS Date), 54)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (80, CAST(N'2018-05-14' AS Date), CAST(N'2018-05-17' AS Date), 54)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (81, CAST(N'2012-02-20' AS Date), CAST(N'2012-03-03' AS Date), 55)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (82, CAST(N'2016-07-01' AS Date), CAST(N'2016-07-09' AS Date), 56)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (83, CAST(N'2012-07-13' AS Date), CAST(N'2012-07-23' AS Date), 57)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (84, CAST(N'2016-02-25' AS Date), CAST(N'2016-03-03' AS Date), 58)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (85, CAST(N'2020-02-05' AS Date), CAST(N'2020-02-09' AS Date), 59)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (86, CAST(N'2021-09-13' AS Date), CAST(N'2021-09-29' AS Date), 60)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (87, CAST(N'2020-10-04' AS Date), CAST(N'2020-10-14' AS Date), 60)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (88, CAST(N'2015-06-04' AS Date), CAST(N'2015-06-15' AS Date), 61)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (89, CAST(N'2017-04-07' AS Date), CAST(N'2017-04-23' AS Date), 62)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (90, CAST(N'2014-05-16' AS Date), CAST(N'2014-05-25' AS Date), 63)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (91, CAST(N'2013-09-15' AS Date), CAST(N'2013-09-25' AS Date), 63)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (92, CAST(N'2013-07-08' AS Date), CAST(N'2013-07-19' AS Date), 63)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (93, CAST(N'2012-04-30' AS Date), CAST(N'2012-05-09' AS Date), 64)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (94, CAST(N'2018-06-01' AS Date), CAST(N'2018-06-07' AS Date), 65)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (95, CAST(N'2018-08-06' AS Date), CAST(N'2018-08-10' AS Date), 66)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (96, CAST(N'2015-01-13' AS Date), CAST(N'2015-01-18' AS Date), 67)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (97, CAST(N'2016-07-14' AS Date), CAST(N'2016-07-28' AS Date), 68)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (98, CAST(N'2013-07-25' AS Date), CAST(N'2013-08-03' AS Date), 68)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (99, CAST(N'2020-02-20' AS Date), CAST(N'2020-03-04' AS Date), 69)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (100, CAST(N'2021-03-25' AS Date), CAST(N'2021-03-31' AS Date), 70)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (101, CAST(N'2015-12-16' AS Date), CAST(N'2015-12-31' AS Date), 71)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (102, CAST(N'2014-12-30' AS Date), CAST(N'2015-01-12' AS Date), 71)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (103, CAST(N'2016-08-15' AS Date), CAST(N'2016-08-28' AS Date), 71)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (104, CAST(N'2014-03-23' AS Date), CAST(N'2014-03-30' AS Date), 71)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (105, CAST(N'2020-05-21' AS Date), CAST(N'2020-05-27' AS Date), 72)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (106, CAST(N'2015-08-30' AS Date), CAST(N'2015-09-02' AS Date), 73)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (107, CAST(N'2011-12-17' AS Date), CAST(N'2011-12-21' AS Date), 74)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (108, CAST(N'2015-10-07' AS Date), CAST(N'2015-10-23' AS Date), 75)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (109, CAST(N'2020-10-22' AS Date), CAST(N'2020-11-06' AS Date), 76)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (110, CAST(N'2013-03-17' AS Date), CAST(N'2013-03-26' AS Date), 77)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (111, CAST(N'2016-08-29' AS Date), CAST(N'2016-09-06' AS Date), 77)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (112, CAST(N'2016-09-24' AS Date), CAST(N'2016-10-02' AS Date), 78)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (113, CAST(N'2013-02-12' AS Date), CAST(N'2013-02-26' AS Date), 79)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (114, CAST(N'2019-03-09' AS Date), CAST(N'2019-03-24' AS Date), 80)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (115, CAST(N'2019-01-31' AS Date), CAST(N'2019-02-14' AS Date), 80)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (116, CAST(N'2020-07-31' AS Date), CAST(N'2020-08-15' AS Date), 80)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (117, CAST(N'2013-08-10' AS Date), CAST(N'2013-08-19' AS Date), 80)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (118, CAST(N'2020-08-03' AS Date), CAST(N'2020-08-13' AS Date), 81)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (119, CAST(N'2012-01-31' AS Date), CAST(N'2012-02-05' AS Date), 82)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (120, CAST(N'2018-05-11' AS Date), CAST(N'2018-05-17' AS Date), 83)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (121, CAST(N'2014-04-27' AS Date), CAST(N'2014-05-09' AS Date), 84)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (122, CAST(N'2015-05-11' AS Date), CAST(N'2015-05-25' AS Date), 85)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (123, CAST(N'2020-05-26' AS Date), CAST(N'2020-06-01' AS Date), 86)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (124, CAST(N'2013-10-15' AS Date), CAST(N'2013-10-28' AS Date), 86)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (125, CAST(N'2013-11-23' AS Date), CAST(N'2013-11-27' AS Date), 87)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (126, CAST(N'2021-10-21' AS Date), CAST(N'2021-11-01' AS Date), 88)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (127, CAST(N'2019-01-05' AS Date), CAST(N'2019-01-10' AS Date), 89)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (128, CAST(N'2019-06-19' AS Date), CAST(N'2019-07-05' AS Date), 90)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (129, CAST(N'2019-10-01' AS Date), CAST(N'2019-10-16' AS Date), 90)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (130, CAST(N'2021-10-14' AS Date), CAST(N'2021-10-17' AS Date), 90)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (131, CAST(N'2019-02-05' AS Date), CAST(N'2019-02-14' AS Date), 90)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (132, CAST(N'2020-06-25' AS Date), CAST(N'2020-07-01' AS Date), 90)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (133, CAST(N'2021-02-08' AS Date), CAST(N'2021-02-20' AS Date), 91)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (134, CAST(N'2014-04-26' AS Date), CAST(N'2014-05-07' AS Date), 92)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (135, CAST(N'2018-09-13' AS Date), CAST(N'2018-09-22' AS Date), 93)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (136, CAST(N'2019-05-29' AS Date), CAST(N'2019-06-08' AS Date), 94)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (137, CAST(N'2017-09-24' AS Date), CAST(N'2017-09-27' AS Date), 95)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (138, CAST(N'2016-09-07' AS Date), CAST(N'2016-09-23' AS Date), 96)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (139, CAST(N'2013-07-06' AS Date), CAST(N'2013-07-16' AS Date), 97)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (140, CAST(N'2018-11-28' AS Date), CAST(N'2018-12-03' AS Date), 98)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (141, CAST(N'2012-01-30' AS Date), CAST(N'2012-02-11' AS Date), 99)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (142, CAST(N'2020-01-08' AS Date), CAST(N'2020-01-21' AS Date), 99)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (143, CAST(N'2019-12-05' AS Date), CAST(N'2019-12-14' AS Date), 99)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (144, CAST(N'2020-02-16' AS Date), CAST(N'2020-03-01' AS Date), 100)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (145, CAST(N'2016-01-02' AS Date), CAST(N'2016-01-05' AS Date), 101)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (146, CAST(N'2019-03-26' AS Date), CAST(N'2019-04-03' AS Date), 102)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (147, CAST(N'2012-01-23' AS Date), CAST(N'2012-02-08' AS Date), 103)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (148, CAST(N'2015-01-26' AS Date), CAST(N'2015-02-06' AS Date), 103)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (149, CAST(N'2017-09-17' AS Date), CAST(N'2017-09-20' AS Date), 104)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (150, CAST(N'2021-10-09' AS Date), CAST(N'2021-10-13' AS Date), 105)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (151, CAST(N'2020-03-09' AS Date), CAST(N'2020-03-22' AS Date), 106)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (152, CAST(N'2013-11-05' AS Date), CAST(N'2013-11-14' AS Date), 107)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (153, CAST(N'2017-07-15' AS Date), CAST(N'2017-07-27' AS Date), 108)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (154, CAST(N'2015-02-08' AS Date), CAST(N'2015-02-22' AS Date), 109)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (155, CAST(N'2014-11-01' AS Date), CAST(N'2014-11-13' AS Date), 110)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (156, CAST(N'2017-10-30' AS Date), CAST(N'2017-11-12' AS Date), 110)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (157, CAST(N'2021-05-16' AS Date), CAST(N'2021-05-24' AS Date), 110)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (158, CAST(N'2015-11-06' AS Date), CAST(N'2015-11-14' AS Date), 110)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (159, CAST(N'2020-12-19' AS Date), CAST(N'2020-12-24' AS Date), 111)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (160, CAST(N'2014-05-27' AS Date), CAST(N'2014-06-08' AS Date), 112)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (161, CAST(N'2012-08-27' AS Date), CAST(N'2012-09-11' AS Date), 113)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (162, CAST(N'2016-01-13' AS Date), CAST(N'2016-01-22' AS Date), 114)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (163, CAST(N'2015-01-17' AS Date), CAST(N'2015-01-24' AS Date), 115)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (164, CAST(N'2012-08-17' AS Date), CAST(N'2012-08-29' AS Date), 116)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (165, CAST(N'2018-05-27' AS Date), CAST(N'2018-06-11' AS Date), 117)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (166, CAST(N'2015-12-05' AS Date), CAST(N'2015-12-15' AS Date), 118)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (167, CAST(N'2016-06-18' AS Date), CAST(N'2016-06-28' AS Date), 118)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (168, CAST(N'2012-04-28' AS Date), CAST(N'2012-05-09' AS Date), 119)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (169, CAST(N'2015-11-26' AS Date), CAST(N'2015-11-30' AS Date), 120)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (170, CAST(N'2019-02-05' AS Date), CAST(N'2019-02-16' AS Date), 120)
GO
INSERT [dbo].[Commande] ([RefCommande], [DateLivraison], [DateEmission], [NumeroClient]) VALUES (172, CAST(N'2021-12-20' AS Date), CAST(N'2021-12-02' AS Date), 1)
GO
SET IDENTITY_INSERT [dbo].[Commande] OFF
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 9, 5, 10, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 28, 4, 10, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 30, 3, 10, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 42, 3, 10, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 45, 5, 10, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 49, 4, 10, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 64, 1, 10, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 69, 4, 10, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 92, 1, 10, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 101, 7, 10, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 102, 1, 10, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 106, 4, 10, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 107, 3, 10, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 112, 4, 10, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 119, 5, 10, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (1, 129, 4, 10, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (2, 7, 3, 6, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (2, 18, 3, 6, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (2, 23, 5, 6, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (2, 34, 3, 6, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (2, 47, 6, 6, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (2, 51, 6, 6, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (2, 57, 3, 6, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (2, 71, 5, 6, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (2, 98, 7, 6, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (2, 110, 3, 6, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (2, 138, 1, 6, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 1, 3, 7, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 13, 4, 7, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 26, 5, 7, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 57, 3, 7, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 66, 5, 7, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 71, 3, 7, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 80, 3, 7, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 87, 2, 7, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 96, 2, 7, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 99, 3, 7, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 124, 3, 7, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 160, 5, 7, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 163, 1, 7, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (3, 167, 7, 7, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 15, 2, 10, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 16, 5, 10, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 21, 2, 10, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 29, 1, 10, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 37, 2, 10, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 47, 4, 10, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 61, 4, 10, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 62, 3, 10, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 65, 5, 10, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 77, 7, 10, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 84, 4, 10, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 95, 3, 10, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 132, 6, 10, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 143, 1, 10, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (4, 154, 6, 10, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (5, 26, 5, 15, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (5, 52, 4, 15, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (5, 60, 4, 15, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (5, 67, 5, 15, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (5, 68, 2, 15, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (5, 74, 6, 15, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (5, 98, 4, 15, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (5, 157, 4, 15, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 2, 2, 2, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 20, 2, 2, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 31, 4, 2, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 69, 7, 2, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 83, 2, 2, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 87, 6, 2, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 91, 4, 2, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 108, 5, 2, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 111, 6, 2, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 150, 6, 2, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 164, 7, 2, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (6, 166, 3, 2, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 1, 7, 3, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 6, 2, 3, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 12, 5, 3, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 13, 3, 3, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 21, 7, 3, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 34, 4, 3, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 36, 4, 3, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 39, 1, 3, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 50, 7, 3, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 53, 4, 3, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 54, 7, 3, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 74, 3, 3, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 83, 2, 3, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 86, 4, 3, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 88, 7, 3, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 90, 4, 3, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 92, 2, 3, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 93, 2, 3, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 95, 5, 3, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 103, 7, 3, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 106, 7, 3, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 115, 5, 3, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 120, 7, 3, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 130, 4, 3, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 135, 5, 3, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (7, 170, 5, 3, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 4, 1, 4, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 8, 2, 4, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 10, 6, 4, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 21, 3, 4, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 48, 1, 4, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 56, 4, 4, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 70, 3, 4, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 105, 5, 4, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 110, 6, 4, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 113, 6, 4, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 118, 2, 4, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 126, 1, 4, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 137, 4, 4, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 140, 3, 4, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 152, 7, 4, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 155, 3, 4, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 156, 1, 4, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (8, 158, 4, 4, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 12, 5, 1, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 17, 1, 1, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 19, 1, 1, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 24, 7, 1, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 38, 1, 1, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 39, 1, 1, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 55, 7, 1, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 61, 2, 1, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 68, 5, 1, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 72, 3, 1, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 73, 2, 1, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 77, 7, 1, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 88, 5, 1, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 94, 6, 1, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 101, 7, 1, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 106, 2, 1, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 109, 2, 1, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 116, 2, 1, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 123, 3, 1, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 139, 6, 1, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 141, 1, 1, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (9, 147, 6, 1, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 1, 4, 1, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 3, 2, 1, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 32, 3, 1, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 36, 5, 1, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 38, 4, 1, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 39, 6, 1, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 46, 1, 1, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 49, 4, 1, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 81, 2, 1, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 117, 1, 1, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 131, 2, 1, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 133, 6, 1, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 149, 5, 1, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (10, 161, 7, 1, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 6, 7, 2, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 17, 4, 2, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 23, 4, 2, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 30, 5, 2, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 71, 5, 2, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 76, 3, 2, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 81, 3, 2, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 83, 6, 2, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 85, 1, 2, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 100, 4, 2, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 122, 2, 2, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 127, 7, 2, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 128, 7, 2, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 142, 4, 2, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 144, 1, 2, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 146, 2, 2, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 165, 4, 2, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (11, 168, 3, 2, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 2, 1, 2, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 3, 2, 2, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 12, 7, 2, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 21, 4, 2, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 36, 4, 2, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 42, 6, 2, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 50, 6, 2, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 97, 5, 2, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 112, 2, 2, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 114, 1, 2, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 145, 7, 2, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (12, 159, 3, 2, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 5, 2, 3, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 6, 7, 3, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 11, 6, 3, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 12, 4, 3, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 14, 7, 3, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 20, 4, 3, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 21, 3, 3, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 22, 4, 3, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 30, 4, 3, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 33, 7, 3, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 35, 7, 3, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 41, 5, 3, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 42, 3, 3, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 44, 2, 3, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 52, 6, 3, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 59, 2, 3, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 75, 4, 3, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 82, 4, 3, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 89, 6, 3, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 90, 4, 3, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 134, 5, 3, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 136, 3, 3, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (13, 162, 7, 3, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 10, 6, 6, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 19, 2, 6, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 21, 1, 6, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 27, 7, 6, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 39, 7, 6, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 40, 1, 6, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 43, 7, 6, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 49, 5, 6, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 58, 4, 6, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 104, 6, 6, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 108, 1, 6, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 116, 5, 6, 1.2, N'Vert                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 118, 7, 6, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 148, 7, 6, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (14, 169, 4, 6, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 11, 3, 15, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 25, 1, 15, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 27, 5, 15, 1.2, N'Rouge               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 55, 7, 15, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 58, 7, 15, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 63, 1, 15, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 78, 5, 15, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 79, 5, 15, 1.2, N'Orange              ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 83, 1, 15, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 107, 1, 15, 1.2, N'Jaune               ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 112, 5, 15, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 114, 5, 15, 1.2, N'Gris                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 121, 1, 15, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 125, 2, 15, 1.2, N'Bleu                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 151, 1, 15, 1.2, N'Noir                ')
GO
INSERT [dbo].[Composer] ([Reference], [RefCommande], [NombreArticle], [PrixUHT], [PourcentageTVA], [Couleur]) VALUES (15, 153, 7, 15, 1.2, N'Gris                ')
GO
SET IDENTITY_INSERT [dbo].[Employe] ON 
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (1, N'CARREAU             ', N'Girart              ', CAST(N'2019-02-13' AS Date), 241, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (2, N'DENIS               ', N'Oscar               ', CAST(N'2007-03-08' AS Date), 242, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (3, N'COUTANT             ', N'Maximilien          ', CAST(N'1991-05-23' AS Date), 243, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (4, N'BOUDET              ', N'Adalbéron           ', CAST(N'1991-02-22' AS Date), 244, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (5, N'THEVENIN            ', N'Almire              ', CAST(N'2008-02-18' AS Date), 245, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (6, N'LEHMANN             ', N'Maud                ', CAST(N'2013-06-24' AS Date), 246, 83)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (7, N'LECLERC             ', N'Nadine              ', CAST(N'2010-08-11' AS Date), 247, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (8, N'LENOIR              ', N'Basile              ', CAST(N'2021-02-24' AS Date), 248, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (9, N'CAPRON              ', N'Pacôme              ', CAST(N'1992-07-16' AS Date), 249, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (10, N'DROUET              ', N'Savin               ', CAST(N'2002-02-02' AS Date), 250, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (11, N'ANTOINE             ', N'Huguette            ', CAST(N'1990-07-22' AS Date), 251, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (12, N'GUILLARD            ', N'Romuald             ', CAST(N'2020-08-20' AS Date), 252, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (13, N'ACHARD              ', N'Adjutor             ', CAST(N'1997-06-25' AS Date), 253, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (14, N'LANGLOIS            ', N'Gustavine           ', CAST(N'2001-07-08' AS Date), 254, 83)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (15, N'CHARDON             ', N'Suzanne             ', CAST(N'2018-12-13' AS Date), 255, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (16, N'CAMUS               ', N'Adalbéron           ', CAST(N'2002-11-27' AS Date), 256, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (17, N'PASCAL              ', N'Sylvain             ', CAST(N'1992-05-25' AS Date), 257, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (18, N'BOISSEAU            ', N'Ferdinand           ', CAST(N'2010-05-22' AS Date), 258, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (19, N'SERRE               ', N'Lorrain             ', CAST(N'2008-08-15' AS Date), 259, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (20, N'LEPINE              ', N'Gertrude            ', CAST(N'2007-08-08' AS Date), 260, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (21, N'JAMES               ', N'Camélien            ', CAST(N'2021-08-25' AS Date), 261, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (22, N'RIBEIRO             ', N'Gabrielle           ', CAST(N'2009-12-10' AS Date), 262, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (23, N'BELLEC              ', N'Suzie               ', CAST(N'2015-12-06' AS Date), 263, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (24, N'LABAT               ', N'Alcidie             ', CAST(N'2009-07-13' AS Date), 264, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (25, N'CHARPENTIER         ', N'Naël                ', CAST(N'2003-12-23' AS Date), 265, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (26, N'BOSC                ', N'Azel                ', CAST(N'2016-02-18' AS Date), 266, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (27, N'DIOT                ', N'Maëlys              ', CAST(N'1991-11-23' AS Date), 267, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (28, N'BERTHIER            ', N'Audran              ', CAST(N'1992-11-04' AS Date), 268, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (29, N'BESNARD             ', N'Laureene            ', CAST(N'2000-02-05' AS Date), 269, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (30, N'BOUVET              ', N'Diane               ', CAST(N'2009-04-20' AS Date), 270, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (31, N'GILLOT              ', N'Laurent             ', CAST(N'2016-06-23' AS Date), 271, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (32, N'MARQUES             ', N'Jeanine             ', CAST(N'2000-08-07' AS Date), 272, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (33, N'MICHAUX             ', N'Roméo               ', CAST(N'1994-10-09' AS Date), 273, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (34, N'MARIE               ', N'Althée              ', CAST(N'2019-08-04' AS Date), 274, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (35, N'LOPES               ', N'Antigone            ', CAST(N'1996-12-08' AS Date), 275, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (36, N'REBOUL              ', N'Julia               ', CAST(N'2000-02-06' AS Date), 276, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (37, N'BONIN               ', N'Camélien            ', CAST(N'2013-02-04' AS Date), 277, 83)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (38, N'GEORGES             ', N'Carloman            ', CAST(N'2001-05-03' AS Date), 278, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (39, N'RIBEIRO             ', N'Almire              ', CAST(N'1991-05-05' AS Date), 279, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (40, N'BONNOT              ', N'Mélisandre          ', CAST(N'1997-07-19' AS Date), 280, 83)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (41, N'BOUCHE              ', N'Falba               ', CAST(N'1998-04-06' AS Date), 281, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (42, N'RIVET               ', N'Manassès            ', CAST(N'2007-12-01' AS Date), 282, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (43, N'CORRE               ', N'Véronique           ', CAST(N'1997-06-28' AS Date), 283, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (44, N'HARDY               ', N'Thaïs               ', CAST(N'2005-03-07' AS Date), 284, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (45, N'MAILLARD            ', N'Josse               ', CAST(N'2017-05-21' AS Date), 285, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (46, N'MARTINEZ            ', N'Vital               ', CAST(N'2004-06-24' AS Date), 286, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (47, N'PARENT              ', N'Alain               ', CAST(N'1996-02-15' AS Date), 287, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (48, N'BABIN               ', N'Théodora            ', CAST(N'2013-12-19' AS Date), 288, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (49, N'BARBE               ', N'Raymonde            ', CAST(N'2010-06-05' AS Date), 289, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (50, N'MARTEL              ', N'Alcibiade           ', CAST(N'2000-02-16' AS Date), 290, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (51, N'CLAIN               ', N'Almine              ', CAST(N'2020-11-29' AS Date), 291, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (52, N'MARION              ', N'Ansbert             ', CAST(N'1992-10-16' AS Date), 292, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (53, N'VOISIN              ', N'Tonnin              ', CAST(N'2004-04-15' AS Date), 293, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (54, N'LE CORRE            ', N'Hardouin            ', CAST(N'2021-01-29' AS Date), 294, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (55, N'COSTA               ', N'Joséphine           ', CAST(N'2000-10-23' AS Date), 295, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (56, N'LELOUP              ', N'Fabien              ', CAST(N'1999-06-28' AS Date), 296, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (57, N'GUYOT               ', N'Danièle             ', CAST(N'2019-09-15' AS Date), 297, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (58, N'KIEFFER             ', N'François            ', CAST(N'2019-09-15' AS Date), 298, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (59, N'VIGNERON            ', N'Nicolette           ', CAST(N'2013-04-11' AS Date), 299, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (60, N'TISSERAND           ', N'Aveline             ', CAST(N'2020-08-28' AS Date), 300, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (61, N'MAGNE               ', N'Karen               ', CAST(N'2010-08-14' AS Date), 301, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (62, N'MAGNE               ', N'Loïc                ', CAST(N'2001-12-02' AS Date), 302, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (63, N'HUBERT              ', N'Guillemette         ', CAST(N'1997-05-08' AS Date), 303, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (64, N'GAUTHIER            ', N'Daniel              ', CAST(N'2012-10-02' AS Date), 304, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (65, N'REYNAUD             ', N'Clara               ', CAST(N'1994-06-09' AS Date), 305, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (66, N'BARTHELEMY          ', N'Alain               ', CAST(N'1990-02-22' AS Date), 306, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (67, N'BOUDET              ', N'Gaëlle              ', CAST(N'1993-04-06' AS Date), 307, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (68, N'LOMBARD             ', N'Hugo                ', CAST(N'2003-12-20' AS Date), 308, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (69, N'MARCHAND            ', N'Stéphan             ', CAST(N'2011-02-05' AS Date), 309, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (70, N'MORICE              ', N'Valentin            ', CAST(N'2019-08-28' AS Date), 310, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (71, N'MARCEL              ', N'Azalée              ', CAST(N'2013-09-12' AS Date), 311, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (72, N'MATHIEU             ', N'Alexandre           ', CAST(N'1997-04-03' AS Date), 312, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (73, N'BOSC                ', N'Eve                 ', CAST(N'2018-06-18' AS Date), 313, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (74, N'PARIS               ', N'Margaux             ', CAST(N'2013-01-30' AS Date), 314, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (75, N'CHOPIN              ', N'Almine              ', CAST(N'1994-05-31' AS Date), 315, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (76, N'BILLARD             ', N'Audrey              ', CAST(N'2017-03-29' AS Date), 316, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (77, N'GODIN               ', N'Ariane              ', CAST(N'2010-01-05' AS Date), 317, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (78, N'MIGNOT              ', N'Alice               ', CAST(N'2005-08-20' AS Date), 318, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (79, N'FONTAINE            ', N'Fernande            ', CAST(N'1995-09-16' AS Date), 319, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (80, N'CAPELLE             ', N'Coralie             ', CAST(N'2014-12-12' AS Date), 320, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (81, N'BILLARD             ', N'Philippine          ', CAST(N'2016-06-16' AS Date), 321, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (82, N'COUSIN              ', N'Thomas              ', CAST(N'2019-02-16' AS Date), 322, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (83, N'DELAHAYE            ', N'Adélice             ', CAST(N'1999-01-14' AS Date), 323, NULL)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (84, N'FERNANDEZ           ', N'Agnane              ', CAST(N'2005-04-11' AS Date), 324, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (85, N'GILLES              ', N'Philippine          ', CAST(N'2010-09-20' AS Date), 325, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (86, N'BERTHE              ', N'Olga                ', CAST(N'2015-03-23' AS Date), 326, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (87, N'CLAUDEL             ', N'Zélie               ', CAST(N'2008-11-16' AS Date), 327, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (88, N'AUBRY               ', N'Eliette             ', CAST(N'2002-06-15' AS Date), 328, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (89, N'PIOT                ', N'France              ', CAST(N'2009-01-30' AS Date), 329, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (90, N'TEYSSIER            ', N'Eliette             ', CAST(N'2015-06-04' AS Date), 330, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (91, N'FORESTIER           ', N'Yann                ', CAST(N'1997-10-27' AS Date), 331, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (92, N'GERARD              ', N'Urbain              ', CAST(N'2017-07-25' AS Date), 332, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (93, N'CHATEAU             ', N'Marguerite          ', CAST(N'2020-03-18' AS Date), 333, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (94, N'BAYLE               ', N'Auriane             ', CAST(N'2010-06-28' AS Date), 334, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (95, N'RUIZ                ', N'Albert              ', CAST(N'2014-09-30' AS Date), 335, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (96, N'LUCAS               ', N'Augustine           ', CAST(N'1994-08-13' AS Date), 336, 40)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (97, N'SALOMON             ', N'Alcidie             ', CAST(N'2013-07-24' AS Date), 337, 14)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (98, N'DUPRAT              ', N'Malhaury            ', CAST(N'2020-11-16' AS Date), 338, 6)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (99, N'MARCHAND            ', N'Adalbert            ', CAST(N'1992-02-11' AS Date), 339, 37)
GO
INSERT [dbo].[Employe] ([IDEmploye], [Nom], [Prenom], [DateEmbauche], [IDAdresse], [IDEmploye_EtreDiriger]) VALUES (100, N'JANIN               ', N'Héloïse             ', CAST(N'2011-05-24' AS Date), 340, 37)
GO
SET IDENTITY_INSERT [dbo].[Employe] OFF
GO
SET IDENTITY_INSERT [dbo].[ModePaiement] ON 
GO
INSERT [dbo].[ModePaiement] ([IDMoyenPaiement], [MoyenPaiement]) VALUES (1, N'Espece              ')
GO
INSERT [dbo].[ModePaiement] ([IDMoyenPaiement], [MoyenPaiement]) VALUES (2, N'Cheque              ')
GO
INSERT [dbo].[ModePaiement] ([IDMoyenPaiement], [MoyenPaiement]) VALUES (3, N'Carte bancaire      ')
GO
INSERT [dbo].[ModePaiement] ([IDMoyenPaiement], [MoyenPaiement]) VALUES (4, N'Paypal              ')
GO
INSERT [dbo].[ModePaiement] ([IDMoyenPaiement], [MoyenPaiement]) VALUES (5, N'Bitcoin             ')
GO
SET IDENTITY_INSERT [dbo].[ModePaiement] OFF
GO
SET IDENTITY_INSERT [dbo].[Paiement] ON 
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (1, CAST(N'2012-01-01' AS Date), 46, 1, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (2, CAST(N'2012-01-08' AS Date), 3, 2, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (3, CAST(N'2012-01-04' AS Date), 3, 2, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (4, CAST(N'2018-03-14' AS Date), 6, 3, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (5, CAST(N'2013-07-19' AS Date), 4, 4, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (6, CAST(N'2021-09-07' AS Date), 6, 5, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (7, CAST(N'2013-12-17' AS Date), 41, 6, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (8, CAST(N'2016-08-11' AS Date), 9, 7, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (9, CAST(N'2016-08-07' AS Date), 9, 7, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (10, CAST(N'2016-02-23' AS Date), 8, 8, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (11, CAST(N'2019-10-23' AS Date), 50, 9, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (12, CAST(N'2018-04-20' AS Date), 30, 10, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (13, CAST(N'2018-04-18' AS Date), 30, 10, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (14, CAST(N'2016-10-13' AS Date), 63, 11, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (15, CAST(N'2014-10-25' AS Date), 46, 12, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (16, CAST(N'2020-11-14' AS Date), 37, 13, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (17, CAST(N'2012-04-06' AS Date), 10, 14, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (18, CAST(N'2012-04-02' AS Date), 11, 14, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (19, CAST(N'2021-07-19' AS Date), 20, 15, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (20, CAST(N'2020-08-23' AS Date), 25, 16, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (21, CAST(N'2020-08-20' AS Date), 25, 16, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (22, CAST(N'2016-07-28' AS Date), 9, 17, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (23, CAST(N'2013-04-27' AS Date), 9, 18, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (24, CAST(N'2013-04-26' AS Date), 9, 18, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (25, CAST(N'2015-02-15' AS Date), 13, 19, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (26, CAST(N'2016-05-31' AS Date), 16, 20, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (27, CAST(N'2021-04-09' AS Date), 38, 21, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (28, CAST(N'2021-04-01' AS Date), 38, 21, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (29, CAST(N'2019-10-09' AS Date), 12, 22, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (30, CAST(N'2021-01-06' AS Date), 38, 23, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (31, CAST(N'2012-03-22' AS Date), 7, 24, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (32, CAST(N'2016-08-13' AS Date), 15, 25, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (33, CAST(N'2017-10-31' AS Date), 110, 26, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (34, CAST(N'2021-08-02' AS Date), 117, 27, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (35, CAST(N'2012-03-18' AS Date), 20, 28, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (36, CAST(N'2012-03-14' AS Date), 20, 28, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (37, CAST(N'2018-12-14' AS Date), 10, 29, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (38, CAST(N'2015-08-11' AS Date), 52, 30, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (39, CAST(N'2015-11-14' AS Date), 4, 31, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (40, CAST(N'2015-11-12' AS Date), 4, 31, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (41, CAST(N'2020-04-09' AS Date), 3, 32, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (42, CAST(N'2012-03-22' AS Date), 21, 33, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (43, CAST(N'2015-08-11' AS Date), 42, 30, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (44, CAST(N'2017-07-11' AS Date), 21, 35, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (45, CAST(N'2014-11-05' AS Date), 25, 36, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (46, CAST(N'2014-11-01' AS Date), 25, 36, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (47, CAST(N'2015-05-17' AS Date), 20, 37, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (48, CAST(N'2016-07-18' AS Date), 5, 38, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (49, CAST(N'2011-12-09' AS Date), 52, 39, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (50, CAST(N'2017-07-01' AS Date), 3, 40, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (51, CAST(N'2017-06-27' AS Date), 3, 40, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (52, CAST(N'2016-02-13' AS Date), 15, 41, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (53, CAST(N'2021-04-24' AS Date), 51, 42, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (54, CAST(N'2017-07-16' AS Date), 21, 43, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (55, CAST(N'2017-07-11' AS Date), 21, 43, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (56, CAST(N'2014-09-04' AS Date), 6, 44, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (57, CAST(N'2021-09-07' AS Date), 50, 45, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (58, CAST(N'2012-08-28' AS Date), 1, 46, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (59, CAST(N'2014-11-14' AS Date), 38, 47, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (60, CAST(N'2014-11-08' AS Date), 38, 47, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (61, CAST(N'2018-12-03' AS Date), 4, 48, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (62, CAST(N'2011-12-27' AS Date), 74, 49, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (63, CAST(N'2019-02-13' AS Date), 33, 50, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (64, CAST(N'2014-04-11' AS Date), 18, 51, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (65, CAST(N'2014-04-09' AS Date), 18, 51, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (66, CAST(N'2017-09-24' AS Date), 78, 52, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (67, CAST(N'2015-03-16' AS Date), 12, 53, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (68, CAST(N'2015-12-14' AS Date), 21, 54, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (69, CAST(N'2017-11-08' AS Date), 112, 55, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (70, CAST(N'2021-05-13' AS Date), 16, 56, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (71, CAST(N'2016-08-15' AS Date), 39, 57, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (72, CAST(N'2012-05-06' AS Date), 64, 58, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (73, CAST(N'2012-05-01' AS Date), 65, 58, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (74, CAST(N'2013-03-09' AS Date), 6, 59, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (75, CAST(N'2017-01-31' AS Date), 60, 60, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (76, CAST(N'2017-05-24' AS Date), 42, 61, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (77, CAST(N'2021-06-19' AS Date), 30, 62, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (78, CAST(N'2021-05-10' AS Date), 7, 63, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (79, CAST(N'2021-05-09' AS Date), 8, 63, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (80, CAST(N'2021-06-21' AS Date), 10, 64, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (81, CAST(N'2017-09-02' AS Date), 50, 65, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (82, CAST(N'2020-06-12' AS Date), 35, 66, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (83, CAST(N'2019-06-26' AS Date), 32, 67, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (84, CAST(N'2019-06-20' AS Date), 33, 67, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (85, CAST(N'2017-09-17' AS Date), 35, 68, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (86, CAST(N'2015-05-12' AS Date), 54, 69, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (87, CAST(N'2019-05-01' AS Date), 12, 70, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (88, CAST(N'2018-06-09' AS Date), 61, 71, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (89, CAST(N'2013-08-27' AS Date), 3, 72, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (90, CAST(N'2017-06-12' AS Date), 1, 73, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (91, CAST(N'2017-06-12' AS Date), 1, 73, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (92, CAST(N'2016-02-22' AS Date), 99, 74, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (93, CAST(N'2012-06-22' AS Date), 12, 75, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (94, CAST(N'2018-02-13' AS Date), 6, 76, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (95, CAST(N'2019-05-15' AS Date), 77, 77, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (96, CAST(N'2021-07-08' AS Date), 37, 78, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (97, CAST(N'2021-07-01' AS Date), 38, 78, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (98, CAST(N'2012-04-30' AS Date), 75, 79, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (99, CAST(N'2018-05-17' AS Date), 21, 80, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (100, CAST(N'2012-03-03' AS Date), 4, 81, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (101, CAST(N'2012-03-02' AS Date), 4, 81, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (102, CAST(N'2016-07-09' AS Date), 12, 82, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (103, CAST(N'2012-07-23' AS Date), 37, 83, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (104, CAST(N'2016-03-03' AS Date), 40, 84, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (105, CAST(N'2020-02-09' AS Date), 1, 85, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (106, CAST(N'2020-02-08' AS Date), 1, 85, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (107, CAST(N'2021-09-29' AS Date), 12, 86, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (108, CAST(N'2020-10-14' AS Date), 26, 87, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (109, CAST(N'2015-06-15' AS Date), 26, 88, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (110, CAST(N'2017-04-23' AS Date), 18, 89, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (111, CAST(N'2014-05-25' AS Date), 8, 90, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (112, CAST(N'2014-05-24' AS Date), 8, 90, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (113, CAST(N'2014-05-23' AS Date), 8, 90, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (114, CAST(N'2013-09-25' AS Date), 8, 91, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (115, CAST(N'2013-07-19' AS Date), 16, 92, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (116, CAST(N'2012-05-09' AS Date), 6, 93, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (117, CAST(N'2018-06-07' AS Date), 6, 94, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (118, CAST(N'2018-08-10' AS Date), 45, 95, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (119, CAST(N'2018-08-02' AS Date), 45, 95, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (120, CAST(N'2015-01-18' AS Date), 14, 96, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (121, CAST(N'2016-07-28' AS Date), 10, 97, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (122, CAST(N'2013-08-03' AS Date), 102, 98, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (123, CAST(N'2020-03-04' AS Date), 21, 99, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (124, CAST(N'2021-03-31' AS Date), 4, 100, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (125, CAST(N'2021-03-30' AS Date), 4, 100, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (126, CAST(N'2015-12-31' AS Date), 77, 101, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (127, CAST(N'2015-01-12' AS Date), 10, 102, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (128, CAST(N'2016-08-28' AS Date), 21, 103, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (129, CAST(N'2014-03-30' AS Date), 18, 104, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (130, CAST(N'2014-03-24' AS Date), 18, 104, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (131, CAST(N'2020-05-27' AS Date), 20, 105, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (132, CAST(N'2015-09-02' AS Date), 63, 106, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (133, CAST(N'2011-12-21' AS Date), 45, 107, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (134, CAST(N'2015-10-23' AS Date), 16, 108, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (135, CAST(N'2020-11-06' AS Date), 2, 109, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (136, CAST(N'2013-03-26' AS Date), 42, 110, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (137, CAST(N'2016-09-06' AS Date), 6, 111, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (138, CAST(N'2016-09-04' AS Date), 6, 111, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (139, CAST(N'2016-10-02' AS Date), 119, 112, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (140, CAST(N'2013-02-26' AS Date), 24, 113, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (141, CAST(N'2019-03-24' AS Date), 77, 114, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (142, CAST(N'2019-02-14' AS Date), 15, 115, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (143, CAST(N'2020-08-15' AS Date), 32, 116, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (144, CAST(N'2013-08-19' AS Date), 1, 117, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (145, CAST(N'2020-08-13' AS Date), 50, 118, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (146, CAST(N'2012-02-05' AS Date), 25, 119, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (147, CAST(N'2012-02-01' AS Date), 25, 119, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (148, CAST(N'2018-05-17' AS Date), 21, 120, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (149, CAST(N'2014-05-09' AS Date), 15, 121, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (150, CAST(N'2015-05-25' AS Date), 4, 122, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (151, CAST(N'2020-06-01' AS Date), 1, 123, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (152, CAST(N'2020-05-30' AS Date), 2, 123, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (153, CAST(N'2013-10-28' AS Date), 21, 124, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (154, CAST(N'2013-11-27' AS Date), 30, 125, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (155, CAST(N'2021-11-01' AS Date), 4, 126, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (156, CAST(N'2019-01-10' AS Date), 7, 127, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (157, CAST(N'2019-01-09' AS Date), 7, 127, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (158, CAST(N'2019-07-05' AS Date), 14, 128, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (159, CAST(N'2019-10-16' AS Date), 40, 129, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (160, CAST(N'2021-10-17' AS Date), 12, 130, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (161, CAST(N'2019-02-14' AS Date), 2, 131, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (162, CAST(N'2020-07-01' AS Date), 60, 132, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (163, CAST(N'2021-02-20' AS Date), 3, 133, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (164, CAST(N'2021-02-19' AS Date), 3, 133, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (165, CAST(N'2014-05-07' AS Date), 15, 134, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (166, CAST(N'2018-09-22' AS Date), 15, 135, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (167, CAST(N'2019-06-08' AS Date), 9, 136, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (168, CAST(N'2017-09-27' AS Date), 16, 137, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (169, CAST(N'2016-09-23' AS Date), 6, 138, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (170, CAST(N'2013-07-16' AS Date), 3, 139, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (171, CAST(N'2013-07-16' AS Date), 3, 139, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (172, CAST(N'2018-12-03' AS Date), 12, 140, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (173, CAST(N'2012-02-11' AS Date), 1, 141, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (174, CAST(N'2020-01-21' AS Date), 4, 142, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (175, CAST(N'2020-01-20' AS Date), 4, 142, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (176, CAST(N'2019-12-14' AS Date), 10, 143, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (177, CAST(N'2020-03-01' AS Date), 2, 144, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (178, CAST(N'2016-01-05' AS Date), 14, 145, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (179, CAST(N'2019-04-03' AS Date), 4, 146, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (180, CAST(N'2012-02-08' AS Date), 6, 147, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (181, CAST(N'2015-02-06' AS Date), 21, 148, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (182, CAST(N'2015-02-02' AS Date), 21, 148, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (183, CAST(N'2017-09-20' AS Date), 5, 149, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (184, CAST(N'2021-10-13' AS Date), 12, 150, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (185, CAST(N'2020-03-22' AS Date), 15, 151, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (186, CAST(N'2013-11-14' AS Date), 28, 152, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (187, CAST(N'2017-07-27' AS Date), 105, 153, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (188, CAST(N'2015-02-22' AS Date), 60, 154, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (189, CAST(N'2014-11-13' AS Date), 12, 155, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (190, CAST(N'2017-11-12' AS Date), 4, 156, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (191, CAST(N'2021-05-24' AS Date), 60, 157, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (192, CAST(N'2015-11-14' AS Date), 16, 158, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (193, CAST(N'2020-12-24' AS Date), 6, 159, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (194, CAST(N'2014-06-08' AS Date), 35, 160, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (195, CAST(N'2012-09-11' AS Date), 7, 161, 2)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (196, CAST(N'2016-01-22' AS Date), 21, 162, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (197, CAST(N'2015-01-24' AS Date), 7, 163, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (198, CAST(N'2012-08-29' AS Date), 14, 164, 3)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (199, CAST(N'2018-06-11' AS Date), 8, 165, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (200, CAST(N'2015-12-15' AS Date), 6, 166, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (201, CAST(N'2016-06-28' AS Date), 49, 167, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (202, CAST(N'2012-05-09' AS Date), 6, 168, 5)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (203, CAST(N'2015-11-30' AS Date), 12, 169, 1)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (204, CAST(N'2015-11-20' AS Date), 12, 169, 4)
GO
INSERT [dbo].[Paiement] ([IDPaiement], [DatePaiement], [MontantPaiement], [RefCommande], [IDMoyenPaiement]) VALUES (205, CAST(N'2019-02-16' AS Date), 15, 170, 5)
GO
SET IDENTITY_INSERT [dbo].[Paiement] OFF
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (1, 1, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (1, 121, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (2, 2, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (2, 122, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (3, 3, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (3, 123, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (4, 4, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (4, 124, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (5, 5, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (5, 125, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (6, 6, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (6, 126, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (7, 7, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (7, 127, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (8, 8, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (8, 128, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (9, 9, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (9, 129, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (10, 10, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (10, 130, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (11, 11, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (11, 131, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (12, 12, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (12, 132, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (13, 13, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (13, 133, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (14, 14, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (14, 134, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (15, 15, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (15, 135, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (16, 16, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (16, 136, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (17, 17, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (17, 137, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (18, 18, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (18, 138, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (19, 19, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (19, 139, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (20, 20, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (20, 140, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (21, 21, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (21, 141, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (22, 22, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (22, 142, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (23, 23, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (23, 143, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (24, 24, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (24, 144, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (25, 25, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (25, 145, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (26, 26, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (26, 146, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (27, 27, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (27, 147, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (28, 28, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (28, 148, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (29, 29, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (29, 149, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (30, 30, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (30, 150, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (31, 31, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (31, 151, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (32, 32, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (32, 152, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (33, 33, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (33, 153, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (34, 34, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (34, 154, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (35, 35, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (35, 155, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (36, 36, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (36, 156, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (37, 37, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (37, 157, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (38, 38, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (38, 158, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (39, 39, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (39, 159, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (40, 40, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (40, 160, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (41, 41, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (41, 161, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (42, 42, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (42, 162, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (43, 43, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (43, 163, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (44, 44, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (44, 164, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (45, 45, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (45, 165, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (46, 46, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (46, 166, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (47, 47, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (47, 167, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (48, 48, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (48, 168, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (49, 49, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (49, 169, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (50, 50, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (50, 170, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (51, 51, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (51, 171, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (52, 52, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (52, 172, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (53, 53, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (53, 173, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (54, 54, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (54, 174, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (55, 55, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (55, 175, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (56, 56, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (56, 176, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (57, 57, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (57, 177, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (58, 58, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (58, 178, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (59, 59, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (59, 179, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (60, 60, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (60, 180, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (61, 61, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (61, 181, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (62, 62, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (62, 182, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (63, 63, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (63, 183, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (64, 64, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (64, 184, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (65, 65, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (65, 185, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (66, 66, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (66, 186, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (67, 67, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (67, 187, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (68, 68, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (68, 188, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (69, 69, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (69, 189, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (70, 70, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (70, 190, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (71, 71, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (71, 191, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (72, 72, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (72, 192, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (73, 73, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (73, 193, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (74, 74, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (74, 194, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (75, 75, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (75, 195, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (76, 76, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (76, 196, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (77, 77, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (77, 197, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (78, 78, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (78, 198, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (79, 79, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (79, 199, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (80, 80, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (80, 200, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (81, 81, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (81, 201, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (82, 82, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (82, 202, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (83, 83, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (83, 203, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (84, 84, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (84, 204, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (85, 85, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (85, 205, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (86, 86, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (86, 206, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (87, 87, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (87, 207, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (88, 88, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (88, 208, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (89, 89, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (89, 209, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (90, 90, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (90, 210, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (91, 91, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (91, 211, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (92, 92, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (92, 212, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (93, 93, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (93, 213, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (94, 94, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (94, 214, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (95, 95, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (95, 215, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (96, 96, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (96, 216, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (97, 97, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (97, 217, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (98, 98, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (98, 218, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (99, 99, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (99, 219, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (100, 100, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (100, 220, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (101, 101, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (101, 221, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (102, 102, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (102, 222, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (103, 103, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (103, 223, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (104, 104, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (104, 224, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (105, 105, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (105, 225, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (106, 106, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (106, 226, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (107, 107, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (107, 227, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (108, 108, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (108, 228, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (109, 109, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (109, 229, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (110, 110, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (110, 230, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (111, 111, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (111, 231, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (112, 112, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (112, 232, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (113, 113, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (113, 233, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (114, 114, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (114, 234, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (115, 115, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (115, 235, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (116, 116, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (116, 236, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (117, 117, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (117, 237, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (118, 118, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (118, 238, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (119, 119, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (119, 239, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (120, 120, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (120, 240, N'Livraison           ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (1008, 2017, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (1008, 2018, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (2003, 3005, N'Facturation         ')
GO
INSERT [dbo].[Posseder] ([NumeroClient], [IDAdresse], [TypeAdresse]) VALUES (2003, 3006, N'Facturation         ')
GO
SET IDENTITY_INSERT [dbo].[Remise] ON 
GO
INSERT [dbo].[Remise] ([IDRemise], [PourcentageRemise]) VALUES (1, -0.099999999999999978)
GO
INSERT [dbo].[Remise] ([IDRemise], [PourcentageRemise]) VALUES (2, -0.5)
GO
INSERT [dbo].[Remise] ([IDRemise], [PourcentageRemise]) VALUES (3, -0.050000000000000044)
GO
SET IDENTITY_INSERT [dbo].[Remise] OFF
GO
SET IDENTITY_INSERT [dbo].[Taxe] ON 
GO
INSERT [dbo].[Taxe] ([IDTaxe], [NomTaxe], [PourcentageTaxe]) VALUES (1, N'TVA                 ', 0.19999999999999996)
GO
INSERT [dbo].[Taxe] ([IDTaxe], [NomTaxe], [PourcentageTaxe]) VALUES (2, N'Marge commerciale   ', 0.070000000000000062)
GO
INSERT [dbo].[Taxe] ([IDTaxe], [NomTaxe], [PourcentageTaxe]) VALUES (3, N'Démarque commerciale', -0.099999999999999978)
GO
SET IDENTITY_INSERT [dbo].[Taxe] OFF
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 1)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 2)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 3)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 4)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 5)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 6)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 7)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 8)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 9)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 10)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 11)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 12)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 13)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 14)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (1, 15)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 1)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 2)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 3)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 4)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 5)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 6)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 7)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 8)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 9)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 10)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 11)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 12)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 13)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 14)
GO
INSERT [dbo].[Taxer] ([IDTaxe], [Reference]) VALUES (2, 15)
GO
SET IDENTITY_INSERT [dbo].[Ville] ON 
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (1, N'Nantes              ')
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (2, N'Paris               ')
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (3, N'Lyon                ')
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (4, N'Rouen               ')
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (5, N'St-Nazaire          ')
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (6, N'Marseille           ')
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (7, N'Toulouse            ')
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (8, N'Fontainebleau       ')
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (9, N'Calais              ')
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (10, N'Berck-sur-mer       ')
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (11, N'Brest               ')
GO
INSERT [dbo].[Ville] ([IDVille], [NomVille]) VALUES (12, N'Angers              ')
GO
SET IDENTITY_INSERT [dbo].[Ville] OFF
GO
/****** Object:  Index [Employe_Adresse0_AK]    Script Date: 02/12/2021 10:15:55 ******/
ALTER TABLE [dbo].[Employe] ADD  CONSTRAINT [Employe_Adresse0_AK] UNIQUE NONCLUSTERED 
(
	[IDAdresse] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, SORT_IN_TEMPDB = OFF, IGNORE_DUP_KEY = OFF, ONLINE = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
GO
ALTER TABLE [dbo].[Adresse]  WITH CHECK ADD  CONSTRAINT [Adresse_Ville0_FK] FOREIGN KEY([IDVille])
REFERENCES [dbo].[Ville] ([IDVille])
GO
ALTER TABLE [dbo].[Adresse] CHECK CONSTRAINT [Adresse_Ville0_FK]
GO
ALTER TABLE [dbo].[Beneficier]  WITH CHECK ADD  CONSTRAINT [Beneficier_Commande1_FK] FOREIGN KEY([RefCommande])
REFERENCES [dbo].[Commande] ([RefCommande])
GO
ALTER TABLE [dbo].[Beneficier] CHECK CONSTRAINT [Beneficier_Commande1_FK]
GO
ALTER TABLE [dbo].[Beneficier]  WITH CHECK ADD  CONSTRAINT [Beneficier_Remise0_FK] FOREIGN KEY([IDRemise])
REFERENCES [dbo].[Remise] ([IDRemise])
GO
ALTER TABLE [dbo].[Beneficier] CHECK CONSTRAINT [Beneficier_Remise0_FK]
GO
ALTER TABLE [dbo].[Commande]  WITH CHECK ADD  CONSTRAINT [Commande_Client0_FK] FOREIGN KEY([NumeroClient])
REFERENCES [dbo].[Client] ([NumeroClient])
GO
ALTER TABLE [dbo].[Commande] CHECK CONSTRAINT [Commande_Client0_FK]
GO
ALTER TABLE [dbo].[Composer]  WITH CHECK ADD  CONSTRAINT [Composer_Article0_FK] FOREIGN KEY([Reference])
REFERENCES [dbo].[Article] ([Reference])
GO
ALTER TABLE [dbo].[Composer] CHECK CONSTRAINT [Composer_Article0_FK]
GO
ALTER TABLE [dbo].[Composer]  WITH CHECK ADD  CONSTRAINT [Composer_Commande1_FK] FOREIGN KEY([RefCommande])
REFERENCES [dbo].[Commande] ([RefCommande])
GO
ALTER TABLE [dbo].[Composer] CHECK CONSTRAINT [Composer_Commande1_FK]
GO
ALTER TABLE [dbo].[Employe]  WITH CHECK ADD  CONSTRAINT [Employe_Adresse0_FK] FOREIGN KEY([IDAdresse])
REFERENCES [dbo].[Adresse] ([IDAdresse])
GO
ALTER TABLE [dbo].[Employe] CHECK CONSTRAINT [Employe_Adresse0_FK]
GO
ALTER TABLE [dbo].[Employe]  WITH CHECK ADD  CONSTRAINT [Employe_Employe1_FK] FOREIGN KEY([IDEmploye_EtreDiriger])
REFERENCES [dbo].[Employe] ([IDEmploye])
GO
ALTER TABLE [dbo].[Employe] CHECK CONSTRAINT [Employe_Employe1_FK]
GO
ALTER TABLE [dbo].[Paiement]  WITH CHECK ADD  CONSTRAINT [Paiement_Commande0_FK] FOREIGN KEY([RefCommande])
REFERENCES [dbo].[Commande] ([RefCommande])
GO
ALTER TABLE [dbo].[Paiement] CHECK CONSTRAINT [Paiement_Commande0_FK]
GO
ALTER TABLE [dbo].[Paiement]  WITH CHECK ADD  CONSTRAINT [Paiement_ModePaiement1_FK] FOREIGN KEY([IDMoyenPaiement])
REFERENCES [dbo].[ModePaiement] ([IDMoyenPaiement])
GO
ALTER TABLE [dbo].[Paiement] CHECK CONSTRAINT [Paiement_ModePaiement1_FK]
GO
ALTER TABLE [dbo].[Posseder]  WITH CHECK ADD  CONSTRAINT [Posseder_Adresse1_FK] FOREIGN KEY([IDAdresse])
REFERENCES [dbo].[Adresse] ([IDAdresse])
GO
ALTER TABLE [dbo].[Posseder] CHECK CONSTRAINT [Posseder_Adresse1_FK]
GO
ALTER TABLE [dbo].[Posseder]  WITH CHECK ADD  CONSTRAINT [Posseder_Client0_FK] FOREIGN KEY([NumeroClient])
REFERENCES [dbo].[Client] ([NumeroClient])
GO
ALTER TABLE [dbo].[Posseder] CHECK CONSTRAINT [Posseder_Client0_FK]
GO
ALTER TABLE [dbo].[Taxer]  WITH CHECK ADD  CONSTRAINT [Taxer_Article1_FK] FOREIGN KEY([Reference])
REFERENCES [dbo].[Article] ([Reference])
GO
ALTER TABLE [dbo].[Taxer] CHECK CONSTRAINT [Taxer_Article1_FK]
GO
ALTER TABLE [dbo].[Taxer]  WITH CHECK ADD  CONSTRAINT [Taxer_Taxe0_FK] FOREIGN KEY([IDTaxe])
REFERENCES [dbo].[Taxe] ([IDTaxe])
GO
ALTER TABLE [dbo].[Taxer] CHECK CONSTRAINT [Taxer_Taxe0_FK]
GO
/****** Object:  StoredProcedure [dbo].[ajouterArticle]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
--select A.Reference, Nom, QuantiteStock, PrixProduit, SeuilReapprovisionnement, NomTaxe, PourcentageTaxe from Taxer Tr join Article as A on Tr.Reference = A.Reference join Taxe as Ta on Tr.IDTaxe = Ta.IDTaxe

--select * from Taxe


CREATE PROCEDURE [dbo].[ajouterArticle]
@Nom CHAR(20),
@QuantiteStock int,
@PrixProduit int,
@Seuil int
AS

insert into Article Values(@Nom, @QuantiteStock, @PrixProduit, @Seuil)

declare @IDArticle int = (select top 1 Reference from Article order by Reference desc) 

insert into Taxer Values(1, @IDArticle), 
(2, @IDArticle)

GO
/****** Object:  StoredProcedure [dbo].[ajouterClient]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE PROCEDURE [dbo].[ajouterClient]
@NomClient CHAR(20),
@PrenomClient CHAR(20), 
@DateNaissance DATE,

@NumeroFacturation int,
@NomAdresseFacturation CHAR(20), 
@villeFacturation CHAR(20), 

@NumeroLivraison int,
@NomAdresseLivraison CHAR(20), 
@villeLivraison CHAR(20)
AS

insert into Client Values(@NomClient, @PrenomClient, @DateNaissance)
declare @IDClient int = (select top 1 NumeroClient from Client order by NumeroClient desc)

insert into Adresse Values(@NumeroFacturation, @NomAdresseFacturation, (select IDVille from Ville where NomVille = @villeFacturation))
insert into Posseder Values(@IDClient, (select top 1 IDAdresse from Adresse order by IDAdresse desc), 'Facturation')

insert into Adresse Values(@NumeroLivraison, @NomAdresseLivraison,  (select IDVille from Ville where NomVille = @villeLivraison))
insert into Posseder Values(@IDClient, (select top 1 IDAdresse from Adresse order by IDAdresse desc), 'Facturation')

GO
/****** Object:  StoredProcedure [dbo].[ajouterCommande]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
--exec calculerPanierMoyen

--exec calculerCAParMois 5

--exec articleSousSeuil

--exec calculerMontantTotalClient 1

--exec articlePlusVendus

--exec articleMoinsVendus

--exec calculerValeurCommercialStock

--exec calculerValeurAchatStock

--exec calculerBenefice

--exec simulerValeurCommerciale 0.2, 0.07, -0.01, 0


CREATE PROCEDURE [dbo].[ajouterCommande]
@IDClient int,
@DateLivraison date
AS

insert into Commande values(@DateLivraison, GETDATE(), @IDClient)


GO
/****** Object:  StoredProcedure [dbo].[ajouterPersonnel]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE PROCEDURE [dbo].[ajouterPersonnel]
@Nom CHAR(20),
@Prenom CHAR(20), 
@DateEmbauche DATE,
@IDSuperieur int,

@Numero int,
@NomAdresse CHAR(20), 
@ville CHAR(20)
AS

insert into Adresse Values(@Numero, @NomAdresse, (select IDVille from Ville where NomVille = @ville))

declare @IDAdresse int = (select top 1 IDAdresse from Adresse order by IDAdresse desc) 

insert into Employe Values(@Nom, @Prenom, @DateEmbauche, @IDAdresse, @IDSuperieur)

GO
/****** Object:  StoredProcedure [dbo].[articleMoinsVendus]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

---------------------------------------------------------------------

create procedure [dbo].[articleMoinsVendus]
as
select top 10 Art.Nom, count(*) as [10 articles les moins vendus] 
from Commande as Com join Composer as Comp on Com.RefCommande = Comp.RefCommande
					join Article as Art on Comp.Reference = Art.Reference
group by Art.Nom
order by [10 articles les moins vendus] asc
GO
/****** Object:  StoredProcedure [dbo].[articlePlusVendus]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

---------------------------------------------------------------------

create procedure [dbo].[articlePlusVendus]
as
select top 10 Art.Nom, count(*) as [10 articles les plus vendus] 
from Commande as Com join Composer as Comp on Com.RefCommande = Comp.RefCommande
					join Article as Art on Comp.Reference = Art.Reference
group by Art.Nom
order by [10 articles les plus vendus] desc
GO
/****** Object:  StoredProcedure [dbo].[articleSousSeuil]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

---------------------------------------------------------------------

create procedure [dbo].[articleSousSeuil]
as
select Nom, QuantiteStock as Stock, SeuilReapprovisionnement as Seuil
from Article
where QuantiteStock<= SeuilReapprovisionnement
GO
/****** Object:  StoredProcedure [dbo].[calculerBenefice]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

---------------------------------------------------------------------

create procedure [dbo].[calculerBenefice]
as
select ((select sum((PrixProduit+PrixProduit*taxeGlobale)*QuantiteStock) as [Valeur commercial du stock]
		from Article join 
			(select Article.Reference, sum(PourcentageTaxe) as taxeGlobale
			from Article join Taxer on Article.Reference = Taxer.Reference
						join Taxe on Taxer.IDTaxe = Taxe.IDTaxe
			group by Article.Reference) as articleTaxe on articleTaxe.Reference = Article.Reference) - (select sum(PrixAchat*QuantiteStock) as [Valeur d achat du stock] from Article)) as Benefice
GO
/****** Object:  StoredProcedure [dbo].[calculerCAParMois]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

---------------------------------------------------------------------

create procedure [dbo].[calculerCAParMois]
@mois int
as
select MONTH(DatePaiement) as Mois, sum(MontantPaiement) as [Chiffre d affaire]
from Paiement
group by MONTH(DatePaiement)
having MONTH(DatePaiement) = @mois
GO
/****** Object:  StoredProcedure [dbo].[calculerMontantTotalClient]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

---------------------------------------------------------------------

create procedure [dbo].[calculerMontantTotalClient]
@IDClient int
as
select Nom, Prenom, Montant
from Client as C join
	(select NumeroClient, SUM(MontantPaiement) as Montant 
	from Commande as A join Paiement as C on A.RefCommande = C.RefCommande
	group by NumeroClient) as MontantClient on C.NumeroClient = MontantClient.NumeroClient
where C.NumeroClient = @IDClient
order by Montant desc
GO
/****** Object:  StoredProcedure [dbo].[calculerPanierMoyen]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
create procedure [dbo].[calculerPanierMoyen]
as
select AVG(coalesce(montantTotal+montantTotal*totalRemise, montantTotal,montantTotal*totalRemise)) as [Panier moyen]
from (select Commande.RefCommande, sum(PrixUHT*NombreArticle) as montantTotal, totalRemise
		from Commande
			join Composer on Commande.RefCommande = Composer.RefCommande
			join (select Commande.RefCommande, sum(PourcentageRemise) as totalRemise
					from Commande
						left join Beneficier on Commande.RefCommande = Beneficier.RefCommande
						left join Remise on Beneficier.IDRemise = Remise.IDRemise
					group by Commande.RefCommande) as TotRemiseCMD on TotRemiseCMD.RefCommande = Composer.RefCommande
		group by Commande.RefCommande, totalRemise) as CommandeRemise
GO
/****** Object:  StoredProcedure [dbo].[calculerValeurAchatStock]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

---------------------------------------------------------------------

create procedure [dbo].[calculerValeurAchatStock]
as
select sum(PrixAchat*QuantiteStock) as [Valeur d achat du stock] from Article
GO
/****** Object:  StoredProcedure [dbo].[calculerValeurCommercialStock]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

---------------------------------------------------------------------

create procedure [dbo].[calculerValeurCommercialStock]
as
select sum((PrixProduit+PrixProduit*taxeGlobale)*QuantiteStock) as [Valeur commercial du stock]
		from Article join 
			(select Article.Reference, sum(PourcentageTaxe) as taxeGlobale
			from Article join Taxer on Article.Reference = Taxer.Reference
						join Taxe on Taxer.IDTaxe = Taxe.IDTaxe
			group by Article.Reference) as articleTaxe on articleTaxe.Reference = Article.Reference
GO
/****** Object:  StoredProcedure [dbo].[calculValeurStock]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE PROCEDURE [dbo].[calculValeurStock]
AS
select sum(PrixProduit*QuantiteStock*taxeGlobale) as [Chiffre d affaire]
from Article join 
			(select Article.Reference, sum(PourcentageTaxe) as taxeGlobale
			from Article join Taxer on Article.Reference = Taxer.Reference
						join Taxe on Taxer.IDTaxe = Taxe.IDTaxe
			group by Article.Reference) as articleTaxe on articleTaxe.Reference = Article.Reference
GO
/****** Object:  StoredProcedure [dbo].[modifierClient]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE PROCEDURE [dbo].[modifierClient]
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
where IDAdresse = (select TOP 1 IDAdresse from Posseder where (NumeroClient = @NumeroClient) and (TypeAdresse = 'Facturation') )


update Adresse 
set Numero = @NumeroLivraison,
    NomAdresse = @NomAdresseLivraison,
	IDVille = (select IDVille from Ville where NomVille = @villeLivraison) 
where IDAdresse = (select TOP 1 IDAdresse from Posseder where (NumeroClient = @NumeroClient) and (TypeAdresse = 'Livraison') )


GO
/****** Object:  StoredProcedure [dbo].[modifierPersonnel]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE PROCEDURE [dbo].[modifierPersonnel]
@IDEmploye INT, 

@NomEmploye CHAR(20),
@PrenomEmploye CHAR(20), 
@DateEmbauche DATE,
@IDEmploye_EtreDiriger int,

@NumeroAdresse INT,
@NomAdresse CHAR(20), 
@villeAdresse CHAR(20)
AS
update Employe 
set Nom = @NomEmploye,		
	Prenom = @PrenomEmploye,
	DateEmbauche = @DateEmbauche,
	IDEmploye_EtreDiriger = @IDEmploye_EtreDiriger	
where IDEmploye = @IDEmploye

update Adresse 
set Numero = @NumeroAdresse, 
    NomAdresse = @NomAdresse,
	IDVille = (select IDVille from Ville where NomVille = @villeAdresse) 
where IDAdresse = (select top 1 IDAdresse from Employe where (IDEmploye = @IDEmploye))

GO
/****** Object:  StoredProcedure [dbo].[simulerValeurCommerciale]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

---------------------------------------------------------------------

CREATE PROCEDURE [dbo].[simulerValeurCommerciale]
@TVA float,
@MargeCommercial float,
@DemarqueCommercial float,
@remiseCommercial float
AS
select sum((PrixProduit+(PrixProduit*(@TVA+@MargeCommercial+@DemarqueCommercial+@remiseCommercial)))*QuantiteStock) as [Chiffre d affaire]
from Article
GO
/****** Object:  StoredProcedure [dbo].[supprimerArticle]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE PROCEDURE [dbo].[supprimerArticle]
@inputIDArticle int 
AS

delete from Taxer where Reference = @inputIDArticle

delete from Article where Reference = @inputIDArticle

GO
/****** Object:  StoredProcedure [dbo].[supprimerClient]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE PROCEDURE [dbo].[supprimerClient]
@inputIDClient int AS
DECLARE @IDValue table (IDAdresse int)

insert @IDValue		/*--Stockage des adresses--*/
select Adresse.IDAdresse FROM Posseder join Adresse on Posseder.IDAdresse = Adresse.IDAdresse WHERE Posseder.NumeroClient = @inputIDClient

SELECT * from @IDValue

delete from Posseder where NumeroClient = @inputIDClient	/*--Delete de Posseder--*/
delete from Adresse where IDAdresse in (select * from @IDValue)				/*--Delete Adresse--*/

update Commande set NumeroClient = NULL where NumeroClient = @inputIDClient		/*--Update de commande--*/

delete from Client where NumeroClient = @inputIDClient				/*--Delete Client--*/
GO
/****** Object:  StoredProcedure [dbo].[supprimerCommande]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE PROCEDURE [dbo].[supprimerCommande]
@inputIDCommande int AS

delete from Paiement where RefCommande = @inputIDCommande	
delete from Beneficier where RefCommande = @inputIDCommande	
delete from Composer where RefCommande = @inputIDCommande				

delete from Commande where RefCommande = @inputIDCommande		
GO
/****** Object:  StoredProcedure [dbo].[supprimerEmploye]    Script Date: 02/12/2021 10:15:55 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE PROCEDURE [dbo].[supprimerEmploye]
@inputIDEmploye int AS
DECLARE @IDAdresse int = (select Employe.IDAdresse from Employe where IDEmploye = @inputIDEmploye)

update Employe set IDEmploye_EtreDiriger = NULL where IDEmploye_EtreDiriger = @inputIDEmploye	/*--Update de commande--*/

delete from Employe where IDEmploye = @inputIDEmploye	/*--Delete de Employe--*/

delete from Adresse where Adresse.IDAdresse = @IDAdresse		/*--Delete Adresse--*/

GO

