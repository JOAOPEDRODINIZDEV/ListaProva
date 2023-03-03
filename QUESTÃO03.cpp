#include <stdio.h>
#include <locale.h>



int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
 
    
  int j, p;
  int *j1, *p2;
  
   j1 = &j;
   p2 = &p;
   

  printf("Digite um valor para a primeira variável: ");
  scanf("%d",j1);

  printf("Digite um valor para a segunda variável: ");
  scanf("%d",p2);
  
  

  *j1 = *j1 + *p2;
  *p2 = *j1 - *p2;
  *j1 = *j1 - *p2;

  printf("O valor da primeira variável agora é: %d\n", j);
  printf("O valor da segunda variável agora é: %d\n", p);



    return 0;
}

  //
    






    