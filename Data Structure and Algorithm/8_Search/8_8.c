BSTNode  * DelBST(BSTree t, KeyType  k) /*�ڶ���������t��ɾȥ�ؼ���Ϊk�Ľ��*/
{
	BSTNode  *p, *f,*s ,*q;
	p=t; 
	f=NULL;
	while(p)  /*���ҹؼ���Ϊk�Ĵ�ɾ���p*/
	{ 
		if(p->key==k )  break;  /*�ҵ�������ѭ��*/
		f=p;   /*fָ��p����˫�׽��*/
		if(p->key>k)  
			p=p->lchild;
		else 
			p=p->rchild;
	} 
	if(p==NULL)  return t;  /*���Ҳ���������ԭ���Ķ���������*/
	if(p->lchild==NULL)  /*p��������*/
	{ 
		if(f==NULL) 
			t=p->rchild;  /*p��ԭ�����������ĸ�*/
		else 
			if(f->lchild==p)  /*p��f������*/
				f->lchild=p->rchild ;  /*��p������������f��������*/
			else  /*p��f���Һ���*/
				f->rchild=p->rchild ;  /*��p������������f��������*/
			free(p);  /*�ͷű�ɾ���Ľ��p*/
	}
	else  /*p��������*/
	{ 
		q=p; 
		s=p->lchild;
		while(s->rchild)  /*��p���������в��������½��*/
		{
			q=s; 
			s=s->rchild;
		}
		if(q==p) 
			q->lchild=s->lchild ;  /*��s������������q��*/
		else 
			q->rchild=s->lchild;
		p->key=s->key;  /*��s��ֵ����p*/
		free(s);
	}
	return t;
}  /*DelBST*/