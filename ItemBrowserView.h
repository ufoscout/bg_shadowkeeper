
/************************************************************************************
	Copyright (c) 2000 Aaron O'Neil
	All rights reserved.

	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions
	are met:

		1) Redistributions of source code must retain the above copyright notice, 
				this list of conditions and the following disclaimer.
		2) Redistributions in binary form must reproduce the above copyright notice, 
				this list of conditions and the following disclaimer in the documentation
				and/or other materials provided with the distribution.
		3) Redistributions in binary form must reproduce the above copyright notice on
				program startup. Additional credits for program modification are acceptable
				but original copyright and credits must be visible at startup.
		4) You may charge a reasonable copying fee for any distribution of Shadow Keeper. 
				You may charge any fee you choose for support of Shadow Keeper. You may not 
				charge a fee for Shadow Keeper itself.

  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
	IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
	OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
	IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
	INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
	NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
	DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
	THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
	THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

**************************************************************************************/

#if !defined(AFX_ITEMBROWSERVIEW_H__B50EF824_66C3_11D4_9BE4_955A1E74BB0D__INCLUDED_)
#define AFX_ITEMBROWSERVIEW_H__B50EF824_66C3_11D4_9BE4_955A1E74BB0D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ItemBrowserView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CItemBrowserView form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

#include "BitmapWnd.h"
#include "ItemListCtrl.h"

#define IBV_MARGIN_RIGHT 97

class CItemBrowserView : public CFormView
{
protected:
	CItemBrowserView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CItemBrowserView)

private:
	CItemListCtrl	m_lcItems;
	CBitmapWnd		m_wndBitmap;

	void UpdateList();
	void UpdateGridLines();

	void UpdateAssignButton();
	void DisplayItem(const char *pszResource);

// Form Data
public:
	//{{AFX_DATA(CItemBrowserView)
	enum { IDD = IDD_ITEM_BROWSER };
	CButton	m_btnFilter;
	CButton	m_btnExportItem;
	CButton	m_btnExportList;
	CStatic	m_stCountPrompt;
	CButton	m_btnAssign;
	CEdit	m_edDescription;
	CStatic	m_stItemCount;
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CItemBrowserView)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CItemBrowserView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CItemBrowserView)
	afx_msg void OnAssignitem();
	afx_msg void OnFilteritems();
	afx_msg void OnExportitems();
	afx_msg void OnExportitemres();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ITEMBROWSERVIEW_H__B50EF824_66C3_11D4_9BE4_955A1E74BB0D__INCLUDED_)
