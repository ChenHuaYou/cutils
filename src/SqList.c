/*
 * SqList.c
 *
 *  Created on: Jun 4, 2019
 *      Author: chen
 */

/*
 * 构造函数
 */
SqList *SqList_CreateList() {
	SqList * L = (SqList*) malloc(sizeof(SqList));
	if (L == NULL) {
		return NULL;
	} else {
		L->elem = (ElemType *) malloc(sizeof(ElemType) * LIST_INIT_SIZE);
		L->length = 0;
		L->listSize = LIST_INIT_SIZE;
		return L;
	}
}
/*
 * 在第i位插入数值
 */
Status SqList_InsertList(SqList *L, int i, ElemType e) {
	if (i < 0 || i >= L->length)
		return i_ERROR;
	if (L->length == L->listSize) {
		ElemType *newBase = (ElemType*) realloc(L->elem,
				sizeof(ElemType) * (L->listSize + LISTINCREMENT));
		if (!newBase)
			exit(OVERFLOW);
		L->elem = newBase;
		L->listSize += LISTINCREMENT;
	}
	for (int k=length-1; k>i; k--){
		L->elem[k+1] = L->elem[k];
	}
	L->elem[i]=e;
	return OK;
}
/*
 * 在顺序表L中删除第i个元素,并用e返回其值
 */
Status SqList_DeleteList(SqList *L, int i, ElemType *e){}
