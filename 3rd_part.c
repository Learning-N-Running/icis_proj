/*   3��° ��Ʈ
�ֽİ���:  �ֽ� ���Ű� �Է�, ���� �ְ��� ���Ű� �����ִ� ��� (����, ���� ��)
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


    printf("�ż��ܰ��� �Է����ּ���:\n");
    scanf("%f", &buy);
    printf("�ŵ��ܰ��� �Է����ּ���:\n");
    scanf("%f", &sell);
    printf("�ŵ������� �Է����ּ���:\n");
    scanf("%d", &stockNo);
    printf("���Ǽ����Ḧ �Է����ּ���:\n");
    scanf("%f", &tax);
    float current;
    current = sell * stockNo;

    float Buy;
    Buy = buy * stockNo;
    double �ż�������;
    �ż������� = (sell * stockNo) * tax;

    double �ŵ�������;
    �ŵ������� = current * tax + current * 0.003;

    int yn;
    printf("�ż��� ���Ѵٸ� 1�� �Է�, �ŵ��� ���Ѵٸ� 2�� �Է����ּ��� ");
    scanf("%d", &yn);
    if (yn == 1)
    {
        double medo;
        medo = sell * stockNo + �ż�������;
        printf("�ŵ��� �ʿ��� ���� %.0lf�� �Դϴ�\n", medo);

    }

    else if (yn == 2) {
        double rate;
        rate = sell - buy / buy * 100;
        printf("���ͷ��� %.3lf �Դϴ�\n", rate);

        float buymoney;
        buymoney = current * rate - �ŵ�������;
        printf("���ͱ��� %.0f�� �Դϴ�\n", buymoney);
        {if (buymoney > 0) { printf("good\n"); }
        else if (buymoney == 0) { printf("same\n"); }
        else { printf("bad"); }

        }


    }
    return 0;
}