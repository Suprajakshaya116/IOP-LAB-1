#include <stdio.h>
int main()
 {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    // program to check a no. is even or odd
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}
