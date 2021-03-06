
// SliderSampleDlg.h : ヘッダー ファイル
//

#pragma once


// CSliderSampleDlg ダイアログ
class CSliderSampleDlg : public CDialogEx
{
// コンストラクション
public:
	CSliderSampleDlg(CWnd* pParent = nullptr);	// 標準コンストラクター

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SLIDERSAMPLE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonChange();
	afx_msg void OnBnClickedButtonRedraw();

	CButton m_change_button;
	CButton m_redraw_button;
	CSliderCtrl m_slider;

private:
	unsigned int       m_index;
	const unsigned int m_rainbow_count = 6;
	CBrush*            m_rainbow;
public:
	afx_msg void OnBnClickedButtonUpdate();
};
