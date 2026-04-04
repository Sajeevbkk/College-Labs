/* Define a structure for storing a complex number. Write functions for finding the sum,
difference and product of two complex numbers. Input two complex numbers and display
their sum, difference and product using the above functions. */

#include <stdio.h>

struct complex
{
    float re, im;
};

void read_complex(struct complex *res);
struct complex add(struct complex a, struct complex b);
struct complex sub(struct complex a, struct complex b);
struct complex mul(struct complex a, struct complex b);
void display(struct complex a);

int main()
{
    struct complex a;
    struct complex b;
    struct complex res;
    read_complex(&a);
    read_complex(&b);

    printf("Addition:\n");
    res = add(a,b);
    display(res);
    printf("Subtraction:\n");
    res = sub(a,b);
    display(res);
    printf("Multiplication:\n");
    res = mul(a,b);
    display(res);

    return 0;
}

void read_complex(struct complex *res)
{
    printf("Enter complex number: ");
    scanf("%f%f", &res->re, &res->im);
}

struct complex add(struct complex a, struct complex b)
{
    struct complex res;
    res.re = a.re + b.re;
    res.im = a.im + b.im;
    return res;
}

struct complex sub(struct complex a, struct complex b)
{
    struct complex res;
    res.re = a.re - b.re;
    res.im = a.im - b.im;
    return res;
}

struct complex mul(struct complex a, struct complex b)
{
    struct complex res;
    res.re = a.re * b.re;
    res.im = a.im * b.im;
    return res;
}

void display(struct complex a)
{
    if (a.im < 0)
    {
        printf("%0.2f - i%0.2f\n", a.re, a.im*-1);
    }
    else
        printf("%0.2f + i%0.2f\n", a.re, a.im);
}