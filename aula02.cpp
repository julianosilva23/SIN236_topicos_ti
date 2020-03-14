#include <stdio.h>    
#include <locale.h> //necess�rio para usar setlocale
#include <ctype.h>
#include <stdlib.h>     /* strtol */
#include <inttypes.h>

/*
 * Atividade 2:
 * Demonstrar o uso dos operadores aritm�ticos "+, -, +=, -=, *, /, *=, /=, %"
 * que fa�a pelo menos uma convers�o de tipo (por exemplo de um int para char, de char para int, ...).
 *
*/

/* function declaration */
void isOdd();
void SquareRoot();
void menu();
int handleUserInputNumber();

int main(){
	// atribui a codifica��o do sistema 
	setlocale(LC_ALL,"");

	menu();	
}


/*
 * Calcula se um n�mero � par ou impar
*/
void isOdd () {
	
	printf("\n *** --- Digite um n�mero para verificar se � impar --- ***\n\n");

	int numberIsOdd = handleUserInputNumber();
	
	if(numberIsOdd % 2 == 0) {
		printf("N�mero � par\n");
	} else {
		printf("N�mero � impar\n");
	}
}

/*
 * Recebe um input (que deve ser int) do usu�rio e calcula a sua raiz quadrada
 *
 * @author Juliano Silva <julianoluizsilva00@gmail.com
 *
 * @return void
 */
void SquareRoot() {
	
	printf("\n *** --- Digite um n�mero para verificar sua raiz quadrada --- ***\n\n\n");
	
	int number = handleUserInputNumber();

	printf("\n A raiz quadrada de %d �: %d", number, number*number);
}

/*
 * Menu de sele��o da funcionalidade
 */
void menu() {
	
	printf("*** BEM VINDO AO PROGRAMA DA AULA 2\n");
	printf("Digite o n�mero da fun��o que voc� deseja executar\n");	
	printf("1: Verifica se � par\n2: Eleva n�mero ao quadrado\n");
	
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
 * Caso o valor do input seja diferente de digito ele apresentar� uma mensagem de erro e esperar� um outro output
 *
 * TODO: fun��o que aceite n�meros negativos
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
		
		printf(digito ? "" : "n�o � digito\n");
		
	}
	
	int opcaoSelecionada = userInput - '0';
	
	return opcaoSelecionada;				
	
}


