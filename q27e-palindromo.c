#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* e) Verificar se uma palavra eh palindromo*/

int palindromo(char *str) {
    int t = strlen(str);
    int plv(char *s, int i, int tam) {
        if (i >= tam) {
            return 1; // eh um palindromo
        }
        if (s[i] != s[tam]) {
            return 0; // nao eh um palindromo
        }
        return plv(s, i + 1, tam - 1);
    }
    return plv(str, 0, t - 1);
}

/*ou*/

void palindromo2(char s[], int i, int cont) {
    int tam = strlen(s)-1;
    if (i>=tam/2) {
        if (cont==tam/2) {
            printf("Eh palindromo\n");
        } else {
            printf("Nao eh palindromo\n");
        }
        return;
    }

    if (s[i] == s[tam-i]) {
        cont++;
    }
    
    palindromo2(s, i + 1, cont);
}


int main() {
    char str[] = "arara";
    printf("Palindromo: %d\n", palindromo(str));
    palindromo2(str, 0, 0);
    return 0;
}
