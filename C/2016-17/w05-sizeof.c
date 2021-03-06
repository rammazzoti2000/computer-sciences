/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2016-17               *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://staff.polito.it/giovanni.squillero/dida.php   *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Goodbye!\n");

    printf("Sizeof of char: %d\n", sizeof (char));
    printf("Sizeof of short int: %d\n", sizeof (short int));
    printf("Sizeof of int: %d\n", sizeof (int));
    printf("Sizeof of long int: %d\n", sizeof (long int));
    printf("Sizeof of long long int: %d\n", sizeof (long long int));

    int a = -2;
    unsigned int b = 42;
    printf("%d\n", a + b);
    printf("%u\n", a + b);

    return 0;
}
