#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
 
    
  float x,y;
  float *pn;
  

 
   

  printf("Digite um número:");
  scanf("%f",&x);

  pn=&x;
  y= *pn * 2;
   printf("O valor Original:%.2f\n",*pn);
   printf("Dobro do valor original:%.2f",y);
  
  
 



    return 0;
}

  //
    






    