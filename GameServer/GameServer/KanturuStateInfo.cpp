// KanturuStateInfo.cpp: implementation of the CKanturuStateInfo class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "KanturuStateInfo.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CKanturuStateInfo::CKanturuStateInfo() // OK
{
	this->ResetTimeInfo();
}

CKanturuStateInfo::~CKanturuStateInfo() // OK
{

}

void CKanturuStateInfo::ResetTimeInfo() // OK
{
	this->SetStateInfo(0);

	this->SetCondition(0);

	this->SetValue(0);
}

void CKanturuStateInfo::SetStateInfo(int state) // OK
{
	this->m_State = state;
}

void CKanturuStateInfo::SetCondition(int condition) // OK
{
	this->m_Condition = condition;
}

void CKanturuStateInfo::SetValue(int value) // OK
{
	this->m_Value = value;
}

void CKanturuStateInfo::SetAppliedTime() // OK
{
	this->m_AppliedTickCount = GetTickCountEx();
}

void CKanturuStateInfo::SetConditionAppliedTime() // OK
{
	this->m_AppliedTickCount = ((this->GetCondition()==0)?this->m_AppliedTickCount:GetTickCountEx());
}

int CKanturuStateInfo::GetCondition() // OK
{
	return this->m_Condition;
}

int CKanturuStateInfo::GetValue() // OK
{
	return this->m_Value;
}

XWORD CKanturuStateInfo::GetAppliedTime() // OK
{
	return this->m_AppliedTickCount;
}

XWORD CKanturuStateInfo::GetElapsedTime() // OK
{
	return (GetTickCountEx()-this->GetAppliedTime());
}

int CKanturuStateInfo::GetRemainTime() // OK
{
	return ((this->GetCondition()==0)?0:(int)(((this->m_Value-this->GetElapsedTime())<=0)?0:((this->m_Value-this->GetElapsedTime())/1000)));
}

int CKanturuStateInfo::IsTimeOut() // OK
{
	return ((this->GetRemainTime()>0)?0:1);
}
