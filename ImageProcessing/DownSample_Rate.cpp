﻿// DownSample_Rate.cpp: 구현 파일
//

#include "pch.h"
#include "ImageProcessing.h"
#include "DownSample_Rate.h"
#include "afxdialogex.h"
#include "resource.h"

// DownSample_Rate 대화 상자

IMPLEMENT_DYNAMIC(DownSample_Rate, CDialogEx)

DownSample_Rate::DownSample_Rate(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, m_DownSampleRate(0)
{

}

DownSample_Rate::~DownSample_Rate()
{
}

void DownSample_Rate::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_DownSampleRate);
	DDV_MinMaxInt(pDX, m_DownSampleRate, 1, 32);
}


BEGIN_MESSAGE_MAP(DownSample_Rate, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &DownSample_Rate::OnEnChangeEdit1)
END_MESSAGE_MAP()


// DownSample_Rate 메시지 처리기


void DownSample_Rate::OnEnChangeEdit1()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
