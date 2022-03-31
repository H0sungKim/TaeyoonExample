/** 
 * Copyright (c) 2022 by Hosung.Kim <hyongak516@mail.hongik.ac.kr>
 * ==============
 * Hosung.Kim
 * 2022.03.31
 * --------------
 * 한태윤 로또 예제
 * --------------
 * 맨 처음에 로또 번호 6개 몇세트를 출력받을지를 받아오고, 그 세트 수만큼 1~45까지 로또 숫자 6개를 오름차순으로 출력한다.
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
        // 중복되는 수 없이 6개 랜덤 로또 숫자 뽑기
        for (int j=0; j<LOTTO_LEN; j++) {
            int temp;
            do {
                temp = rand() % 45 + 1;
            } while (hasOverlap(temp, lotto, j));
            lotto[j] = temp;
        }
        // 오름차순 정렬
        for (int i=0; i<LOTTO_LEN-1; i++) {
            for (int j=i+1; j<LOTTO_LEN; j++) {
                if (lotto[i] > lotto[j]) {
                    int temp = lotto[i];
                    lotto[i] = lotto[j];
                    lotto[j] = temp;
                }
            }
        }
        // 출력
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