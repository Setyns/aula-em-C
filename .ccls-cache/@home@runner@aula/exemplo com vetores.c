#include <stdio.h>

void v_iniciacao(int *vet, int n){
  int i;
  for(i=0; i<n; i++)
    vet[i] = 0;
}

void v_imprime(int *vet, int n){
  int i;
  for(i=0; i<n; i++)
    printf("%d - ", vet[i]);
  printf("\n");
}

int main(void){
  int vet [10], i;
  v_iniciacao(vet, 10);
  printf("impressao de vetor antes da atribuição");
  v_imprime(vet,10);
  for(i=0;i<10;i++){
    vet[i]=i;
  }
  printf("impressao do vetor apos a atribuição");
  v_imprime(vet,10);
  return 0;
}