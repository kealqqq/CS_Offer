void init_linklist(LinkList *l)/*�Ե��������г�ʼ��*/
{
	*l=(LinkList)malloc(sizeof(Node)); /*������ռ�*/
	(*l)->next=NULL;                      /*��Ϊ�ձ�*/
}