/** 
 * Copyright (c) 2022 by Hosung.Kim <hyongak516@mail.hongik.ac.kr>
 * ==============
 * Hosung.Kim
 * 2022.03.31
 * --------------
 * 포인터 예제
 * ==============
 */

#include <stdio.h>

int main()
{
    int ary[6] = {1, 5, 6, 20, 43, 45};

    int* pointer = &ary[0];

    printf("%d\n", *(pointer+2));
    
    return 0;
}