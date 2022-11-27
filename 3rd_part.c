/*   3번째 파트
매수/매도 계산기:  주식 구매가 입력, 현재 주가와 구매가 비교해주는 기능 (차익, 손익 등)
*/

#include "common.h"

int third_part()
{
    int yn; // 1 또는 2를 입력받아 매수 혹은 매도를 선택할 수 있게 하는 변수

    float buy = 0; // 매수가격 변수
    float sell = 0; // 매도가격 변수
    float commission = 0; // 증권 수수료 변수
    float stockNo = 0; // 수량 변수
    float current = 0; // (매도가격 x 매도수량) 변수
    float Buy = 0; // (매수가격 x 매수수량) 변수
    float comm_buy = 0; //매수수수료 // comm_buy = (매수가격 x 매수수량 x 증권거래수수료) 변수
    float mesu = 0; // 매수에 필요한 돈 // (매수가격 x 매수수량  +  매수가격 x 매수수량 x 증권수수료) 변수
    float current1 = 0; // (매도가격 x 매도수량 x 증권거래수수료) 변수
    float current2 = 0; // (매도가격 x 매도수량 x 증권거래세) 변수
    float buymoney; // 매도수익 = (매도가격x매도수량) - (매도가격x매도수량x증권거래수수료) - (매도가격x매도수량x증권거래세)
    float realmoney; // 손익금 = {(매도가격x매도수량) - (매도가격x매도수량x증권거래수수료) - (매도가격x매도수량x증권거래세)} - (매수가격x매수수량) - {(매수가격x매수수량x 증권거래수수료)}
    float rate; // 수익률 = 손익금 / (매수가격x매수수량) x100

    char go_to_menu = 0; // menu로 돌아갈 것인지 확인하는 변수


    printf("______________________________\n\n");

    /** 매수 또는 매도 선택 **/
    printf("매수를 원한다면 1을 입력, 매도를 원한다면 2를 입력하세요: ");

    while (1) //1번이나 2번을 입력하지 않으면 다시 입력 받도록 함
    {
        scanf("%d", &yn);

        /// 매수를 원하는 경우 ///
        if (yn == 1)
        {
            printf("\n************");
            printf(" 매수 ");
            printf("************\n");

            printf("\n매수가격을 입력하세요: ");
            scanf("%f", &buy);// 매수가격을 입력받음
            while (1)
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n'); //문자를 입력한 경우, getchar()를 이용하여 개행 문자를 만날 때까지 입력 버퍼를 소모한다.
                    {
                        printf("잘못된 값을 입력하셨습니다. \n매수가격을 다시 입력하세요: ");
                        scanf("%f", &buy);
                    }
                    continue;//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
                }

                break;
            }

            printf("\n매수수량을 입력하세요: ");
            scanf("%f", &stockNo);//매수수량을 입력받음
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("잘못된 값을 입력하셨습니다. \n매수수량을 다시 입력하세요: ");
                        scanf("%f", &stockNo);
                    }
                    continue;
                }

                break;
            }

            printf("\n증권수수료(%%)를 입력하세요: ");
            scanf("%f", &commission);//증권수수료를 입력받음
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("잘못된 값을 입력하셨습니다. \n증권수수료(%%)를 다시 입력하세요: ");
                        scanf("%f", &commission);
                    }
                    continue;
                }

                break;
            }

            Buy = buy * stockNo;
            mesu = Buy + Buy * commission * 0.01;
            printf("\n\n매수에 필요한 금액은 %.1f 원 입니다.\n", mesu);
            break;
        }


        /// 매도를 원하는 경우 ///
        else if (yn == 2)
        {
            printf("\n************");
            printf(" 매도 ");
            printf("************\n");

            printf("\n매수단가를 입력하세요: ");
            scanf("%f", &buy);//매수단가 입력
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("잘못된 값을 입력하셨습니다. \n매수단가를 다시 입력하세요: ");
                        scanf("%f", &buy);
                    }
                    continue;
                }

                break;
            }

            printf("\n매도단가를 입력하세요: ");
            scanf("%f", &sell);//매도단가 입력
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("잘못된 값을 입력하셨습니다. \n매도단가를 다시 입력하세요: ");
                        scanf("%f", &sell);
                    }
                    continue;
                }

                break;
            }

            printf("\n매도수량을 입력하세요: ");
            scanf("%f", &stockNo);//매도 수량 입력
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("잘못된 값을 입력하셨습니다. \n매도수량을 다시 입력하세요: ");
                        scanf("%f", &stockNo);
                    }
                    continue;
                }

                break;
            }

            printf("\n증권수수료(%%)를 입력하세요: ");
            scanf("%f", &commission);//증권 수수료 입력
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {
                        printf("잘못된 값을 입력하셨습니다. \n증권수수료(%%)를 다시 입력하세요: ");
                        scanf("%f", &commission);
                    }
                    continue;
                }

                break;
            }

            current = sell * stockNo;
            current1 = sell * stockNo * commission * 0.01;
            current2 = sell * stockNo * 0.003;
            buymoney = current - current1 - current2;
            printf("\n\n총 매도수익은 %.0f 원 입니다.\n", buymoney);

            Buy = buy * stockNo;
            comm_buy = buy * stockNo * commission * 0.01;
            realmoney = buymoney - Buy - comm_buy;
            printf("손익금은 %.0f 원 입니다.\n", realmoney);

            rate = realmoney / Buy * 100;
            printf("수익률은 %.3f %% 입니다.\n", rate);

            {//만약 수익률이 0보다 크면 이익, 0이면 본전, 작을 경우 손실 출력
                if (realmoney > 0) { printf("\n축하합니다! 매도 결과, 이익입니다!\n"); }
                else if (realmoney == 0) { printf("\n매도 결과, 본전입니다!\n"); }
                else { printf("\n아... 매도 결과, 손실이시군요.\n"); }
            }
            break;
        }

        /// 1또는 2를 입력하지 않았을 경우 ///
        else 
        {
            printf("1 또는 2만 입력하실 수 있습니다.\n");
            printf("매수를 원한다면 1을 입력, 매도를 원한다면 2를 입력하세요: ");
        }
    }

    printf("______________________________\n\n");

    /**메뉴로 돌아가기**/
    printf("\nEnter를 누르시면 메뉴로 돌아갑니다.");
    scanf("%c", &go_to_menu);
    if (go_to_menu == '\n')
        printf("메뉴로 돌아갑니다.\n\n\n");
    func_main();
    return 0;
}