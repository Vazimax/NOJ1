#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Question 1 :

    printf("Hello world!\n");

    // Question 2 :
    int y,m,d;
    printf("Enter a date mm/dd/yyyy :");
    scanf("%d/%d/%d", &m,&d,&y);
    printf("%04d%02d%02d",y,m,d);

    // Question 3 :
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    int sum = num1 + num2;
    printf("%d+%d=%d",num1,num2,sum);


    // Question 4:
    int input, d1, d2;
    printf("Enter two digits");
    scanf("%d", &input);

    d1 = input % 10;
    d2 = input / 10;

    printf("%d%d",d1,d2);

    // Question 5:
    double r, h;
    printf("Enter the raduis and height values: \n");
    scanf("%lf %lf", &r, &h);

    double perimeter, area, surface_area, ball_volume, cylinder_volume;
    double pi = 3.1415;
    perimeter = 2 * pi * r;
    area = pi * pow(r,2);
    surface_area = 4*pi*pow(r,2);
    ball_volume = 8/3 * pi * pow(r,2);
    cylinder_volume = pi * pow(r,2) * h;

    printf("%.2f \n", perimeter);
    printf("%.2f \n", area);
    printf("%.2f \n", surface_area);
    printf("%.2f \n", ball_volume);
    printf("%.2f \n", cylinder_volume);

    // Question 6:
    double math, eng, c;
    scanf("%lf %lf %lf",&math, &eng, &c);
    double sum;
    sum = math + eng + c;
    double average = sum / 3;
    printf("%f\n",sum);
    printf("%f/n",average);

    // Question 7:
    int a, b, c;
    printf("Enter 3 numbers");
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && a>c){
        printf("A is the biggest");
    }
    else if (b>a && b>c){
        printf("B is the biggest");
    }
    else{
        printf("C is the biggest");
    }

    // Question 8:
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if (a>=0 && a<9){
        printf("A has 1 digit");
    }
    else if (a>=10 && a<99){
        printf("A has 2 digits");
    }
    else if (a>=100 && a<999){
        printf("A has 3 digits");
    }
    else if (a>1000 && a<9999{
        printf("A has 4 digits");
    }

    // Question 9:
    double a;
    scanf("%lf", &a);

    if (a < 0){
        a = -1 * a;
    }
    printf("%.2f", a)

    // Question 10:
    int x;
    printf("Enter a positive number");
    scanf("%lf",&x);
    if (x>0){
        x = sqrt(x);
        printf("x is %.2f",x);
    }
    else{
        printf("Sorry! there is a problem ");
    }

    return 0;
}
