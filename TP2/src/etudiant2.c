#include <stdio.h>
#include <string.h>

// Structure pour un étudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_prog;
    float note_sys;
};

int main() {
    // Tableau de 5 étudiant.e.s
    struct Etudiant etudiants[5];

    // Étudiant 1
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].note_prog = 16.5;
    etudiants[0].note_sys = 12.1;

    // Étudiant 2
    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].note_prog = 14.0;
    etudiants[1].note_sys = 14.1;

    // Étudiant 3
    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Emma");
    strcpy(etudiants[2].adresse, "15 Rue Victor Hugo, Paris");
    etudiants[2].note_prog = 11.5;
    etudiants[2].note_sys = 13.7;

    // Étudiant 4
    strcpy(etudiants[3].nom, "Ngu
