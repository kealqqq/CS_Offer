/* LeafCount����Ҷ�ӽ�����Ŀ��ȫ�ֱ���,����֮ǰ��ʼ��ֵΪ0 */
void leaf_a(BiTree root)
{
	if(root!=NULL)
	{
		leaf_a(root->LChild);
		leaf_a(root->RChild);
		if (root ->LChild==NULL && root ->RChild==NULL)
			LeafCount++;
	}
}

int leaf_b(BiTree root)
{
	int LeafCount2;
	if(root==NULL)	
		LeafCount2 =0;
	else 
		if((root->LChild==NULL)&&(root->RChild==NULL))
			LeafCount2 =1;
		else 
			LeafCount2 =leaf_b(root->LChild)+leaf_b(root->RChild);
	/* Ҷ����Ϊ����������Ҷ����Ŀ֮�� */
	return LeafCount2;
}