#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Directives Préprocesseur
//Par Général Erock


//TAF 1 : Déclaration de structure
typedef struct {
    char MATRICULE[10];
    char NOM[20];
    char PRENOM[20];
    int AGE;
    char FILIERE[10];
    int NIVEAU;
    int COTISATION;

} Etudiant;

Etudiant Etudiants[100];
/* Pour ne pas à avoir à remplir toutes la listes des étudiants directement,
    on stocke l'index du dernier éleve enregistrer dans une variable et on aura juste
    à ajouter un étudiant à l'index suivant donc  +1.
    on commence à -1 pour que lorsqu'on fera dernieretudiant++; on commence l'enregistrement à
    l'index 0*/
int dernieretudiant = -1;
int total = 0; /* un bug sans aucun sens m'a poussé à le déclaré ici plutot que dans le swicth
 TAF 6 , case 5 dans le switch*/

int main()
{
    // Pour que le programme ne s'arrete pas directement à la fin de la première exécution
    while(1) {
            printf("Bienvenu sur GENEROCK STUDIOS par General Erock : TP INF111 2021 2022 \n");
            //Proposition d'un menu à l'utilisateur
            // J'ai supprimé les accents sur les lettres pour éviter les erreurs d'affichages
            printf("1-Enregistrer un ou des etudiants \n");
            printf("2-Modifier les informations d'un candidats \n");
            printf("3-Retirer un etudiant de la liste \n");
            printf("4-Afficher les informations des etudiants \n");
            printf("5-Afficher le montant cotises par tous les etudiants \n");
            printf("6-Afficher les informations d'un etudiant \n");
            printf("4-Quitter l'application \n");
            // Récupération du choix de l'utilisateur
            int choix = 0;
            scanf("%d", &choix);

            // application du choix de l'utilisateur
            switch(choix)  {
        case 1: // TAF 2 : Enregistrement d'étudiants
                // on demande le nombre d'enregistrement souhaité et on le stocke
                printf("Entrez le nombre d'etudiant a enregistrer : ");
                int nb = 0;
                scanf("%d", &nb);
                printf("\n");

                // on enregistre, le nombre voulu d'étudiants
                for(int i = 0; i < nb; i++) {
                    printf("Entrez le matricule de l'etudiant  %d : ", (i + 1));
                    scanf("%s", &Etudiants[dernieretudiant + 1].MATRICULE);
                    printf("\n"); // pour une bonne présentation visuelle

                    printf("Entrez le nom de l'etudiant  %d : ", (i + 1));
                    scanf("%s", &Etudiants[dernieretudiant + 1].NOM);
                    printf("\n");


                    printf("Entrez le prenom de l'etudiant  %d : ", (i + 1));
                    scanf("%s", &Etudiants[dernieretudiant + 1].PRENOM);
                    printf("\n");


                    printf("Entrez l'age de l'etudiant  %d : ", (i + 1));
                    scanf("%d", &Etudiants[dernieretudiant + 1].AGE);
                    printf("\n");


                    printf("Entrez la filiere de l'etudiant  %d : ", (i + 1));
                    scanf("%s", &Etudiants[dernieretudiant + 1].FILIERE);
                    printf("\n");


                    printf("Entrez le niveau de l'etudiant  %d : ", (i + 1));
                    scanf("%d", &Etudiants[dernieretudiant + 1].NIVEAU);
                    printf("\n");


                    printf("Entrez le montant cotise par l'etudiant %d : ", (i + 1));
                    scanf("%d", &Etudiants[dernieretudiant + 1].COTISATION);
                    printf("\n");


                    // on modifie la position de référence du dernier étudiant
                    dernieretudiant++;
                }
                printf("\n");
                break;
            case 2: // TAF 3: Modifcation d'informations d'étudiant par matricule
                // Récupération du matricule de l'étudiant
                printf("Entrez le matricule de l'etudiant : ");
                char matricule[10];
                scanf("%s", &matricule);
                printf("\n");
                int trouver = 0; // variable pour savoir si l'étudiant à été trouvé

                //recherche de l'étudiant
                for(int i = 0; i <= dernieretudiant; i++) {


                        //donc si les matricules sont identiques on peut executer le code
                        if(strcmp(Etudiants[i].MATRICULE, matricule) == 0) {
                            trouver = 1; // pour spécifier que l'étudiant à été trouvé
                            // Pour éviter de modifier les données déjà présentes si ce n'est pas nécessaire
                            // on demande l'avis de l'utilisateur
                            int choix2 = 0;
                            printf("Modifiez le matricule (ANCIEN : %s) : \n 1-Oui \n 2-Non\n" , Etudiants[i].MATRICULE);
                            scanf("%d", &choix2);
                            // Si oui on modifie sinon on passe
                            if(choix2 == 1) {

                                printf("Entrez le nouveau matricule de l'etudiant : ");
                                scanf("%s", &Etudiants[i].MATRICULE);
                                printf("\n"); // pour une bonne présentation visuelle

                            }

                            choix2 = 0;
                            printf("Modifiez le nom  (ANCIEN : %s) :  \n 1-Oui \n 2-Non\n", Etudiants[i].NOM);
                            scanf("%d", &choix2);
                            if(choix2 == 1) {

                                printf("Entrez le nouveau nom de l'etudiant : ");
                                scanf("%s", &Etudiants[i].NOM);
                                printf("\n");
                            }


                            choix2 = 0;
                            printf("Modifiez le prenom  (ANCIEN : %s) :  \n 1-Oui \n 2-Non\n", Etudiants[i].PRENOM);
                            scanf("%d", &choix2);
                            if(choix2 == 1) {

                                printf("Entrez le nouveau prenom de l'etudiant : ");
                                scanf("%s", &Etudiants[i].PRENOM);
                                printf("\n");
                            }


                            choix2 = 0;
                            printf("Modifiez l'age  (ANCIEN : %d) :  \n 1-Oui \n 2-Non\n", Etudiants[i].AGE);
                            scanf("%d", &choix2);
                            if(choix2 == 1) {

                                printf("Entrez le nouvel age de l'etudiant : ");
                                scanf("%d", &Etudiants[i].AGE);
                                printf("\n");
                            }


                            choix2 = 0;
                            printf("Modifiez la filiere (ANCIENNE : %s) : \n 1-Oui \n 2-Non\n", Etudiants[i].FILIERE);
                            scanf("%d", &choix2);
                            if(choix2 == 1) {

                                printf("Entrez la nouvelle filiere de l'etudiant : ");
                                scanf("%s", &Etudiants[i].FILIERE);
                                printf("\n");
                            }



                            choix2 = 0;
                            printf("Modifiez le niveau  (ANCIEN : %d) : \n 1-Oui \n 2-Non\n", Etudiants[i].NIVEAU);
                            scanf("%d", &choix2);
                            if(choix2 == 1) {

                                printf("Entrez le nouveau niveau de l'etudiant : ");
                                scanf("%d", &Etudiants[i].NIVEAU);
                                printf("\n");
                            }


                            choix2 = 0;
                            printf("Modifiez la cotisation  (ANCIENNE : %d) : 1-Oui \n 2-Non\n", Etudiants[i].COTISATION);
                            scanf("%d", &choix2);
                            if(choix2 == 1) {

                                printf("Entrez la nouvelle cotisation de l'etudiant : ");
                                scanf("%d", &Etudiants[i].COTISATION);
                                printf("\n");
                            }

                            break; // une fois les informations modifier on arrete la boucle
                        }
                }

                // dans le cas ou l'étudiant n'a pas été retrouvé
                if(trouver == 0) {
                    printf("etudiant introuvable. reessayez.... \n");
                }
                printf("\n");
                break;
            case 3: //TAF 4: Suppréssion des informations d'un étudiant par matricule
                // Récupération du matricule de l'étudiant
                printf("Entrez le matricule de l'etudiant : ");
                char matriculeE[10]; // je change de nom car j'ai crée une variable avec déjà pour nom matricule
                scanf("%s", &matriculeE);
                printf("\n");
                int trouverE = 0;


                /*
                    la méthodologie que Erock applique est la suivante : pour supprimé un élément il me suffit de
                    déplacer tous les élements qui le suivent de -1 position
                    supposons ce tableau   [  "Erock", "Programme", "Avec", "Toi" ]
                    en gros si je supprime programme
                    [  "Erock", "Avec", "Toi" ]
                    "Avec" et "Toi" recule d'une position
                */

                for(int i = 0; i <= dernieretudiant; i++) {


                        //donc si les matricules sont identiques on peut executerle code
                        if(strcmp(Etudiants[i].MATRICULE, matriculeE) == 0) {
                        trouverE = 1; //on spécifie qu'on a trouvé l'étudiant
                        //on vide tous d'abord les valeurs
                        // pour ce qui ne le savent pas strcpy copy une chaine de caratère dans une autre
                        strcpy(&Etudiants[i].MATRICULE, "");
                        strcpy(&Etudiants[i].NOM, "");
                        strcpy(&Etudiants[i].PRENOM, "");
                        strcpy(&Etudiants[i].FILIERE, "");
                        Etudiants[i].AGE = 0;
                        Etudiants[i].NIVEAU = 0;
                        Etudiants[i].COTISATION = 0;

                        //ensuite comme il est possible qu'il y'ait d'autres étudiant enregistré juste après on
                        // les déplaces
                        for(int j = i; j <= dernieretudiant; j++) {
                                if((j + 1) > dernieretudiant) {
                                    strcpy(&Etudiants[j].MATRICULE, Etudiants[j + 1].MATRICULE);
                                    strcpy(&Etudiants[j].NOM, Etudiants[j + 1].NOM);
                                    strcpy(&Etudiants[j].PRENOM, Etudiants[j + 1].PRENOM);
                                    strcpy(&Etudiants[j].FILIERE, Etudiants[j + 1].FILIERE);
                                    Etudiants[j].AGE = Etudiants[j + 1].AGE;
                                    Etudiants[j].NIVEAU = Etudiants[j + 1].NIVEAU;
                                    Etudiants[j].COTISATION = Etudiants[j + 1].COTISATION;
                                }
                        }

                        dernieretudiant--; // on met à jour le nombre d'étudiant
                        break; //une fois l'étudiant retirer on arrete le boucle
                    }
                }

                // dans le cas ou l'étudiant n'a pas été retrouvé
                if(trouverE == 0) {
                    printf("etudiant introuvable. reessayez.... \n");
                }
                printf("\n");

                break;
            case 4: // TAF : Affichage de la liste Matricule , Nom et cotisation
                printf("MATRICULE |      NOMS          | COTISATION | \n");
                for(int i = 0; i <= dernieretudiant; i++) {
                    printf("%10s | %20s | %d |\n", Etudiants[i].MATRICULE, Etudiants[i].NOM, Etudiants[i].COTISATION);
                }
                printf("\n");
                break;
            case 5: // TAF 6: Afficher le total cotisé par tous les étudiant
                total = 0;
                for(int i = 0; i <= dernieretudiant; i++) {
                        total += Etudiants[i].COTISATION; // simple incrémentation
                }
                printf("La somme totale cotises par tous les etudiants est : %d \n", total);
                printf("\n");
                break;
            case 6: // TAF 7: Rechercher et afficher les données de l'étudiant par matricule
                // Récupération du matricule de l'étudiant
                printf("Entrez le matricule de l'etudiant : ");
                char matriculeEt[10];
                scanf("%s", &matriculeEt);
                printf("\n");
                int trouverEt = 0; // variable pour savoir si l'étudiant à été trouvé


                for(int i = 0; i <= dernieretudiant; i++) {


                        //donc si les matricules sont identiques on peut executerle code
                        if(strcmp(Etudiants[i].MATRICULE, matriculeEt) == 0) { {
                        trouverEt = 1;
                        printf("MATRICULE : %s \n", Etudiants[i].MATRICULE);
                        printf("NOM : %s \n", Etudiants[i].NOM);
                        printf("PRENOM : %s \n", Etudiants[i].PRENOM);
                        printf("AGE : %d \n", Etudiants[i].AGE);
                        printf("FILIERE : %s \n", Etudiants[i].FILIERE);
                        printf("NIVEAU : %d \n", Etudiants[i].NIVEAU);
                        printf("COTISATION : %d \n", Etudiants[i].COTISATION);
                        printf("\n");
                        break;// une fois l'etudiant trouvé on arrete de chercher donc on arrete
                        //la boucle
                    }
                }

                if(trouverEt == 0) {
                    printf("Etudiant introuvable. reessayez... \n");
                }
                printf("\n");

                break;
            case 7: // on arrete le programme
                printf("Fermeture du programme.... \n");
                return 0;
                break;
            default: // si l'utilisateur ne selectionne rien en rapport avec la liste
                printf("choix invalide \n ");
                break;

            }

    }
    }

    return 0; // Merci de me suivre Generock Studios - par General Erock
}
