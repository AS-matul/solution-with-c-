#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char matul;
    char matul_str[1000];
    char matul_sent[1000];
    scanf("%c", &matul);
    getchar();
    scanf("%s", &matul_str);
    getchar();
    scanf("%[^\n]s",matul_sent);

    printf("%c\n",matul);
    printf("%s\n",matul_str);
    printf("%s\n", matul_sent);
    return 0;
}
