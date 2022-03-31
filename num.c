/** 
 * Copyright (c) 2022 by Hosung.Kim <hyongak516@mail.hongik.ac.kr>
 * ==============
 * Hosung.Kim
 * 2022.03.30
 * --------------
 * 한태윤 if문 예제
 * --------------
 * 1~100 숫자 맞추기 게임으로 사용자가 입력한 숫자보다 랜덤 숫자가 큰지 작은지를 알려주는 작업을 정답을 맞출 때까지 반복한다.
 * ==============
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int randomNum = rand() % 100 + 1;
    int count = 0;
    int userNum;

    printf("1~100 숫자 맞추기 게임입니다. 숫자를 입력하세요.\n=> ");
    while (1) {
        scanf("%d", &userNum);
        if (randomNum > userNum) {
            printf("%d보다 큽니다. ", userNum);
        } else if (randomNum < userNum) {
            printf("%d보다 작습니다. ", userNum);
        } else {
            printf("정답입니다. %d번만에 맞췄습니다.\n", count+1);
            break;
        }
        count++;
        printf("%d번 시도했습니다.\n=> ", count);
    }
    return 0;
}