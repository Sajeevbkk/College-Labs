#include <stdio.h>

int main () {
   unsigned int num;
   int binArray[32], i=0;
   printf("Enter a number: ");
   scanf("%u", &num);

   // binary to decimal
   while (num > 0) {
    binArray[i] = num%2;
    num = num/2;
    i++;
   }

   // reading array
   for (int j=i-1; j>=0; j--) printf("%d", binArray[j]);

   return 0;
}