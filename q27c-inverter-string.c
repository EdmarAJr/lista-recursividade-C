#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* c) Inversao de uma string.*/
/*mais simples, mas altera a string original*/
void inverterStr(char str[], int i, int tam) {
    if (i >= tam / 2){
        printf("%s\n", str);
        return;
    }

    char temp = str[i];
    str[i] = str[tam - 1 - i];
    str[tam - 1 - i] = temp;

    inverterStr(str, i + 1, tam);
}

/*ou*/

/*duas funcoes recursivas mais simples*/
void inverterStr2(char str[]) {
    int t = strlen(str);//nao inclui o '\0'
    char strAux[t+1];//precisa incluir o '\0'
    
    char * interna(char s[], char aux[], int i, int tam) {
        if(tam<0) {//quando chegar no ultimo caractere retorna aux para inverterStr
            return aux;
        }
        aux[i] = s[tam-1];//guarda na string aux a ultima posicao do array s
        interna(s, aux, i + 1, tam - 1);
    }
    printf("%s\n", interna(str, strAux, 0, t));
}

/*ou*/

/*duas funcoes recursivas menos simples*/
void inverterStr3(char * str) {
	char * interna(char * s, char * aux, int i, int tam) {
		if(tam == -2) {
			return aux;
		}
		aux[i] = s[tam];
		interna(s, aux, i + 1, tam - 1);
	}
	int t = strlen(str) - 1;
	char strAux[t + 1];
	printf("%s\n",interna(str, strAux, 0, t));
}

/*ou*/

/*mais elegante e mais complexa*/
void inverterStr4(char str[]) {
    int tam = strlen(str);
    
    if (tam <= 1) return;
    
    // Troca o primeiro e o ultimo caracteres
    char temp = str[0];
    str[0] = str[tam - 1];
    str[tam - 1] = temp;
    
    // Cria uma substring excluindo os caracteres ja trocados
    char novoStr[tam - 1];
    strncpy(novoStr, str + 1, tam - 2);
    novoStr[tam - 2] = '\0';
    
    // Chama a funcao recursivamente para a substring
    inverterStr4(novoStr);
    
    
    // Copia a substring invertida de volta para a string original
    strncpy(str + 1, novoStr, tam - 2);
}

int main () {
    char str[] = "Linguagem C e bla bla bla bla";
    char copia[strlen(str)];//serve para a funcao inverterStr, pois altera a string original
    char copia2[strlen(str)];//serve para a funcao inverterStr4, pois altera a string original
    strcpy(copia, str);
    strcpy(copia2, str);
    
    inverterStr(copia, 0, strlen(copia));
    inverterStr2(str);
    inverterStr3(str);
    inverterStr4(copia2);
    printf("%s\n", copia2);
    return 0;
}




