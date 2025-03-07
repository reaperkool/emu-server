// KanturuStateInfo.h: interface for the CKanturuStateInfo class.
//
//////////////////////////////////////////////////////////////////////

#pragma once

class CKanturuStateInfo
{
public:
	CKanturuStateInfo();
	virtual ~CKanturuStateInfo();
	void ResetTimeInfo();
	void SetStateInfo(int state);
	void SetCondition(int condition);
	void SetValue(int value);
	void SetAppliedTime();
	void SetConditionAppliedTime();
	int GetCondition();
	int GetValue();
	XWORD GetAppliedTime();
	XWORD GetElapsedTime();
	int GetRemainTime();
	int IsTimeOut();
private:
	int m_State;
	int m_Condition;
	int m_Value;
	XWORD m_AppliedTickCount;
};
