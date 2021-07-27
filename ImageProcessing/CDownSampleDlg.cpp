// CDownSampleDlg.cpp: 구현 파일
//

#include "pch.h"
#include "ImageProcessing2.h"
#include "CDownSampleDlg.h"
#include "afxdialogex.h"
#include "resource.h"
#include "DownSample_Rate.h"

// CDownSampleDlg 대화 상자

IMPLEMENT_DYNAMIC(CDownSampleDlg, CDialog)

CDownSampleDlg::CDownSampleDlg(CWnd* pParent /*=nullptr*/)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_DownSampleRate);
	DDV_MinMaxInt(pDX, m_DownSampleRate, 1, 32);
}

CDownSampleDlg::~CDownSampleDlg()
{
}

void CDownSampleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_DownSmapleRate);
	DDV_MinMaxInr(pDX, m_DownSampleRate, 1, 32);
}


BEGIN_MESSAGE_MAP(CDownSampleDlg, CDialog)
	ON_EN_CHANGE(IDC_EDIT1, &CDownSampleDlg::OnEnChangeEdit1)
END_MESSAGE_MAP()



// CDownSampleDlg 메시지 처리기


void CDownSampleDlg::OnEnchangeEdit()
{

}