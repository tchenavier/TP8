#include <stdio.h>


int main(int argc, char** argv)
{
    int i=1;
    char a='a';

    FILE* fichier = NULL;
    fopen_s(&fichier,"source.txt", "w");

    for (;i<27; i++)
    {
        putc(a, fichier);
        a++;
    }
    

    fclose(fichier);
    return 0;
}