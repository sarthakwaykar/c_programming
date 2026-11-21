#include <stdio.h>
#include <stdlib.h>

int Addition(int ino1, int ino2)
{
    int ians = 0;
    ians = ino1 + ino2;
    return ians;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0, iresult = 0;
    print("enter the first number :-\n");
    scanf("%d", &ivalue1);

    print("enter the second number :-\n");
    scanf("%d", &ivalue2);

    iresult = Addition(ivalue1, ivalue2);
    print("addition is %d\n", iresult);

    return EXIT_SUCCESS;
}