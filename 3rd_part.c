/*   3��° ��Ʈ
�ֽİ���:  �ֽ� ���Ű� �Է�, ���� �ְ��� ���Ű� �����ִ� ��� (����, ���� ��)
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
    float �ż�������;
    �ż������� = sell * stockNo * tax;

    float �ŵ�������;
    �ŵ������� = sell * stockNo * tax + sell * stockNo * 0.003;

    int yn;
    printf("�ż��� ���Ѵٸ� 1�� �Է�, �ŵ��� ���Ѵٸ� 2�� �Է����ּ��� ");
    do
    {
        scanf("%d", &yn);

        if (yn == 1)
        {
            printf("�ż������� �Է����ּ���:\n");
            scanf("%f", &buy);
            printf("�ż������� �Է����ּ���:\n");
            scanf("%f", &stockNo);
            printf("���Ǽ����Ḧ �Է����ּ���:\n");
            scanf("%f", &tax);
            float Buy;
            Buy = buy * stockNo;
            float mesu;
            mesu = Buy + Buy * tax;
            printf("�ż��� �ʿ��� ���� %.0f�� �Դϴ�\n", mesu);

        }

        else if (yn == 2) {
            printf("�ż��ܰ��� �Է����ּ���:\n");
            scanf("%f", &buy);
            printf("�ŵ��ܰ��� �Է����ּ���:\n");
            scanf("%f", &sell);
            printf("�ŵ������� �Է����ּ���:\n");
            scanf("%f", &stockNo);
            printf("���Ǽ����Ḧ �Է����ּ���:\n");
            scanf("%f", &tax);
            float current;
            current = sell * stockNo;
            float current1;
            current1 = sell * stockNo * tax;
            float current2;
            current2 = sell * stockNo * 0.003;
            float buymoney;
            buymoney = current - current1 - current2;
            printf("�Ѹŵ������� %.0f�� �Դϴ�\n", buymoney);
            float Buy;
            Buy = buy * stockNo;
            float realmoney;
            realmoney = buymoney - Buy - �ż�������;
            printf("���ͱ��� %.0f�� �Դϴ�\n", realmoney);
            float rate;
            rate = realmoney / Buy * 100;
            printf("���ͷ��� %.3f�ۼ�Ʈ �Դϴ�\n", rate);
            {
                if (realmoney > 0) { printf("good\n"); }
                else if (realmoney == 0) { printf("same\n"); }
                else { printf("bad"); }

            }

        }

    } while (yn < 1 | yn >2);
    return 0;
}