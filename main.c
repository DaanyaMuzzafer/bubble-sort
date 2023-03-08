#include <stdio.h>
int main()
{
    int i, j, a, b;

    printf("Enter the length of the array = ");
    scanf("%d",&a);

    int array[a];

    printf("Enter the elements of the array :\n");

    for (i = 0; i < a; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < a; i++) {
        for (j = 0; j < a - 1 - i; j++) {
            if (array[j] < array[j + 1]) {
                b = array[j];
                array[j] = array[j + 1];
                array[j + 1] = b;
            }
        }
    }

    printf("The sorted array in descending order is : ");

    for (i = 0; i < a; i++) {
        printf("%d", array[i]);
        if (i < a - 1) {
            printf(" ,");
        }
    }
}
