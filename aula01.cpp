#include <stdio.h>    
#include <locale.h> //necess�rio para usar setlocale
#include <ctype.h>
#include <stdlib.h>     /* strtol */
#include <inttypes.h>
#include <math.h> 

/*
 * Atividade 1:
 * Entrar e exibir uma letra, um conjunto de caracteres, formatar um n�mero em ponto flutuante com duas casas decimais. 
 *
*/

/* function declaration */
void formatNumber();

int main(){	
	// atribui a codifica��o do sistema 
	setlocale(LC_ALL,"");
	
	printf("Bem vindo ao programa de arredondar n�meros decimais\n");
	printf("Voc� deve inserir os n�meros com o formato brasileiro. \n exemplo: 0000,00 \n");

	formatNumber();	
}



/*
 * Formata n�meros float
 * Voc� deve utilizar a separa��o decimal BRASILEIRA para funcionar (por conta do setlocale)
 * @example 123,123 => 123,12
 * @todo entender melhor o aredontamento
 *
 * @author Juliano Silva <julianoluizsilva00@gmail.com
 *
 * @return void
 */
void formatNumber() {
	
	float a;

	scanf("%f", &a);
	printf("%1.2f", a);
	
	// cortando o caracter para exibir as 5 primeiras letras => Corta
	printf("%.5s\n", "Cortanto o caracter");
}


