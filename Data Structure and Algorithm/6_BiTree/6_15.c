BiTNode * InNext(BiTNode * p) 
/*�����������������в���p�������̽�㣬����nextָ�뷵�ؽ��*/
{ 
	BiTNode *Next;
	BiTNode *q;
	if (p->Rtag==1)  
		Next = p->RChild;  /*ֱ����������*/
	else
	{ /*��p���������в���"�����¶�"���*/
		if(p->RChild!=NULL)
		{
			for(q=p->RChild; q->Ltag==0 ;q=q->LChild);
			Next=q; 
		}
		else
			Next = NULL;
		
	} 
	return(Next);
}