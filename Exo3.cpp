#include <stdio.h>

int lireDonnees(const char* nomFichier, int* T)
{ // https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/16421-manipulez-des-fichiers-a-l-aide-de-fonctions
    FILE* fichier = NULL;
    fopen_s(&fichier, nomFichier, "r");
    //char c = 'a';
    int b = 0,n = 0;

    if (nomFichier == NULL)
    {
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    else
    { 
    while (n != EOF) // Si fin
    {
        //c = (char)getc(fichier);
        //n = fgetc(fichier);
        n = fscanf_s(fichier, "%d", &T[b]);
        printf_s("%d", T[b]);
       //T[b] = n ;
        b++;
    }

    fclose(fichier);
    b--;
    return b;
    }
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

    while (permutation) {    //http://lwh.free.fr/pages/algo/tri/tri_bulle.html
        permutation = false;
        passage++;
        for (i = 0; i < nb - passage; i++) {
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

void enregistrerDonnees(const char* nomFichier, int* T, int nb)
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

    int T[10],i=0, nb;
    
    nb = lireDonnees("source1.txt", T);
    afficherTableau(T, nb);
    triABulles(T, nb);
    enregistrerDonnees("source2.txt", T,nb);

    return 0;

}