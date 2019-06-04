/*
 * SqList.h
 *
 *  Created on: Jun 4, 2019
 *      Author: chen
 */

#ifndef INCLUDE_SQLIST_H_
#define INCLUDE_SQLIST_H_

/*
 * 顺序表数据结构
 */
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define ElemType float
#define i_ERROR -200
#define OVERFLOW -201
#define OK 100
typedef struct {
	ElemType *elem;
	size_t length;
	size_t listSize;
} SqList;

SqList *SqList_CreateList();
Status SqList_InsertList(SqList *L, int i, ElemType e);
Status SqList_DeleteList(SqList *L, int i, ElemType *e);

#endif /* INCLUDE_SQLIST_H_ */
