/** 
 * Copyright (c) 2022 by Hosung.Kim <hyongak516@mail.hongik.ac.kr>
 * ==============
 * Hosung.Kim
 * 2022.03.31
 * --------------
 * 한태윤 로또 예제
 * ==============
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

bool hasOverlap(int temp, int lotto[], int depth);

int main()
{
    const int LOTTO_LEN = 6;
    int count;
    int lotto[LOTTO_LEN];

    scanf("%d", &count);
    srand(time(NULL));
    for (int i=0; i<count; i++) {
        for (int j=0; j<LOTTO_LEN; j++) {
            int temp;
            do {
                temp = rand() % 45 + 1;
            } while (hasOverlap(temp, lotto, j));
            lotto[j] = temp;
        }
        for (int i=0; i<LOTTO_LEN-1; i++) {
            for (int j=i+1; j<LOTTO_LEN; j++) {
                if (lotto[i] > lotto[j]) {
                    int temp = lotto[i];
                    lotto[i] = lotto[j];
                    lotto[j] = temp;
                }
            }
        }
        for (int i=0; i<LOTTO_LEN; i++) {
           printf("%d, ", lotto[i]);
        }
        printf("\b\b  \n");
    }
    return 0;
}

bool hasOverlap(int temp, int lotto[], int depth) {
    for (int i=0; i<depth; i++) {
        if (lotto[i] == temp) {
            return true;
        }
    }
    return false;
}