#include <stdio.h>

int main() {
    int x;
    printf("Enter the number of rows: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) 
    {
        for (int j = 1; j <= (x - i); j++) 
        {
            printf(" ");
        }
        
        for (int k = 1; k <= i; k++) 
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}