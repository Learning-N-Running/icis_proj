/*   3번째 파트
주식계산기:  주식 구매가 입력, 현재 주가와 구매가 비교해주는 기능 (차익, 손익 등)
*/
#include "common.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int third_part()
{
    float buy = 0;
    float sell = 0;
    float tax = 0;
    float stockNo = 0;



    float current;
    current = sell * stockNo;

    float Buy;
    Buy = buy * stockNo;
    float 매수수수료;
    매수수수료 = sell * stockNo * tax;

    float 매도수수료;
    매도수수료 = sell * stockNo * tax + sell * stockNo * 0.003;

    int yn;
    printf("매수를 원한다면 1을 입력, 매도를 원한다면 2를 입력해주세요 ");
    do
    {
        scanf("%d", &yn);

        if (yn == 1)
        {
            printf("매수가격을 입력해주세요:\n");
            scanf("%f", &buy);
            printf("매수수량을 입력해주세요:\n");
            scanf("%f", &stockNo);
            printf("증권수수료를 입력해주세요:\n");
            scanf("%f", &tax);
            float Buy;
            Buy = buy * stockNo;
            float mesu;
            mesu = Buy + Buy * tax;
            printf("매수에 필요한 돈은 %.0f원 입니다\n", mesu);

        }

        else if (yn == 2) {
            printf("매수단가를 입력해주세요:\n");
            scanf("%f", &buy);
            printf("매도단가를 입력해주세요:\n");
            scanf("%f", &sell);
            printf("매도수량을 입력해주세요:\n");
            scanf("%f", &stockNo);
            printf("증권수수료를 입력해주세요:\n");
            scanf("%f", &tax);
            float current;
            current = sell * stockNo;
            float current1;
            current1 = sell * stockNo * tax;
            float current2;
            current2 = sell * stockNo * 0.003;
            float buymoney;
            buymoney = current - current1 - current2;
            printf("총매도수익은 %.0f원 입니다\n", buymoney);
            float Buy;
            Buy = buy * stockNo;
            float realmoney;
            realmoney = buymoney - Buy - 매수수수료;
            printf("손익금은 %.0f원 입니다\n", realmoney);
            float rate;
            rate = realmoney / Buy * 100;
            printf("수익률은 %.3f퍼센트 입니다\n", rate);
            {
                if (realmoney > 0) { printf("good\n"); }
                else if (realmoney == 0) { printf("same\n"); }
                else { printf("bad"); }

            }

        }

    } while (yn < 1 | yn >2);
    return 0;
}