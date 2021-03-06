﻿// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovcdbae1.pas' rev: 31.00 (Windows)

#ifndef Ovcdbae1HPP
#define Ovcdbae1HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <ovcconst.hpp>
#include <ovcdata.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ovcdbae1
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TOvcfrmDbAeSimpleMask;
class DELPHICLASS TDbAeSimpleMaskProperty;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TOvcfrmDbAeSimpleMask : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TComboBox* cbxMaskCharacter;
	Vcl::Stdctrls::TLabel* lblPictureChars;
	Vcl::Stdctrls::TButton* Button1;
	Vcl::Stdctrls::TButton* Button2;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall cbxMaskCharacterChange(System::TObject* Sender);
	
protected:
	System::WideChar Mask;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TOvcfrmDbAeSimpleMask(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TOvcfrmDbAeSimpleMask(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TOvcfrmDbAeSimpleMask(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcfrmDbAeSimpleMask(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TDbAeSimpleMaskProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual bool __fastcall AllEqual(void);
	virtual void __fastcall Edit(void);
	virtual int __fastcall GetEditLimit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TDbAeSimpleMaskProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TDbAeSimpleMaskProperty(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ovcdbae1 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCDBAE1)
using namespace Ovcdbae1;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Ovcdbae1HPP
