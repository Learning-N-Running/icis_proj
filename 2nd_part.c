/* 2��° ��Ʈ
�ְ� �˻�: ��ũ�ѷ��� ���� ���̹����� ���� �� ���簡 ����� �����ֱ�
*/

#include "common.h"

int second_part()
{
	//���� �����
	char go_to_menu = 0; // menu�� ���ư� ������ Ȯ���ϴ� ����

	/*���� ���� ��� �ֽ��� �ְ� �ҷ�����*/
	printf("\n���� �ֽ� ����� ������Ʈ ���Դϴ�.\n");
	printf("�ð��� ���� �ɸ� �� �ֽ��ϴ�.\n");
	textcolor(11);
	printf("\n������ �ֽ� ���!\n���Ӿ��� ������ ����� �ᱹ ������ ���ڰ� �ȴ�. \n");
	textcolor(15);

	system("python stock_crawl_1.py");
	printf("______________________________\n\n");
	system("python search_stock.py");

	printf("______________________________\n\n");

	/**�޴��� ���ư���**/
	getchar();
	printf("\nEnter�� �����ø� �޴��� ���ư��ϴ�.\n�׿��� ���� ������ ����˴ϴ�.\n");
	scanf("%c", &go_to_menu);
	if (go_to_menu == '\n') { //Enter�� ������
		printf("�޴��� ���ư��ϴ�.\n\n\n");
		func_main(); //�޴��� ���ư��� �Լ� ����
	}
	else
		printf("�̿��� �ּż� �����մϴ�.\n�ȳ����輼��");
	return 0;
}
