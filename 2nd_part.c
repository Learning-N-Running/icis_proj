/*	2��° ��Ʈ
�Է��� �ֽĿ� ���� ������ ���� ��ȸ: ��ũ�ѷ��� ���� ���̹����� ���� �� ���簡 ����� �����ֱ�
ex) �ְ� �������� �� ���������� ���� ���� ������ �������ֱ�
*/

#include "common.h"
int stock_name_len = 0;

char stock_name[200]; //����ڰ� �ְ��� �˰� ���� ����. ��, ����ڰ� �Է��ϴ� ����
char compare[200]; //����ڰ� �Է��ϴ� ����� ������ ������ ���ϱ� ���� ���ڿ�

int second_part()
{
	char go_to_menu = 0;
	/*���� ���� ��� �ֽ��� �ְ� �ҷ�����*/
	printf("\n���� �ֽ� ����� ������Ʈ ���Դϴ�.\n");
	printf("�ð��� ���� �ɸ� �� �ֽ��ϴ�.\n\n");
	//���⿡ �ֽ� ���� ��� �־ ���� ��
	system("python stock_crawl_1.py"); 
	system("python search_stock.py");

	getchar();
	printf("\nEnter�� �����ø� �޴��� ���ư��ϴ�.");
	scanf("%c", &go_to_menu);
	if (go_to_menu == '\n')
		printf("�޴��� ���ư��ϴ�.\n\n\n");
		func_main();
	return 0;
}
//	system("python stock_crawl_1.py");
//	return 0;