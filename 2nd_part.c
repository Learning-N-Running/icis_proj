/*	2번째 파트
입력한 주식에 대한 간단한 정보 조회: 웹크롤러를 통해 네이버증권 접속 후 현재가 끌어와 보여주기
ex) 주가 떨어지면 왜 떨어지는지 관련 기사들 헤드라인 제공해주기
*/

#include "common.h"
int stock_name_len = 0;

char stock_name[200]; //사용자가 주가를 알고 싶은 종목. 즉, 사용자가 입력하는 종목
char compare[200]; //사용자가 입력하는 종목과 기존의 종목을 비교하기 위한 문자열

int second_part()
{
	/*현재 국내 모든 주식의 주가 불러오기*/
	/*system("python stock_crawl_1.py"); */
	system("python search_stock.py");
	
	printf("뚭");


	return 0;
}
//	system("python stock_crawl_1.py");
//	return 0;