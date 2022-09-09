#include "list.h"

struct xLIST List_test;
struct xLIST_ITEM List_Item1;
struct xLIST_ITEM List_Item2;
struct xLIST_ITEM List_Item3;

int main(void)
{
	//根节点初始化
	vListInitialise(&List_test);
	//节点初始化
	vListInitialiseItem(&List_Item1);
	vListInitialiseItem(&List_Item2);
	vListInitialiseItem(&List_Item3);
	//插入节点
	vListInsert(&List_test,&List_Item1);
	vListInsert(&List_test,&List_Item2);
	vListInsert(&List_test,&List_Item3);
	for(;;)
	{}
}
