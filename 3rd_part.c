/*   3번째 파트
주식계산기:  주식 구매가 입력, 현재 주가와 구매가 비교해주는 기능 (차익, 손익 등)
*/
#include "common.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int third_part()
{
    float buy;
    float sell;
    float tax;
    int stockNo;


    printf("매수단가를 입력해주세요:\n");
    scanf("%f", &buy);
    printf("매도단가를 입력해주세요:\n");
    scanf("%f", &sell);
    printf("매도수량을 입력해주세요:\n");
    scanf("%d", &stockNo);
    printf("증권수수료를 입력해주세요:\n");
    scanf("%f", &tax);
    float current;
    current = sell * stockNo;

    float Buy;
    Buy = buy * stockNo;
    double 매수수수료;
    매수수수료 = (sell * stockNo) * tax;

    double 매도수수료;
    매도수수료 = current * tax + current * 0.003;

    int yn;
    printf("매수를 원한다면 1을 입력, 매도를 원한다면 2를 입력해주세요 ");
    scanf("%d", &yn);
    if (yn == 1)
    {
        double medo;
        medo = sell * stockNo + 매수수수료;
        printf("매도에 필요한 돈은 %.0lf원 입니다\n", medo);

    }

    else if (yn == 2) {
        double rate;
        rate = sell - buy / buy * 100;
        printf("수익률은 %.3lf 입니다\n", rate);

        float buymoney;
        buymoney = current * rate - 매도수수료;
        printf("수익금은 %.0f원 입니다\n", buymoney);
        {if (buymoney > 0) { printf("good\n"); }
        else if (buymoney == 0) { printf("same\n"); }
        else { printf("bad"); }

        }


    }
    return 0;
}