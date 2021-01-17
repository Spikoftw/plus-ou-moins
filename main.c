#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv ) {
    int nombreMystere = 0,
        nombreEntrer = 0,
        coups = 0,
        rejouer = 1,
        difficulter = 0,
        MAX = 10000,
        MIN = 1,
        nbJoueurs = 1,
        coups2Joueurs = 0;

    printf("=============================\n");
    printf("Bienvenue dans plus ou moins. @ cree par Cyril Cantonnet\n");
    printf("=============================\n\n");
    printf("Le but du jeu est de trouver le nombre mystere en moins de coups possible. C'est parti!\n\n");

    do
    {
        printf("A quel mode voulez-vous jouer ?\n\n");
        printf("1. Mode 1 joueur\n");
        printf("2. Mode 2 joueurs\n\n");
        printf("Votre choix: ");
        scanf("%d", &nbJoueurs);
        printf("\n\n");
        switch (nbJoueurs)
        {
            case 1: // Choix du mode 1 joueur
            printf("Veuillez choisir votre mode de difficulte:\n\n");
            printf("1. Facile\n");
            printf("2. Moyen\n");
            printf("3. Difficile\n\n");
            printf("Votre choix: ");
            scanf("%d", &difficulter);
            printf("\n\n");

            switch (difficulter)
            {
                case 1: // Choix de la difficult� en Facile
                    printf("Vous avez choisi le mode Facile. Coups infini, nombre mystere jusqu'a 100.\n\n");
                    MAX = 100, MIN = 1;
                    srand(time(NULL));
                    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                    while (nombreEntrer != nombreMystere)
                    {
                        printf("Quel est le nombre ? ");
                        scanf("%d", &nombreEntrer);
                        coups++;
                        printf("\n");

                        if (nombreEntrer > nombreMystere)
                        {
                            printf("C'est moins!\n\n");
                        }
                        else if (nombreEntrer == nombreMystere)
                        {
                            printf("Bravo, vous avez trouver le nombre mystere\n");
                            printf("Il vous aura fallu %d coups\n\n", coups);
                        }
                        else
                        {
                            printf("C'est plus!\n\n");
                        }
                    }
                    printf("Voulez-vous refaire une autre partie ?\n");
                    printf("1. oui\n");
                    printf("2. non\n\n");
                    printf("Votre choix: ");
                    scanf("%d", &rejouer);
                    printf("\n\n");

                    if (rejouer == 1)
                    {
                        printf("C'est parti, essayer de nouveau de trouver le nombre en moins de coups possible.\n\n");
                    }
                    else
                    {
                        printf("Oh dommage, j'espere vous revoir bientot.\n");
                        printf("Vous pouvez fermer le programme.\n\n");
                        system("PAUSE");
                    }
                    break;

                case 2: // Choix de la difficult� en moyen
                    printf("Vous avez choisi le mode Moyen. Coups limite a 12, nombre mystere jusqu'a 1000\n\n");
                    MAX = 1000, MIN = 1;
                    srand(time(NULL));
                    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                    while (nombreEntrer != nombreMystere && coups < 13)
                    {
                        printf("Quel est le nombre ? ");
                        scanf("%d", &nombreEntrer);
                        coups++;
                        printf("\n");

                        if (coups >= 13)
                        {
                            printf("Vous avez utiliser les 12 coups, vous avez perdu!\n\n");

                        }
                        else if (nombreEntrer > nombreMystere)
                        {
                            printf("C'est moins!\n\n");
                        }
                        else if (nombreEntrer == nombreMystere)
                        {
                            printf("Bravo, vous avez trouver le nombre mystere\n");
                            printf("Il vous aura fallu %d coups\n\n", coups);
                        }
                        else
                        {
                            printf("C'est plus!\n\n");
                        }
                    }

                    if (coups >= 13 || nombreEntrer == nombreMystere)
                    {
                        coups = 0;
                        printf("Voulez-vous refaire une autre partie ?\n");
                        printf("1. oui\n");
                        printf("2. non\n\n");
                        printf("Votre choix: ");
                        scanf("%d", &rejouer);
                            printf("\n\n");
                        }

                        if (rejouer == 1)
                        {
                            printf("C'est parti, essayer de nouveau de trouver le nombre en moins de coups possible.\n\n");
                        }
                        else
                        {
                            printf("Oh dommage, j'espere vous revoir bientot.\n");
                            printf("Vous pouvez fermer le programme.\n\n");
                            system("PAUSE");
                        }
                        break;

                    case 3: // Choix de la difficult� en Difficile

                        printf("Vous avez choisi le mode Difficile. Coups limite a 20 et nombre mystere jusqu'a 10000\n\n");
                        MAX = 10000, MIN = 1;
                        srand(time(NULL));
                        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

                        while (nombreEntrer != nombreMystere && coups < 20)
                        {
                            printf("Quel est le nombre ? ");
                            scanf("%d", &nombreEntrer);
                            coups++;
                            printf("\n");

                            if (coups >= 20)
                            {
                                printf("Vous avez utiliser les 20 coups, vous avez perdu!\n\n");

                            }
                            else if (nombreEntrer > nombreMystere)
                            {
                                printf("C'est moins!\n\n");
                            }
                            else if (nombreEntrer == nombreMystere)
                            {
                                printf("Bravo, vous avez trouver le nombre mystere\n");
                                printf("Il vous aura fallu %d coups\n\n", coups);
                            }
                            else
                            {
                                printf("C'est plus!\n\n");
                            }
                        }

                        if (coups >= 20 || nombreEntrer == nombreMystere)
                        {
                            coups = 0;
                            printf("Voulez-vous refaire une autre partie ?\n");
                            printf("1. oui\n");
                            printf("2. non\n\n");
                            printf("Votre choix: ");
                            scanf("%d", &rejouer);
                            printf("\n\n");
                        }

                        if (rejouer == 1)
                        {
                            printf("C'est parti, essayer de nouveau de trouver le nombre en moins de coups possible.\n\n");
                        }
                        else
                        {
                            printf("Oh dommage, j'espere vous revoir bientot.\n");
                            printf("Vous pouvez fermer le programme.\n\n");
                            system("PAUSE");
                        }
                        break;

                    default:
                        printf("Vous n'avez rien choisi. Veuillez taper 1, 2 ou 3 pour selectionner la difficulte. Retour au menu principal\n\n");
                        rejouer = 1;
                }
                break;

            case 2: // Choix du mode 2 joueurs

                MAX = 10000, MIN = 1;
                printf("Vous avez choisi le mode 2 joueurs.\n\n");
                printf("Joueur 1, veuillez choisir le nombre mystere entre 1 et 10000: ");
                scanf("%d", &nombreMystere);
                printf("\n\n");
                printf("Veuillez maintenant choisir le nombre maximum de coups que le joueur 2 aura pour trouver votre nombre mystere: ");
                scanf("%d", &coups2Joueurs);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("Joueur 2, c'est a vous de jouer. Ne trichez pas en regardant plus haut le nombre choisi par le joueur 1\n\n");
                printf("Le joueur 1 vous a accorder %d coups.\n\n", coups2Joueurs);

                while (nombreEntrer != nombreMystere && coups < coups2Joueurs)
                {
                    printf("Quel est le nombre ? ");
                    scanf("%d", &nombreEntrer);
                    coups++;
                    printf("\n");
                    if (coups >= coups2Joueurs)
                    {
                        printf("Vous avez utiliser tout vos coups. C'est perdu!\n\n");
                    }
                    else if (nombreEntrer > nombreMystere)
                    {
                        printf("C'est moins!\n\n");
                    }
                    else if (nombreEntrer == nombreMystere)
                    {
                        printf("Bravo, vous avez trouver le nombre mystere\n");
                        printf("Il vous aura fallu %d coups\n\n", coups);
                    }
                    else
                    {
                        printf("C'est plus!\n\n");
                    }
                }

                if (coups >= coups2Joueurs || nombreEntrer == nombreMystere)
                {
                    printf("Voulez-vous refaire une autre partie ?\n");
                    printf("1. oui\n");
                    printf("2. non\n\n");
                    printf("Votre choix: ");
                    scanf("%d", &rejouer);
                    printf("\n\n");
                }

                if (rejouer == 1)
                {
                    printf("C'est parti, essayer de nouveau de trouver le nombre en moins de coups possible.\n\n");
                }
                else
                {
                    printf("Oh dommage, j'espere vous revoir bientot.\n");
                    printf("Vous pouvez fermer le programme.\n\n");
                    system("PAUSE");
                }
            break;
        }
    } while (rejouer);
    return 0;
}
