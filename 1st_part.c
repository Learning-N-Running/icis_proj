/*   1��° ��Ʈ
KOSPI ������ ���� ����� ���� ������ �� �� ������ �ְ� �����ϱ�
ex) KOSPI ������ ������ ���� ����ߴٸ� �� % ����ߴ��� �����ְ� �������� ������Ⱑ ���׿�, ������ ���ۺ��� �϶����̱���!�� ���� �޼��� ���

���� ���� S&P ���� ����ְ� ���� ��� �������ֱ�(���ȵǸ� �̰ɷ� �뼱 ����)
*/

#include "common.h"



int first_part(void)
{
    //system("python stock_crawl_2.py");
    //����ð�
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
    sprintf(s,"%04d�� %02d�� %02d�� %02d�� %02d�� %02d��",
        t->tm_year + 1900, t->tm_mon + 1, t->tm_mday,t->tm_hour, t->tm_min, t->tm_sec);
    return s;
}


int KOSPI(void)
{
    int a = 0, b = 0; // �ڽ��� ���� a�� ���� ����, b�� ����
    int percent1 = 0, percent2 = 0; //���� ��� �Ǵ� �϶���


    int i, n = 0, year, month, day, yun, arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    printf("��� ��� �������� �Է��ϼ���: ");
    scanf("%d %d %d", &year, &month, &day);
    yun = year / 4;
    n = year * 365 + yun;
    for (i = 0; i < month - 1; i++)
        n += arr[i];
    n += day;
    printf("\n");
    if (n % 7 == 3)
        printf("������ �������Դϴ�.\n���� 3�� 30�� ���ĸ� ������ �������� ���˴ϴ�.");
    else if (n % 7 == 4)
        printf("������ ȭ�����Դϴ�.\n���� 3�� 30�� ���ĸ� ������ �������� ���˴ϴ�.");
    else if (n % 7 == 5)
        printf("������ �������Դϴ�.\n���� 3�� 30�� ���ĸ� ������ �������� ���˴ϴ�.");
    else if (n % 7 == 6)
        printf("������ ������Դϴ�.\n���� 3�� 30�� ���ĸ� ������ �������� ���˴ϴ�.");
    else if (n % 7 == 0)
        printf("������ �ݿ����Դϴ�.\n���� 3�� 30�� ���ĸ� ������ �������� ���˴ϴ�.");
    else if (n % 7 == 1)
        printf("������ ������Դϴ�.\n������ �ֽ� ������ �� ������ ���̹Ƿ� ���� �ֱ��� �ݿ��� ������ �������� ���˴ϴ�.");
    else if (n % 7 == 2)
        printf("������ �Ͽ����Դϴ�.\n������ �ֽ� ������ �� ������ ���̹Ƿ� ���� �ֱ��� �ݿ��� ������ �������� ���˴ϴ�.");
    printf("\n______________________________\n\n");


    a = 4;
    b = 8;
    percent1 = 50;
    percent2 = 0; //�ϴ� �ƹ� ���̳� �Է��� 

    if (a < b)
    {
        printf("�������� %d�ۼ�Ʈ ����߳׿�!\n ", percent1);
    }
    else if (a > b)
    {
        printf("�������� %d�ۼ�Ʈ �϶��߳׿�!\n", percent2);
    }

    return 0;
}

