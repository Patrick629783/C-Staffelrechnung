#include <stdio.h>

int main() {
    int multiplikand, multiplikator, anzahl;
    int i;
    long long ergebnis;
    char wiederholen;

    do {
        printf("Multiplikand: ");
        scanf("%d", &multiplikand);

        printf("Multiplikator: ");
        scanf("%d", &multiplikator);

        printf("Anzahl: ");
        scanf("%d", &anzahl);

        ergebnis = multiplikand;


        for (i = 0; i < anzahl; i++) {
            printf("%lld*%d= %lld\n",
                   ergebnis,
                   multiplikator + i,
                   ergebnis * (multiplikator + i));
            ergebnis = ergebnis * (multiplikator + i);
        }


        for (i = anzahl - 1; i >= 0; i--) {
            printf("%lld:%d= %lld\n",
                   ergebnis,
                   multiplikator + i,
                   ergebnis / (multiplikator + i));
            ergebnis = ergebnis / (multiplikator + i);
        }


        printf("Programm wiederholen (j/n)? ");
        scanf(" %c", &wiederholen);

    } while (wiederholen == 'j' || wiederholen == 'J');

    return 0;
}
