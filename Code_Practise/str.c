#include <stdio.h>
#include <string.h>

// input a string and print it as an output

int main()
{
    char str1[50];
    char str2[50];
    char str3[50];

    printf("Enter the string :");
    gets(str1); // input
    puts(str1); // print

    puts(strupr(str1)); // uppercase

    printf("Enter the string :");
    gets(str2); // input
    puts(str2); // print
    printf("%d\n", strlen(str2));

    puts(strlwr(str2));       // lowercase
    puts(strcat(str2, str1)); // concatenation

    printf("Enter the string :");
    gets(str3); // input
    puts(str3); // print

    puts(strrev(str3)); // reverse

    printf("%d\n",strcmp(str1,str2)); //comparsion
}