#include <stdio.h>

int main() {
    // 5 étudiant.e.s
    char noms[5][50] = {
        "Martin",
        "Dupont",
        "Sanchez",
        "Nguyen",
        "Durand"
    };

    char prenoms[5][50] = {
        "Alice",
        "Lucas",
        "Maria",
        "Bao",
        "Emma"
    };

    char adresses[5][100] = {
        "10 rue de Paris",
        "24 boulevard Victor Hugo",
        "5 avenue du Stade",
        "12 rue des Fleurs",
        "8 place de la Gare"
    };

    float note_prog[5] = {14.5, 12.0, 16.5, 10.0, 18.0};
    float note_sys[5]  = {13.0, 11.5, 15.0, 9.5, 17.0};

    // Affichage des informations
    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", note_prog[i]);
        printf("Note Systeme d'exploitation : %.1f\n\n", note_sys[i]);
    }

    return 0;
}
