/*   3��° ��Ʈ
�ż�/�ŵ� ����:  �ֽ� ���Ű� �Է�, ���� �ְ��� ���Ű� �����ִ� ��� (����, ���� ��)
*/

#include "common.h"

int third_part()
{
    char go_to_menu = 0;

    float buy = 0; // �ż����� ���� ����
    float sell = 0; // �ŵ����� ���� ����
    float commission = 0; // ���� ������ ���� ����
    float stockNo = 0; // ���� ���� ����
    float current; // (�ŵ����� x �ŵ�����) ���� ����
    float Buy; // (�ż����� x �ż�����) ���� ����
    float comm_buy; //�ż������� // comm_buy = (�ż����� x �ż����� x ���ǰŷ�������) ���� ����
    float mesu; // �ż��� �ʿ��� �� // (�ż����� x �ż�����  +  �ż����� x �ż����� x ���Ǽ�����) ���� ����


    int yn;// 1�� �Ǵ� 2�� �Է¹޵��� ���� ����

    printf("______________________________\n\n");

    /** �ż� �Ǵ� �ŵ� ���� **/
    printf("�ż��� ���Ѵٸ� 1�� �Է�, �ŵ��� ���Ѵٸ� 2�� �Է��ϼ���: ");

    do //1���̳� 2���� �Է����� ������ �ٽ� �Է� �޵��� ��
    {
        scanf("%d", &yn);

        /// �ż��� ���ϴ� ��� ///
        if (yn == 1)
        {
            printf("\n************");
            printf(" �ż� ");
            printf("************\n");

            printf("\n�ż������� �Է��ϼ���: ");
            scanf("%f", &buy);// �ż������� �Է¹���
            while (1)
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n'); //���ڸ� �Է��� ���, getchar()�� �̿��Ͽ� ���� ���ڸ� ���� ������ �Է� ���۸� �Ҹ��Ѵ�.
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n�ż������� �ٽ� �Է��ϼ���: ");
                        scanf("%f", &buy);
                    }
                    continue;//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
                }

                break;
            }

            printf("\n�ż������� �Է��ϼ���: ");
            scanf("%f", &stockNo);//�ż������� �Է¹���
            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n�ż������� �ٽ� �Է��ϼ���: ");
                        scanf("%f", &stockNo);
                    }
                    continue;
                }

                break;
            }

            printf("\n���Ǽ�����(%%)�� �Է��ϼ���: ");
            scanf("%f", &commission);//���Ǽ����Ḧ �Է¹���
            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n���Ǽ�����(%%)�� �ٽ� �Է��ϼ���: ");
                        scanf("%f", &commission);
                    }
                    continue;
                }

                break;
            }

            Buy = buy * stockNo;
            mesu = Buy + Buy * commission * 0.01;

            printf("\n\n�ż��� �ʿ��� �ݾ��� %.1f �� �Դϴ�.\n", mesu);
        }


        /// �ŵ��� ���ϴ� ��� ///
        else if (yn == 2) 
        {
            printf("\n************");
            printf(" �ŵ� ");
            printf("************\n");

            printf("\n�ż��ܰ��� �Է��ϼ���: ");
            scanf("%f", &buy);//�ż��ܰ� �Է�
            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n�ż��ܰ��� �ٽ� �Է��ϼ���: ");
                        scanf("%f", &buy);
                    }
                    continue;
                }

                break;
            }

            printf("\n�ŵ��ܰ��� �Է��ϼ���: ");
            scanf("%f", &sell);//�ŵ��ܰ� �Է�
            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n�ŵ��ܰ��� �ٽ� �Է��ϼ���: ");
                        scanf("%f", &sell);
                    }
                    continue;
                }

                break;
            }

            printf("\n�ŵ������� �Է��ϼ���: ");
            scanf("%f", &stockNo);//�ŵ� ���� �Է�
            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n�ŵ������� �ٽ� �Է��ϼ���: ");
                        scanf("%f", &stockNo);
                    }
                    continue;
                }

                break;
            }

            printf("\n���Ǽ�����(%%)�� �Է��ϼ���: ");
            scanf("%f", &commission);//���� ������ �Է�
            while (1)//���ڸ� �Է��� ��� �ٽ� while���� �ʱ�� ���ư� �ڵ尡 ����ȴ�.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("�߸��� ���� �Է��ϼ̽��ϴ�. \n���Ǽ�����(%%)�� �ٽ� �Է��ϼ���: ");
                        scanf("%f", &commission);
                    }
                    continue;
                }

                break;
            }
            
            current = sell * stockNo;
            float current1;//�ŵ�����x�ŵ�����x���ǰŷ������� ���� ����
            current1 = sell * stockNo * commission*0.01;
            float current2;//�ŵ�����x�ŵ�����x���ǰŷ��� ���� ����
            current2 = sell * stockNo * 0.003;
            float buymoney;
            buymoney = current - current1 - current2;//�ŵ�����=(�ŵ�����x�ŵ�����)-(�ŵ�����x�ŵ�����x���ǰŷ�������)-�ŵ�����x�ŵ�����x���ǰŷ���)
            printf("\n\n�� �ŵ������� %.0f �� �Դϴ�.\n", buymoney);
            float Buy;//�ż�����x�ż����� ���� ����
            Buy = buy * stockNo;
            float realmoney;

            comm_buy = buy * stockNo * commission*0.01;
            realmoney = buymoney - Buy - comm_buy;//���ͱ�={(�ŵ�����x�ŵ�����)-(�ŵ�����x�ŵ�����x���ǰŷ�������)-(�ŵ�����x�ŵ�����x���ǰŷ���)}-(�ż�����x�ż�����)-{(�ż�����x�ż�����x ���ǰŷ�������)}
            printf("���ͱ��� %.0f �� �Դϴ�.\n", realmoney);
            float rate;
            rate = realmoney / Buy * 100;//���ͷ�= ���ͱ�/(�ż�����x�ż�����)x100
            printf("���ͷ��� %.3f %% �Դϴ�.\n", rate);
            {//���� ���ͷ��� 0���� ũ�� ����, 0�̸� ����, ���� ��� �ս� ���
                if (realmoney > 0) { printf("\n�����մϴ�! �ŵ� ���, �����Դϴ�!\n"); }
                else if (realmoney == 0) { printf("\n�ŵ� ���, �����Դϴ�!\n"); }
                else { printf("\n��... �ŵ� ���, �ս��̽ñ���.\n"); }
            }
        }

    } while (yn < 1 | yn >2);//1���̳� 2���� �Է����� ������ �ٽ� �Է� �޵��� ��
    printf("______________________________\n\n");

    printf("\nEnter�� �����ø� �޴��� ���ư��ϴ�.");
    scanf("%c", &go_to_menu);
    if (go_to_menu == '\n')
        printf("�޴��� ���ư��ϴ�.\n\n\n");
    func_main();
    return 0;
}