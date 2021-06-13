#pragma once


// CWaveletTransformDlg 대화 상자

class CWaveletTransformDlg : public CDialog
{
	DECLARE_DYNAMIC(CWaveletTransformDlg)

public:
	CWaveletTransformDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CWaveletTransformDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	int m_Level;
	float m_Error;
	float m_SNR;
	int m_FilterCheck;
};
