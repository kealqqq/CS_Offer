void CrtHuffmanTree(HuffmanTree *ht , int *w, int n)
{ /* w�����֪��n��Ȩֵ�������������ht */
	int m,i;
	int s1,s2;
	m=2*n-1;
	*ht=(HuffmanTree)malloc((m+1)*sizeof(HTNode));  /*0�ŵ�Ԫδʹ��*/
	for(i=1;i<=n;i++) 
	{/*1-n�ŷ�Ҷ�ӽ�㣬��ʼ��*/
		(*ht)[i].weight = w[i];
		(*ht)[i].LChild = 0;
		(*ht)[i].parent = 0;
		(*ht)[i].RChild = 0;
	}		
	for(i=n+1;i<=m;i++)
	{
		(*ht)[i].weight = 0;
		(*ht)[i].LChild = 0;
		(*ht)[i].parent = 0;
		(*ht)[i].RChild = 0;
	}    /*��Ҷ�ӽ���ʼ��*/
/*	------------��ʼ����ϣ���Ӧ�㷨����1---------*/
	
	for(i=n+1;i<=m;i++)    /*������Ҷ�ӽ��,����������*/
	{  /*��(*ht)[1]~(*ht)[i-1]�ķ�Χ��ѡ������parentΪ0��weight��С�Ľ�㣬����ŷֱ�ֵ��s1��s2����*/
		select(ht,i-1,&s1,&s2);
		(*ht)[s1].parent=i;
		(*ht)[s2].parent=i;
		(*ht)[i].LChild=s1;
		(*ht)[i].RChild=s2;
		(*ht)[i].weight=(*ht)[s1].weight+(*ht)[s2].weight;
	} 
}/*���������������*/