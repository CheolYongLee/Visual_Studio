// CWaveletTransformDlg.cpp: 구현 파일
//

#include "pch.h"
#include "WaveletTransform.h"
#include "CWaveletTransformDlg.h"
#include "afxdialogex.h"


// CWaveletTransformDlg 대화 상자

IMPLEMENT_DYNAMIC(CWaveletTransformDlg, CDialog)

CWaveletTransformDlg::CWaveletTransformDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
	, m_Level(0)
	, m_Error(0)
	, m_SNR(0)
	, m_FilterCheck(0)
{

}

CWaveletTransformDlg::~CWaveletTransformDlg()
{
}

void CWaveletTransformDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_Level);
	DDX_Control(pDX, IDC_EDIT2, m_Error);
	DDX_Control(pDX, IDC_EDIT3, m_SNR);
	DDX_Control(pDX, IDC_RADIO1, m_FilterCheck);
}


BEGIN_MESSAGE_MAP(CWaveletTransformDlg, CDialog)
END_MESSAGE_MAP()


// CWaveletTransformDlg 메시지 처리기
