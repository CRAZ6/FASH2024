#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q01() {
printf("Crystian do if");
}
//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q02() {
     printf("Resultado: %d \n", 30*27);
}
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q03() {
    //int=inteiro float=real char=caractere char[20]
    int num1=5;
    int num2=8;
    int num3=12;
    float mediaarit=(num1 + num2 + num3)/3.0;
    printf(" A média de %d %d %d é %.2f ",num1 , num2, num3, mediaarit);
}
//4. Faça um programa que leia e imprima um número inteiro.
void q04()
{
  int numero;
  printf("Digite um numero inteiro");
  scanf("%d",&numero);
  printf("O numero é inteiro é: %d", numero);

}
//5. Faça um programa que leia dois números reais e os imprima.
void q05()
{
  float numero1,numero2;
  printf("Digite dois numeros reais");
  scanf("%f %f",&numero1,&numero2);
  printf("Os numeros reais são: %.2f e %.2f", numero1,numero2);

}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q06()
{
  int numero;
  printf("Digite um numero inteiro");
  scanf("%d",&numero);
  printf("O numero antecessor é %d e o numero sucessor é %d", numero-1,numero+1);

}
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q07() {
    char nome[50], endereco[70], telefone[14];
    printf("Nome: ");
    scanf(" %50[^\n]",nome);
    printf("Endereço: ");
    scanf(" %70[^\n]",endereco);
    printf("Telefone: ");
    scanf(" %14[^\n]",telefone);
    printf("Nome: %s\nEndereço: %s\nTelefone: %s\n",nome,endereco,telefone);

}
//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q08()
{
  int numero1,numero2;
  printf("Digite dois numeros inteiro: \n");
  scanf("%d %d", &numero1,&numero2);
  printf("O resultado da subtração é: %d  ", numero1-numero2);

}
//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void q09()
{
  float numero;
  printf("Digite o numero real: \n");
  scanf("%f", &numero);
  printf("Um quarto deste numero real é: %.2f  ", numero/4);
}
//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10()
{
  float num1,num2,num3;
  printf("Digite os numero reais : \n");
  scanf("%f %f %f", &num1,&num2,&num3);
  printf("A média destes números é: %.2f  ", (num1+num2+num3)/3);
}
//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11()
{
  float num1,num2;
  printf("Digite os numero reais : \n");
  scanf("%f %f", &num1,&num2);
  printf("A soma destes dois números é: %.2f, a subtração é %.2f, a multiplicação é %.2f, a divisão é %.2f ", num1+num2,num1-num2,num1*num2,num1/num2);
}
//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12(){
float numero;
  printf("Digite o numero real: \n");
  scanf("%f", &numero);
  printf("O quadrado deste número é: %.2f  ",numero*numero);
  }
//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13(){
float saldopoupanca,resultado;
printf("ponha o valor da poupança \n");
scanf("%f",&saldopoupanca);
//scanf("%f",saldopoupanca);
printf("O novo saldo da poupança é de: %.2f \n", saldopoupanca*(1.0+2.0/100.0)) ;
  }
//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).
void q14(){
float base=4,alt=2,perimetro,area,retangulo,numero;
  printf("O perimetro do retângulo é: %.2f  ",(base*2)+(alt*2));
  printf("A área do retângulo é: %.2f  ",base*alt);
  }
//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void q15(){
float produto=30.00,desconto=10;

  printf("O desconto é de: %.2f %% ",desconto);
  printf("O valor do produto com desconto é: %.2f  ",produto*(1.0-desconto/100.0));
  }
//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
void q16(){
float salario=1400.00,salariofinal,reajuste=20;

  printf("O rajuste é de: %.2f %% ",reajuste);
  printf("O valor final do salario é de: %.2f  ",salario*(1.0+reajuste/100.0));
  }
//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
void q17(){
float centigrados=34.5,resultado;
resultado=(9*34.5 +160)/5;
  printf("A temperatura de %.2f° em fahrenheit é de: %.2f°  ",centigrados,resultado);
  }
//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.
void q18(){
float l,t=2.5,d,v=130,totalconsumido;
d=t*v;
l=d/12;
  printf("A distância percorrida é de: %.2f \n",d);
  printf("A quantidade de litros consumidos na viagem foi de: %.2f \n",l);
  }
//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.
void q19(){
float vencida=200.00,taxaperiodica=1/100.0,atraso=15.0,juro;
juro=atraso*taxaperiodica;
  printf("O valor da prestação atrasada é de: %.2f \n",vencida);
  printf("O período de atraso é de: %.2f \n",atraso);
  printf("O juros que será cobrado é de: %.2f %% \n",juro*100);
  printf("O valor da prestação acrescido do juros é de: %.2f \n",vencida+vencida*juro);
  }
//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.
void q20(){
float real,dolar,conversao,cotacao;
  printf("Digite o valor em dólar: ");
  scanf("%f", &dolar);
  printf("Digite a cotação do dólar: ");
  scanf("%f",&cotacao);
  conversao=dolar*cotacao;
  printf("A cotação do dolar é de: %.2f \n",cotacao);
  printf("O valor em real é de: %.2f \n",conversao);
  }
int main(){
    q20();
        return EXIT_SUCCESS;
}