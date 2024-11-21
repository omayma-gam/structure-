
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char rue[40];
    char ville[40];
    char codepostal[10]; 
} adresse;

typedef struct {
    char nom[40];
    int age;
    adresse ADRESSE;
} PERSONNE;

PERSONNE personne;

void creerpersonne() {
    printf("Entrez le nom: ");
    scanf("%s", personne.nom);
    printf("Entrez age: ");
    scanf("%d", &personne.age);
    printf("Entez rue: ");
    scanf("%s", personne.ADRESSE.rue);
    printf("Entrez la ville: ");
    scanf("%s", personne.ADRESSE.ville);
    printf("Entrez le code-postal: ");
    scanf("%s", personne.ADRESSE.codepostal);
}

void afficherpersonne() {
    printf("Nom: %s\n", personne.nom);
    printf("Âge: %d\n", personne.age);
    printf("Adresse: %s, %s, %s\n", personne.ADRESSE.rue, personne.ADRESSE.ville, personne.ADRESSE.codepostal);
}

int main() {
    int choix;
    do {
        printf("\nMenu:\n");
        printf("1. Créer une personne\n");
        printf("2. Afficher une personne\n");
        printf("3. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: 
                creerpersonne();
                break;
            case 2:
                afficherpersonne();
                break;
            case 3:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choix != 3);
    return 0;
}
