#include <stdio.h>
#include <locale.h>



int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    int v[5];
    int *p;
    p=v;
    for(int j=0; j<5; j++){
    printf("Digite o %d número:",j+1);
    scanf("%d",&v[j]);
    }
    for(int p=0; p<5; p++){
    printf("O valor %d  é o seu endereço de mémoria %p\n",*(ponteiro+p),(ponteiro+p));
    }
    
    return 0;
}

  
    






