#pragma once


// CQInt dialog

class CQInt : public CDialogEx
{
	DECLARE_DYNAMIC(CQInt)

public:
	CQInt(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CQInt();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
