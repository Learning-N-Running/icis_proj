/*	2번째 파트
입력한 주식에 대한 간단한 정보 조회: 웹크롤러를 통해 네이버증권 접속 후 현재가 끌어와 보여주기
ex) 주가 떨어지면 왜 떨어지는지 관련 기사들 헤드라인 제공해주기
*/

#include "common.h"

int second_part()
{
	char go_to_menu = 0; // menu로 돌아갈 것인지 확인하는 변수

	/*현재 국내 모든 주식의 주가 불러오기*/
	printf("\n국내 주식 목록을 업데이트 중입니다.\n");
	printf("시간이 조금 걸릴 수 있습니다.\n");
	//여기에 주식 관련 명언 넣어도 좋을 듯
	system("python stock_crawl_1.py"); 
	printf("______________________________\n\n");
	system("python search_stock.py");

	printf("______________________________\n\n");

	/**메뉴로 돌아가기**/
	getchar();
	printf("\nEnter를 누르시면 메뉴로 돌아갑니다.");
	scanf("%c", &go_to_menu);
	if (go_to_menu == '\n')
		printf("메뉴로 돌아갑니다.\n\n\n");
		func_main();
	return 0;
}