#include "common.h"

int manual = 0;

int func_main(void)
{
    int manual = 0;
    printf("\n������ ����ũ ���� �湮�� ȯ���մϴ�! \n\n");
    printf(" 1. ������ �ְ� �����ϱ�\n 2. ���� �ֽ� ���� ��ȸ\n 3. ���� ���� ����\n 4. ������ ����ũ�� ��ü�� �ֽĽ��� �м� ���� �ޱ�\n 5. ���� �ֽ� ���� �˾ƺ��� \n\n");
    printf("�湮 ������ ������ ���⿡ �ش��ϴ� ���ڷ� �Է����ּ���.\n");

    do
    {
        scanf("%d", &manual);

        if (manual == 1)
        {

            printf("������ �ְ� �����ϱ⸦ �����ϼ̳׿�.\n������ ���� �������� ������ ��, \n");
            first_part();
        }
        else if (manual == 2)
        {
            printf("���� �ֽ� ���� ��ȸ�� �����ϼ̳׿�.\n");
            second_part();
        }
        else if (manual == 3)
        {
            printf("���� ���� ���⸦ �����ϼ̳׿�.\n");
            third_part();
        }

        else if (manual == 4)
        {
            printf("������ ����ũ�� ��ü�� �ֽĽ��� �м� ���� �ޱ⸦ �����ϼ̳׿�.\n");
            fourth_part();
        }

        else if (manual == 5)
        {
            printf("���� �ֽ� ���� �˾ƺ��⸦ �����ϼ̳׿�.\n");
            fifth_part();
        }

        else
        {
            while (getchar() != '\n');
            printf("1~5 ������ ���� �Է��ϼ���.\n");
        }

    } while (manual < 1 | manual >5);
    return 0;

}