/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2017-18               *
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

// Hello World$
// the$--------
// answer$-----
// is$---------
// 42$---------

int main(int argc, char *argv[])
{
    printf("I just got %d arguments\n", argc);
    for(int t = 0; t < argc; ++t) {
        printf("argv[%d] = ``%s''\n", t, argv[t]);
    }

    return EXIT_SUCCESS;
}
