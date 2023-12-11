/* k11dot4improved.c
 * source file for k11dot4improved
 *
 * DESCRIPTION:
 *
 *
 *
 *
 * NOTES:
 *
 *
 *
 *
*/


/* includes */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>







/* defines */
#define knum1ArraySize 19
#define knum2ArraySize 3
#define kcorrectArgSize 3

/* function declarations */





int main(int argc, char *argv[]){


    int errorCode, index;
    char s1[knum1ArraySize], s2[3];





    errorCode = 0;
    for(index = 0; index < knum1ArraySize; ++index)
        s1[index] = '\0';

    for(index = 0; index < knum2ArraySize; ++index)
        s2[index] = '\0';


/* input: get argv[1] and argv[2] into program strings */

    if(argc != kcorrectArgSize){
        printf("useage: progname arg1 arg2\n");
        exit(0);
    }





    strncpy(s1, argv[1], knum1ArraySize);

    strncpy(s2, argv[2], knum2ArraySize);









    return(errorCode);
}


/* function definitions */















