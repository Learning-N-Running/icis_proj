#include "common.h"

int manual = 0;

int func_main(void)
{
    int manual = 0;
    printf("\n차세대 핀테크 어플 방문을 환영합니다! \n\n");
    printf(" 1. 오늘의 주가 예상하기\n 2. 나의 주식 정보 조회\n 3. 차익 손익 계산기\n 4. 차세대 핀테크의 자체적 주식시장 분석 정보 받기\n 5. 나의 주식 성향 알아보기 \n\n");
    printf("방문 목적을 다음의 보기에 해당하는 숫자로 입력해주세요.\n");

    do
    {
        scanf("%d", &manual);

        if (manual == 1)
        {

            printf("오늘의 주가 예상하기를 선택하셨네요.\n오늘의 시장 움직임을 보았을 때, \n");
            first_part();
        }
        else if (manual == 2)
        {
            printf("나의 주식 정보 조회를 선택하셨네요.\n");
            second_part();
        }
        else if (manual == 3)
        {
            printf("차익 손익 계산기를 선택하셨네요.\n");
            third_part();
        }

        else if (manual == 4)
        {
            printf("차세대 핀테크의 자체적 주식시장 분석 정보 받기를 선택하셨네요.\n");
            fourth_part();
        }

        else if (manual == 5)
        {
            printf("나의 주식 성향 알아보기를 선택하셨네요.\n");
            fifth_part();
        }

        else
        {
            while (getchar() != '\n');
            printf("1~5 사이의 값을 입력하세요.\n");
        }

    } while (manual < 1 | manual >5);
    return 0;

}