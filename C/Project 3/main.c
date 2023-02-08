#include <stdio.h>
#include <math.h>
int main(void) {
    int x = 750;
    double y = 12.5;
    char z ='A';
    char name[] = "slgeek";
    printf("%c is the first letter in the alphabat.\n",z);
    printf("%s has %dK subscribes.\n",name ,x);

    //MATH functions[this can be search in google]
    printf("%f\n",round(2.3));
    printf("%f\n",sqrt(16));
    printf("%f\n",pow(2,3));

    const double pi = 22.7;
    printf("%f\n",2 * pi);


    char firstName[30];
    printf("Enter your name : ");
    scanf("%s", firstName);
    printf("Your first name is %s\n", firstName);
}
