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
 * 04/30/2024
 * Can validate first number
 *
*/


/* includes */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>






/* defines */
#define knum1ArraySize 4
#define knum2ArraySize 1
#define kcorrectNumArgs 3

/* function declarations */

bool arg1Valid(char *s1);
bool allHex(char *s1);
bool arg2Valid(char *s2);
bool allDec(char *s2);
bool validateArgs(char *s1, char *s2);
int arg1_to_num(char *s1);
int arg2_to_num(char *s2);



int main(int argc, char *argv[]){


    char s1[knum1ArraySize + 1], s2[knum2ArraySize + 1];
    size_t array2Len = knum2ArraySize;
    size_t array1Len = knum1ArraySize;
    int num1, num2, result;

    num1 = 0;
    num2 = 0;
    result = 0;


/* use memset here? */

    memset(s2, '\0', array2Len + 1);



/* correct number of args? */
    if(argc != kcorrectNumArgs){
        printf("useage: progname arg1 arg2\n");
        printf("arg1 is a two character hex number\n");
        printf("arg2 is a one character decimal number\n");
        exit(0);
    }


/* check arg lengths */

    if(strlen(argv[1]) != array1Len){
        printf("error: arg1 invalid\n");
        exit(0);
    }

    if(strlen(argv[2]) != array2Len){
        printf("error: arg2 invalid\n");
        exit(0);
    }


/* copy argv[1] into s1 */
    strncpy(s1, argv[1], array1Len);

/* copy argv[2] into s2 */

    strncpy(s2, argv[2], array2Len);



    if(validateArgs(s1, s2)){
        num1 = arg1_to_num(s1);
        num2 = arg2_to_num(s2);
        result = num1 << num2;
        printf("%x\n", result);
    }else{
        printf("error: could not shift\n");
    }









    return(0);


}


/* function definitions */

bool arg1Valid(char *s1) {

    bool arrayValid = false;

    if((strlen(s1) == knum1ArraySize) && (allHex(s1) == true))
        arrayValid = true;


    return(arrayValid);
}


bool arg2Valid(char *s2) {

    bool arrayValid = false;

    if((strlen(s2) == knum2ArraySize) && (allDec(s2) == true))
        arrayValid = true;

    return(arrayValid);
}









bool allHex(char *s1) {

    bool returnValue;
    int index;



    returnValue = false;
    index = 0;

    index = 0;
    while(*(s1 + index) != '\0'){
        if((isxdigit(*(s1 + index)))){
            ++index;
            returnValue = true;
        }else{
            returnValue = false;
            break;
        }
    }

    return(returnValue);

}



bool allDec(char *s2) {

    bool returnValue;
    int index;

    returnValue = false;
    index = 0;

    index = 0;
    while(*(s2 + index) != '\0'){
        if((isdigit(*(s2 + index)))){
            ++index;
            returnValue = true;
        }else{
            returnValue = false;
            break;
        }
    }
    return(returnValue);
}




bool validateArgs(char *s1, char *s2) {


    bool returnValue;



    returnValue = false;




    if(arg1Valid(s1) == false) {
        printf("error: arg1 invalid\n");
        exit(0);
    }

    if(arg2Valid(s2) == false) {
        printf("error: arg2 invalid\n");
        exit(0);
    }















    return(returnValue);
}




/* convert a hex string to an int */
int arg1_to_num(char *s1){







}




/* turn a dec sting to an int */
int arg2_to_num(char *s2){










}

