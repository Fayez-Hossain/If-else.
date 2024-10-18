
#include <stdio.h>
int main() {
    int number,number1;
    printf("Enter two number: ");
    scanf("%d %d", &number,&number1);


    if  (number >= number1)
        if (number == number1){
        printf(" result.%d = %d",number,number1);
    }
    else  {
        printf(" result.%d > %d",number,number1);
    }
    else {
        printf("result %d < %d",number,number1);
    }

    return 0;
}
