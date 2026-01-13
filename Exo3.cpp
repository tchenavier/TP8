#include <stdio.h>

int lireDonnees(char* nomFichier, int* T)
{
    FILE* fichier = NULL;
    fopen_s(&fichier, nomFichier, "r");

    while (c != EOF) // si fin
    {
        c = (char)getc(fichier);
        printf_s("%c", c);
    }

    fclose(fichier);
}

void afficherTableau(int* T, int nb)
{

}

void triABulles(int* T, int nb)
{

}

void enregistrerDonnees(char* nomFichier, int* T, int nb)
{

}

int main(int argc, char** argv)
{
    int T[10],i=0, o, nb = 10;
    char['source1.txt'];
    
    //o = lireDonnees("source1.txt", T);
    o = lireDonnees("source1.txt", T);
    afficherTableau(T, nb);
    triABulles(T, nb);
    enregistrerDonnees("source1.txt", T,nb);

    return 0;

}