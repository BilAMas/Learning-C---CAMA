#include <stdio.h>

int main(void)
{
    //Declaration
    int AnInteger;
    float AFloat;

    //Assignment - These are constants, they dont change
    AnInteger = 9;
    AFloat = 3.3f;

    //Printing Value Of Variable
    //To print the value of an varaible we use placeholders
    printf("Integer: %d\n", AnInteger);
    //The .p after the perecent sign indicates how many DP you want
    // the float to read. Deafult is 6 DP.
    printf("Float: %.7f\n", AFloat);
    //Can print multiple things at once
    printf ("Integer: %d, Float: %f", AnInteger, AFloat);

}