// find area of triangle using herons formula

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of Triangle = %.2f", area);

    return 0;
}

//find average of two num

#include <stdio.h>

int main() {
    float a, b, avg;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    avg = (a + b) / 2;

    printf("Average = %.2f", avg);

    return 0;
}


//find percentage of subjects(5)

#include <stdio.h>

int main() {
    int a,b,c,d,e;
    float per;

    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    per = (a+b+c+d+e)/5.0;

    printf("Percentage = %.2f", per);

    return 0;
}

//simple intrest code

#include <stdio.h>

int main() {
    float p, r, t, si;

    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    printf("Simple Interest = %.2f", si);

    return 0;
}

//linear search

#include <stdio.h>

int main() {
    int a[5],i,key, found = 0;

    for(int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for( i = 0; i < 5; i++) {
        if(a[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}

//sum of digits

#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    while(n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("Sum = %d", sum);

    return 0;
}

//linear search input,when input are decided

#include<stdio.h>

int main(){
    int a[5]={10,20,30,40,50};
    int key=30,i;

    for(i=0;i<5;i++){
        if(a[i]==key){
            printf("Found");
            return 0;
        }
    }
    printf("Not Found");
}

//find GCD of two numbes 
#include <stdio.h>

int main() {
    int a, b, gcd,i;

    scanf("%d%d", &a, &b);

    for(i=1; i<=a && i<=b; i++) {
        if(a%i==0 && b%i==0)
            gcd=i;
    }

    printf("GCD = %d", gcd);
}

//check numbers are pos neg and zero 
#include <stdio.h>

int main() {
    int a[10];
    int pos = 0, neg = 0, zero = 0,i;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);

        if(a[i] > 0)
            pos++;
        else if(a[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive Numbers = %d\n", pos);
    printf("Negative Numbers = %d\n", neg);
    printf("Zero Numbers = %d\n", zero);

    return 0;
}

//find even and odd using if-else 
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is Even", num);
    else
        printf("%d is Odd", num);

    return 0;
}
