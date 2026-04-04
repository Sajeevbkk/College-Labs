/* Define an array of structure for storing the coefficients and exponents of a polynomial.
Write a program for adding two polynomials */

#include <stdio.h>

struct Polynomial
{
    int coeff;
    int exp;
};

void add_polynomial(struct Polynomial *p1, int n1,
    struct Polynomial *p2, int n2);
void display(struct Polynomial *p, int n);

int main()
{
    int n1, n2;
    printf("Enter number of terms for 1st polynomial: ");
    scanf("%d", &n1);
    struct Polynomial p1[n1];
    printf("Enter %d coeff & exponent: ", n1);
    for (int i = 0; i < n1; i++) scanf("%d%d", &p1[i].coeff, &p1[i].exp);

    printf("Enter number of terms for 2nd polynomial: ");
    scanf("%d", &n2);
    struct Polynomial p2[n2];
    printf("Enter %d coeff & exponent: ", n2);
    for (int i = 0; i < n2; i++) scanf("%d%d", &p2[i].coeff, &p2[i].exp);

    display(p1, n1);
    display(p2, n2);

    add_polynomial(p1, n1, p2, n2);

    return 0;
}

void add_polynomial(struct Polynomial *p1, int n1,
    struct Polynomial *p2, int n2)
{
    int i=0, j=0, k=0;
    struct Polynomial res[n1+n2];

    while (i<n1 && j<n2)
    {
        if (p1[i].exp == p2[j].exp)
        {
            res[k].coeff = p1[i].coeff + p2[j].coeff;
            res[k].exp = p1[i].exp;
            i++; j++; k++;
        } else if (p1[i].exp > p2[j].exp)
        {
            res[k] = p1[i];
            i++; k++;
        } else
        {
            res[k] = p2[j];
            j++; k++;
        }
    }

    // Handle leftover
    while (i<n1) res[k++] = p1[i++];
    while (j<n2) res[k++] = p2[j++];

    // Print result
    printf("Polynomial addition is:\n");
    display(res, k);
}

void display(struct Polynomial *p, int n)
{
    for (int i = 0; i < n; i++) {
        printf("%dx**%d", p[i].coeff, p[i].exp);
        if (i != n - 1)
            printf(" + ");
    }
    printf("\n");
}