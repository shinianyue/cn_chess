// StepList.cpp: implementation of the CStepList class.
//
//////////////////////////////////////////////////////////////////////

#include "stdAfx.h"
#include "xiangqi1.h"
#include "BaseDef.h"
#include "BaseClasses.h"
#include "StepList.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CStepList::CStepList()
{
	m_pHead=new STEPNODE;
	m_pHead->left=NULL;
	m_pHead->right=NULL;
	m_pHead->Data=NULL;
	m_pCur=m_pHead;
}

CStepList::~CStepList()
{
	m_pCur=m_pHead;
	Remove();
	delete m_pHead;

}

void CStepList::Go(CStep *step)    //��Remove();Ȼ������һ���
{
	STEPNODE* node=new STEPNODE;
	
	node->left=m_pCur;
	node->Data=step;
	node->right=NULL;

	Remove();

	m_pCur->right=node;
	m_pCur=node;
}

void CStepList::Remove()//ɾ��m_pCur ������н��(������*m_pCur)
{
	STEPNODE * p;
	p=m_pCur;
	for(;p->right!=NULL;p=p->right);
	while(p!=m_pCur)
	{
		delete p->Data;
		p=p->left;
		delete p->right;
	}
	p->right=NULL;
}

CStep* CStepList::Undo()//m_pCur����һ���

{
	if(m_pCur==m_pHead)return NULL;

	m_pCur=m_pCur->left;
	return m_pCur->right->Data;
}

CStep* CStepList::Redo()//m_pCurǰ��һ���
{
	if(m_pCur->right==NULL)return NULL;

	m_pCur=m_pCur->right;
	return m_pCur->Data;
}

void CStepList::RemoveAll()//ɾ�����н��(������*m_pHead)
{
	m_pCur=m_pHead;
	Remove();
}

BOOL CStepList::IsHead()//m_pCur�Ƿ����m_pHead
{
	if(m_pCur==m_pHead)return TRUE;

	return FALSE;
}

BOOL CStepList::IsEnd()//m_pCur�Ƿ����һ���
{
	if(m_pCur->right==NULL)return TRUE;

	return FALSE;
}

