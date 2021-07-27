// ImageProcessing.cpp: 구현 파일
//

#include "pch.h"
#include "ImageProcessing2.h"
#include "ImageProcessing.h"
#include "afxdialogex.h"


// ImageProcessing 대화 상자

IMPLEMENT_DYNAMIC(ImageProcessing, CDialogEx)

ImageProcessing::ImageProcessing(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

ImageProcessing::~ImageProcessing()
{
}

void ImageProcessing::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ImageProcessing, CDialogEx)
END_MESSAGE_MAP()


// ImageProcessing 메시지 처리기
