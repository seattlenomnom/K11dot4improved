/* k11dot4improved.c
 * source file for k11dot4improved
 *
 * DESCRIPTION:
 * Mark, what is this program supposed to do?
 *
 *
 *
 *
 * NOTES:
 *03/18/2044
 *Make the design and coding stupid simple.
 *What is the length of argv[1]? What is the length of argv[2]?
 *Is it a shift program, or a rotate program? Make it a shift program, then
 *develope a rotate program.
 *
 *
 *Init program.
 *
 * Obtain validated input.
 *
 * shift left or right depending upon the sign of arg2.
 *
 * print out number.
 *
 *
 *
*/


/* includes */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>







/* defines */
#define knum1ArraySize 4
#define knum2ArraySize 1
#define kcorrectNumArgs 3

/* function declarations */





int main(int argc, char *argv[]){


    char s1[knum1ArraySize + 1], s2[knum2ArraySize + 1];
    size_t array2Len = knum2ArraySize;
    size_t array1Len = knum1ArraySize;
    size_t arraySize = 0;




/* use memset here? */

    memset(s1, '\0', array1Len + 1);
    memset(s2, '\0', array2Len + 1);


/* correct number of args? */
    if(argc != kcorrectNumArgs){
        printf("useage: progname arg1 arg2\n");
        printf("arg1 is a two character hex number\n");
        printf("arg2 is a one character decimal number\n");
        exit(0);
    }


/* copy argv[1] into s1 */
    strncpy(s1, argv[1], array1Len);

/* copy argv[2] into s2 */
    strncpy(s2, argv[2], array2Len);









}


/* function definitions */















