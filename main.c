#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    int rolls[100];
    int counts[6] = {0};
    int summa = 0;

    for (int i = 0; i < 100; i++){
        rolls[i] = (rand() % 6) + 1;
        counts[rolls[i] - 1]++;
        summa += rolls[i];
    }

    for (int i = 0; i < 6; i++) {
        printf("%d\n", counts[i]);
    }

    printf("%d\n", summa);

    printf("%.1f", summa / 100.0);

    return 0;
}
