void  InOrder(BiTree root)  
/*�������������, rootΪָ�������(��ĳһ����)������ָ��*/
{
	if (root!=NULL)
	{
		InOrder(root ->LChild);   /*�������������*/
		Visit(root ->data);        /*���ʸ����*/
		InOrder(root ->RChild);   /*�������������*/
	}
}