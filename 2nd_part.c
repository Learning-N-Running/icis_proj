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
	/*���� ���� ��� �ֽ��� �ְ� �ҷ�����*/
	/*system("python stock_crawl_1.py"); */
	system("python search_stock.py");
	
	printf("��");


	return 0;
}
//	system("python stock_crawl_1.py");
//	return 0;