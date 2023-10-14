#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i;
    
    i = 0;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    while (s[i])
    {
        printf("%c", s[i]);
        if (s[i] == ' ')
        {
            printf("\n");
        }
        i++;
    }
    return 0;
}
