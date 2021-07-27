#pragma once


// DownSample_Rate 대화 상자

class DownSample_Rate : public CDialogEx
{
	DECLARE_DYNAMIC(DownSample_Rate)

public:
	DownSample_Rate(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~DownSample_Rate();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	int m_DownSampleRate;
	afx_msg void OnEnChangeEdit1();
};