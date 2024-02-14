#include <stdio.h>

int main(void)
{
    int length;
    int width;
    int height; 

    length = 12;
    width = 10;
    height = 8; 

    float volume;
    volume = length * width * height;

    float dimensionalWeight;
    dimensionalWeight = volume / 166;

    printf("%f", dimensionalWeight);


}

