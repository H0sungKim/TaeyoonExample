/** 
 * Copyright (c) 2022 by Hosung.Kim <hyongak516@mail.hongik.ac.kr>
 * ==============
 * Hosung.Kim
 * 2022.03.30
 * --------------
 * 한태윤 for문 예제
 * --------------
 * 주석의 별 모양대로 별을 출력한다.
 * ==============
 */

#include <stdio.h>

void printStar1(int height);
void printStar2(int height);
void printStar3(int height);

int main()
{
    int height = 5;
    
    printStar1(height);
    return 0;
}

void printStar1(int height) {
    // *
    // **
    // ***
    // ****
    // *****

    for (int i=0; i<height; i++) {
        for (int j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printStar2(int height) {
    // *****
    // ****
    // ***
    // **
    // *

    for (int i=0; i<height; i++) {
        for (int j=height-i; j>0; j--) {
            printf("*");
        }
        printf("\n");
    }
}

void printStar3(int height) {
    //     *
    //    ***
    //   *****
    //  *******
    // *********

    for (int i=0; i<height; i++) {
        for (int j=height-1-i; j>0; j--) {
            printf(" ");
        }
        for (int j=0; j<1+2*i; j++) {
            printf("*");
        }
        printf("\n");
    }
}