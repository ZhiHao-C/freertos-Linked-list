#include "list.h"

struct xLIST List_test;
struct xLIST_ITEM List_Item1;
struct xLIST_ITEM List_Item2;
struct xLIST_ITEM List_Item3;

int main(void)
{
	//���ڵ��ʼ��
	vListInitialise(&List_test);
	//�ڵ��ʼ��
	vListInitialiseItem(&List_Item1);
	vListInitialiseItem(&List_Item2);
	vListInitialiseItem(&List_Item3);
	//����ڵ�
	vListInsert(&List_test,&List_Item1);
	vListInsert(&List_test,&List_Item2);
	vListInsert(&List_test,&List_Item3);
	for(;;)
	{}
}
