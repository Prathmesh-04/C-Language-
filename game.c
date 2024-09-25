#include <stdio.h>
void main()
/*Making a  short mad libs game*/
{
    char color[15];
    char pluralnoun[15];
    char name[15];
    printf("Enter the name of any color: ");
    scanf("%s", color);
    printf("Enter any plural noun: ");
    scanf("%s", pluralnoun);
    printf("Enter any name: ");
    scanf("%s", name);
    printf("\n");
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralnoun);
    printf("I love %s\n", name);
    printf("\n");
    printf("I hope this poem was funny!!");
}