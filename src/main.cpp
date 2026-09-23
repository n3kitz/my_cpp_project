#include <stdio.h>

int main() {
    int kurs, komanda;
    
    printf("курс щас: 0-Север, 1-Восток, 2-Юг, 3-Запад: ");
    scanf("%d", &kurs);
    
    printf("курс поменяли: 0-Вперед, 1-Вправо, 2-Назад, 3-Влево: ");
    scanf("%d", &komanda);

    int novyy_kurs = (kurs + komanda) % 4;

    printf("новый курс:  ");
    switch (novyy_kurs) {
        case 0: puts("север"); break;
        case 1: puts("восток"); break;
        case 2: puts("юг"); break;
        case 3: puts("запад"); break;
        default: puts("такого не может быть"); break;
    }

    return 0;
}