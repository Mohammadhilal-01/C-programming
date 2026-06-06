// check positive,negative and zero elements in aaray
#include<stdio.h>

int main() {
    int n, pos = 0, neg = 0, zero = 0;

scanf("%d", &n);
 int a[n];

   for(int i = 0; i < n; i++) {
      scanf("%d", &a[i]);

    if(a[i] > 0)
          pos++;
   else if(a[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive=%d Negative=%d Zero=%d", pos, neg, zero);
    return 0;
}

// smallest elements in an array

#include<stdio.h>

int main() {
    int n,i;
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int min = a[0];

    for(i = 1; i < n; i++)
        if(a[i] < min)
            min = a[i];

    printf("Smallest = %d", min);

    return 0;
}

//counnt vowels in an string

#include<stdio.h>

int main() {
    char str[100];
    int count = 0;

    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            count++;
    }

    printf("Vowels = %d", count);

    return 0;
}

//triangle are scalence or not 
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a != b && b != c && a != c)
        printf("Scalene Triangle");
    else
        printf("Not a Scalene Triangle");

    return 0;
}

//even or odd
#include <stdio.h>

int main() {
    int n, digit;
    int even = 0, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;

        if(digit % 2 == 0)
            even++;
        else
            odd++;

        n = n / 10;
    }

    printf("Even digits = %d", even);
    printf("Odd digits = %d", odd);

    return 0;
}

//check divisiblity by 5

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n % 5 == 0)
        printf("Divisible by 5");
    else
        printf("Not Divisible by 5");

    return 0;
}

//check number disible by 3 or not

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n % 3 == 0)
        printf("Divisible by 3");
    else
        printf("Not Divisible by 3");

    return 0;
}

//find largest number using pointer 

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int *p = &a;
    int *q = &b;

    if(*p > *q)
        printf("%d is larger", *p);
    else
        printf("%d is larger", *q);

    return 0;
}

//fibonacci series 

#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;

    scanf("%d",&n);

    printf("%d %d ",a,b);

    for(int i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

    return 0;

  //eligiblity criteria for EXAM

  
#include <stdio.h>

int main() {
       float attendance;

     printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    if(attendance >= 75)
     printf("Eligible for Exam");
    else
    printf("Not Eligible for Exam");

    return 0;
}
  
}

