#include <stdio.h>

int lireDonnees(char* nomFichier, int* T)
{
    FILE* fichier = NULL;
    fopen_s(&fichier, nomFichier, "r");
    char c = 'a';

    while (c != EOF) // si fin
    {
        c = (char)getc(fichier);
        printf_s("%c", c);
    }

    fclose(fichier);
}

void afficherTableau(int* T, int nb)
{
    for (int i = 0;i<nb;i++)
    {
        printf_s("%d", T[i]);
    }
}

void triABulles(int* T, int nb)
{
    int passage = 0, i, j;
    bool permutation = true;

    while (permutation) {         //http://lwh.free.fr/pages/algo/tri/tri_bulle.html
        permutation = false;
        passage++;
        for (i = 0; i < 20 - passage; i++) {
            if (T[i] > T[i + 1]) {
                //if(indice_min(nombre, i, i+1) != i) {
                permutation = true;
                // On echange les deux elements
                int temp = T[i];
                T[i] = T[i + 1];
                T[i + 1] = temp;
            }
        }
    }
    j = 3;
}

void enregistrerDonnees(char* nomFichier, int* T, int nb)
{
    FILE* fichier = NULL;
    fopen_s(&fichier, nomFichier, "r");
    for (int i = 0; i < nb; i++)
    {
        int d = T[i];

        int putc(int d, FILE * fichier);

    }
    fclose(fichier);
}

int main(int argc, char** argv)
{

    int T[10],i=0, o, nb = 10;
    
    //o = lireDonnees("source1.txt", T);
    o = lireDonnees("source1.txt", T);
    afficherTableau(T, nb);
    triABulles(T, nb);
    enregistrerDonnees("source2.txt", T,nb);

    return 0;

}