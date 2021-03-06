#pragma once
#include "LinkStatic.h"

// CAcknowledgementDlg 对话框

class CAcknowledgementDlg : public CDialog
{
	DECLARE_DYNAMIC(CAcknowledgementDlg)

public:
	CAcknowledgementDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CAcknowledgementDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ACKNOWLEDGEMENT_DIALOG };
#endif

protected:
	CLinkStatic m_traditional_chanese_translator_link;
	CToolTipCtrl m_Mytip;			//鼠标指向时的工具提示

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
