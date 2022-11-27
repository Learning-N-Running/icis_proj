/*   1번째 파트
코스피 200, 코스닥 지수를 띄우고 오늘의 장 분위기를 설명한다.
ex) KOSPI 지수가 전날에 비해 상승했다면 몇 % 상승했는지 보여주고 오늘의 장 분위기 출력
*/

#include "common.h"

int first_part(void)
{
    char go_to_menu = 0; // menu로 돌아갈 것인지 확인하는 변수


    printf("\n코스피, 코스닥 지수를 업데이트하는 중입니다. \n시간이 조금 걸릴 수 있습니다.\n");

    system("python stock_crawl_2.py"); //코스피, 코스닥 지수를 업데이트 해주는 py 파일 실행. 이때 실행 결과로 economic_ind.txt가 생기거나 업데이트된다.

    printf("______________________________\n\n");

    /** 현재 시각 출력 **/
    char* timeToString(struct tm* t);
    int KOSPI(void);

    struct tm* t;
    time_t timer;
    timer = time(NULL);
    t = localtime(&timer);
    printf("%s\n", timeToString(t)); // 오늘 날짜, 현재 시각 출력


    /** economic_ind.txt 파일을 읽어 출력 **/
    FILE* p_file = NULL; //파일 포인터 선언
    setlocale(LC_ALL, "ko-KR"); //언어 지역 코드를 'ko-KR'(한국어)로 설정

    if (0 == fopen_s(&p_file, "economic_ind.txt", "rt,ccs=UTF-8")) //UTF-8 형식으로 인코딩된 "economic_ind.txt" 파일을 읽기 모드로 연다. (성공하면 0을 반환)
    {
        printf("\n");

        for (int i = 0;i < 2;i++) //현재 코스피200, 코스닥 출력
        {
            wchar_t str[64]; //한줄의 텍스트를 저장할 변수 
            fgetws(str, 63, p_file); //파일에서 한 줄의 텍스트를 읽는다. (최대 63자를 넘지 않게 읽는다.)
            wprintf(L"%s", str); //읽은 문자열을 화면에 출력한다.
        }

        printf("\n");

        for (int i = 0;i < 2;i++) //코스피200의 변화, 코스닥의 변화 출력
        {
            wchar_t str[64];
            fgetws(str, 63, p_file); 
            wprintf(L"%s", str); 
        }

        printf("\n");

        //오늘의 장 분위기 출력
        wchar_t str[64]; 
        fgetws(str, 63, p_file); 
        wprintf(L"%s", str); 

        fclose(p_file); //열린 파일을 닫는다.
    }
    printf("\n______________________________\n\n");

    /**메뉴로 돌아가기**/
    getchar();
    printf("\nEnter를 누르시면 메뉴로 돌아갑니다.");
    scanf("%c", &go_to_menu);
    if (go_to_menu == '\n') //Enter를 누르면
        printf("메뉴로 돌아갑니다.\n\n\n");
    func_main(); //메뉴로 돌아가는 함수 실행
    return 0;
}

char* timeToString(struct tm* t)
{
    static char s[50];
    sprintf(s, "\n\n***%04d년 %02d월 %02d일 %02d시 %02d분 %02d초***",
        t->tm_year + 1900, t->tm_mon + 1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec); //s라는 문자열에 오늘의 날짜, 현재 시각("%04d년 %02d월 %02d일 %02d시 %02d분 %02d초") 저장

    if (t->tm_wday == 1) // 오늘이 월요일이면
    {
        printf("오늘은 월요일입니다.\n");
        if (((t->tm_hour >= 15) && (t->tm_min >= 30)) || (t->tm_hour > 15))
        {
            printf("지금은 오후 3시 30분 이후이므로 오늘의 마감값을 기준으로 계산됩니다.");
        }
        else if ((t->tm_hour >= 0) && (9 > t->tm_hour))
        {
            printf("지금은 오전 9시 이전이므로 저번 주 금요일의 마감값을 기준으로 계산됩니다.");
        }
    }
    else if (t->tm_wday == 2) // 오늘이 화요일이면
    {
        printf("오늘은 화요일입니다.\n");
        if (((t->tm_hour >= 15) && (t->tm_min >= 30)) || (t->tm_hour > 15))
        {
            printf("지금은 오후 3시 30분 이후이므로 오늘의 마감값을 기준으로 계산됩니다.");
        }
        else if ((t->tm_hour >= 0) && (9 > t->tm_hour))
        {
            printf("지금은 오전 9시 이전이므로 어제의 마감값을 기준으로 계산됩니다.");
        }
    }
    else if (t->tm_wday == 3) // 오늘이 수요일이면
    {
        printf("오늘은 수요일입니다.\n");
        if (((t->tm_hour >= 15) && (t->tm_min >= 30)) || (t->tm_hour > 15))
        {
            printf("지금은 오후 3시 30분 이후이므로 오늘의 마감값을 기준으로 계산됩니다.");
        }
        else if ((t->tm_hour >= 0) && (9 > t->tm_hour))
        {
            printf("지금은 오전 9시 이전이므로 어제의 마감값을 기준으로 계산됩니다.");
        }
    }
    else if (t->tm_wday == 4) // 오늘이 목요일이면
    {
        printf("오늘은 목요일입니다.\n");
        if (((t->tm_hour >= 15) && (t->tm_min >= 30)) || (t->tm_hour > 15))
        {
            printf("지금은 오후 3시 30분 이후이므로 오늘의 마감값을 기준으로 계산됩니다.");
        }
        else if ((t->tm_hour >= 0) && (9 > t->tm_hour))
        {
            printf("지금은 오전 9시 이전이므로 어제의 마감값을 기준으로 계산됩니다.");
        }
    }
    else if (t->tm_wday == 5) // 오늘이 금요일이면
    {
        printf("오늘은 금요일입니다.\n");
        if (((t->tm_hour >= 15) && (t->tm_min >= 30)) || (t->tm_hour > 15))
        {
            printf("지금은 오후 3시 30분 이후이므로 오늘의 마감값을 기준으로 계산됩니다.");
        }
        else if ((t->tm_hour >= 0) && (9 > t->tm_hour))
        {
            printf("지금은 오전 9시 이전이므로 어제의 마감값을 기준으로 계산됩니다.");
        }
    }
    else if (t->tm_wday == 6) // 오늘이 토요일이면
    {
        printf("오늘은 토요일입니다.\n오늘은 주식 시장이 안 열리는 날이므로 가장 최근인 금요일 마감값을 기준으로 계산됩니다.");
    }
    else if (t->tm_wday == 0) // 오늘이 일요일이면
    {
        printf("오늘은 일요일입니다.\n오늘은 주식 시장이 안 열리는 날이므로 가장 최근인 금요일 마감값을 기준으로 계산됩니다.");
    }
    return s;
}


