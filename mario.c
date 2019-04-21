#include <stdio.h>
int main(){
 int idade;
 printf(" DIGITE A SUA IDADE:\n");
 scanf("%i", &idade);

 if(idade<18){
printf(" VOCE NAO PODE DIRIGIR\n");
 } else {
printf(" VOCE PODE DIRIGIR\n");
 }
  return 0;
}
