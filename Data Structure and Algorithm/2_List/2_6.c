void CreateFromHead(LinkList   L)
{ 
	Node   *s;
	char 	c;
	int 	flag=1;
 	while(flag)   /* flag��ֵΪ1��������"$"ʱ����flagΪ0����������*/
	{
		c=getchar();   
		if(c!='$')
		{
			s=(Node*)malloc(sizeof(Node)); /*�����½��s*/
			s->data=c;
			s->next=L->next;/*��s�������ͷ*/
			L->next=s;
		}
		else
			flag=0;
	}
}