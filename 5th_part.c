/* 5번째 파트
주식MBTI 사용자 성향에 따라 성향에 알맞은 주식 추천해주는 기능 (nh투자증권참고)
질문 10개정도로 사용자 투자 성향 파악하기
공격투자형, 적극투자형, 위험회피형성향, 위험중립형, 안정추구형 등
*/

#include "common.h"

int fifth_part(void)
{
    int score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0, score6 = 0, score7 = 0; //각 답변의 점수를 저장할 변수 선언, 초기화
    int number1 = 0, number2 = 0, number3 = 0, number4 = 0, number5 = 0, number6 = 0, number7 = 0; //각 질문의 답변을 저장할 변수 선언, 초기화

    float score_final = 0; //socre을 모두 더한 값을 저장할 변수 선언, 초기화
    float score_final2 = 0; //socre_final에 추가 계산한 값을 저장할 변수 선언, 초기화
    
    char go_to_menu = 0; // menu로 돌아갈 것인지 확인하는 변수

    printf("______________________________\n");

    printf("\n질문1) 당신의 연령대는 어떻게 됩니까?\n");
    printf(" 1. 19세 이하  2. 20세~40세  3. 41세~50세  4. 51세~60세  5. 61세 이상\n"); //첫번 째 질문과 보기 출력

    do {
        scanf_s("%d", &number1); //첫번 째 질문에 대한 답변 scanf

        while (1) //문자를 입력했을 때 다시 숫자를 입력받게 하는 역할
        {
            if (getchar() != '\n')
            {
                while (getchar() != '\n'); //문자를 입력한 경우, getchar()를 이용하여 개행 문자를 만날 때까지 입력 버퍼를 소모한다.
                {
                    printf("1~5사이의 값을 입력해 주세요.\n");
                    scanf_s("%d", &number1);
                }
                continue;//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            }
            break;
        }

        if (number1 <= 2) //if문으로 각 답변에 대해 각기 다른 점수 부여
        {
            score1 = 4; //첫번 째 질문에 대한 점수는 score1로 들어간다.
        }
        else if (number1 == 3)
        {
            score1 = 3;
        }

        else if (number1 == 4)
        {
            score1 = 2;
        }

        else if (number1 == 4)
        {
            score1 = 1;
        }


    } while (number1 < 1 | number1>5); //원하는 값(1~5)을 입력받을 때까지 반복하기 위한 do while문


    printf("\n질문2) 투자하고자 하는 자금의 투자 가능 기간은 얼마나 됩니까?\n");
    printf(" 1. 6개월 이내  2. 6개월 이상~1년 이내  3. 1년 이상~2년 이내  4. 2년 이상~3년 이내  5. 3년 이상\n"); //두번 째 질문과 보기 출력

    do
    {
        scanf_s("%d", &number2); //두번 째 질문에 대한 답변 scanf

        while (1) //문자를 입력했을 때 다시 숫자를 입력받게 하는 역할
        {
            if (getchar() != '\n')
            {
                while (getchar() != '\n'); //문자를 입력한 경우, getchar()를 이용하여 개행 문자를 만날 때까지 입력 버퍼를 소모한다.
                {
                    printf("1~5사이의 값을 입력해 주세요.\n");
                    scanf_s("%d", &number2);
                }
                continue;//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            }
            break;
        }

        if (number2 == 1) //if문으로 각 답변에 대해 각기 다른 점수 부여
        {
            score2 = 1;  //두번 째 질문에 대한 점수는 score2로 들어간다.
        }

        else if (number2 == 2)
        {
            score2 = 2;
        }

        else if (number2 == 3)
        {
            score2 = 3;
        }

        else if (number2 == 4)
        {
            score2 = 4;
        }

        else if (number2 == 5)
        {
            score2 = 5;
        }
        else {
            printf("1~5사이의 값을 입력해 주세요.\n"); //else 문을 이용해 1~5의 값을 입력받지 않았을 경우 다시 입력하라는 메시지 출력
        }
    } while (number2 < 1 | number2 >5); //원하는 값(1~5)을 입력받을 때까지 반복하기 위한 do while문


    printf("\n질문3) 다음 중 투자경험과 가장 가까운 것은 어느 것입니까?\n");
    printf(" 1. 은행의 예적금 국채, 지방채, 보증채, MMF, CMA 등 \n");
    printf(" 2. 금융채, 신용도가 높은 회사채, 채권형 펀드, 원금보장형 ELS 등 \n");
    printf(" 3. 신용도 중간 등급의 회사채, 원금의 일부만 보장되는 ELS, 혼합형 펀드 \n");
    printf(" 4. 신용도가 낮은 회사채, 원금이 보장되지 않은 ELS, 시장 수익률 수준의 수익을 추구하는 주식형펀드 등 \n");
    printf(" 5. ELW, 선물옵션, 시장수익률 이상의 수익을 추구하는 주식형펀드, 파생상품에 투자하는 펀드, 주식 신용거래 등\n"); //세번 째 질문과 보기 출력
    do
    {
        scanf_s("%d", &number3); //세번 째 질문에 대한 답변 scanf

        while (1) //문자를 입력했을 때 다시 숫자를 입력받게 하는 역할
        {
            if (getchar() != '\n')
            {
                while (getchar() != '\n'); //문자를 입력한 경우, getchar()를 이용하여 개행 문자를 만날 때까지 입력 버퍼를 소모한다.
                {
                    printf("1~5사이의 값을 입력해 주세요.\n");
                    scanf_s("%d", &number3);
                }
                continue;//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            }
            break;
        }

        if (number3 == 1) //if문으로 각 답변에 대해 각기 다른 점수 부여
        {
            score3 = 1; //세번 째 질문에 대한 점수는 score3로 들어간다.
        }
        else if (number3 == 2)
        {
            score3 = 2;
        }
        else if (number3 == 3)
        {
            score3 = 3;
        }
        else if (number3 == 4)
        {
            score3 = 4;
        }
        else if (number3 == 5)
        {
            score3 = 5;
        }
        else {
            printf("1~5사이의 값을 입력해 주세요.\n"); //else 문을 이용해 1~5의 값을 입력받지 않았을 경우 다시 입력하라는 메시지 출력
        }
    } while (number3 < 1 | number3>5); //원하는 값(1~5)을 입력받을 때까지 반복하기 위한 do while문


    printf("\n질문 4) 금융상품 투자에 대한 본인의 지식수준은 어느 정도라고 생각합니까?\n");
    printf(" 1. [매우 낮은 수준] 투자의사 결정을 스스로 내려본 경험이 없는 정도\n");
    printf(" 2. [낮은 수준] 주식과 채권의 차이를 구분할 수 있는 정도\n");
    printf(" 3. [높은 수준] 투자할 수 있는 대부분의 금융상품의 차이를 구별할 수 있는 정도\n");
    printf(" 4. [매우 높은 수준] 금융상품을 비롯하여 모든 투자대상 상품의 차이를 이해할 수 있는 정도\n"); //네번 째 질문과 보기 출력
    do
    {
        scanf_s("%d", &number4); //네번 째 질문에 대한 답변 scanf

        while (1) //문자를 입력했을 때 다시 숫자를 입력받게 하는 역할
        {
            if (getchar() != '\n')
            {
                while (getchar() != '\n'); //문자를 입력한 경우, getchar()를 이용하여 개행 문자를 만날 때까지 입력 버퍼를 소모한다.
                {
                    printf("1~4사이의 값을 입력해 주세요.\n");
                    scanf_s("%d", &number4);
                }
                continue;//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            }
            break;
        }

        if (number4 == 1) //if문으로 각 답변에 대해 각기 다른 점수 부여
        {
            score4 = 1; //네번 째 질문에 대한 점수는 score4로 들어간다.
        }
        else if (number4 == 2)
        {
            score4 = 2;
        }
        else if (number4 == 3)
        {
            score4 = 3;
        }
        else if (number4 == 4)
        {
            score4 = 4;
        }
        else {
            printf("1~4사이의 값을 입력해 주세요.\n"); //else 문을 이용해 1~4의 값을 입력받지 않았을 경우 다시 입력하라는 메시지 출력
        }
    } while (number4 < 1 | number4>4); //원하는 값(1~4)을 입력받을 때까지 반복하기 위한 do while문


    printf("\n질문5) 현재 투자하고자 하는 자금은 전체 금융자산(부동산 등 제외) 중 어느 정도의 비중을 차지합니까? \n");
    printf(" 1. 10%% 이내  2. 10%% 이상~ 20%% 이내  3. 20%% 이상~30%%이내  4. 30%% 이상~ 40%% 이내  5. 40%% 이상 \n"); //다섯번 째 질문과 보기 출력
    do
    {
        scanf_s("%d", &number5); //다섯번 째 질문에 대한 답변 scanf

        while (1) //문자를 입력했을 때 다시 숫자를 입력받게 하는 역할
        {
            if (getchar() != '\n')
            {
                while (getchar() != '\n'); //문자를 입력한 경우, getchar()를 이용하여 개행 문자를 만날 때까지 입력 버퍼를 소모한다.
                {
                    printf("1~5사이의 값을 입력해 주세요.\n");
                    scanf_s("%d", &number5);
                }
                continue;//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            }
            break;
        }

        if (number5 == 1) //if문으로 각 답변에 대해 각기 다른 점수 부여
        {
            score5 = 5; //다섯번 째 질문에 대한 점수는 score5로 들어간다.
        }
        else if (number5 == 2)
        {
            score5 = 4;
        }
        else if (number5 == 3)
        {
            score5 = 3;
        }
        else if (number5 == 4)
        {
            score5 = 2;
        }
        else if (number5 == 5)
        {
            score5 = 1;
        }
        else {
            printf("1~5사이의 값을 입력해 주세요.\n"); //else 문을 이용해 1~5의 값을 입력받지 않았을 경우 다시 입력하라는 메시지 출력
        }
    } while (number5 < 1 | number5>5); //원하는 값(1~5)을 입력받을 때까지 반복하기 위한 do while문


    printf("\n질문6) 다음 중 수입원을 가장 잘 나타내는 것은 어느 것입니까?\n");
    printf(" 1. 현재 일정한 수입이 발생하고 있으며, 향후 수준을 유지하거나 증가할 것으로 예상된다.\n");
    printf(" 2. 현재 일정한 수입이 발생하고 있으나, 향후 감소하거나 불안정 할 것으로 예상된다.\n");
    printf(" 3. 현재 일정한 수입이 없으며, 원금이 주 수입원이다.\n"); //여섯번 째 질문과 보기 출력
    do
    {
        scanf_s("%d", &number6); //여섯번 째 질문에 대한 답변 scanf

        while (1) //문자를 입력했을 때 다시 숫자를 입력받게 하는 역할
        {
            if (getchar() != '\n')
            {
                while (getchar() != '\n'); //문자를 입력한 경우, getchar()를 이용하여 개행 문자를 만날 때까지 입력 버퍼를 소모한다.
                {
                    printf("1~3사이의 값을 입력해 주세요.\n");
                    scanf_s("%d", &number6);
                }
                continue;//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            }
            break;
        }

        if (number6 == 1) //if문으로 각 답변에 대해 각기 다른 점수 부여
        {
            score6 = 3;
        }
        else if (number6 == 2)
        {
            score6 = 2;
        }
        else if (number6 == 3)
        {
            score6 = 1;
        }
        else {
            printf("1~3사이의 값을 입력해 주세요.\n"); //else 문을 이용해 1~3의 값을 입력받지 않았을 경우 다시 입력하라는 메시지 출력
        }
    } while (number6 < 1 | number6>3); //원하는 값(1~3)을 입력받을 때까지 반복하기 위한 do while문


    printf("\n질문7) 만약 투자원금 손실이 발생할 경우 다음 중 감수할 수 있는 손실수준은 어느 것입니까?\n");
    printf(" 1. 무슨 일이 있어도 보존되어야 한다.\n");
    printf(" 2. 10%% 미만까지는 손실을 감수할 수 있을 것 같다.\n");
    printf(" 3. 20%% 미만까지는 손실을 감수할 수 있을 것 같다.\n");
    printf(" 4. 기대수익이 높다면 위험이 높아도 상관하지 않겠다.\n"); //일곱번 째 질문과 보기 출력
    do
    {
        scanf_s("%d", &number7); //일곱번 째 질문에 대한 답변 scanf

        while (1) //문자를 입력했을 때 다시 숫자를 입력받게 하는 역할
        {
            if (getchar() != '\n')
            {
                while (getchar() != '\n'); //문자를 입력한 경우, getchar()를 이용하여 개행 문자를 만날 때까지 입력 버퍼를 소모한다.
                {
                    printf("1~4사이의 값을 입력해 주세요.\n");
                    scanf_s("%d", &number7);
                }
                continue;//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            }
            break;
        }

        if (number7 == 1) //if문으로 각 답변에 대해 각기 다른 점수 부여
        {
            score7 = -2;
        }
        else if (number7 == 2)
        {
            score7 = 2;
        }
        else if (number7 == 3)
        {
            score7 = 4;
        }
        else if (number7 == 4)
        {
            score7 = 6;
        }
        else {
            printf("1~4사이의 값을 입력해 주세요.\n"); //else 문을 이용해 1~4의 값을 입력받지 않았을 경우 다시 입력하라는 메시지 출력
        }
    } while (number7 < 1 | number7>4); //원하는 값(1~4)을 입력받을 때까지 반복하기 위한 do while문

    score_final = score1 + score2 + score3 + score4 + score5 + score6 + score7; //각 질문에 대한 점수 모두 더하기
    score_final2 = score_final / 32 * 100; //더한 점수에 32를 나누고 100을 곱해 최종 점수 도출

    if (score_final2 <= 20) //최종점수가 20점 이하일 경우 안정형
    {
        printf("\n\n당신은 [안정형] 입니다.\n\n[안정형]은 예금 또는 적금 수준의 수익률을 기대하며, 투자 원금에 손실이 발생하는 것을 원치 않는 유형입니다. \n\n당신에게는 MMF, RP거래, 국공채, 지방채 등의 초저위험상품을 추천합니다.\n");
    } //안정형이라는 문구와 함께 안정형에 대한 설명과 성향에 맞는 상품 추천
    else if (score_final2 > 20 && score_final2 <= 40) //최종점수가 20점 초과 40점 이하일 경우 안정추구형
    {
        printf("\n\n당신은 [안정추구형] 입니다.\n\n[안정추구형]은 투자원금 손실을 최소화하고, 이자 소득이나 배당소득 수준의 안정적인 투자를 목표로 하는 유형입니다. \n\n당신에게는 우량채펀드, 우량회사채, 금융채, ELB 등의 저위험상품을 추천합니다.\n");
    } //안정추구형형이라는 문구와 함께 안정추구형에 대한 설명과 성향에 맞는 상품 추천
    else if (score_final2 > 40 && score_final2 <= 60) //최종점수가 40점 초과 60점 이하일 경우 위험중립형
    {
        printf("\n\n당신은 [위헙중립형] 입니다.\n\n[위험중립형]은 투자에는 그에 상응하는 투자 위험이 있음을 충분히 인식하고 있으며, 예금과 적금보다 높은 수익을 기대할 수 있다면 일정 수준의 손실위험을 감수할 수 있는 유형입니다. \n\n당신에게는 장기주식펀드, 혼합형 펀드, 투자회사채, ELS 등의 중립형상품을 추천합니다.\n");
    } //위험중립형이라는 문구와 함께 위험중립형에 대한 설명과 성향에 맞는 상품 추천
    else if (score_final2 > 60 && score_final2 <= 80) //최종점수가 60점 초과 80점 이하일 경우 적극투자형
    {
        printf("\n\n당신은 [적극투자형] 입니다.\n\n[적극투자형]은 투자원금의 보전보다는 위험을 감내하더라도 높은 수준의 투자 수익 실현을 추구하는 유형입니다. \n\n당신에게는 주식투자, 주식펀드, 신층국채권, 투기회사채 등의 고위험상품을 추천합니다.\n");
    } //적극투자형이라는 문구와 함께 적극투자형에 대한 설명과 성향에 맞는 상품 추천
    else if (score_final2 > 80) //최종점수가 80점을 초과할 경우 공격투자형
    {
        printf("\n\n당신은 [공격투자형] 입니다.\n\n[공격투자형]은 시장 평균 수익률을 훨씬 넘어서는 높은 수준의 투자 수익을 추구하며, 이를 위해 자산 가치의 변동에 따른 손실위험을 적극 수용하는 유형입니다. \n\n당신에게는 선물옵션, 레버리지, ELW, ETN 등의 초고위험상품을 추천합니다.\n");
    } //공격투자형이라는 문구와 함께 공격투자형에 대한 설명과 성향에 맞는 상품 추천

    printf("______________________________\n\n");


    /**메뉴로 돌아가기**/
    getchar();
    printf("\nEnter를 누르시면 메뉴로 돌아갑니다.");
    scanf("%c", &go_to_menu);
    if (go_to_menu == '\n')
        printf("메뉴로 돌아갑니다.\n\n\n");
    func_main();
    return 0;
}