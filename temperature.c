/** 
 * Copyright (c) 2022 by Hosung.Kim <hyongak516@mail.hongik.ac.kr>
 * ==============
 * Hosung.Kim
 * 2022.03.30
 * --------------
 * 한태윤 화씨 섭씨 예제
 * ==============
 */

#include <stdio.h>

// #define LOWER   0
// #define UPPER 300
// #define STEP   20

float getCelsius(float fahr);

int main()
{
    const int LOWER =   0;
    const int UPPER = 300;
    const int STEP  =  20;

    printf("Fahrenheit\tCelsius\n");
    printf("-----------------------\n");

    for (int fahr=LOWER; fahr<=UPPER; fahr=fahr+STEP) {
        printf("%10d\t%7.1f\n", fahr, getCelsius(fahr));
    }
}

float getCelsius(float fahr) {
    return (5 * (fahr-32) / 9);
}