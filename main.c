
#include <stdio.h>

int main()
{
    int count = 100;
    char chs;
    printf("Do you want to know my name ?\n ");
    printf("user : ");
    scanf(" %c", &chs);
    getchar();

    if (chs == 'y')
    {
        printf("It's Amexis.\n");
        printf("returning.......\n");
        return 0;
    }
    else
    {
        printf("Ok , i wont force you.....\n(Press Enter to continue)");
        getchar();
        printf("You know what , fk you\n(Press Enter to continue)");
        getchar();
        for (int i = 0; i < count; i++)
        {
            printf("Amexis\n");
        }

        printf("Btw your IP : 192.19.12.198\n(Press Enter to continue)");
        getchar();
        while (1)
        {
            printf("HAhaHAHA\n");
        }
    }

    return 0;
    // real name : Ankush kumar
}