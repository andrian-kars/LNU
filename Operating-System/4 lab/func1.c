#include <stdio.h>
#include <string.h>
int main(void)
{
char *strichkaMarichka = "Marichka";
char *strichkaNeMarichka = "NeMarichka";
printf("\n\tChy obi Marichki\n\n");
int zrivnyatiResultat = strcmp(strichkaMarichka, strichkaNeMarichka);
zrivnyatiResultat == 0 ? printf("obi Marichki") : printf("obi ne Marichki");
}
