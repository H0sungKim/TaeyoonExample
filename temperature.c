/** 
 * Copyright (c) 2022 by Hosung.Kim <hyongak516@mail.hongik.ac.kr>
 * ==============
 * Hosung.Kim
 * 2022.03.30
 * --------------
 * 한태윤 화씨 섭씨 예제
 * --------------
 * 
 * Fahrenheit      Celsius
 * -----------------------
 *          0        -17.8
 *         20         -6.7
 *         40          4.4
 *         60         15.6
 *         80         26.7
 *        100         37.8
 *        120         48.9
 *        140         60.0
 *        160         71.1
 *        180         82.2
 *        200         93.3
 *        220        104.4
 *        240        115.6
 *        260        126.7
 *        280        137.8
 *        300        148.9
 * 
 * 위와 같이 화씨와 섭씨 온도 표를 출력한다.
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