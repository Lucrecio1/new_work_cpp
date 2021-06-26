#include <stdio.h>
#include <stdlib.h>

void imprimir_1a100(){
  for(int i=1;i<=100;i++)
  printf("%d/ ",i);
}
void imprimir_par(){
  for(int i=1;i<=100;i++)
  if(i%2==0){
  	
    printf("[%d] ",i);
  }
}
void imprimir_multiplo(){
  for(int i=1;i<=100;i++)
  if(i%5==0){
  	
    printf("[%d] ",i);
  }
}
main(){
   imprimir_1a100();
   printf("\n\n");
   imprimir_par();
   printf("\n\n");
   imprimir_multiplo();
}
