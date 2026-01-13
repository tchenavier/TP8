/*#include <stdio.h>


int main(int argc, char** argv)
{
    int i=1;
    char a='a';

    FILE* fichier = NULL;
    fopen_s(&fichier,"source.txt", "w");

    for (;i<27; i++)
    {
        putc(a, fichier);
        putc('\n', fichier); // mette un retour a la ligne
        a++; // pour faire changer de lettre
    }
    

    fclose(fichier);
    return 0;
}*/