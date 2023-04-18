// WORDLE Problem
#include <stdio.h>
#include <string.h>

int main()
{
    int T, i;
    scanf("%d", &T);
    while (T--)
    {
        char s[6], t[6], c[6];
        printf("Hidden word: ");
        scanf("%s", s);
        printf("Guess word: ");
        scanf("%s", t);
        for (i = 0; i < strlen(s); i++)
        {
            if (s[i] == t[i])
            {
                c[i] = 'G';
            }
            else
            {
                c[i] = 'B';
            }
        }
        printf("Word: %s\n", c);
    }
    return 0;
}