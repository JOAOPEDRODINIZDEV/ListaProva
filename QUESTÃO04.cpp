#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
 
    
  int n;
  int *pt;
  
 
   

  printf("Digite um número: ");
  scanf("%d",&n);

  int v[n];

  for(int j=0; j<n; j++){
      printf("Digite os valores dos vetores:");
       scanf("%d",&v[j]);
} 
 pt=v;

 printf("Os Valores Inversor");
  
 for(int i=n-1; i>=0; i--){
    printf("\n %d", *(pt+i));
    

}

 



    return 0;
}

  //
    






    