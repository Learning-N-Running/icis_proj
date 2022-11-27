#include "common.h"

int manual = 0;

int func_main(void)
{
    manual = 0; //함수 초기화
    printf("\n차세대 핀테크 어플 방문을 환영합니다! \n\n");
    printf(" 1. 현재 주식 시장 분위기 파악하기\n 2. 주가 검색\n 3. 차익 손익 계산기\n 4. 차세대 핀테크의 자체적 주식시장 분석 정보 받기\n 5. 나의 주식 성향 알아보기 \n\n");
    printf("방문 목적을 다음의 보기에 해당하는 숫자로 입력해주세요.\n");

    do
    {
        scanf("%d", &manual); //사용자가 원하는 메뉴얼 번호 받기

        if (manual == 1) //입력 받은 값이 1일 때, 해당 기능 제공
        {

            printf("\n현재 주식 시장 분위기 파악하기를 선택하셨네요.\n");
            first_part(); //해당 함수 호출
        }
        else if (manual == 2)
        {
            printf("\n주가 검색을 선택하셨네요.\n");
            second_part(); //해당 함수 호출
        }
        else if (manual == 3)
        {
            printf("\n차익 손익 계산기를 선택하셨네요.\n");
            third_part(); //해당 함수 호출
        }

        else if (manual == 4)
        {
            printf("\n차세대 핀테크의 자체적 주식시장 분석 정보 받기를 선택하셨네요.\n");
            fourth_part(); //해당 함수 호출
        }

        else if (manual == 5)
        {
            printf("\n나의 주식 성향 알아보기를 선택하셨네요.\n");
            fifth_part(); //해당 함수 호출
        }

        else //입력 받은 값이 1~5사이의 숫자가 아닐 시
        {
            while (getchar() != '\n'); //이외의 입력받은 값 다 날린 후
            printf("1~5 사이의 값을 입력하세요.\n"); //올바른 값 입력하라는 메세지 출력
        }

    } while (manual < 1 | manual >5); //받은 값이 1~5사이의 숫자가 아닐시 제대로 받을 때 까지 반복

    return 0;
}