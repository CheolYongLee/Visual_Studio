﻿
// WaveletTransformDoc.h: CWaveletTransformDoc 클래스의 인터페이스
//


#pragma once


class CWaveletTransformDoc : public CDocument
{
protected: // serialization에서만 만들어집니다.
	CWaveletTransformDoc() noexcept;
	DECLARE_DYNCREATE(CWaveletTransformDoc)

// 특성입니다.
public:

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 구현입니다.
public:
	virtual ~CWaveletTransformDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 검색 처리기에 대한 검색 콘텐츠를 설정하는 도우미 함수
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	// 입력 영상 버퍼
	unsigned char* m_InputImage;
	// 출력 영상 버퍼
	unsigned char* m_OutputImage;
	// 변환 정렬 영상 버퍼
	unsigned char** m_ArrangeImage;
	// 영상의 세로축 크기
	int m_Height;
	// 영상의 가로축 크기
	int m_Width;
	// 영상의 전체 크기
	int m_Size;
};
