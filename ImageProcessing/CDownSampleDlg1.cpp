// CDownSampleDlg1.cpp: 구현 파일
//

#include "pch.h"
#include "ImageProcessing2.h"
#include "CDownSampleDlg1.h"
#include "afxdialogex.h"


// CDownSampleDlg1 대화 상자

IMPLEMENT_DYNAMIC(CDownSampleDlg1, CDialog)

CDownSampleDlg1::CDownSampleDlg1(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

CDownSampleDlg1::~CDownSampleDlg1()
{
}

void CDownSampleDlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDownSampleDlg1, CDialog)
END_MESSAGE_MAP()


// CDownSampleDlg1 메시지 처리기
