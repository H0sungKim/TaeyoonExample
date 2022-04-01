/** 
 * Copyright (c) 2022 by Hosung.Kim <hyongak516@mail.hongik.ac.kr>
 * ==============
 * Hosung.Kim
 * 2022.03.31
 * --------------
 * 한태윤 pointer 예제
 * ==============
 */

#include <stdio.h>

void exchange1(int a, int b);
void exchange2(int* a, int* b);

int main()
{
    // int ary[6] = {1, 5, 6, 20, 43, 45};
    // int* pointer = &ary[0];
    // printf("%d\n", *(pointer+2));


    int num1 = 4;
    int num2 = 31;

    printf("num1 : %d,  num2 : %d\n---after exchange---\n", num1, num2);

    // exchange1(num1, num2);
    exchange2(&num1, &num2);

    printf("num1 : %d,  num2 : %d\n", num1, num2);
    
    return 0;
}

void exchange1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void exchange2(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}