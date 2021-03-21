#include <stdio.h>
#include <string.h>
int main(void)
{
char resolto[100];
char *str = "Andrian_";
strcpy(resolto, str);
char *strTwo = "ProMaster";
strncat(resolto, strTwo, 3);
printf("resolto = %s\n\n", resolto);
}
