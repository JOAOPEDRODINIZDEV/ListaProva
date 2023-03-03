#include <stdio.h>
#include <locale.h>



int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    char strOriginal[100];
    char strSemVogais[100];
    char *ptrOriginal = strOriginal;
    char *ptrSemVogais = strSemVogais;

    printf("Digite o seu nome:");
    scanf("%s",strOriginal);

    // Copia a string original para a nova string, removendo as vogais
    for(int i=0; i<100; i++) {
        if (*ptrOriginal == 'a' || *ptrOriginal == 'e' || *ptrOriginal == 'i' || *ptrOriginal == 'o' || *ptrOriginal == 'u' ||
                *ptrOriginal == 'A' || *ptrOriginal == 'E' || *ptrOriginal == 'I' || *ptrOriginal == 'O' || *ptrOriginal == 'U') {
            ptrOriginal++;
            continue;

        }
        *ptrSemVogais = *ptrOriginal;
        ptrOriginal++;
        ptrSemVogais++;
    }


    printf("Seu Nome Original:%s\n ",strOriginal);
    printf("Seu Nome Sem Vogais:%s ",strSemVogais);

    return 0;
}

  //
    






