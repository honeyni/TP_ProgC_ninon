#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void init_liste(struct liste_couleurs *l) {
    l->tete = NULL;
}

void insertion(struct couleur *c, struct liste_couleurs *l) {
    struct noeud *n = malloc(sizeof(struct noeud));
    if (!n) {
        printf("Erreur allocation memoire.\n");
        return;
    }

    n->data = *c;
    n->suiv = l->tete;
    l->tete = n;
}

void parcours(struct liste_couleurs *l) {
    struct noeud *p = l->tete;

    while (p != NULL) {
        printf("R:%02x G:%02x B:%02x A:%02x\n",
               p->data.r, p->data.g, p->data.b, p->data.a);
        p = p->suiv;
    }
}
