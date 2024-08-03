
/*
EXERCÍCIOS DO CAPÍTULO 2
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.
void questao01() {
	int num1,num2,resultado;
	printf("Digite o primeiro número: \n");
    scanf("%d",&num1);
printf("Digite o segundo número: \n");
    scanf("%d",&num2);
	resultado=num1+num2;
if(resultado>10)
{
printf("O resultado da soma é: %d",resultado);
}

}

//2. Faça um programa que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
void questao02() {
int num1,num2,resultado;
	printf("Digite o primeiro número: \n");
    scanf("%d",&num1);
	printf("Digite o segundo número: \n");
    scanf("%d",&num2);
	resultado=num1+num2;
	if(resultado>20){
resultado=resultado+8;
printf("O resultado da soma é: %d \n",resultado);
	}
}

//3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".
void questao03() {
	int num1;
	printf("Digite um número: \n");
    scanf("%d",&num1);
	if(num1%3==0){
printf("O número é múltiplo de 3 \n");
	}
	else{
		printf("O número não é múltiplo de 3 \n");
	}
}

//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
void questao04() {
	int num1;
	printf("Digite um número: \n");
    scanf("%d",&num1);
	if(num1%5==0){
printf("O número é divisivel por 5\n");
	}
	else{
		printf("O número não é divisivel por 5 \n");
	}
}

//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
void questao05() {
int num1;
	printf("Digite um número: \n");
    scanf("%d",&num1);
	if(num1%3==0 && num1%7==0){
printf("O número é divisivel por 3 e 7\n");
	}
	else{
		printf("O número não é divisivel por 3 e 7\n");
	}
}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.
void questao06() {
float bruto,prestacao,calculodaprestacao;
	printf("Digite o salario bruto: \n");
    scanf("%f",&bruto);
	printf("Digite o valor da prestação: \n");
    scanf("%f",&prestacao);
	calculodaprestacao=0.3f*bruto;
	if(prestacao<=calculodaprestacao){
printf("O emprestimo pode ser concedido");
	}
	else{
		printf("O emprestimo nao pode ser concedido \n");
	}
}

//7. Faça um programa que leia um número e indique se o número está compreendido
//entre 20 e 50 ou não.
void questao07() {
float num;
	printf("Digite um número\n");
    scanf("%f",&num);
	if(num>=20 && num<=50){
printf("O número %.2f está compreendido entre 20 e 50 \n",num);
	}
	else{
		printf("O número %.2f não está compreendido entre 20 e 50 \n",num);
	}
}

//8. Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".
void questao08() {
	float num;
	printf("Digite um número\n");
    scanf("%f",&num);
	if(num>20){
printf("Maior do que 20 \n");
	}
	else
	if(num>=20){
printf("Igual a 20 \n");
	}
	else
	if(num<20){
printf("Menor do que 20 \n");
	}
}

//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e como ano
//atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//ano de nascimento informado é válido.
void questao09() {
	int nascimento,ano,idade;
	printf("Digite seu ano de nascimento\n");
    scanf("%d",&nascimento);
	printf("Digite o ano atual \n");
    scanf("%d",&ano);
	idade=ano-nascimento;

	if(idade>0 && nascimento>0 && nascimento<ano){
printf("A idade é %d \n",idade);
	}
	else
	if(nascimento<ano){
printf("O valor do nascimento é invalido \n");
	}
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem
//crescente.
void questao10() {
float num1,num2,num3;
	printf("Digite um número\n");
    scanf("%f",&num1);
	printf("Digite um número\n");
    scanf("%f",&num2);
	printf("Digite um número\n");
    scanf("%f",&num3);
	if(num1<num2 && num2<num3)
	{
printf(" %f , %f , %f \n",num3,num2,num1);
		}
	if(num3<num2 && num2<num1)
	{
printf(" %f , %f , %f \n",num1,num2,num3);
		}
	if(num1<num3 && num3<num2)
	{
printf(" %f , %f , %f \n",num2,num3,num1);
		}
	if(num1<num3 && num3<num3)
	{
printf(" %f , %f , %f \n",num1,num3,num2);
		}
	if(num2>num1 && num2>num3)
{
printf(" %f , %f , %f \n",num2,num3,num1);
		}
	if(num3>num2 && num3>num1)
	{
printf(" %f , %f , %f \n",num3,num1,num2);
		}
}

//11. Faça um programa que leia 3 números e imprima o maior deles.
void questao11() {
	float num1,num2,num3;
	printf("Digite um número\n");
    scanf("%f",&num1);
	printf("Digite um número\n");
    scanf("%f",&num2);
	printf("Digite um número\n");
    scanf("%f",&num3);
	if(num1<num2 && num2<num3)
	{
printf(" %.2f \n",num3);
		}
	if(num3<num2 && num2<num1)
	{
printf(" %.2f \n",num1);
		}
	if(num1<num3 && num3<num2)
	{
printf(" %.2f \n",num2);
		}
	
}

//12. Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos
void questao12() {
	int idade;
	printf("Digite sua idade\n");
    scanf("%d",&idade);

	if(idade>18 && idade<=65)
	{
printf("Você é maior de idade");
    }
	if(idade<18)
	{
printf("Você é menor de idade");
		}
	if(idade>65 && idade>18){
	printf("Você é maior de idade e tem mais de 65 anos");
	}
		
}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//prova 2 de umaluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens:
// "Aprovado", "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).
void questao13() {
	char nome[50];
	int nota1,nota2,media;
	printf("Digite seu nome \n");
    scanf(" %50[^\n]",nome);
    printf("Insira sua nota da prova 1 \n");
    scanf(" %d",&nota1);
	printf("Insira sua nota da prova 2 \n");
    scanf(" %d",&nota2);
	media=(nota1+nota2)/2;
	if(media>=7)
	{
		printf("A sua nota da prova 1 é: %d \n", nota1);
		printf("A sua nota da prova 2 é: %d \n", nota2);
		printf("A sua media é: %d \n", media);
printf("Você está aprovado \n");
    }
	else
	if(media<3)
	{
		printf("A sua nota da prova 1 é: %d \n", nota1);
		printf("A sua nota da prova 2 é: %d \n", nota2);
		printf("A sua media é: %d \n", media);
printf("Você está reprovado \n");
    }
	else
	if(media>=3 && media<7)
	{
		printf("A sua nota da prova 1 é: %d \n", nota1);
		printf("A sua nota da prova 2 é: %d \n", nota2);
		printf("A sua media é: %d \n", media);
printf("Você está de prova final \n");
    }
}

//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//desconto do INSS segundo a tabela seguir:
//Salário Faixa de Desconto
//Menor ou igual à R$600,00 Isento
//Maior que R$600,00 e menor ou igual a R$1200,00 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//Maior que R$2000,00 30%
void questao14() {
	float sala,desconto;
	printf("Digite seu salario\n");
    scanf(" %f",&sala);

	if(sala<=600)
	{
		printf("Isento de desconto \n");
	}
	else
	if(sala>600 && sala<=1200){

		printf("O desconto é de %.2f \n",sala*20/100);
	}
	else
	if(sala>1200 && sala<=2000){
		printf("O desconto é de %.2f \n",sala*25/100);
    }
else
	if(sala>2000){
		printf("O desconto é de %.2f \n",sala*30/100);
		
    }
}
	
//15. Um comerciante comprou umproduto e quer vendê-lo com umlucro de 45% se o valor
//da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa que leia o valor do produto e imprima o valor da venda.
void questao15() {
	float preco;
	printf("Informe o valor de compra do produto \n");
    scanf(" %f",&preco);

	if(preco<20)
	{
		printf("Deve vender o produto por %.2f \n",(preco*45/100)+preco);
	}
	else
	if(preco>20){

		printf("Deve vender o produto por %.2f \n",(preco*30/100)+preco);
	}
}

//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//mundial. Faça um programa que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5 - 7 anos
//Infantil B 8 - 10 anos
//Juvenil A 11 - 13 anos
//Juvenil B 14 - 17 anos
//Sênior maiores de 18 anos
void questao16() {
	
}

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Umvendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.
//Idade Valor
//Até 10 anos R$30,00
//Acima de 10 até 29 anos R$60,00
//Acima de 29 até 45 anos R$120,00
//Acima de 45 até 59 anos R$150,00
//Acima de 59 até 65 anos R$250,00
//Maior que 65 anos R$400,00
void questao17() {
	
}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite umnúmero fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número. Utilize o switch para este problema.
void questao18() {
	
}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um programa que informe se uma equipe foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
void questao19() {
	
}

//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldomédio no último ano. Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir. O programa deve imprimir uma mensagem informando o saldo médio e o valor de crédito.
//Saldo Médio Percentual
//de 0 a 500 nenhum crédito
//de 501 a 1000 30% do valor do saldo médio
//de 1001 a 3000 40% do valor do saldo médio
//acima de 3001 50% do valor do saldo médio
void questao20() {
	
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:
void questao21() {
	
}

//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, sabendo-se que umcarro tipo C faz 12 kmcom umlitro de gasolina, um tipo B faz 9 kme o tipo C, 8 kmpor litro.
void questao22() {
	
}

//23. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.
//Prato Sobremesa Bebida
//Vegetariano 180cal Abacaxi 75cal Chá 20cal
//Peixe 230cal Sorvete diet 110cal Suco de laranja 70cal
//Frango 250cal Mousse diet 170cal Suco de melão 100cal
//Carne 350cal Mousse chocolate 200cal Refrigerante diet 65cal
void questao23() {

}

//24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dosmotoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro, informe omês em que o emplacamento deve ser renovado.
void questao24() {
	
}

//25. A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados ideais para umpaís do 1º mundo. As indústrias, maiores responsáveis pela poluição, foram classificadas em três grupos. Sabendo-se que a escala utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um programa que possa imprimir intimações de acordo com o índice e a tabela a seguir:
//Índice Indústrias que receberão intimação
//0,3 1º gurpo
//0,4 1º e 2º grupos
//0,5 1º, 2º e 3º grupos
void questao25() {
	
}

int main() {
	const char menu[1000] = "\n================================\n            PROGRAMAS\n================================\n[1]  - Adição\n[2]  - Adição 2\n[3]  - Múltiplo\n[4]  - Múltiplo 2\n[5]  - Múltiplo 3\n[6]  - Crédito\n[7]  - Intervalo\n[8]  - Menor/Maior\n[9]  - Idade\n[10] - Crescente\n[11] - Maior\n[12] - Idade 2\n[13] - Situação Aluno\n[14] - INSS\n[15] - Valor de Venda\n[16] - Natação\n[17] - Plano de Saúde\n[18] - Mês do Ano\n[19] - Arco e Flecha\n[20] - Crédito Especial\n[21] - Biblioteca\n[22] - Consumo Combustível\n[23] - Calorias\n[24] - Emplacamento\n[25] - Intimação\n================================\n";
	printf("%s",menu);
	int opcao;
	printf("Digite a questão a ser executada: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
			questao01();
			break;
		case 2:
			questao02();
			break;
	    case 3:
			questao03();
			break;
	    case 4:
			questao04();
			break;
		case 5:
			questao05();
			break;
		case 6:
			questao06();
			break;		
		case 7:
			questao07();
			break;		
		case 8:
			questao08();
			break;		
		case 9:
			questao09();
			break;					
		case 10:
			questao10();
			break;
		case 11:
			questao11();
			break;
		case 12:
			questao12();
			break;
		case 13:
			questao13();
			break;
		case 14:
			questao14();
			break;
		case 15:
			questao15();
			break;
		case 16:
			questao16();
			break;
		case 17:
			questao17();
			break;
		case 18:
			questao18();
			break;
		case 19:
			questao19();
			break;
		case 20:
			questao20();
			break;
		case 21:
			questao21();
			break;
		case 22:
			questao22();
			break;
		case 23:
			questao23();
			break;
		case 24:
			questao24();
			break;
		case 25:
			questao25();
			break;
		default:
			printf("Opção inválida!");
	}
	
	return EXIT_SUCCESS;
}
