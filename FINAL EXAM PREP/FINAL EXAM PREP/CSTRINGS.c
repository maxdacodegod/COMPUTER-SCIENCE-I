//Write a function to reverse this c-string
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h> 
#include <malloc.h>

/*****************************************************************************/


char* reverse(char* str);

int main(int argc, char* argv[])
{
    char word[] = "The quick brown fox jumped the dogs.";
    printf("%s\n", word);
    printf("%s", reverse(word));
}


char* reverse(char* str)
{
    int length = (sizeof(str) / sizeof(*str)) - 1;
    int start;
    int end;
        while (start < end)
        {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
        return str;
}
