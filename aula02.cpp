#include <stdio.h>    
#include <locale.h> //necessário para usar setlocale
#include <ctype.h>
#include <stdlib.h>     /* strtol */
#include <inttypes.h>

/*
 * Atividade 2:
 * Demonstrar o uso dos operadores aritméticos "+, -, +=, -=, *, /, *=, /=, %"
 * que faça pelo menos uma conversão de tipo (por exemplo de um int para char, de char para int, ...).
 *
*/

/* function declaration */
void isOdd();
void SquareRoot();
void menu();
int handleUserInputNumber();

int main(){
	// atribui a codificação do sistema 
	setlocale(LC_ALL,"");

	menu();	
}


/*
 * Calcula se um número é par ou impar
*/
void isOdd () {
	
	printf("\n *** --- Digite um número para verificar se é impar --- ***\n\n");

	int numberIsOdd = handleUserInputNumber();
	
	if(numberIsOdd % 2 == 0) {
		printf("Número é par\n");
	} else {
		printf("Número é impar\n");
	}
}

/*
 * Recebe um input (que deve ser int) do usuário e calcula a sua raiz quadrada
 *
 * @author Juliano Silva <julianoluizsilva00@gmail.com
 *
 * @return void
 */
void SquareRoot() {
	
	printf("\n *** --- Digite um número para verificar sua raiz quadrada --- ***\n\n\n");
	
	int number = handleUserInputNumber();

	printf("\n A raiz quadrada de %d é: %d", number, number*number);
}

/*
 * Menu de seleção da funcionalidade
 */
void menu() {
	
	printf("*** BEM VINDO AO PROGRAMA DA AULA 2\n");
	printf("Digite o número da função que você deseja executar\n");	
	printf("1: Verifica se é par\n2: Eleva número ao quadrado\n");
	
	int userInput = handleUserInputNumber();

	if(userInput == 1) {
		isOdd();
	} else {
		SquareRoot();
	}
	
	printf("\n************************** FIM **************************\n\n");
	
	menu();
}

/*
 * Aguarda um input na tela que seja do tipo digito
 * Caso o valor do input seja diferente de digito ele apresentará uma mensagem de erro e esperará um outro output
 *
 * TODO: função que aceite números negativos
 * 
 * @author Juliano Silva <julianoluizsilva00@gmail.com
 *
 * @retrun int
 */ 
int handleUserInputNumber() {
	bool digito = false;
	
	char userInput;

	while(false == digito) {
			
		/*
		 * Previnir o enter como input
		 * https://stackoverflow.com/questions/8464620/program-doesnt-wait-for-user-input-with-scanfc-yn
		 * 20s
		 */

		scanf("%20s", &userInput);

		digito = isdigit(userInput);
		
		printf(digito ? "" : "não é digito\n");
		
	}
	
	int opcaoSelecionada = userInput - '0';
	
	return opcaoSelecionada;				
	
}


