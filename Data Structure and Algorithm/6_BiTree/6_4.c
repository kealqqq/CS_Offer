void  PreOrder(BiTree root) 
/*�������������, rootΪָ�������������ָ��*/
{
	if (root!=NULL)
	{
		printf("%c  ",root ->data);  /*������*/
		PreOrder(root ->LChild);  /*�������������*/
		PreOrder(root ->RChild);  /*�������������*/
	}
}