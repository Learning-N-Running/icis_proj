/*   1번째 파트
KOSPI 지수를 먼저 띄워서 전일 지수와 비교 후 오늘의 주가 예상하기
ex) KOSPI 지수가 전날에 비해 상승했다면 몇 % 상승했는지 보여주고 “오늘은 장분위기가 좋네요, 오늘은 시작부터 하락세이군요!” 등의 메세지 출력

전날 마감 S&P 지수 띄워주고 오늘 어떨지 예상해주기(정안되면 이걸로 노선 변경)
*/

#include "common.h"

int first_part(void)
{
    system("python stock_crawl_2.py"); //코스피, 코스닥 지수 업데이트.


    //FILE* fp = fopen("economic_ind.txt", "r");  //test파일을 r(읽기) 모드로 열기
    //char buffer[1000] = { 0, };

    //fread(buffer, 1, 1000, fp); //전체 읽기
    //printf("%s", buffer);

    //fclose(fp); //파일 포인터 닫기


    FILE* p_file = NULL; //파일 포인터 선언
    setlocale(LC_ALL, "ko-KR"); //언어 지역 코드를 'ko-KR'(한국어)로 설정

    //UTF-8 형식으로 인코딩된 "economic_ind.txt" 파일을 읽기 모드로 연다. (성공하면 0을 반환)
    if (0 == fopen_s(&p_file, "economic_ind.txt", "rt,ccs=UTF-8"))
    {
        for (int k = 0;k < 4;k++)
        {
            wchar_t str[64]; //한줄의 텍스트를 저장할 변수 //여기 있는 숫자를 a
            //파일에서 한 줄의 텍스트를 읽는다. (최대 63자를 넘지 않게 읽는다.)
            fgetws(str, 63, p_file); //여기에는 a-1을 넣어야 함.
            wprintf(L"%s\n", str); //읽은 문자열을 화면에 출력한다.

        }
        fclose(p_file); //열린 파일을 닫는다.
    }


    //현재시간
    char* timeToString(struct tm* t);
    int KOSPI(void);

    struct tm* t;
    time_t timer;
    timer = time(NULL);
    t = localtime(&timer);
    printf("%s\n", timeToString(t));
    KOSPI();

    return 0;
}

char* timeToString(struct tm* t)
{
    static char s[50];
    sprintf(s, "%04d년 %02d월 %02d일 %02d시 %02d분 %02d초",
        t->tm_year + 1900, t->tm_mon + 1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec);
    return s;
}


int KOSPI(void)
{
    int a = 0, b = 0; // 코스피 지수 a는 전날 마감, b는 현재
    int percent1 = 0, percent2 = 0; //몇퍼 상승 또는 하락값


    int i, n = 0, year, month, day, yun, arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    printf("몇년 몇월 몇일인지 입력하세요: ");
    scanf("%d %d %d", &year, &month, &day);
    yun = year / 4;
    n = year * 365 + yun;
    for (i = 0; i < month - 1; i++)
        n += arr[i];
    n += day;
    printf("\n");
    if (n % 7 == 3)
        printf("오늘은 월요일입니다.\n평일 3시 30분 이후면 마감값 기준으로 계산됩니다.");
    else if (n % 7 == 4)
        printf("오늘은 화요일입니다.\n평일 3시 30분 이후면 마감값 기준으로 계산됩니다.");
    else if (n % 7 == 5)
        printf("오늘은 수요일입니다.\n평일 3시 30분 이후면 마감값 기준으로 계산됩니다.");
    else if (n % 7 == 6)
        printf("오늘은 목요일입니다.\n평일 3시 30분 이후면 마감값 기준으로 계산됩니다.");
    else if (n % 7 == 0)
        printf("오늘은 금요일입니다.\n평일 3시 30분 이후면 마감값 기준으로 계산됩니다.");
    else if (n % 7 == 1)
        printf("오늘은 토요일입니다.\n오늘은 주식 시장이 안 열리는 날이므로 가장 최근인 금요일 마감값 기준으로 계산됩니다.");
    else if (n % 7 == 2)
        printf("오늘은 일요일입니다.\n오늘은 주식 시장이 안 열리는 날이므로 가장 최근인 금요일 마감값 기준으로 계산됩니다.");
    printf("\n______________________________\n\n");


    a = 4;
    b = 8;
    percent1 = 50;
    percent2 = 0; //일단 아무 값이나 입력함 

    if (a < b)
    {
        printf("전날보다 %d퍼센트 상승했네요!\n ", percent1);
    }
    else if (a > b)
    {
        printf("전날보다 %d퍼센트 하락했네요!\n", percent2);
    }

    return 0;
}

