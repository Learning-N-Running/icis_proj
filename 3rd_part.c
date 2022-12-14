/*3번째 파트
매수/매도 계산기:  주식 구매가 입력, 현재 주가와 구매가 비교해주는 기능 (차익, 손익 등)
*/

#include "common.h"

int third_part()
{
    //변수 선언부
    int yn = 0; // 1 또는 2를 입력받아 매수 혹은 매도를 선택할 수 있게 하는 변수

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
    float buymoney = 0; // 매도수익 = (매도가격x매도수량) - (매도가격x매도수량x증권거래수수료) - (매도가격x매도수량x증권거래세)
    float realmoney = 0; // 손익금 = {(매도가격x매도수량) - (매도가격x매도수량x증권거래수수료) - (매도가격x매도수량x증권거래세)} - (매수가격x매수수량) - {(매수가격x매수수량x 증권거래수수료)}
    float rate = 0; // 수익률 = 손익금 / (매수가격x매수수량) x100

    char go_to_menu = 0; // menu로 돌아갈 것인지 확인하는 변수
    textcolor(15);
    printf("______________________________\n\n");

    /** 매수 또는 매도 선택 **/
    textcolor(15);
    printf("매수를 원한다면 1을 입력, 매도를 원한다면 2를 입력하세요: ");

    while (1) // 1번이나 2번을 입력하지 않으면 다시 입력 받도록 함
    {
        scanf("%d", &yn);

        /// 매수를 원하는 경우 ///
        if (yn == 1)
        {
            textcolor(15);
            printf("\n************");
            textcolor(15);
            printf(" 매수 ");
            textcolor(15);
            printf("************\n");
            textcolor(15);
            printf("\n매수가격을 입력하세요: ");
            scanf("%f", &buy);// 매수가격을 입력받음
            while (1)
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n'); //문자를 입력한 경우, getchar()를 이용하여 개행 문자를 만날 때까지 입력 버퍼를 소모한다.
                    {   textcolor(15);
                    printf("잘못된 값을 입력하셨습니다. \n매수가격을 다시 입력하세요: ");
                    scanf("%f", &buy);
                    }
                    continue;//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
                }

                break;
            }
            textcolor(15);
            printf("\n매수수량을 입력하세요: ");
            scanf("%f", &stockNo);//매수수량을 입력받음
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {   textcolor(15);
                    printf("잘못된 값을 입력하셨습니다. \n매수수량을 다시 입력하세요: ");
                    scanf("%f", &stockNo);
                    }
                    continue;
                }

                break;
            }
            textcolor(15);
            printf("\n증권수수료(%%)를 입력하세요: ");
            scanf("%f", &commission);//증권수수료를 입력받음
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {   textcolor(15);
                    printf("잘못된 값을 입력하셨습니다. \n증권수수료(%%)를 다시 입력하세요: ");
                    scanf("%f", &commission);
                    }
                    continue;
                }

                break;
            }

            Buy = buy * stockNo;//매수가격x매수수량 변수
            mesu = Buy + Buy * commission * 0.01;//매수가격x매수수량+(매수가격x매수수량)x증권수수료
            textcolor(11);
            printf("\n\n매수에 필요한 금액은 %.1f 원 입니다.\n", mesu);
            break;
        }


        /// 매도를 원하는 경우 ///
        else if (yn == 2)
        {
            textcolor(15);
            printf("\n************");
            textcolor(15);
            printf(" 매도 ");
            textcolor(15);
            printf("************\n");
            textcolor(15);
            printf("\n매수단가를 입력하세요: ");
            scanf("%f", &buy);//매수단가 입력
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {   textcolor(15);
                    printf("잘못된 값을 입력하셨습니다. \n매수단가를 다시 입력하세요: ");
                    scanf("%f", &buy);
                    }
                    continue;
                }

                break;
            }
            textcolor(15);
            printf("\n매도단가를 입력하세요: ");
            scanf("%f", &sell);//매도단가 입력
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {   textcolor(15);
                    printf("잘못된 값을 입력하셨습니다. \n매도단가를 다시 입력하세요: ");
                    scanf("%f", &sell);
                    }
                    continue;
                }

                break;
            }
            textcolor(15);
            printf("\n매도수량을 입력하세요: ");
            scanf("%f", &stockNo);//매도 수량 입력
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {   textcolor(15);
                    printf("잘못된 값을 입력하셨습니다. \n매도수량을 다시 입력하세요: ");
                    scanf("%f", &stockNo);
                    }
                    continue;
                }

                break;
            }
            textcolor(15);
            printf("\n증권수수료(%%)를 입력하세요: ");
            scanf("%f", &commission);//증권 수수료 입력
            while (1)//문자를 입력한 경우 다시 while문의 초기로 돌아가 코드가 실행된다.
            {
                if (getchar() != '\n')
                {
                    while (getchar() != '\n');
                    {   textcolor(15);
                    printf("잘못된 값을 입력하셨습니다. \n증권수수료(%%)를 다시 입력하세요: ");
                    scanf("%f", &commission);
                    }
                    continue;
                }

                break;
            }

            current = sell * stockNo;//매도가격x매도수량 변수
            current1 = sell * stockNo * commission * 0.01;//매도가격x매도수량x증권거래수수료 변수
            current2 = sell * stockNo * 0.0023;//매도가격x매도수량x증권거래세 변수
            buymoney = current - current1 - current2;
            textcolor(11);
            printf("\n\n총 매도수익은 %.0f 원 입니다.\n", buymoney);

            Buy = buy * stockNo;//매수가격x매수수량 변수
            comm_buy = buy * stockNo * commission * 0.01;//매수수수료 //매수가격x매수수량x증권거래수수료 변수
            realmoney = buymoney - Buy - comm_buy;// 손익금 = {(매도가격x매도수량) - (매도가격x매도수량x증권거래수수료) - (매도가격x매도수량x증권거래세)} - (매수가격x매수수량) - {(매수가격x매수수량x 증권거래수수료)}
            textcolor(11);
            printf("손익금은 %.0f 원 입니다.\n", realmoney);

            rate = realmoney / Buy * 100;//수익률= 손익금/ (매수가격x매수수량)x100
            textcolor(11);
            printf("수익률은 %.3f %% 입니다.\n", rate);

            {//만약 수익률이 0보다 크면 이익, 0이면 본전, 작을 경우 손실 출력
                if (rate > 0) { textcolor(11); printf("\n축하합니다! 매도 결과, 이익입니다!\n"); }
                else if (rate == 0) { textcolor(11); printf("\n매도 결과, 본전입니다!\n"); }
                else { textcolor(11); printf("\n아... 매도 결과, 손실이시군요.\n"); }
            }
            break;
        }

        /// 1또는 2를 입력하지 않았을 경우 ///
        else if (getchar() != '\n') // 문자 입력한 경우
        {
            while (getchar() != '\n'); //문자를 입력한 경우, getchar()를 이용하여 개행 문자를 만날 때까지 입력 버퍼를 소모한다.
            {   textcolor(15);
            printf("1 또는 2만 입력하실 수 있습니다.\n");
            textcolor(15);
            printf("매수를 원한다면 1을 입력, 매도를 원한다면 2를 입력하세요: ");
            }
        }

        else // 문자와 1과 2를 제외한 것을 입력한 경우
        {
            textcolor(15);
            printf("1 또는 2만 입력하실 수 있습니다.\n");
            textcolor(15);
            printf("매수를 원한다면 1을 입력, 매도를 원한다면 2를 입력하세요: ");
        }
    }
    textcolor(15);
    printf("______________________________\n\n");

    /**메뉴로 돌아가기**/
    textcolor(15);
    printf("\nEnter를 누르시면 메뉴로 돌아갑니다.\n그외의 값을 누르면 종료됩니다.\n");
    scanf("%c", &go_to_menu);
    if (go_to_menu == '\n') { //Enter를 누르면
        textcolor(15);
        printf("메뉴로 돌아갑니다.\n\n\n");
        func_main(); //메뉴로 돌아가는 함수 실행
    }
    else
        printf("이용해 주셔서 감사합니다.\n안녕히계세요");
    return 0;
}