#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[20];
    char buf[20];
    scanf("%c",&ch);
    printf("%c\n",ch);
    getchar(); 

    fgets(s,sizeof(s),stdin);
    printf("%s",s);

    fgets(buf,sizeof(buf),stdin);
    printf("%s", buf);
    return 0;
}
