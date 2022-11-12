
#include "common.h"

int fifth_part(void)
{
    int score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0, score6 = 0, score7 = 0;
    float score_final = 0;
    float score_final2 = 0;
    int number1 = 0, number2 = 0, number3 = 0, number4 = 0, number5 = 0, number6 = 0, number7 = 0;

    printf("질문1) 당신의 연령대는 어떻게 됩니까?\n");
    printf("1. 19세 이하 2. 20세~40세  3. 41세~50세  4. 51세~60세  5. 61세 이상\n");
    scanf_s("%d", &number1);

    if (number1 <= 2)
    {
        score1 = 4;
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
    else {
        printf("1~5사이의 값을 입력해 주세요.\n");
    }

    printf("질문2) 투자하고자 하는 자금의 투자 가능 기간은 얼마나 됩니까?\n");
    printf("1. 6개월 이내  2. 6개월 이상~1년 이내  3. 1년 이상~2년 이내  4. 2년 이상~3년 이내  5. 3년 이상\n");
    scanf_s("%d", &number2);

    if (number2 == 1)
    {
        score2 = 1;
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
        printf("1~5사이의 값을 입력해 주세요.\n");
    }

    printf("질문3) 다음 중 투자경험과 가장 가까운 것은 어느 것입니까?\n");
    printf("1. 은행의 예적금 국채, 지방채, 보증채, MMF, CMA 등 \n");
    printf("2. 금융채, 신용도가 높은 회사채, 채권형 펀드, 원금보장형 ELS 등 \n");
    printf("3. 신용도 중간 등급의 회사채, 원금의 일부만 보장되는 ELS, 혼합형 펀드 \n");
    printf("4. 신용도가 낮은 회사채, 원금이 보장되지 않은 ELS, 시장 수익률 수준의 수익을 추구하는 주식형펀드 등 \n");
    printf("5. ELW, 선물옵션, 시장수익률 이상의 수익을 추구하는 주식형펀드, 파생상품에 투자하는 펀드, 주식 신용거래 등\n");
    scanf_s("%d", &number3);

    if (number3 == 1)
    {
        score3 = 1;
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
        printf("1~5사이의 값을 입력해 주세요.\n");
    }

    printf("질문 4) 금융상품 투자에 대한 본인의 지식수준은 어느 정도라고 생각합니까?\n");
    printf("1. [매우 낮은 수준] 투자의사 결정을 스스로 내려본 경험이 없는 정도\n");
    printf("2. [낮은 수준] 주식과 채권의 차이를 구분할 수 있는 정도\n");
    printf("3. [높은 수준] 투자할 수 있는 대부분의 금융상품의 차이를 구별할 수 있는 정도\n");
    printf("4. [매우 높은 수준] 금융상품을 비롯하여 모든 투자대상 상품의 차이를 이해할 수 있는 정도\n");
    scanf_s("%d", &number4);

    if (number4 == 1)
    {
        score4 = 1;
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
        printf("1~4사이의 값을 입력해 주세요.\n");
    }

    printf("질문5) 현재 투자하고자 하는 자금은 전체 금융자산(부동산 등 제외) 중 어느 정도의 비중을 차지합니까? \n");
    printf("1. 10%% 이내  2. 10%% 이상~ 20%% 이내  3. 20%% 이상~30%%이내  4. 30%% 이상~ 40%% 이내  5. 40%% 이상 \n");
    scanf_s("%d", &number5);

    if (number5 == 1)
    {
        score5 = 5;
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
        printf("1~5사이의 값을 입력해 주세요.\n");
    }

    printf("질문6) 다음 중 수입원을 가장 잘 나타내는 것은 어느 것입니까?\n");
    printf("1. 현재 일정한 수입이 발생하고 있으며, 향후 수준을 유지하거나 증가할 것으로 예상된다.\n");
    printf("2. 현재 일정한 수입이 발생하고 있으나, 향후 감소하거나 불안정 할 것으로 예상된다.\n");
    printf("3. 현재 일정한 수입이 없으며, 원금이 주수입원이다.\n");
    scanf_s("%d", &number6);

    if (number6 == 1)
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
        printf("1~3사이의 값을 입력해 주세요.\n");
    }

    printf("질문7) 만약 투자원금 손실이 발생할 경우 다음 중 감수할 수 있는 손실수준은 어느 것입니까?\n");
    printf("1. 무슨 일이 있어도 보존되어야 한다.\n");
    printf("2. 10%% 미만까지는 손실을 감수할 수 있을 것 같다.\n");
    printf("3. 20%% 미만까지는 손실을 감수할 수 있을 것 같다.\n");
    printf("4. 기대수익이 높다면 위험이 높아도 상관하지 않겠다.\n");
    scanf_s("%d", &number7);

    if (number7 == 1)
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
        printf("1~4사이의 값을 입력해 주세요.\n");
    }

    score_final = score1 + score2 + score3 + score4 + score5 + score6 + score7;
    score_final2 = score_final / 32 * 100;

    if (score_final2 <= 20)
    {
        printf("당신은 '안정형' 입니다.\n'안정형'은 예금 또는 적금 수준의 수익률을 기대하며, 투자 원금에 손실이 발생하는 것을 원치 않는 유형입니다. 당신에게는 MMF, RP거래, 국공채, 지방채 등의 초저위험상품을 추천합니다.");
    }
    else if (score_final2 > 20 && score_final2 <= 40)
    {
        printf("당신은 '안정추구형' 입니다.\n'안정추구형'은 투자원금 손실을 최소화하고, 이자 소득이나 배당소득 수준의 안정적인 투자를 목표로 하는 유형입니다. 당신에게는 우량채펀드, 우량회사채, 금융채, ELB 등의 저위험상품을 추천합니다.");
    }
    else if (score_final2 > 40 && score_final2 <= 60)
    {
        printf("당신은 '위헙중립형' 입니다.\n'위험중립형'은 투자에는 그에 상응하는 투자 위험이 있음을 충분히 인식하고 있으며, 예금과 적금보다 높은 수익을 기대할 수 있다면 일정 수준의 손실위험을 감수할 수 있는 유형입니다. 당신에게는 장기주식펀드, 혼합형 펀드, 투자회사채, ELS 등의 중립형상품을 추천합니다.");
    }
    else if (score_final2 > 60 && score_final2 <= 80)
    {
        printf("당신은 '적극투자형' 입니다.\n'적극투자형'은 투자원금의 보전보다는 위험을 감내하더라도 높은 수준의 투자 수익 실현을 추구하는 유형입니다. 당신에게는 주식투자, 주식펀드, 신층국채권, 투기회사채 등의 고위험상품을 추천합니다. ");
    }
    else if (score_final2 > 80)
    {
        printf("당신은 '공격투자형' 입니다.\n'공격투자형'은 시장 평균 수익률을 훨씬 넘어서는 높은 수준의 투자 수익을 추구하며, 이를 위해 자산 가치의 변동에 따른 손실위험을 적극 수용하는 유형입니다. 당신에게는 선물옵션, 레버리지, ELW, ETN 등의 초고위험상품을 추천합니다.");
    }

    return 0;
}