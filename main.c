#include <stdio.h>

int main(void) {
    int anno;

    printf("Inserisci l'anno da verificare\n");
    scanf("%d", &anno);


    if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
        printf("L'anno  è bisestile\n");
    } else {
        printf("L'anno  è bisestile\n");
    }

    return 0;
}
