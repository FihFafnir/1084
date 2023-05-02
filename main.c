#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        int quantDigitos, quantDigitosApagar, quantDigitosRestantesDoMaior, indice = -1;

        scanf("%d %d", &quantDigitos, &quantDigitosApagar);
        
        if (quantDigitos == 0 && quantDigitosApagar == 0) {
            return 0;
        }

        quantDigitosRestantesDoMaior = quantDigitos - quantDigitosApagar;

        char digs[quantDigitos]; 
        scanf("%s", &digs);
        char maiorNum[quantDigitosRestantesDoMaior];
        strcpy(maiorNum, "");


        for(int i = 0; i < (quantDigitos - quantDigitosApagar); i++) {
            quantDigitosRestantesDoMaior -= 1;

            int maiorDig = 0;

            for (int j = indice + 1; j < (&digs[quantDigitos] - &digs[quantDigitosRestantesDoMaior]); j++) {
                int num = digs[j] - 48;

                if (num > maiorDig) {
                    indice = j;
                    maiorDig = num;
                }
            }

            char maiorDigInChar[1] = {maiorDig + 48};

            strcpy(maiorNum, strcat(maiorNum, maiorDigInChar));
        }
        
        printf("%s\n", maiorNum);
    }

    return 0;
}