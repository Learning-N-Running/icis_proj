/* 2번째 파트
주가 검색: 웹크롤러를 통해 네이버증권 접속 후 현재가 끌어와 보여주기
*/

#include "common.h"

int second_part()
{
	//변수 선언부
	char go_to_menu = 0; // menu로 돌아갈 것인지 확인하는 변수

	/*현재 국내 모든 주식의 주가 불러오기*/
	printf("\n국내 주식 목록을 업데이트 중입니다.\n");
	printf("시간이 조금 걸릴 수 있습니다.\n");
	textcolor(11);
	printf("\n오늘의 주식 명언!\n끊임없이 도전한 사람이 결국 게임의 승자가 된다. \n");
	textcolor(15);

	system("python stock_crawl_1.py");
	printf("______________________________\n\n");
	system("python search_stock.py");

	printf("______________________________\n\n");

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
