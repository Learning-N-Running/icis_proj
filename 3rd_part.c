/*   3��° ��Ʈ
�ֽİ���:  �ֽ� ���Ű� �Է�, ���� �ְ��� ���Ű� �����ִ� ��� (����, ���� ��)
*/
#include "common.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char go_to_menu = 0;

int third_part()
{
    float buy = 0;//�ż����� ���� ����
    float sell = 0;//�ŵ����� ���� ����
    float commission = 0;//���� ������ ���� ����
    float stockNo = 0;//���� ���� ����
    float current;//�ŵ�����x�ŵ����� ���� ����
    current = sell * stockNo;

    float Buy;//�ż�����x�ż����� ���� ����
    Buy = buy * stockNo;
    float �ż�������;//�ż�������=�ż�����x�ż�����x ���ǰŷ������� ���� ����
    �ż������� = buy * stockNo * commission*0.01;

    float �ŵ�������;//�ŵ�������= �ŵ�����x �ŵ�����x ���ǰŷ������� + �ŵ�����x �ŵ�����x���ǰŷ���(0.003���� ����) ���� ����
    �ŵ������� = sell * stockNo * commission*0.01 + sell * stockNo * 0.003;

    int yn;// 1�� �Ǵ� 2�� �Է¹޵��� ���� ����
    char go_to_menu = 0;

    ///�ż� �Ǵ� �ŵ� ����///
    printf("�ż��� ���Ѵٸ� 1�� �Է�, �ŵ��� ���Ѵٸ� 2�� �Է����ּ��� ");
    do//1���̳� 2���� �Է����� ������ �ٽ� �Է� �޵��� ��
    {
        scanf("%d", &yn);

        ////////�ż��� ���ϴ� ���////////
        if (yn == 1)
        {
            printf("�ż������� �Է����ּ���:\n");
            scanf("%f", &buy);// �ż������� �Է¹���
            while (1)
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n'); //���ڸ� �Է��� ���, getchar()�� �̿��Ͽ� ���� ���ڸ� ���� ������ �Է� ���۸� �Ҹ��Ѵ�.
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n�ż������� �ٽ� �Է��ϼ���:  ");
                        scanf("%f", &buy);
                    }
                    continue;//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
                }

                break;
            }

            printf("�ż������� �Է����ּ���:\n");
            scanf("%f", &stockNo);//�ż������� �Է¹���

            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n�ż������� �ٽ� �Է��ϼ���:  ");
                        scanf("%f", &stockNo);
                    }
                    continue;
                }

                break;
            }


            printf("���Ǽ�����(�ۼ�Ʈ)�� �Է����ּ���:\n");
            scanf("%f", &commission);//���Ǽ����Ḧ �Է¹���
            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n���Ǽ�����(�ۼ�Ʈ)�� �ٽ� �Է��ϼ���:  ");
                        scanf("%f", &commission);
                    }
                    continue;
                }

                break;
            }

            float Buy;//�ż�����x�ż����� ���� ����
            Buy = buy * stockNo;
            float mesu;//�ż��� �ʿ��� ���� �ż�����x �ż����� +(�ż�����x �ż�����)x���Ǽ�����
            mesu = Buy + Buy * commission*0.01;
            printf("�ż��� �ʿ��� ���� %.1f�� �Դϴ�\n", mesu);

        }


        ///�ŵ��� ���ϴ� ���///
        else if (yn == 2) {
            printf("�ż��ܰ��� �Է����ּ���:\n");
            scanf("%f", &buy);//�ż��ܰ� �Է�

            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n�ż��ܰ��� �ٽ� �Է��ϼ���:  ");
                        scanf("%f", &buy);
                    }
                    continue;
                }

                break;
            }

            printf("�ŵ��ܰ��� �Է����ּ���:\n");
            scanf("%f", &sell);//�ŵ��ܰ� �Է�
            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n�ŵ��ܰ��� �ٽ� �Է��ϼ���:  ");
                        scanf("%f", &sell);
                    }
                    continue;
                }

                break;
            }
            printf("�ŵ������� �Է����ּ���:\n");
            scanf("%f", &stockNo);//�ŵ� ���� �Է�
            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n�ŵ������� �ٽ� �Է��ϼ���:  ");
                        scanf("%f", &stockNo);
                    }
                    continue;
                }

                break;
            }
            printf("���Ǽ�����(�ۼ�Ʈ)�� �Է����ּ���:\n");
            scanf("%f", &commission);//���� ������ �Է�

            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n���Ǽ�����(�ۼ�Ʈ)�� �ٽ� �Է��ϼ���:  ");
                        scanf("%f", &commission);
                    }
                    continue;
                }

                break;
            }
            float current;//�ŵ�����x�ŵ����� ���� ����
            current = sell * stockNo;
            float current1;//�ŵ�����x�ŵ�����x���ǰŷ������� ���� ����
            current1 = sell * stockNo * commission*0.01;
            float current2;//�ŵ�����x�ŵ�����x���ǰŷ��� ���� ����
            current2 = sell * stockNo * 0.003;
            float buymoney;
            buymoney = current - current1 - current2;//�ŵ�����=(�ŵ�����x�ŵ�����)-(�ŵ�����x�ŵ�����x���ǰŷ�������)-�ŵ�����x�ŵ�����x���ǰŷ���)
            printf("\n�Ѹŵ������� %.0f�� �Դϴ�\n", buymoney);
            float Buy;//�ż�����x�ż����� ���� ����
            Buy = buy * stockNo;
            float realmoney;
            float �ż�������;//�ż�������=�ż�����x�ż�����x ���ǰŷ������� ���� ����
            �ż������� = buy * stockNo * commission*0.01;
            realmoney = buymoney - Buy - �ż�������;//���ͱ�={(�ŵ�����x�ŵ�����)-(�ŵ�����x�ŵ�����x���ǰŷ�������)-(�ŵ�����x�ŵ�����x���ǰŷ���)}-(�ż�����x�ż�����)-{(�ż�����x�ż�����x ���ǰŷ�������)}
            printf("���ͱ��� %.0f�� �Դϴ�\n", realmoney);
            float rate;
            rate = realmoney / Buy * 100;//���ͷ�= ���ͱ�/(�ż�����x�ż�����)x100
            printf("���ͷ��� %.3f�ۼ�Ʈ �Դϴ�\n", rate);
            {//���� ���ͷ��� 0���� ũ�� ����, 0�̸� ����, ���� ��� �ս� ���
                if (realmoney > 0) { printf("�����մϴ�! �ŵ� ��� �����Դϴ�!\n"); }
                else if (realmoney == 0) { printf("�ŵ� ��� �����Դϴ�!\n"); }
                else { printf("�ŵ� ��� �ս��̽ñ���!\n"); }

            }

        }

    } while (yn < 1 | yn >2);//1���̳� 2���� �Է����� ������ �ٽ� �Է� �޵��� ��

    printf("\nEnter�� �����ø� �޴��� ���ư��ϴ�.");
    scanf("%c", &go_to_menu);
    if (go_to_menu == '\n')
        printf("�޴��� ���ư��ϴ�.\n\n\n");
    func_main();
    return 0;
}