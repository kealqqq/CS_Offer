Node * Get (LinkList  L, int i)
/*�ڴ�ͷ���ĵ�����L�в��ҵ�i����㣬���ҵ�(1��i��n)���򷵻ظý��Ĵ洢λ��; ���򷵻�NULL*/
{  
	int j;
	Node  *p;
	p=L;
	j=0;   /*��ͷ��㿪ʼɨ��*/ 
	while ((p->next!=NULL)&&(j<i))
	{ 
		p=p->next;    /* ɨ����һ���*/
		j++;   /* ��ɨ��������� */
	}
	if(i == j)
		return p;   /* �ҵ��˵�i����� */
	else 
		return NULL;   /* �Ҳ�����i��0��i>n */
}   