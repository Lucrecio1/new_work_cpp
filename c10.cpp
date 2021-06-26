#include <stdio.h>
#include <stdlib.h>

void imprimir_1a100(){ //1º exercicio
  for(int i=1;i<=100;i++)
  printf("%d/ ",i);
}
void imprimir_par(){ //2º exercicio
  for(int i=1;i<=100;i++)
  if(i%2==0){
  	
    printf("[%d] ",i);
  }
}
void imprimir_multiplo(){ //3º exercicio
  for(int i=1;i<=100;i++)
  if(i%5==0){
  	
    printf("[%d] ",i);
  }
}
void Nome_Idade_Sexo(){ //4º exercicio
   char s,nome[30];
   int idade;

   for(int i=1;i<=5;i++){
     printf("Digite o Nome:");
     scanf(" %s",&nome);

     printf("Digite a Idade:");
     scanf("%d",&idade);

     printf("Digite o Sexo:[M/F]");
     scanf(" %c",&s);
    
      if((idade>21) && (s=='M')){
        printf("\nNome: %s\n",nome);
      }else{
        printf("\nNome: %s",nome);
      	printf("\nMenor de idade\n");
	  }
   }

}
void prod_s(){
int multi_cando,multi_cador,produto=0;

  printf("Digite um numero:");
  scanf("%d",&multi_cando);

    printf("Digite um numero:");
  scanf("%d",&multi_cador);
if(multi_cando<multi_cador){
  for(int i=1;i<=multi_cando;i++){
    produto=produto+multi_cador;
  }
}else if(multi_cando>multi_cador){
    int troca=multi_cando;
      multi_cando=multi_cador;
      
      for(int i=1;i<=multi_cando;i++){
    produto=produto+troca;
  }
  }
  printf("Produto:%d ",produto);
}
main(){
   //imprimir_1a100();
   //printf("\n\n");
   //imprimir_par();
  // printf("\n\n");
   //imprimir_multiplo();
  // Nome_Idade_Sexo();
  prod_s();
}
