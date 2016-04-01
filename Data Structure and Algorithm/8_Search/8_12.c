void  ins_mbtree(Mbtree  *mbt,  KeyType  k,  Mbtree q,  int  i)
/* ��m��B_��t�в���k�����mbt=NULL�������ɳ�ʼ������ʱq=NULL,i=0��������qָ��ĳ�����²���ն˽�㣬kӦ���ڸý����q->key[i+1]������������q->keynum>m-1������з��Ѵ���*/
{ 
	Mbtree  q1,ap;
	Mbtree new_root;
	int s;
	int finished;
	int x;
	if (*mbt==NULL)
	{ 
		*mbt =(Mbtree)malloc(sizeof(Mbtnode));
		(*mbt)->keynum=1;
		(*mbt)->parent=NULL;
		(*mbt)->key[1]=k;
		(*mbt)->ptr[0]=NULL; 
		(*mbt)->ptr[1]=NULL;
	}
	else  
	{  
		x=k;          /* ��x�嵽q->key[i+1] �� */
		ap=NULL;		/* ��ap�嵽q->ptr[i+1] �� */
		finished=NULL;
		while (q!=NULL && !finished) 		/* q=NULL ��ʾ�Ѿ����ѵ��� */
		{ 
			insert(q, i, x, ap);
			if (q->keynum<m) 
				finished=TRUE;  	/* ���ٷ��� */
			else
			{
				s=ceil((float)m/2);   /* s=  */
				split(q, &q1);  	/* ���� */
				x=q->key[s];	
				ap=q1;
				q=q->parent;
				if (q!=NULL) 
					i=search(q,x);	 /* search( ) �Ķ���μ�B_������һ�� */
			}
		}
		if (!finished)      /* ��ʾ�����Ҫ���ѣ��������¸� */
		{
			new_root=(Mbtree)malloc(sizeof(Mbtnode));
			new_root->keynum=1;  
			new_root->parent=NULL; 
			new_root->key[1]=x;	
			new_root->ptr[0]=*mbt; 
			new_root->ptr[1]=ap;
			*mbt=new_root;
		}
	}
}