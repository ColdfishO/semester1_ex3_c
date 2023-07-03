#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
    int x, y, z, control, a;
    time_t t;
    control = time(&t);
    int p=1;
    char c;
    setlocale(LC_ALL, "");
        printf("\n");
        for (int i = 1;i <= 120;i++) printf("*");
        printf("Autor programu: Simon Dudek\n\n");
        for (int i = 1;i <= 120;i++) printf("*");
        printf("\n");
        srand(control);
    do{
        printf("\n");
        for (int i = 1;i <= 120;i++) printf("*");
        printf("\n\nZadaj przedział losowanych liczb\npoczątek:");
        scanf_s("%d", &x);
        printf("koniec:");
        scanf_s("%d", &y);
        while (x > y) {
            printf("Niepoprawny przedział. Proszę o ponowne wpisanie przedziału\npoczątek:");
            scanf_s("%d", &x);
            printf("koniec:");
            scanf_s("%d", &y);
        }
        printf("Ile liczb wylosować:");
        scanf_s("%d", &z);
        if (p % 2 == 0) {
            if (x >= 0) {
                y -= 1;
                for (int i = 1; i <= z; i++) {
                    a = x + rand() % y;
                    if (a == 0) {
                        printf("%d! ",a);
                    }
                    else {
                        printf("%d ", a);
                    }
                }
            }
            else {
                y += (x * (-1)) + 1;
                for (int i = 1; i <= z; i++) {
                    a = x + rand() % y;
                    if (a == 0) {
                        printf("%d! ", a);
                    }
                    else {
                        printf("%d ", a);
                    }
                }
            }
        }
        else {
            if (x >= 0) {
                y -= 1;
                for (int i = 1; i <= z; i++) {
                    printf("%d ", x + rand() % y);
                }
            }
            else {
                y += (x * (-1)) + 1;
                for (int i = 1; i <= z; i++) {
                    printf("%d ", x + rand() % y);
                }
            }
        }
        p += 1;
        printf("\nCzy wykonać program ponownie (t/n)?");
        scanf_s(" %c", &c, 1);
        while (c != 't' && c != 'n') {
            printf("Niepoprawny znak. Czy wykonać program ponownie (t/n?)");
            scanf_s(" %c", &c, 1);
        }
    } while (c =='t');
    system("pause");
    return 0;
}
