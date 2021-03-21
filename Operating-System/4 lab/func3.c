#include <stdio.h>
#include <string.h>
int main(void)
{
char connectedArr[100];
char *strOne = "Andrian_";
strcpy(connectedArr, strOne);
char *strTwo = "ProMaster";
strcat(connectedArr, strTwo);
printf("connectedArr = %s\n\n", connectedArr);
}
