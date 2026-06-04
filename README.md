# C-programming // largest elements in an array...
#include <stdio.h>
int main() {
    int a[100], n, i, max;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
    max = a[0];

    for(i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];
    printf("Largest = %d", max);
    return 0;
}

// reverse of number
#include <stdio.h>
int main() {
    int n, rev = 0;
    scanf("%d", &n);

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    //factorial od a number
    #include <stdio.h>

int main() {
    int n, i, fact=1;

    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}

//check divisiblity by 5 and 11
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n % 5 == 0 && n % 11 == 0)
        printf("Divisible");
    else
        printf("Not Divisible");

    return 0;
}

//calculate grades of students 
#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);

    if(marks >= 90)
        printf("Grade A");
    else if(marks >= 75)
        printf("Grade B");
    else if(marks >= 60)
        printf("Grade C");
    else
        printf("Fail");

    return 0;
}

//transaction program (atm)
#include <stdio.h>

int main() {
    int balance = 5000, amount;

    scanf("%d", &amount);

    if(amount <= balance)
        printf("Transaction Successful");
    else
        printf("Insufficient Balance");

    return 0;
}

//reverse of array
#include <stdio.h>

int main() {
    int a[100], n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}

//largest array among 3 elements
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a >= b && a >= c)
        printf("%d is largest", a);
    else if(b >= c)
        printf("%d is largest", b);
    else
        printf("%d is largest", c);

    return 0;
}

//number multiple of 3 or 7
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n % 3 == 0 || n % 7 == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}

//print number divisible by 3 using loops ..

#include <stdio.h>

int main() {
    int i;
    for(i = 1; i <= 50; i++) {
        if(i % 3 == 0)
            printf("%d ", i);
    }
    return 0;
}
    printf("%d", rev);
    return 0;
}
