#include <stdio.h>
int main(){

  float nota1, nota2, media;

  printf("\n Informe as duas notas obtidas: ");
  scanf("%f %f", &nota1, &nota2);

  media = (nota1 + nota2) / 2;

  if ( media >= 7.0 ){
    printf("Aluno Aprovado");
  }  
  else {
    printf ( "Aluno Reprovado");
  } 

  return 0;
}