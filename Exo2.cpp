/*#include <stdio.h>


int main(int argc, char** argv)
{
    int i = 1;
    char a = 'a';
    char c = 'a';

    FILE* fichier = NULL;
    fopen_s(&fichier, "source.txt", "r");


    while (c != EOF) // si fin
    {
        c = (char)getc(fichier);
        printf_s("%c",c);
    }

    fclose(fichier);
    
    return 0;

}*/