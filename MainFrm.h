// MainFrm.h : CMainFrame 类的接口
//


#pragma once

#include "sweepmine.h"	
#include "SettingDlg.h"

class CMainFrame : public CFrameWnd
{
	
protected: // 仅从序列化创建
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// 属性
public:

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// 实现
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // 控件条嵌入成员
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;

// 生成的消息映射函数
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnGradePrimary();
public:
	afx_msg void OnGradeDedium();
public:
	afx_msg void OnGradeSenior();
	afx_msg void OnSetByYourself();

private:
	mineBlockSize m_mineBlockSize;
	Location m_location;
	CSettingDlg m_setMineMapDlg;
	UINT16 m_minMineMapWidth;

private:
	void SetMineInfo(UINT8 mineSize, UINT16 mineCnt, UINT16 grade);
	void SetSubMenuGray(UINT8 type);
	void CustomMineMap();
};


