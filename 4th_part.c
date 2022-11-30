/* 4번째 파트
주식tmi: C팀의 자체적 분석, 조사를 통한 주식 추천 기능
ex) 연초, 연말에 전반적인 주식 분위기 및 대체로 상승한 주식 분야와 하락한 분야 정보 제공
"이런 달에는 이런 주식이 상승세에요.",  "매월 20일에는 어떤 주식이 상승세에요."
*/

#include "common.h"

int fourth_part(void)
{
    //변수 선언부
    int month = 0; // 월 변수

    char go_to_menu = 0; // menu로 돌아갈 것인지 확인하는 변수

    printf("______________________________\n\n");

    do
    {
        printf("지금은 몇 월입니까? (1~12사이의 값을 입력하세요) : ");
        scanf("%d", &month); //월 값 받기

        textcolor(11);
        if (month == 1) //1월에 해당하는 종목 추천
            printf("\n1월의 테마 종목은 제설/블랙아이스, 조류독감, 구제역, 난방, 도시가스, 게임 입니다. \n\n또한 최근 4년간, 연말과 연초에는 이익모멘텀 종목의 누적 수익률이 가장 높게 나타났으며, \n일반적으로 저평가 혹은 주가 낙폭이 컸던 종목이 강세를 보입니다.\n\n참고하셔서 투자 성공 하시길 바랍니다:)");

        else if (month == 2) //2월에 해당하는 종목 추천
            printf("\n2월의 테마 종목은 택배/물류, 전자결제, 화장품, 면세점, 홈쇼핑/온라인쇼핑 입니다. \n\n참고하셔서 투자 성공 하시길 바랍니다:)");

        else if (month == 3) //3월에 해당하는 종목 추천
            printf("\n3월의 테마 종목은 황사/미세먼지, 등교/개학, 마스크, 손세정제/소독제, 공기청정기 입니다. \n\n참고하셔서 투자 성공 하시길 바랍니다:) ");

        else if (month == 4) //4월에 해당하는 종목 추천
            printf("\n4월의 테마 종목은 황사/미세먼지, 농업(비료,사료), 공기청정기, 손세정제/소독제, 마스크 입니다.\n\n참고하셔서 투자 성공 하시길 바랍니다:)");

        else if (month == 5) //5월에 해당하는 종목 추천
            printf("\n5월의 테마 종목은 쇼핑, 여행/항공, 살인진드기, 어린이날, 어버이날 입니다. \n\n참고하셔서 투자 성공 하시길 바랍니다 :)");

        else if (month == 6) //6월에 해당하는 종목 추천
        {
            printf("\n6월의 테마 종목은 태풍/장마, 에어컨/여름냉방기, 빙과류/아이스크림 입니다. \n\n참고하셔서 투자 성공 하시길 바랍니다:)");
        }

        else if (month == 7) //7월에 해당하는 종목 추천
        {
            printf("\n7월의 테마 종목은 태풍/장마, 복날, 방학, 스마트그리드, 여행/항공, 에어컨/여름냉방기기, 면세점 입니다. \n\n참고하셔서 투자 성공 하시길 바랍니다:)");
        }

        else if (month == 8) //8월에 해당하는 종목 추천
        {
            printf("\n8월의 테마 종목은 태풍/장마, 인공강우, 스마트그리드, 에어컨/여름냉방기기 입니다. \n\n참고하셔서 투자 성공 하시길 바랍니다:)");
        }

        else if (month == 9) //9월에 해당하는 종목 추천
        {
            printf("\n9월의 테마 종목은 밥솥, 택배/물류, 전자결제, 여행/항공, 화장품, 면세점, 쇼핑 입니다. \n\n참고하셔서 투자 성공 하시길 바랍니다:)");
        }

        else if (month == 10) //10월에 해당하는 종목 추천
        {
            printf("\n10월의 테마 종목은 조류독감, 수능 관련 교육, 진드기, 구제역, 동물백신/동물의약품, 독감백신(사람) 입니다. \n\n참고하셔서 투자 성공 하시길 바랍니다:)");
        }

        else if (month == 11) //11월에 해당하는 종목 추천
        {
            printf("\n11월의 테마 종목은 소비, 전자결재, 스마트그리드, 수능교육, 독감백신, 난방기, 겨울의류 입니다. \n\n참고하셔서 투자 성공 하시길 바랍니다:)");
        }

        else if (month == 12) //12월에 해당하는 종목 추천
        {
            printf("\n12월의 테마 종목은 제설/블랙아이스, 크리스마스, 전자결재, 택배/물류, 방학, 스마트그리드, 여행/항공 입니다. \n\n최근 4년간, 연말과 연초에는 이익모멘텀 종목의 누적 수익률이 가장 높게 나타났으며, \n일반적으로 저평가 혹은 주가 낙폭이 컸던 종목이 강세를 보입니다. \n\n참고하셔서 투자 성공 하시길 바랍니다:)");
        }

        else //1~12 사이의 값이 아닐 시 enter key 전까지의 값 모두 날린 후 메세지 출력
        {
            while (getchar() != '\n');
            printf("1~12월의 값을 입력해주세요\n");
        }

    } while (month < 1 | month >12); //1~12사이의 수가 아닐 시 제대로 된 값을 받을 때 까지 반복
    textcolor(15);

    printf("\n______________________________\n\n");

    /**메뉴로 돌아가기**/
    getchar();
    printf("\nEnter를 누르시면 메뉴로 돌아갑니다.\n그외의 값을 누르면 종료됩니다.\n");
    scanf("%c", &go_to_menu);
    if (go_to_menu == '\n') { //Enter를 누르면
        printf("메뉴로 돌아갑니다.\n\n\n");
        func_main(); //메뉴로 돌아가는 함수 실행
    }
    else
        printf("이용해 주셔서 감사합니다.\n안녕히계세요");
    return 0;
}