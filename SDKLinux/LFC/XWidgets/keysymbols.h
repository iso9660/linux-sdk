/* 
* LFC Library - Linux toolkit
* 
* Copyright (C) 2012, 2013 Daniel Mosquera Villanueva 
* (milkatoffeecuco@gmail.com)
* This file is part of LFC Library.
* 
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with this library. If not, see <http://www.gnu.org/licenses/>.
*
**/
#ifndef KEYSYMBOLS_H
#define KEYSYMBOLS_H

#include <X11/keysym.h>

class KeySymbols {

public:
	static const int Void = XK_VoidSymbol;


	static const int BackSpace = XK_BackSpace;
	
	// Misc
	
	static const int Tab = XK_Tab;
	static const int LineFeed = XK_Linefeed;
	static const int Clear = XK_Clear;
	static const int Return = XK_Return;
	static const int Pause = XK_Pause;
	static const int ScrollLock = XK_Scroll_Lock;
	static const int SysReq = XK_Sys_Req;
	static const int Escape = XK_Escape;
	static const int Delete = XK_Delete;


	// Multi key composition

	static const int MultiKey = XK_Multi_key;
	static const int CodeInput = XK_Codeinput;
	static const int SingleCandidate = XK_SingleCandidate;
	static const int MultipleCandidate = XK_MultipleCandidate;
	static const int PreviousCandidate = XK_PreviousCandidate;

	// Japanese

	static const int Kanji = XK_Kanji;
	static const int Muhenkan = XK_Muhenkan;
	static const int KenhanMode = XK_Henkan_Mode;
	static const int Kenhan = XK_Henkan;
	static const int Romaji = XK_Romaji;
	static const int Hiragana = XK_Hiragana;
	static const int Katakana = XK_Katakana;
	static const int HiraganaKatakana = XK_Hiragana_Katakana;
	static const int Zenkaku = XK_Zenkaku;
	static const int Hankaku = XK_Hankaku;
	static const int ZenkakuHankaku = XK_Zenkaku_Hankaku;
	static const int Touroku = XK_Touroku;
	static const int Massyo = XK_Massyo;
	static const int KanaLock = XK_Kana_Lock;
	static const int KanaShift = XK_Kana_Shift;
	static const int EisuShift = XK_Eisu_Shift;
	static const int EisuToggle = XK_Eisu_toggle;
	static const int KanjiBanjou = XK_Kanji_Bangou;
	static const int ZenKoho = XK_Zen_Koho;
	static const int MaeKoho = XK_Mae_Koho;

	// Cursor control and motion

	static const int Home = XK_Home;
	static const int Left = XK_Left;
	static const int Up = XK_Up;
	static const int Right = XK_Right;
	static const int Down = XK_Down;
	static const int PRior = XK_Prior;
	static const int PageUp = XK_Page_Up;
	static const int Next = XK_Next;
	static const int PageDown = XK_Page_Down;
	static const int End = XK_End;
	static const int Begin = XK_Begin;


	// Misc functions

	static const int Select = XK_Select;
	static const int Print = XK_Print;
	static const int Execute = XK_Execute;
	static const int Insert = XK_Insert;
	static const int Undo = XK_Undo;
	static const int Redo = XK_Redo;
	static const int Menu = XK_Menu;
	static const int Find = XK_Find;
	static const int Cancel = XK_Cancel;
	static const int Help = XK_Help;
	static const int Break = XK_Break;
	static const int ModeSwitch = XK_Mode_switch;
	static const int ScriptSwitch = XK_script_switch;
	static const int NumLock = XK_Num_Lock;

	// Keypad

	static const int KeyPadSpace = XK_KP_Space;
	static const int KKeyPadTab = XK_KP_Tab;
	static const int KeyPadEnter = XK_KP_Enter;
	static const int KeyPadF1 = XK_KP_F1;
	static const int KeyPadF2 = XK_KP_F2;
	static const int KeyPadF3 = XK_KP_F3;
	static const int KeyPadF4 = XK_KP_F4;
	static const int KeyPadHome = XK_KP_Home;
	static const int KeyPadLeft = XK_KP_Left;
	static const int KeyPadUp = XK_KP_Up;
	static const int KeyPadRight = XK_KP_Right;
	static const int KeyPadDown = XK_KP_Down;
	static const int KeyPadPrior = XK_KP_Prior;
	static const int KeyPadPageUp = XK_KP_Page_Up;
	static const int KeyPadNext = XK_KP_Next;
	static const int KeyPadPageDown = XK_KP_Page_Down;
	static const int KeyPadEnd = XK_KP_End;
	static const int KeyPadBegin = XK_KP_Begin;
	static const int KeyPadInsert = XK_KP_Insert;
	static const int KeyPadDelete = XK_KP_Delete;
	static const int KeyPadEqual = XK_KP_Equal;
	static const int KeyPadMultiply = XK_KP_Multiply;
	static const int KeyPadAdd = XK_KP_Add;
	static const int KeyPadSeparator = XK_KP_Separator;
	static const int KeyPadSubstract = XK_KP_Subtract;
	static const int KeyPadDecimal = XK_KP_Decimal;
	static const int KeyPadDivide = XK_KP_Divide;

	static const int KeyPad0 = XK_KP_0;
	static const int KeyPad1 = XK_KP_1;
	static const int KeyPad2 = XK_KP_2;
	static const int KeyPad3 = XK_KP_3;
	static const int KeyPad4 = XK_KP_4;
	static const int KeyPad5 = XK_KP_5;
	static const int KeyPad6 = XK_KP_6;
	static const int KeyPad7 = XK_KP_7;
	static const int KeyPad8 = XK_KP_8;
	static const int KeyPad9 = XK_KP_9;

	// Auxiliary functions

	static const int F1 = XK_F1;
	static const int F2 = XK_F2;
	static const int F3 = XK_F3;
	static const int F4 = XK_F4;
	static const int F5 = XK_F5;
	static const int F6 = XK_F6;
	static const int F7 = XK_F7;
	static const int F8 = XK_F8;
	static const int F9 = XK_F9;
	static const int F10 = XK_F10;
	static const int F11 = XK_F11;
	static const int L1 = XK_L1; 
	static const int F12 = XK_F12;
	static const int L2 = XK_L2; 
	static const int F13 = XK_F13;
	static const int L3 = XK_L3; 
	static const int F14 = XK_F14;
	static const int L4 = XK_L4; 
	static const int F15 = XK_F15;
	static const int L5 = XK_L5; 
	static const int F16 = XK_F16;
	static const int L6 = XK_L6; 
	static const int F17 = XK_F17;
	static const int L7 = XK_L7; 
	static const int F18 = XK_F18;
	static const int L8 = XK_L8; 
	static const int F19 = XK_F19;
	static const int L9 = XK_L9; 
	static const int F20 = XK_F20;
	static const int L10 = XK_L10;
	static const int F21 = XK_F21;
	static const int R1 = XK_R1;
	static const int F22 = XK_F22;
	static const int R2 = XK_R2; 
	static const int F23 = XK_F23;
	static const int R3 = XK_R3; 
	static const int F24 = XK_F24;
	static const int R4 = XK_R4; 
	static const int F25 = XK_F25;
	static const int R5 = XK_R5; 
	static const int F26 = XK_F26;
	static const int R6 = XK_R6; 
	static const int R27 = XK_F27;
	static const int R7 = XK_R7; 
	static const int F28 = XK_F28;
	static const int R8 = XK_R8; 
	static const int F29 = XK_F29;
	static const int R9 = XK_R9; 
	static const int F30 = XK_F30;
	static const int R10 = XK_R10;
	static const int F31 = XK_F31;
	static const int R11 = XK_R11;
	static const int F32 = XK_F32;
	static const int R12 = XK_R12;
	static const int F33 = XK_F33;
	static const int R13 = XK_R13;
	static const int F34 = XK_F34;
	static const int R14 = XK_R14;
	static const int F35 = XK_F35;
	static const int R15 = XK_R15;

/* Modifiers */

	static const int ShiftLeft = XK_Shift_L;
	static const int ShiftRight = XK_Shift_R;   
	static const int ControlLeft = XK_Control_L; 
	static const int ControlRight = XK_Control_R; 
	static const int CapsLock = XK_Caps_Lock; 
	static const int ShiftLock = XK_Shift_Lock;

	static const int MetaLeft = XK_Meta_L;
	static const int MetaRight = XK_Meta_R; 
	static const int AltLeft = XK_Alt_L;  
	static const int AltRight = XK_Alt_R;  
	static const int SuperLeft = XK_Super_L;
	static const int SuperRight = XK_Super_R;
	static const int HyperLeft = XK_Hyper_L;
	static const int HyperRight = XK_Hyper_R;

	// XKB Extension

	static const int ISOLock = XK_ISO_Lock;             
	static const int ISOLevel2Latch = XK_ISO_Level2_Latch;
	static const int ISOLevel3Shift = XK_ISO_Level3_Shift;     
	static const int ISOLevel3Latch = XK_ISO_Level3_Latch;     
	static const int ISOLevel3Lock = XK_ISO_Level3_Lock;      
	static const int ISOLevel5Shift = XK_ISO_Level5_Shift;     
	static const int ISOLevel5Latch = XK_ISO_Level5_Latch;     
	static const int ISOLevel5Lock = XK_ISO_Level5_Lock;      
	static const int ISOGroupShift = XK_ISO_Group_Shift;        
	static const int ISOGroupLatch = XK_ISO_Group_Latch;      
	static const int ISOGroupLock = XK_ISO_Group_Lock;       
	static const int ISONextGroup = XK_ISO_Next_Group;       
	static const int ISONextGroupLock = XK_ISO_Next_Group_Lock;  
	static const int ISOPrevGroup = XK_ISO_Prev_Group;       
	static const int ISOPrevGroupLock = XK_ISO_Prev_Group_Lock;  
	static const int ISOFirstGroup = XK_ISO_First_Group;      
	static const int ISOFirstGroupLock = XK_ISO_First_Group_Lock; 
	static const int ISOLastGroup = XK_ISO_Last_Group;        
	static const int ISOLastGroupLock = XK_ISO_Last_Group_Lock;   

	static const int ISOLeftTab = XK_ISO_Left_Tab;         
	static const int ISOMoveLineUp = XK_ISO_Move_Line_Up;     
	static const int ISOMoveLineDown = XK_ISO_Move_Line_Down;   
	static const int ISOPartialLineUp = XK_ISO_Partial_Line_Up;  
	static const int ISOPartialLineDown = XK_ISO_Partial_Line_Down;      
	static const int ISOPartialSpaceLeft = XK_ISO_Partial_Space_Left;     
	static const int ISOPartialSpaceRight = XK_ISO_Partial_Space_Right;    
	static const int ISOSetMarginLeft = XK_ISO_Set_Margin_Left;        
	static const int ISOSetMarginRight = XK_ISO_Set_Margin_Right;       
	static const int ISOReleaseMarginLeft = XK_ISO_Release_Margin_Left;    
	static const int ISOReleaseMarginRight = XK_ISO_Release_Margin_Right;   
	static const int ISOReleaseBothMargins = XK_ISO_Release_Both_Margins;   
	static const int ISOFastCursorLeft = XK_ISO_Fast_Cursor_Left;       
	static const int ISOFastCursorRight = XK_ISO_Fast_Cursor_Right;      
	static const int ISOFastCursorUp = XK_ISO_Fast_Cursor_Up;         
	static const int ISOFastCursorDown = XK_ISO_Fast_Cursor_Down;       
	static const int ISOContinuousUnderline = XK_ISO_Continuous_Underline;   
	static const int ISODiscontinuousUnderline = XK_ISO_Discontinuous_Underline;
	static const int ISOEmphasize = XK_ISO_Emphasize;              
	static const int ISOCenter_Object = XK_ISO_Center_Object;          
	static const int ISOEnter = XK_ISO_Enter;                  

	static const int DeadGrave = XK_dead_grave;           
	static const int DeadAcute = XK_dead_acute;          
	static const int DeadCircunflex = XK_dead_circumflex;      
	static const int DeadTide = XK_dead_tilde;           
	static const int DeadPerisponemi = XK_dead_perispomeni;       
	static const int DeadMacron = XK_dead_macron;          
	static const int DeadBreve = XK_dead_breve;           
	static const int DeadAbovedot = XK_dead_abovedot;        
	static const int DeadDiaeresis = XK_dead_diaeresis;       
	static const int DeadAboveRing = XK_dead_abovering;       
	static const int DeadDoubleAcute = XK_dead_doubleacute;     
	static const int DeadDeadCaron = XK_dead_caron;           
	static const int DeadCedilla = XK_dead_cedilla;         
	static const int DeadOgonet = XK_dead_ogonek;          
	static const int DeadIota = XK_dead_iota;            
	static const int DeadVoicedSound = XK_dead_voiced_sound;    
	static const int DeadSemivoicedSound = XK_dead_semivoiced_sound;
	static const int DeadBelowDot = XK_dead_belowdot;        
	static const int DeadHook = XK_dead_hook;              
	static const int DeadHorn = XK_dead_horn;              
	static const int DeadStroke = XK_dead_stroke;            
	static const int DeadAboveComma = XK_dead_abovecomma;        
	static const int DeadPsili = XK_dead_psili;               
	static const int DeadAboveReversedComma = XK_dead_abovereversedcomma;
	static const int DeadDasia = XK_dead_dasia;               
	static const int DeadDoubleGrave = XK_dead_doublegrave;       
	static const int DeadBelowRing = XK_dead_belowring;         
	static const int DeadBelowMacron = XK_dead_belowmacron;       
	static const int DeadBelowCircunflex = XK_dead_belowcircumflex;   
	static const int DeadBelowCircle = XK_dead_belowtilde;        
	static const int DeadBelowBreve = XK_dead_belowbreve;        
	static const int DeadBelowDiaeresis = XK_dead_belowdiaeresis;    
	static const int DeadInverterBreve = XK_dead_invertedbreve;     
	static const int DeadBelowComma = XK_dead_belowcomma;        
	static const int DeadCurrency = XK_dead_currency;          

	// dead vowels for universal syllable entry

	static const int Dead_a = XK_dead_a;
	static const int Dead_A = XK_dead_A;
	static const int Dead_e = XK_dead_e;
	static const int Dead_E = XK_dead_E;
	static const int Dead_i = XK_dead_i;
	static const int Dead_I = XK_dead_I;
	static const int Dead_o = XK_dead_o;
	static const int Dead_O = XK_dead_O;
	static const int Dead_u = XK_dead_u;
	static const int Dead_U = XK_dead_U;
	static const int DeadSmallSchwa = XK_dead_small_schwa;  
	static const int DeadCapitalSchwa = XK_dead_capital_schwa;

	static const int FirstVirtualScreen = XK_First_Virtual_Screen;
	static const int PrevVirtualScreen = XK_Prev_Virtual_Screen; 
	static const int NextVirtualScreen = XK_Next_Virtual_Screen; 
	static const int LastVirtualScreen = XK_Last_Virtual_Screen; 
	static const int TerminateServer = XK_Terminate_Server;    

	static const int AccessXEnable = XK_AccessX_Enable;         
	static const int AccessXFeedbackEnable = XK_AccessX_Feedback_Enable;
	static const int RepeatsKeyEnable = XK_RepeatKeys_Enable;      
	static const int SlowsKeysEnable = XK_SlowKeys_Enable;        
	static const int BounceKeysEnable = XK_BounceKeys_Enable;      
	static const int StickyKeysEnable = XK_StickyKeys_Enable;      
	static const int MouseKeysEnable = XK_MouseKeys_Enable;       
	static const int MouseKeysAccelEnable = XK_MouseKeys_Accel_Enable; 
	static const int Overlay1Enable = XK_Overlay1_Enable;        
	static const int Oberlay2Enable = XK_Overlay2_Enable;        
	static const int AudibleBellEnable = XK_AudibleBell_Enable;     

	static const int PointerLeft = XK_Pointer_Left;         
	static const int PointerRight = XK_Pointer_Right;        
	static const int PointerUp = XK_Pointer_Up;           
	static const int PointerDown = XK_Pointer_Down;         
	static const int PointerUpLeft = XK_Pointer_UpLeft;       
	static const int PointerUpRight = XK_Pointer_UpRight;      
	static const int PointerDownLeft = XK_Pointer_DownLeft;     
	static const int PointerDownRight = XK_Pointer_DownRight;    
	static const int PointerButtonDflt = XK_Pointer_Button_Dflt;  
	static const int PointerButton1 = XK_Pointer_Button1;      
	static const int PointerButton2 = XK_Pointer_Button2;      
	static const int PointerButton3 = XK_Pointer_Button3;      
	static const int PointerButton4 = XK_Pointer_Button4;      
	static const int PointerButton5 = XK_Pointer_Button5;      
	static const int PointerDoubleClickDflt = XK_Pointer_DblClick_Dflt;
	static const int PointerDoubleClick1 = XK_Pointer_DblClick1;    
	static const int PointerDoubleClick2 = XK_Pointer_DblClick2;    
	static const int PointerDoubleClick3 = XK_Pointer_DblClick3;    
	static const int PointerDoubleClick4 = XK_Pointer_DblClick4;    
	static const int PointerDoubleClick5 = XK_Pointer_DblClick5;    
	static const int PointerDragDflt = XK_Pointer_Drag_Dflt;    
	static const int PointerDrag1 = XK_Pointer_Drag1;        
	static const int PointerDrag2 = XK_Pointer_Drag2;        
	static const int PointerDrag3 = XK_Pointer_Drag3;        
	static const int PointerDrag4 = XK_Pointer_Drag4;        
	static const int PointerDrag5 = XK_Pointer_Drag5;        

	static const int PointerEnableKeys = XK_Pointer_EnableKeys; 
	static const int PointerAccelerate = XK_Pointer_Accelerate; 
	static const int PointerDfltButtonNext = XK_Pointer_DfltBtnNext;
	static const int PointerDfltButtonPrev = XK_Pointer_DfltBtnPrev;

	// 3270 Terminal Keys

/*
	static const int K3270Duplicate = XK_3270_Duplicate;   
	static const int K3270FieldMark = XK_3270_FieldMark;   
	static const int K3270Right2 = XK_3270_Right2;      
	static const int K3270Left2 = XK_3270_Left2;       
	static const int K3270BackTab = XK_3270_BackTab;     
	static const int K3270EraseEOF = XK_3270_EraseEOF;    
	static const int K3270EraseInput = XK_3270_EraseInput;  
	static const int K3270Reset = XK_3270_Reset;       
	static const int K3270Quit = XK_3270_Quit;        
	static const int K3270PA1 = XK_3270_PA1;         
	static const int K3270PA2 = XK_3270_PA2;         
	static const int K3270PA3 = XK_3270_PA3;         
	static const int K3270Test = XK_3270_Test;        
	static const int K3270Attn = XK_3270_Attn;        
	static const int K3270CursorBlink = XK_3270_CursorBlink; 
	static const int K3270AltCursor = XK_3270_AltCursor;   
	static const int K3270KeyClick = XK_3270_KeyClick;    
	static const int K3270Jump = XK_3270_Jump;        
	static const int K3270Ident = XK_3270_Ident;       
	static const int K3270Rule = XK_3270_Rule;        
	static const int K3270Copy = XK_3270_Copy;        
	static const int K3270Play = XK_3270_Play;        
	static const int K3270Setup = XK_3270_Setup;       
	static const int K3270Record = XK_3270_Record;      
	static const int K3270ChangeScreen = XK_3270_ChangeScreen;
	static const int K3270DeleteWord = XK_3270_DeleteWord;  
	static const int K3270ExSelect = XK_3270_ExSelect;    
	static const int K3270CursorSelect = XK_3270_CursorSelect;
	static const int K3270PrintScreen = XK_3270_PrintScreen; 
	static const int K3270Enter = XK_3270_Enter;       
*/

	// Latin 1 (ISO/IEC 8859-1 = Unicode U+0020..U+00FF)

	static const int Space = XK_space;        
	static const int Exclam = XK_exclam;       
	static const int QuoteDbl = XK_quotedbl;     
	static const int NumberSign = XK_numbersign;   
	static const int Dollar = XK_dollar;       
	static const int Percent = XK_percent;      
	static const int Ampersand = XK_ampersand;    
	static const int Apostrophe = XK_apostrophe;   
	static const int QuoteRing = XK_quoteright;   
	static const int ParenLeft = XK_parenleft;    
	static const int ParenRight = XK_parenright;   
	static const int Asterisk = XK_asterisk;     
	static const int Plus = XK_plus;         
	static const int Comma = XK_comma;        
	static const int Minus = XK_minus;        
	static const int Period = XK_period;       
	static const int Slash = XK_slash;        
	static const int Number0 = XK_0;            
	static const int Number1 = XK_1;            
	static const int Number2 = XK_2;            
	static const int Number3 = XK_3;            
	static const int Number4 = XK_4;            
	static const int Number5 = XK_5;            
	static const int Number6 = XK_6;            
	static const int Number7 = XK_7;            
	static const int Number8 = XK_8;            
	static const int Number9 = XK_9;            
	static const int Colon = XK_colon;        
	static const int Semicolon = XK_semicolon;    
	static const int Less = XK_less;         
	static const int Equal = XK_equal;        
	static const int Greater = XK_greater;      
	static const int Question = XK_question;     
	static const int At = XK_at;           
	static const int A = XK_A;            
	static const int B = XK_B;            
	static const int C = XK_C;            
	static const int D = XK_D;            
	static const int E = XK_E;            
	static const int F = XK_F;            
	static const int G = XK_G;            
	static const int H = XK_H;            
	static const int I = XK_I;            
	static const int J = XK_J;            
	static const int K = XK_K;            
	static const int L = XK_L;            
	static const int M = XK_M;            
	static const int N = XK_N;            
	static const int O = XK_O;            
	static const int P = XK_P;            
	static const int Q = XK_Q;            
	static const int R = XK_R;            
	static const int S = XK_S;            
	static const int T = XK_T;            
	static const int U = XK_U;            
	static const int V = XK_V;            
	static const int W = XK_W;            
	static const int X = XK_X;            
	static const int Y = XK_Y;            
	static const int Z = XK_Z;            
	static const int BracketLeft = XK_bracketleft;  
	static const int BackSlash = XK_backslash;    
	static const int BracketRight = XK_bracketright; 
	static const int AsciiCircum = XK_asciicircum;  
	static const int Underscore = XK_underscore;   
	static const int Grave = XK_grave;        
	static const int QuoteLeft = XK_quoteleft;    
	static const int a = XK_a;            
	static const int b = XK_b;            
	static const int c = XK_c;            
	static const int d = XK_d;            
	static const int e = XK_e;            
	static const int f = XK_f;            
	static const int g = XK_g;            
	static const int h = XK_h;            
	static const int i = XK_i;            
	static const int j = XK_j;            
	static const int k = XK_k;            
	static const int l = XK_l;            
	static const int m = XK_m;            
	static const int n = XK_n;            
	static const int o = XK_o;            
	static const int p = XK_p;            
	static const int q = XK_q;            
	static const int r = XK_r;            
	static const int s = XK_s;            
	static const int t = XK_t;            
	static const int u = XK_u;            
	static const int v = XK_v;            
	static const int w = XK_w;            
	static const int x = XK_x;            
	static const int y = XK_y;            
	static const int z = XK_z;            
	static const int Braceleft = XK_braceleft;         
	static const int Bar = XK_bar;               
	static const int BraceRight = XK_braceright;        
	static const int AsciiTilde = XK_asciitilde;        

	static const int NoBreakSpace = XK_nobreakspace;      
	static const int ExclamDown = XK_exclamdown;        
	static const int Cent = XK_cent;              
	static const int Sterling = XK_sterling;          
	static const int Currency = XK_currency;          
	static const int Yen = XK_yen;               
	static const int BrokenBar = XK_brokenbar;         
	static const int Section = XK_section;           
	static const int Diaeresis = XK_diaeresis;         
	static const int Copyright = XK_copyright;         
	static const int OrdFemine = XK_ordfeminine;       
	static const int GuillemotLeft = XK_guillemotleft;      
	static const int NotSign = XK_notsign;           
	static const int Hypen = XK_hyphen;            
	static const int Registered = XK_registered;        
	static const int Macron = XK_macron;            
	static const int Degree = XK_degree;            
	static const int PlusMinus = XK_plusminus;         
	static const int TwoSuperior = XK_twosuperior;       
	static const int ThreeSuperior = XK_threesuperior;     
	static const int Acute = XK_acute;             
	static const int Mu = XK_mu;                
	static const int Paragraph = XK_paragraph;         
	static const int PeriodCentered = XK_periodcentered;    
	static const int Cedilla = XK_cedilla;           
	static const int OneSuperior = XK_onesuperior;       
	static const int Masculine = XK_masculine;         
	static const int GillemotRight = XK_guillemotright;   
	static const int OneQuarter = XK_onequarter;        
	static const int OneHalf = XK_onehalf;           
	static const int ThreeQuarters = XK_threequarters;     
	static const int QuestionDown = XK_questiondown;      
	static const int AGrave = XK_Agrave;            
	static const int AGute = XK_Aacute;            
	static const int AGincumflex = XK_Acircumflex;       
	static const int AGilde = XK_Atilde;            
	static const int ADiaeresis = XK_Adiaeresis;        
	static const int ARing = XK_Aring;             
	static const int AE = XK_AE;                
	static const int CCedilla = XK_Ccedilla;          
	static const int EGrave = XK_Egrave;            
	static const int EAcute = XK_Eacute;            
	static const int ECircumflex = XK_Ecircumflex;       
	static const int EDiaeresis = XK_Ediaeresis;        
	static const int IGrave = XK_Igrave;            
	static const int IAcute = XK_Iacute;            
	static const int ICircumflex = XK_Icircumflex;       
	static const int IDiaeresis = XK_Idiaeresis;        
	static const int ETH = XK_ETH;               
	static const int ETh = XK_Eth;               
	static const int NTilde = XK_Ntilde;            
	static const int OGrave = XK_Ograve;            
	static const int OAcute = XK_Oacute;            
	static const int OCircumflex = XK_Ocircumflex;       
	static const int OTilde = XK_Otilde;            
	static const int ODiaeresis = XK_Odiaeresis;        
	static const int Multiply = XK_multiply;          
	static const int OSlash = XK_Oslash;            
	static const int OOblique = XK_Ooblique;          
	static const int UGrave = XK_Ugrave;            
	static const int UAcute = XK_Uacute;            
	static const int UCircumflex = XK_Ucircumflex;       
	static const int UDiaeresis = XK_Udiaeresis;        
	static const int YAcute = XK_Yacute;            
	static const int THORN = XK_THORN;             
	static const int Thorn = XK_Thorn;             
	static const int SSharp = XK_ssharp;            
	static const int aGrave = XK_agrave;            
	static const int aAcute = XK_aacute;            
	static const int aCircumflex = XK_acircumflex;       
	static const int aTilde = XK_atilde;            
	static const int aDiaeresis = XK_adiaeresis;        
	static const int aRing = XK_aring;             
	static const int aE = XK_ae;                
	static const int cCedilla = XK_ccedilla;          
	static const int eGrave = XK_egrave;            
	static const int eAcute = XK_eacute;            
	static const int eCircumflex = XK_ecircumflex;       
	static const int eDiaeresis = XK_ediaeresis;        
	static const int iGrave = XK_igrave;            
	static const int iAcute = XK_iacute;            
	static const int iCircumflex = XK_icircumflex;       
	static const int iDiaeresis = XK_idiaeresis;        
	static const int eTh = XK_eth;               
	static const int nTilde = XK_ntilde;            
	static const int oGrave = XK_ograve;            
	static const int oAcute = XK_oacute;            
	static const int oCircumflex = XK_ocircumflex;       
	static const int oTilde = XK_otilde;            
	static const int oDiaeresis = XK_odiaeresis;        
	static const int Division = XK_division;          
	static const int oSlash = XK_oslash;            
	static const int oOblique = XK_ooblique;          
	static const int uGrave = XK_ugrave;            
	static const int uAcute = XK_uacute;            
	static const int uCircumflex = XK_ucircumflex;       
	static const int uDiaeresis = XK_udiaeresis;        
	static const int yAcute = XK_yacute;            
	static const int tHorn = XK_thorn;             
	static const int yDiaeresis = XK_ydiaeresis;        

	// Latin 2

	static const int AOgonek = XK_Aogonek;     
	static const int Breve = XK_breve;       
	static const int LStroke = XK_Lstroke;     
	static const int LCaron = XK_Lcaron;      
	static const int SAcute = XK_Sacute;      
	static const int SCaron = XK_Scaron;      
	static const int SCedilla = XK_Scedilla;    
	static const int TCaron = XK_Tcaron;      
	static const int ZAcute = XK_Zacute;      
	static const int ZCaron = XK_Zcaron;      
	static const int ZAboveDot = XK_Zabovedot;   
	static const int aOgonek = XK_aogonek;     
	static const int oOgonek = XK_ogonek;      
	static const int lStroke = XK_lstroke;     
	static const int lCaron = XK_lcaron;      
	static const int sAcute = XK_sacute;      
	static const int Caron = XK_caron;       
	static const int sCaron = XK_scaron;      
	static const int sCedilla = XK_scedilla;    
	static const int tCaron = XK_tcaron;      
	static const int zAcute = XK_zacute;      
	static const int DoubleAcute = XK_doubleacute; 
	static const int xCaron = XK_zcaron;      
	static const int zAboveDot = XK_zabovedot;   
	static const int RAcute = XK_Racute;      
	static const int ABreve = XK_Abreve;      
	static const int LAcute = XK_Lacute;      
	static const int CAcute = XK_Cacute;      
	static const int CCaron = XK_Ccaron;      
	static const int EOgonek = XK_Eogonek;     
	static const int ECaron = XK_Ecaron;      
	static const int DCaron = XK_Dcaron;      
	static const int DStroke = XK_Dstroke;     
	static const int NAcute = XK_Nacute;      
	static const int NCaron = XK_Ncaron;      
	static const int ODoubleAcute = XK_Odoubleacute;
	static const int RCaron = XK_Rcaron;      
	static const int URing = XK_Uring;       
	static const int UDoubleAcute = XK_Udoubleacute;
	static const int TCedilla = XK_Tcedilla;    
	static const int rAcute = XK_racute;      
	static const int aBreve = XK_abreve;      
	static const int lAcute = XK_lacute;      
	static const int cAcute = XK_cacute;      
	static const int cCarone = XK_ccaron;      
	static const int eOgonek = XK_eogonek;     
	static const int eCaron = XK_ecaron;      
	static const int dCaron = XK_dcaron;      
	static const int dStroke = XK_dstroke;     
	static const int nAcute = XK_nacute;      
	static const int nCaron = XK_ncaron;      
	static const int oDoubleAcute = XK_odoubleacute;
	static const int rCaron = XK_rcaron;      
	static const int uRing = XK_uring;       
	static const int uDoubleAcute = XK_udoubleacute;
	static const int tCedilla = XK_tcedilla;    
	static const int AboveDot = XK_abovedot;    

	// Latin 3

	static const int HStroke = XK_Hstroke;         
	static const int HCircumflex = XK_Hcircumflex;     
	static const int IAboveDot = XK_Iabovedot;       
	static const int GBreve = XK_Gbreve;          
	static const int JCircumflex = XK_Jcircumflex;     
	static const int hStroke = XK_hstroke;         
	static const int hCircumflex = XK_hcircumflex;     
	static const int iDotless = XK_idotless;        
	static const int gBreve = XK_gbreve;          
	static const int jCircumflex = XK_jcircumflex;     
	static const int CAboveDot = XK_Cabovedot;       
	static const int CCircumflex = XK_Ccircumflex;     
	static const int GAboveDot = XK_Gabovedot;       
	static const int GCircumflex = XK_Gcircumflex;     
	static const int UBreve = XK_Ubreve;          
	static const int SCircumflex = XK_Scircumflex;     
	static const int cAboveDot = XK_cabovedot;       
	static const int cCircumflex = XK_ccircumflex;     
	static const int gAboveDot = XK_gabovedot;       
	static const int gCircumflex = XK_gcircumflex;     
	static const int uBreve = XK_ubreve;          
	static const int sCircumflex = XK_scircumflex;     


	// Latin 4

	static const int Kra = XK_kra;          
	static const int Kappa = XK_kappa;        
	static const int RCedilla = XK_Rcedilla;     
	static const int ITilde = XK_Itilde;       
	static const int LCedilla = XK_Lcedilla;     
	static const int EMacron = XK_Emacron;      
	static const int GCedilla = XK_Gcedilla;     
	static const int TSlash = XK_Tslash;       
	static const int rCedilla = XK_rcedilla;     
	static const int iTilde = XK_itilde;       
	static const int lCedilla = XK_lcedilla;     
	static const int eMacron = XK_emacron;      
	static const int gCedilla = XK_gcedilla;     
	static const int tSlash = XK_tslash;       
	static const int ENG = XK_ENG;          
	static const int eng = XK_eng;          
	static const int AMacron = XK_Amacron;      
	static const int IOgonek = XK_Iogonek;      
	static const int EAboveDot = XK_Eabovedot;    
	static const int IMacron = XK_Imacron;      
	static const int NCedilla = XK_Ncedilla;     
	static const int OMacron = XK_Omacron;      
	static const int KCedilla = XK_Kcedilla;     
	static const int UOgonek = XK_Uogonek;      
	static const int UTilde = XK_Utilde;       
	static const int UMacron = XK_Umacron;      
	static const int aMacron = XK_amacron;      
	static const int iOgonek = XK_iogonek;      
	static const int eAboveDot = XK_eabovedot;    
	static const int iMacron = XK_imacron;      
	static const int nCedilla = XK_ncedilla;     
	static const int oMacron = XK_omacron;      
	static const int kCedilla = XK_kcedilla;     
	static const int uOgonek = XK_uogonek;      
	static const int uTilde = XK_utilde;       
	static const int uMacron = XK_umacron;      

	// Latin 8

	static const int WCircumflex = XK_Wcircumflex;
	static const int wCircumflex = XK_wcircumflex;
	static const int YCircumflex = XK_Ycircumflex;
	static const int yCircumflex = XK_ycircumflex;
	static const int BAboveDot = XK_Babovedot;  
	static const int bAboveDot = XK_babovedot;  
	static const int DAboveDot = XK_Dabovedot;  
	static const int dAboveDot = XK_dabovedot;  
	static const int FAboveDot = XK_Fabovedot;  
	static const int fAboveDot = XK_fabovedot;  
	static const int MAboveDot = XK_Mabovedot;  
	static const int mAboveDot = XK_mabovedot;  
	static const int PAboveDot = XK_Pabovedot;  
	static const int pAboveDot = XK_pabovedot;  
	static const int SAboveDot = XK_Sabovedot;  
	static const int sAboveDot = XK_sabovedot;  
	static const int TAboveDot = XK_Tabovedot;  
	static const int tAboveDot = XK_tabovedot;  
	static const int WGrave = XK_Wgrave;     
	static const int wGrave = XK_wgrave;     
	static const int WAcute = XK_Wacute;     
	static const int wAcute = XK_wacute;     
	static const int WDiaeresis = XK_Wdiaeresis; 
	static const int wDiaeresis = XK_wdiaeresis; 
	static const int YGrave = XK_Ygrave;     
	static const int yGrave = XK_ygrave;     

	// Latin 9

	static const int OE = XK_OE;        
	static const int oe = XK_oe;        
	static const int YDiaeresis = XK_Ydiaeresis;


	// Katakana

	static const int Overline = XK_overline;
	static const int KanaFullstop = XK_kana_fullstop;      
	static const int KanaOpeningBracket = XK_kana_openingbracket;
	static const int KanaClosingBracket = XK_kana_closingbracket;
	static const int KanaComma = XK_kana_comma;         
	static const int KanaConjunctive = XK_kana_conjunctive;   
	static const int KanaMiddleDot = XK_kana_middledot;     
	static const int KanaWO = XK_kana_WO;            
	static const int Kana_a = XK_kana_a;             
	static const int Kana_i = XK_kana_i;             
	static const int Kana_u = XK_kana_u;             
	static const int Kana_e = XK_kana_e;             
	static const int Kana_o = XK_kana_o;             
	static const int Kana_ya = XK_kana_ya;            
	static const int Kana_yu = XK_kana_yu;            
	static const int Kana_yo = XK_kana_yo;            
	static const int Kana_tsu = XK_kana_tsu;           
	static const int Kana_tu = XK_kana_tu;            
	static const int KanaProlongedSound = XK_prolongedsound;     
	static const int Kana_A = XK_kana_A;             
	static const int Kana_I = XK_kana_I;             
	static const int Kana_U = XK_kana_U;             
	static const int Kana_E = XK_kana_E;             
	static const int Kana_O = XK_kana_O;             
	static const int Kana_KA = XK_kana_KA;            
	static const int Kana_KI = XK_kana_KI;            
	static const int Kana_KU = XK_kana_KU;            
	static const int Kana_KE = XK_kana_KE;            
	static const int Kana_KO = XK_kana_KO;            
	static const int Kana_SA = XK_kana_SA;            
	static const int Kana_SHI = XK_kana_SHI;           
	static const int Kana_SU = XK_kana_SU;            
	static const int Kana_SE = XK_kana_SE;            
	static const int Kana_SO = XK_kana_SO;            
	static const int Kana_TA = XK_kana_TA;            
	static const int Kana_CHI = XK_kana_CHI;           
	static const int Kana_TI = XK_kana_TI;            
	static const int Kana_TSU = XK_kana_TSU;           
	static const int Kana_TU = XK_kana_TU;            
	static const int Kana_TE = XK_kana_TE;            
	static const int Kana_TO = XK_kana_TO;            
	static const int Kana_NA = XK_kana_NA;            
	static const int Kana_NI = XK_kana_NI;            
	static const int Kana_NU = XK_kana_NU;            
	static const int Kana_NE = XK_kana_NE;            
	static const int Kana_NO = XK_kana_NO;            
	static const int Kana_HA = XK_kana_HA;            
	static const int Kana_HI = XK_kana_HI;            
	static const int Kana_FU = XK_kana_FU;            
	static const int Kana_HU = XK_kana_HU;            
	static const int Kana_HE = XK_kana_HE;            
	static const int Kana_HO = XK_kana_HO;            
	static const int Kana_MA = XK_kana_MA;            
	static const int Kana_MI = XK_kana_MI;            
	static const int Kana_MU = XK_kana_MU;            
	static const int Kana_ME = XK_kana_ME;            
	static const int Kana_MO = XK_kana_MO;            
	static const int Kana_YA = XK_kana_YA;            
	static const int Kana_YU = XK_kana_YU;            
	static const int Kana_YO = XK_kana_YO;            
	static const int Kana_RA = XK_kana_RA;            
	static const int Kana_RI = XK_kana_RI;            
	static const int Kana_RU = XK_kana_RU;            
	static const int Kana_RE = XK_kana_RE;            
	static const int Kana_RO = XK_kana_RO;            
	static const int Kana_WA = XK_kana_WA;            
	static const int Kana_N = XK_kana_N;             
	static const int KanaVoicedSound = XK_voicedsound;        
	static const int KanaSemivoicedSound = XK_semivoicedsound;    
	static const int KanaSwitch = XK_kana_switch;        

	// Arabic

	static const int Farsi0 = XK_Farsi_0;                
	static const int Farsi1 = XK_Farsi_1;                
	static const int Farsi2 = XK_Farsi_2;                
	static const int Farsi3 = XK_Farsi_3;                
	static const int Farsi4 = XK_Farsi_4;                
	static const int Farsi5 = XK_Farsi_5;                
	static const int Farsi6 = XK_Farsi_6;                
	static const int Farsi7 = XK_Farsi_7;                
	static const int Farsi8 = XK_Farsi_8;                
	static const int Farsi9 = XK_Farsi_9;                
	static const int ArabicPercent = XK_Arabic_percent;         
	static const int ArabicSuperscriptAlef = XK_Arabic_superscript_alef;
	static const int ArabicTteh = XK_Arabic_tteh;            
	static const int ArabicPeh = XK_Arabic_peh;             
	static const int ArabicTcheh = XK_Arabic_tcheh;           
	static const int ArabicDdal = XK_Arabic_ddal;            
	static const int ArabicRreh = XK_Arabic_rreh;            
	static const int ArabicComma = XK_Arabic_comma;           
	static const int ArabicFullStop = XK_Arabic_fullstop;        
	static const int Arabic0 = XK_Arabic_0;               
	static const int Arabic1 = XK_Arabic_1;               
	static const int Arabic2 = XK_Arabic_2;               
	static const int Arabic3 = XK_Arabic_3;               
	static const int Arabic4 = XK_Arabic_4;               
	static const int Arabic5 = XK_Arabic_5;               
	static const int Arabic6 = XK_Arabic_6;               
	static const int Arabic7 = XK_Arabic_7;               
	static const int Arabic8 = XK_Arabic_8;               
	static const int Arabic9 = XK_Arabic_9;               
	static const int ArabicSemicolon = XK_Arabic_semicolon;       
	static const int ArabicQuestionMark = XK_Arabic_question_mark;   
	static const int ArabicHamza = XK_Arabic_hamza;           
	static const int ArabicMaddaonalef = XK_Arabic_maddaonalef;     
	static const int ArabicHamzaonalef = XK_Arabic_hamzaonalef;     
	static const int ArabicHamzaOnwaw = XK_Arabic_hamzaonwaw;      
	static const int ArabicHamzaunderalef = XK_Arabic_hamzaunderalef;  
	static const int ArabicHamzaonyyeh = XK_Arabic_hamzaonyeh;      
	static const int ArabicAlef = XK_Arabic_alef;            
	static const int ArabicBeh = XK_Arabic_beh;             
	static const int ArabicTehmarbuta = XK_Arabic_tehmarbuta;      
	static const int ArabicTeh = XK_Arabic_teh;             
	static const int ArabicTheh = XK_Arabic_theh;            
	static const int ArabicJeem = XK_Arabic_jeem;            
	static const int ArabicHah = XK_Arabic_hah;             
	static const int ArabicKhah = XK_Arabic_khah;            
	static const int ArabicDal = XK_Arabic_dal;             
	static const int ArabicThal = XK_Arabic_thal;            
	static const int ArabicRa = XK_Arabic_ra;              
	static const int ArabicZain = XK_Arabic_zain;            
	static const int ArabicSeen = XK_Arabic_seen;            
	static const int ArabicSheen = XK_Arabic_sheen;           
	static const int ArabicSad = XK_Arabic_sad;             
	static const int ArabicDad = XK_Arabic_dad;             
	static const int ArabicTah = XK_Arabic_tah;             
	static const int ArabicZah = XK_Arabic_zah;             
	static const int ArabicAin = XK_Arabic_ain;             
	static const int ArabicGhain = XK_Arabic_ghain;           
	static const int ArabicTatweel = XK_Arabic_tatweel;         
	static const int ArabicFeh = XK_Arabic_feh;             
	static const int ArabicQaf = XK_Arabic_qaf;             
	static const int ArabicKaf = XK_Arabic_kaf;             
	static const int ArabicLam = XK_Arabic_lam;             
	static const int ArabicMeem = XK_Arabic_meem;            
	static const int ArabicNoon = XK_Arabic_noon;            
	static const int ArabicHa = XK_Arabic_ha;              
	static const int ArabicHeh = XK_Arabic_heh;             
	static const int ArabicWaw = XK_Arabic_waw;             
	static const int ArabicAlefmaksura = XK_Arabic_alefmaksura;     
	static const int ArabicYeh = XK_Arabic_yeh;             
	static const int ArabicFathatan = XK_Arabic_fathatan;        
	static const int ArabicDammatan = XK_Arabic_dammatan;        
	static const int ArabicKasratan = XK_Arabic_kasratan;        
	static const int ArabicFatha = XK_Arabic_fatha;           
	static const int ArabicDamma = XK_Arabic_damma;           
	static const int ArabicKasra = XK_Arabic_kasra;           
	static const int ArabicShadda = XK_Arabic_shadda;          
	static const int ArabicSukun = XK_Arabic_sukun;           
	static const int ArabicMaddaAbove = XK_Arabic_madda_above;     
	static const int ArabicHamzaAbove = XK_Arabic_hamza_above;     
	static const int ArabicHamzaBelow = XK_Arabic_hamza_below;     
	static const int ArabicJeh = XK_Arabic_jeh;             
	static const int ArabicVeh = XK_Arabic_veh;             
	static const int ArabicKeheh = XK_Arabic_keheh;           
	static const int ArabicGaf = XK_Arabic_gaf;             
	static const int ArabicNoonGhunna = XK_Arabic_noon_ghunna;     
	static const int ArabicHehDoachashmee = XK_Arabic_heh_doachashmee; 
	static const int FarsiYeh = XK_Farsi_yeh;              
	static const int ArabicFarsiYeh = XK_Arabic_farsi_yeh;       
	static const int ArabicYehBaree = XK_Arabic_yeh_baree;       
	static const int ArabicHehGoal = XK_Arabic_heh_goal;        
	static const int ArabicSwitch = XK_Arabic_switch;          

	// Cyrillic

	static const int Cyrillic_GHE_bar = XK_Cyrillic_GHE_bar;           
	static const int Cyrillic_ghe_bar = XK_Cyrillic_ghe_bar;           
	static const int Cyrillic_ZHE_descender = XK_Cyrillic_ZHE_descender;     
	static const int Cyrillic_zhe_descender = XK_Cyrillic_zhe_descender;     
	static const int Cyrillic_KA_descender = XK_Cyrillic_KA_descender;      
	static const int Cyrillic_ka_descender = XK_Cyrillic_ka_descender;      
	static const int Cyrillic_KA_vertstroke = XK_Cyrillic_KA_vertstroke;     
	static const int Cyrillic_ka_vertstroke = XK_Cyrillic_ka_vertstroke;     
	static const int Cyrillic_EN_descender = XK_Cyrillic_EN_descender;      
	static const int Cyrillic_en_descender = XK_Cyrillic_en_descender;      
	static const int Cyrillic_U_straight = XK_Cyrillic_U_straight;        
	static const int Cyrillic_u_straight = XK_Cyrillic_u_straight;        
	static const int Cyrillic_U_straight_bar = XK_Cyrillic_U_straight_bar;    
	static const int Cyrillic_u_straight_bar = XK_Cyrillic_u_straight_bar;    
	static const int Cyrillic_HA_descender = XK_Cyrillic_HA_descender;      
	static const int Cyrillic_ha_descender = XK_Cyrillic_ha_descender;      
	static const int Cyrillic_CHE_descender = XK_Cyrillic_CHE_descender;     
	static const int Cyrillic_che_descender = XK_Cyrillic_che_descender;     
	static const int Cyrillic_CHE_vertstroke = XK_Cyrillic_CHE_vertstroke;    
	static const int Cyrillic_che_vertstroke = XK_Cyrillic_che_vertstroke;    
	static const int Cyrillic_SSHA = XK_Cyrillic_SHHA;              
	static const int Cyrillic_ssha = XK_Cyrillic_shha;              

	static const int Cyrillic_SCHWA = XK_Cyrillic_SCHWA;             
	static const int Cyrillic_schwa = XK_Cyrillic_schwa;             
	static const int Cyrillic_I_macron = XK_Cyrillic_I_macron;          
	static const int Cyrillic_i_macron = XK_Cyrillic_i_macron;          
	static const int Cyrillic_O_bar = XK_Cyrillic_O_bar;             
	static const int Cyrillic_o_bar = XK_Cyrillic_o_bar;             
	static const int Cyrillic_U_macron = XK_Cyrillic_U_macron;          
	static const int Cyrillic_u_macron = XK_Cyrillic_u_macron;          

	static const int SerbianDje = XK_Serbian_dje;                
	static const int MacedonianGje = XK_Macedonia_gje;              
	static const int CyrillicIo = XK_Cyrillic_io;                
	static const int UkrainianJe = XK_Ukrainian_ie;               
	static const int UranianJe = XK_Ukranian_je;                
	static const int MAcedonianDse = XK_Macedonia_dse;              
	static const int Ukrainian_i = XK_Ukrainian_i;                
	static const int Ukranian_i = XK_Ukranian_i;                 
	static const int Ukrainian_yi = XK_Ukrainian_yi;               
	static const int UkranianYi = XK_Ukranian_yi;                
	static const int CyrillicJe = XK_Cyrillic_je;                
	static const int SerbianJe = XK_Serbian_je;                 
	static const int CyrillicLje = XK_Cyrillic_lje;               
	static const int SerbianLje = XK_Serbian_lje;                
	static const int CyrillicNje = XK_Cyrillic_nje;               
	static const int SerbianNje = XK_Serbian_nje;                
	static const int SerbianTshe = XK_Serbian_tshe;               
	static const int MacedonianKje = XK_Macedonia_kje;              
	static const int UkrainianGheWithUpturn = XK_Ukrainian_ghe_with_upturn;  
	static const int ByelorussianShortu = XK_Byelorussian_shortu;        
	static const int CyrillicDzhe = XK_Cyrillic_dzhe;              
	static const int SerbianDze = XK_Serbian_dze;                
	static const int NumeroSign = XK_numerosign;                 
	static const int SerbianDJE = XK_Serbian_DJE;                
	static const int MacedonianGJE = XK_Macedonia_GJE;              
	static const int CyrillicIO = XK_Cyrillic_IO;                
	static const int UkrainianIE = XK_Ukrainian_IE;               
	static const int UkranianJE = XK_Ukranian_JE;                
	static const int MacedonianDSE = XK_Macedonia_DSE;              
	static const int Ukrainian_I = XK_Ukrainian_I;                
	static const int Ukranian_I = XK_Ukranian_I;                 
	static const int UkrainianYI = XK_Ukrainian_YI;               
	static const int UkranianYI = XK_Ukranian_YI;                
	static const int Cyrillic_JE = XK_Cyrillic_JE;                
	static const int SerbianJE = XK_Serbian_JE;                 
	static const int CyrillicLJE = XK_Cyrillic_LJE;               
	static const int SerbianLJE = XK_Serbian_LJE;                
	static const int CyrillicNJE = XK_Cyrillic_NJE;               
	static const int SerbianNJE = XK_Serbian_NJE;                
	static const int ServianTSHE = XK_Serbian_TSHE;               
	static const int MacedonianKJE = XK_Macedonia_KJE;              
	static const int UkrainianGHEWithUpturn = XK_Ukrainian_GHE_WITH_UPTURN;  
	static const int ByelorussianSHORTU = XK_Byelorussian_SHORTU;        
	static const int CyrillicDZHE = XK_Cyrillic_DZHE;              
	static const int ServianDZE = XK_Serbian_DZE;                
	static const int Cyrillic_yu = XK_Cyrillic_yu;                
	static const int Cyrillic_a = XK_Cyrillic_a;                 
	static const int Cyrillic_be = XK_Cyrillic_be;                
	static const int Cyrillic_tse = XK_Cyrillic_tse;               
	static const int Cyrillic_de = XK_Cyrillic_de;                
	static const int Cyrillic_ie = XK_Cyrillic_ie;                
	static const int Cyrillic_ef = XK_Cyrillic_ef;                
	static const int Cyrillic_ghe = XK_Cyrillic_ghe;               
	static const int Cyrillic_ha = XK_Cyrillic_ha;                
	static const int Cyrillic_i = XK_Cyrillic_i;                 
	static const int Cyrillic_shorti = XK_Cyrillic_shorti;            
	static const int Cyrillic_ka = XK_Cyrillic_ka;                
	static const int Cyrillic_el = XK_Cyrillic_el;                
	static const int Cyrillic_em = XK_Cyrillic_em;                
	static const int Cyrillic_en = XK_Cyrillic_en;                
	static const int Cyrillic_o = XK_Cyrillic_o;                 
	static const int Cyrillic_pe = XK_Cyrillic_pe;                
	static const int Cyrillic_ya = XK_Cyrillic_ya;                
	static const int Cyrillic_er = XK_Cyrillic_er;                
	static const int Cyrillic_es = XK_Cyrillic_es;                
	static const int Cyrillic_te = XK_Cyrillic_te;                
	static const int Cyrillic_u = XK_Cyrillic_u;                 
	static const int Cyrillic_zhe = XK_Cyrillic_zhe;               
	static const int Cyrillic_ve = XK_Cyrillic_ve;                
	static const int Cyrillic_softsign = XK_Cyrillic_softsign;          
	static const int Cyrillic_yeru = XK_Cyrillic_yeru;              
	static const int Cyrillic_ze = XK_Cyrillic_ze;                
	static const int Cyrillic_sha = XK_Cyrillic_sha;               
	static const int Cyrillic_e = XK_Cyrillic_e;                 
	static const int Cyrillic_shcha = XK_Cyrillic_shcha;             
	static const int Cyrillic_che = XK_Cyrillic_che;               
	static const int Cyrillic_hardsign = XK_Cyrillic_hardsign;          
	static const int Cyrillic_YU = XK_Cyrillic_YU;                
	static const int Cyrillic_A = XK_Cyrillic_A;                 
	static const int Cyrillic_BE = XK_Cyrillic_BE;                
	static const int Cyrillic_TSE = XK_Cyrillic_TSE;               
	static const int Cyrillic_DE = XK_Cyrillic_DE;                
	static const int Cyrillic_IE = XK_Cyrillic_IE;                
	static const int Cyrillic_EF = XK_Cyrillic_EF;                
	static const int Cyrillic_GHE = XK_Cyrillic_GHE;               
	static const int Cyrillic_HA = XK_Cyrillic_HA;                
	static const int Cyrillic_I = XK_Cyrillic_I;                 
	static const int Cyrillic_SHORTI = XK_Cyrillic_SHORTI;            
	static const int Cyrillic_KE = XK_Cyrillic_KA;                
	static const int Cyrillic_EL = XK_Cyrillic_EL;                
	static const int Cyrillic_EM = XK_Cyrillic_EM;                
	static const int Cyrillic_EN = XK_Cyrillic_EN;                
	static const int Cyrillic_O = XK_Cyrillic_O;                 
	static const int Cyrillic_PE = XK_Cyrillic_PE;                
	static const int Cyrillic_YA = XK_Cyrillic_YA;                
	static const int Cyrillic_ER = XK_Cyrillic_ER;                
	static const int Cyrillic_ES = XK_Cyrillic_ES;                
	static const int Cyrillic_TE = XK_Cyrillic_TE;                
	static const int Cyrillic_U = XK_Cyrillic_U;                 
	static const int Cyrillic_ZHE = XK_Cyrillic_ZHE;               
	static const int Cyrillic_VE = XK_Cyrillic_VE;                
	static const int Cyrillic_SOFTSIGN = XK_Cyrillic_SOFTSIGN;          
	static const int Cyrillic_YERU = XK_Cyrillic_YERU;              
	static const int Cyrillic_ZE = XK_Cyrillic_ZE;                
	static const int Cyrillic_SHA = XK_Cyrillic_SHA;               
	static const int Cyrillic_E = XK_Cyrillic_E;                 
	static const int Cyrillic_SHCHA = XK_Cyrillic_SHCHA;             
	static const int Cyrillic_CHE = XK_Cyrillic_CHE;               
	static const int Cyrillic_HARDSIGN = XK_Cyrillic_HARDSIGN;          

	// Greek (based on an early draft of, and not quite identical to, ISO/IEC 8859-7)

	static const int Greek_ALPHAAccent = XK_Greek_ALPHAaccent;          
	static const int Greek_EPSILONAccent = XK_Greek_EPSILONaccent;        
	static const int Greek_ETAAccent = XK_Greek_ETAaccent;            
	static const int Greek_IOTEAccent = XK_Greek_IOTAaccent;           
	static const int Greek_IOTADiaeresis = XK_Greek_IOTAdieresis;         
	static const int Greek_ADiaeresis = XK_Greek_IOTAdiaeresis;        
	static const int Greek_OMICRONAccent = XK_Greek_OMICRONaccent;        
	static const int Greek_UPSILONAccent = XK_Greek_UPSILONaccent;        
	static const int Greek_UPSILONDiaeresis = XK_Greek_UPSILONdieresis;      
	static const int Greek_OMEGAAccent = XK_Greek_OMEGAaccent;          
	static const int Greek_AccentDiaeresis = XK_Greek_accentdieresis;       
	static const int Greek_HorizBar = XK_Greek_horizbar;             
	static const int Greek_alphaAccent = XK_Greek_alphaaccent;          
	static const int Greek_epsilonAccent = XK_Greek_epsilonaccent;        
	static const int Greek_etaAccent = XK_Greek_etaaccent;            
	static const int Greek_iotaAccent = XK_Greek_iotaaccent;           
	static const int Greek_iotaDiaeresis = XK_Greek_iotadieresis;         
	static const int Greek_iotaAccentDiaeresis = XK_Greek_iotaaccentdieresis;   
	static const int Greek_omicronAccent = XK_Greek_omicronaccent;        
	static const int Greek_upsilonAccent = XK_Greek_upsilonaccent;        
	static const int Greek_upsilonDiaeresis = XK_Greek_upsilondieresis;      
	static const int Greek_upsilonAccentDiaeresis = XK_Greek_upsilonaccentdieresis;
	static const int Greek_omegaAccent = XK_Greek_omegaaccent;          
	static const int Greek_ALPHA = XK_Greek_ALPHA;                
	static const int Greek_BETA = XK_Greek_BETA;                 
	static const int Greek_GAMMA = XK_Greek_GAMMA;                
	static const int Greek_DELTA = XK_Greek_DELTA;                
	static const int Greek_EPSILON = XK_Greek_EPSILON;              
	static const int Greek_ZETA = XK_Greek_ZETA;                 
	static const int Greek_ETA = XK_Greek_ETA;                  
	static const int Greek_THETA = XK_Greek_THETA;                
	static const int Greek_IOTA = XK_Greek_IOTA;                 
	static const int Greek_KAPPA = XK_Greek_KAPPA;                
	static const int Greek_LAMDA = XK_Greek_LAMDA;                
	static const int Greek_LAMBDA = XK_Greek_LAMBDA;               
	static const int Greek_MU = XK_Greek_MU;                   
	static const int Greek_NU = XK_Greek_NU;                   
	static const int Greek_XI = XK_Greek_XI;                   
	static const int Greek_OMICRON = XK_Greek_OMICRON;              
	static const int Greek_PI = XK_Greek_PI;                   
	static const int Greek_RHO = XK_Greek_RHO;                  
	static const int Greek_SIGMA = XK_Greek_SIGMA;                
	static const int Greek_TAU = XK_Greek_TAU;                  
	static const int Greek_UPSILON = XK_Greek_UPSILON;              
	static const int Greek_PHI = XK_Greek_PHI;                  
	static const int Greek_CHI = XK_Greek_CHI;                  
	static const int Greek_PSI = XK_Greek_PSI;                  
	static const int Greek_OMEGA = XK_Greek_OMEGA;                
	static const int Greek_alpha = XK_Greek_alpha;                
	static const int Greek_beta = XK_Greek_beta;                 
	static const int Greek_gamma = XK_Greek_gamma;                
	static const int Greek_delta = XK_Greek_delta;                
	static const int Greek_epsilon = XK_Greek_epsilon;              
	static const int Greek_zeta = XK_Greek_zeta;                 
	static const int Greek_eta = XK_Greek_eta;                  
	static const int Greek_theta = XK_Greek_theta;                
	static const int Greek_iota = XK_Greek_iota;                 
	static const int Greek_kappa = XK_Greek_kappa;                
	static const int Greek_lamda = XK_Greek_lamda;                
	static const int Greek_lambda = XK_Greek_lambda;               
	static const int Greek_mu = XK_Greek_mu;                   
	static const int Greek_nu = XK_Greek_nu;                   
	static const int Greek_xi = XK_Greek_xi;                   
	static const int Greek_omicron = XK_Greek_omicron;              
	static const int Greek_pi = XK_Greek_pi;                   
	static const int Greek_rho = XK_Greek_rho;                  
	static const int Greek_sigma = XK_Greek_sigma;                
	static const int Greek_finalSmallSigma = XK_Greek_finalsmallsigma;      
	static const int Greek_tau = XK_Greek_tau;                  
	static const int Greek_upsilon = XK_Greek_upsilon;              
	static const int Greek_phi = XK_Greek_phi;                  
	static const int Greek_chi = XK_Greek_chi;                  
	static const int Greek_psi = XK_Greek_psi;                  
	static const int Greek_omega = XK_Greek_omega;                
	static const int Greek_switch = XK_Greek_switch;               


	// Technical (from the DEC VT330/VT420 Technical Character Set, http://vt100.net/charsets/technical.html)

/*
	static const int LeftRadical = XK_leftradical;              
	static const int TopLeftRadical = XK_topleftradical;           
	static const int HorizConnector = XK_horizconnector;           
	static const int TopIntegral = XK_topintegral;              
	static const int BottomIntegral = XK_botintegral;              
	static const int VerticalConnector = XK_vertconnector;            
	static const int TopLeftBracket = XK_topleftsqbracket;         
	static const int BottomLeftBracket = XK_botleftsqbracket;         
	static const int TopRightSquareBracket = XK_toprightsqbracket;        
	static const int BottomRightSquareBracket = XK_botrightsqbracket;        
	static const int TopLeftParens = XK_topleftparens;            
	static const int BottomLeftParens = XK_botleftparens;            
	static const int TopRightParens = XK_toprightparens;           
	static const int BottomRightParens = XK_botrightparens;           
	static const int LeftMiddleCurlyBrace = XK_leftmiddlecurlybrace;     
	static const int RightMiddleCurlyBrace = XK_rightmiddlecurlybrace;    
	static const int TopLeftSummation = XK_topleftsummation;         
	static const int BottomLeftSummation = XK_botleftsummation;         
	static const int TopVerticalSummationConnector = XK_topvertsummationconnector;
	static const int BottomVerticalSummationConnector = XK_botvertsummationconnector;
	static const int TopRightSummation = XK_toprightsummation;        
	static const int BottomRightSummation = XK_botrightsummation;        
	static const int RightMiddleSummation = XK_rightmiddlesummation;     
	static const int LessThanEqual = XK_lessthanequal;            
	static const int NotEqual = XK_notequal;                 
	static const int GreaterThanEqual = XK_greaterthanequal;         
	static const int Integral = XK_integral;                 
	static const int Therefore = XK_therefore;                
	static const int Variation = XK_variation;                
	static const int Infinity = XK_infinity;                 
	static const int Nabla = XK_nabla;                    
	static const int Approximate = XK_approximate;              
	static const int SimilarEqual = XK_similarequal;             
	static const int IfOnlyIf = XK_ifonlyif;                 
	static const int Implies = XK_implies;                  
	static const int Identical = XK_identical;                
	static const int Radical = XK_radical;                  
	static const int IncludedIn = XK_includedin;               
	static const int Includes = XK_includes;                 
	static const int Intersection = XK_intersection;             
	static const int Union = XK_union;                    
	static const int LogicalAnd = XK_logicaland;               
	static const int LogicalOr = XK_logicalor;                
	static const int PartialDerivative = XK_partialderivative;        
	static const int Function = XK_function;                 
	static const int LeftArrow = XK_leftarrow;                
	static const int UpArrow = XK_uparrow;                  
	static const int RightArrow = XK_rightarrow;               
	static const int DownArrow = XK_downarrow;    
	*/

	// Special (from the DEC VT100 Special Graphics Character Set)

	static const int XK_blank         
	static const int XK_soliddiamond  
	static const int XK_checkerboard  
	static const int XK_ht            
	static const int XK_ff            
	static const int XK_cr            
	static const int XK_lf            
	static const int XK_nl            
	static const int XK_vt            
	static const int XK_lowrightcorner
	static const int XK_uprightcorner 
	static const int XK_upleftcorner  
	static const int XK_lowleftcorner 
	static const int XK_crossinglines 
	static const int XK_horizlinescan1
	static const int XK_horizlinescan3
	static const int XK_horizlinescan5
	static const int XK_horizlinescan7
	static const int XK_horizlinescan9
	static const int XK_leftt         
	static const int XK_rightt        
	static const int XK_bott          
	static const int XK_topt          
	static const int XK_vertbar       

/*
 * Publishing
 * (these are probably from a long forgotten DEC Publishing
 * font that once shipped with DECwrite)
 * Byte 3 = 0x0a
 */

	static const int XK_emspace             
	static const int XK_enspace             
	static const int XK_em3space            
	static const int XK_em4space            
	static const int XK_digitspace          
	static const int XK_punctspace          
	static const int XK_thinspace           
	static const int XK_hairspace           
	static const int XK_emdash              
	static const int XK_endash              
	static const int XK_signifblank         
	static const int XK_ellipsis            
	static const int XK_doubbaselinedot     
	static const int XK_onethird            
	static const int XK_twothirds           
	static const int XK_onefifth            
	static const int XK_twofifths           
	static const int XK_threefifths         
	static const int XK_fourfifths          
	static const int XK_onesixth            
	static const int XK_fivesixths          
	static const int XK_careof              
	static const int XK_figdash             
	static const int XK_leftanglebracket    
	static const int XK_decimalpoint        
	static const int XK_rightanglebracket   
	static const int XK_marker              
	static const int XK_oneeighth           
	static const int XK_threeeighths        
	static const int XK_fiveeighths         
	static const int XK_seveneighths        
	static const int XK_trademark           
	static const int XK_signaturemark       
	static const int XK_trademarkincircle   
	static const int XK_leftopentriangle    
	static const int XK_rightopentriangle   
	static const int XK_emopencircle        
	static const int XK_emopenrectangle     
	static const int XK_leftsinglequotemark 
	static const int XK_rightsinglequotemark
	static const int XK_leftdoublequotemark 
	static const int XK_rightdoublequotemark
	static const int XK_prescription        
	static const int XK_minutes             
	static const int XK_seconds             
	static const int XK_latincross          
	static const int XK_hexagram            
	static const int XK_filledrectbullet    
	static const int XK_filledlefttribullet 
	static const int XK_filledrighttribullet
	static const int XK_emfilledcircle      
	static const int XK_emfilledrect        
	static const int XK_enopencircbullet    
	static const int XK_enopensquarebullet  
	static const int XK_openrectbullet      
	static const int XK_opentribulletup     
	static const int XK_opentribulletdown   
	static const int XK_openstar            
	static const int XK_enfilledcircbullet  
	static const int XK_enfilledsqbullet    
	static const int XK_filledtribulletup   
	static const int XK_filledtribulletdown 
	static const int XK_leftpointer         
	static const int XK_rightpointer        
	static const int XK_club                
	static const int XK_diamond             
	static const int XK_heart               
	static const int XK_maltesecross        
	static const int XK_dagger              
	static const int XK_doubledagger        
	static const int XK_checkmark           
	static const int XK_ballotcross         
	static const int XK_musicalsharp        
	static const int XK_musicalflat         
	static const int XK_malesymbol          
	static const int XK_femalesymbol        
	static const int XK_telephone           
	static const int XK_telephonerecorder   
	static const int XK_phonographcopyright 
	static const int XK_caret               
	static const int XK_singlelowquotemark  
	static const int XK_doublelowquotemark  
	static const int XK_cursor              


/*
 * APL
 * Byte 3 = 0x0b
 */


	static const int XK_leftcaret 
	static const int XK_rightcaret
	static const int XK_downcaret 
	static const int XK_upcaret   
	static const int XK_overbar   
	static const int XK_downtack  
	static const int XK_upshoe    
	static const int XK_downstile 
	static const int XK_underbar  
	static const int XK_jot       
	static const int XK_quad      
	static const int XK_uptack    
	static const int XK_circle    
	static const int XK_upstile   
	static const int XK_downshoe  
	static const int XK_rightshoe 
	static const int XK_leftshoe  
	static const int XK_lefttack  
	static const int XK_righttack 


/*
 * Hebrew
 * Byte 3 = 0x0c
 */


	static const int XK_hebrew_doublelowline 
	static const int XK_hebrew_aleph         
	static const int XK_hebrew_bet           
	static const int XK_hebrew_beth          
	static const int XK_hebrew_gimel         
	static const int XK_hebrew_gimmel        
	static const int XK_hebrew_dalet         
	static const int XK_hebrew_daleth        
	static const int XK_hebrew_he            
	static const int XK_hebrew_waw           
	static const int XK_hebrew_zain          
	static const int XK_hebrew_zayin         
	static const int XK_hebrew_chet          
	static const int XK_hebrew_het           
	static const int XK_hebrew_tet           
	static const int XK_hebrew_teth          
	static const int XK_hebrew_yod           
	static const int XK_hebrew_finalkaph     
	static const int XK_hebrew_kaph          
	static const int XK_hebrew_lamed         
	static const int XK_hebrew_finalmem      
	static const int XK_hebrew_mem           
	static const int XK_hebrew_finalnun      
	static const int XK_hebrew_nun           
	static const int XK_hebrew_samech        
	static const int XK_hebrew_samekh        
	static const int XK_hebrew_ayin          
	static const int XK_hebrew_finalpe       
	static const int XK_hebrew_pe            
	static const int XK_hebrew_finalzade     
	static const int XK_hebrew_finalzadi     
	static const int XK_hebrew_zade          
	static const int XK_hebrew_zadi          
	static const int XK_hebrew_qoph          
	static const int XK_hebrew_kuf           
	static const int XK_hebrew_resh          
	static const int XK_hebrew_shin          
	static const int XK_hebrew_taw           
	static const int XK_hebrew_taf           
	static const int XK_Hebrew_switch        


/*
 * Thai
 * Byte 3 = 0x0d
 */


	static const int XK_Thai_kokai            
	static const int XK_Thai_khokhai          
	static const int XK_Thai_khokhuat         
	static const int XK_Thai_khokhwai         
	static const int XK_Thai_khokhon          
	static const int XK_Thai_khorakhang       
	static const int XK_Thai_ngongu           
	static const int XK_Thai_chochan          
	static const int XK_Thai_choching         
	static const int XK_Thai_chochang         
	static const int XK_Thai_soso             
	static const int XK_Thai_chochoe          
	static const int XK_Thai_yoying           
	static const int XK_Thai_dochada          
	static const int XK_Thai_topatak          
	static const int XK_Thai_thothan          
	static const int XK_Thai_thonangmontho    
	static const int XK_Thai_thophuthao       
	static const int XK_Thai_nonen            
	static const int XK_Thai_dodek            
	static const int XK_Thai_totao            
	static const int XK_Thai_thothung         
	static const int XK_Thai_thothahan        
	static const int XK_Thai_thothong         
	static const int XK_Thai_nonu             
	static const int XK_Thai_bobaimai         
	static const int XK_Thai_popla            
	static const int XK_Thai_phophung         
	static const int XK_Thai_fofa             
	static const int XK_Thai_phophan          
	static const int XK_Thai_fofan            
	static const int XK_Thai_phosamphao       
	static const int XK_Thai_moma             
	static const int XK_Thai_yoyak            
	static const int XK_Thai_rorua            
	static const int XK_Thai_ru               
	static const int XK_Thai_loling           
	static const int XK_Thai_lu               
	static const int XK_Thai_wowaen           
	static const int XK_Thai_sosala           
	static const int XK_Thai_sorusi           
	static const int XK_Thai_sosua            
	static const int XK_Thai_hohip            
	static const int XK_Thai_lochula          
	static const int XK_Thai_oang             
	static const int XK_Thai_honokhuk         
	static const int XK_Thai_paiyannoi        
	static const int XK_Thai_saraa            
	static const int XK_Thai_maihanakat       
	static const int XK_Thai_saraaa           
	static const int XK_Thai_saraam           
	static const int XK_Thai_sarai            
	static const int XK_Thai_saraii           
	static const int XK_Thai_saraue           
	static const int XK_Thai_sarauee          
	static const int XK_Thai_sarau            
	static const int XK_Thai_sarauu           
	static const int XK_Thai_phinthu          
	static const int XK_Thai_maihanakat_maitho
	static const int XK_Thai_baht             
	static const int XK_Thai_sarae            
	static const int XK_Thai_saraae           
	static const int XK_Thai_sarao            
	static const int XK_Thai_saraaimaimuan    
	static const int XK_Thai_saraaimaimalai   
	static const int XK_Thai_lakkhangyao      
	static const int XK_Thai_maiyamok         
	static const int XK_Thai_maitaikhu        
	static const int XK_Thai_maiek            
	static const int XK_Thai_maitho           
	static const int XK_Thai_maitri           
	static const int XK_Thai_maichattawa      
	static const int XK_Thai_thanthakhat      
	static const int XK_Thai_nikhahit         
	static const int XK_Thai_leksun           
	static const int XK_Thai_leknung          
	static const int XK_Thai_leksong          
	static const int XK_Thai_leksam           
	static const int XK_Thai_leksi            
	static const int XK_Thai_lekha            
	static const int XK_Thai_lekhok           
	static const int XK_Thai_lekchet          
	static const int XK_Thai_lekpaet          
	static const int XK_Thai_lekkao           


/*
 * Korean
 * Byte 3 = 0x0e
 */


	static const int XK_Hangul                  
	static const int XK_Hangul_Start            
	static const int XK_Hangul_End              
	static const int XK_Hangul_Hanja            
	static const int XK_Hangul_Jamo             
	static const int XK_Hangul_Romaja           
	static const int XK_Hangul_Codeinput        
	static const int XK_Hangul_Jeonja           
	static const int XK_Hangul_Banja            
	static const int XK_Hangul_PreHanja         
	static const int XK_Hangul_PostHanja        
	static const int XK_Hangul_SingleCandidate  
	static const int XK_Hangul_MultipleCandidate
	static const int XK_Hangul_PreviousCandidate
	static const int XK_Hangul_Special          
	static const int XK_Hangul_switch           

/* Hangul Consonant Characters */
	static const int XK_Hangul_Kiyeog     
	static const int XK_Hangul_SsangKiyeog
	static const int XK_Hangul_KiyeogSios 
	static const int XK_Hangul_Nieun      
	static const int XK_Hangul_NieunJieuj 
	static const int XK_Hangul_NieunHieuh 
	static const int XK_Hangul_Dikeud     
	static const int XK_Hangul_SsangDikeud
	static const int XK_Hangul_Rieul      
	static const int XK_Hangul_RieulKiyeog
	static const int XK_Hangul_RieulMieum 
	static const int XK_Hangul_RieulPieub 
	static const int XK_Hangul_RieulSios  
	static const int XK_Hangul_RieulTieut 
	static const int XK_Hangul_RieulPhieuf
	static const int XK_Hangul_RieulHieuh 
	static const int XK_Hangul_Mieum      
	static const int XK_Hangul_Pieub      
	static const int XK_Hangul_SsangPieub 
	static const int XK_Hangul_PieubSios  
	static const int XK_Hangul_Sios       
	static const int XK_Hangul_SsangSios  
	static const int XK_Hangul_Ieung      
	static const int XK_Hangul_Jieuj      
	static const int XK_Hangul_SsangJieuj 
	static const int XK_Hangul_Cieuc      
	static const int XK_Hangul_Khieuq     
	static const int XK_Hangul_Tieut      
	static const int XK_Hangul_Phieuf     
	static const int XK_Hangul_Hieuh      

/* Hangul Vowel Characters */
	static const int XK_Hangul_A  
	static const int XK_Hangul_AE 
	static const int XK_Hangul_YA 
	static const int XK_Hangul_YAE
	static const int XK_Hangul_EO 
	static const int XK_Hangul_E  
	static const int XK_Hangul_YEO
	static const int XK_Hangul_YE 
	static const int XK_Hangul_O  
	static const int XK_Hangul_WA 
	static const int XK_Hangul_WAE
	static const int XK_Hangul_OE 
	static const int XK_Hangul_YO 
	static const int XK_Hangul_U  
	static const int XK_Hangul_WEO
	static const int XK_Hangul_WE 
	static const int XK_Hangul_WI 
	static const int XK_Hangul_YU 
	static const int XK_Hangul_EU 
	static const int XK_Hangul_YI 
	static const int XK_Hangul_I  

/* Hangul syllable-final (JongSeong) Characters */
	static const int XK_Hangul_J_Kiyeog     
	static const int XK_Hangul_J_SsangKiyeog
	static const int XK_Hangul_J_KiyeogSios 
	static const int XK_Hangul_J_Nieun      
	static const int XK_Hangul_J_NieunJieuj 
	static const int XK_Hangul_J_NieunHieuh 
	static const int XK_Hangul_J_Dikeud     
	static const int XK_Hangul_J_Rieul      
	static const int XK_Hangul_J_RieulKiyeog
	static const int XK_Hangul_J_RieulMieum 
	static const int XK_Hangul_J_RieulPieub 
	static const int XK_Hangul_J_RieulSios  
	static const int XK_Hangul_J_RieulTieut 
	static const int XK_Hangul_J_RieulPhieuf
	static const int XK_Hangul_J_RieulHieuh 
	static const int XK_Hangul_J_Mieum      
	static const int XK_Hangul_J_Pieub      
	static const int XK_Hangul_J_PieubSios  
	static const int XK_Hangul_J_Sios       
	static const int XK_Hangul_J_SsangSios  
	static const int XK_Hangul_J_Ieung      
	static const int XK_Hangul_J_Jieuj      
	static const int XK_Hangul_J_Cieuc      
	static const int XK_Hangul_J_Khieuq     
	static const int XK_Hangul_J_Tieut      
	static const int XK_Hangul_J_Phieuf     
	static const int XK_Hangul_J_Hieuh      

/* Ancient Hangul Consonant Characters */
	static const int XK_Hangul_RieulYeorinHieuh  
	static const int XK_Hangul_SunkyeongeumMieum 
	static const int XK_Hangul_SunkyeongeumPieub 
	static const int XK_Hangul_PanSios           
	static const int XK_Hangul_KkogjiDalrinIeung 
	static const int XK_Hangul_SunkyeongeumPhieuf
	static const int XK_Hangul_YeorinHieuh       

/* Ancient Hangul Vowel Characters */
	static const int XK_Hangul_AraeA 
	static const int XK_Hangul_AraeAE

/* Ancient Hangul syllable-final (JongSeong) Characters */
	static const int XK_Hangul_J_PanSios          
	static const int XK_Hangul_J_KkogjiDalrinIeung
	static const int XK_Hangul_J_YeorinHieuh      

/* Korean currency symbol */
	static const int XK_Korean_Won


/*
 * Armenian
 */


	static const int XK_Armenian_ligature_ew    
	static const int XK_Armenian_full_stop      
	static const int XK_Armenian_verjaket       
	static const int XK_Armenian_separation_mark
	static const int XK_Armenian_but            
	static const int XK_Armenian_hyphen         
	static const int XK_Armenian_yentamna       
	static const int XK_Armenian_exclam         
	static const int XK_Armenian_amanak         
	static const int XK_Armenian_accent         
	static const int XK_Armenian_shesht         
	static const int XK_Armenian_question       
	static const int XK_Armenian_paruyk         
	static const int XK_Armenian_AYB            
	static const int XK_Armenian_ayb            
	static const int XK_Armenian_BEN            
	static const int XK_Armenian_ben            
	static const int XK_Armenian_GIM            
	static const int XK_Armenian_gim            
	static const int XK_Armenian_DA             
	static const int XK_Armenian_da             
	static const int XK_Armenian_YECH           
	static const int XK_Armenian_yech           
	static const int XK_Armenian_ZA             
	static const int XK_Armenian_za             
	static const int XK_Armenian_E              
	static const int XK_Armenian_e              
	static const int XK_Armenian_AT             
	static const int XK_Armenian_at             
	static const int XK_Armenian_TO             
	static const int XK_Armenian_to             
	static const int XK_Armenian_ZHE            
	static const int XK_Armenian_zhe            
	static const int XK_Armenian_INI            
	static const int XK_Armenian_ini            
	static const int XK_Armenian_LYUN           
	static const int XK_Armenian_lyun           
	static const int XK_Armenian_KHE            
	static const int XK_Armenian_khe            
	static const int XK_Armenian_TSA            
	static const int XK_Armenian_tsa            
	static const int XK_Armenian_KEN            
	static const int XK_Armenian_ken            
	static const int XK_Armenian_HO             
	static const int XK_Armenian_ho             
	static const int XK_Armenian_DZA            
	static const int XK_Armenian_dza            
	static const int XK_Armenian_GHAT           
	static const int XK_Armenian_ghat           
	static const int XK_Armenian_TCHE           
	static const int XK_Armenian_tche           
	static const int XK_Armenian_MEN            
	static const int XK_Armenian_men            
	static const int XK_Armenian_HI             
	static const int XK_Armenian_hi             
	static const int XK_Armenian_NU             
	static const int XK_Armenian_nu             
	static const int XK_Armenian_SHA            
	static const int XK_Armenian_sha            
	static const int XK_Armenian_VO             
	static const int XK_Armenian_vo             
	static const int XK_Armenian_CHA            
	static const int XK_Armenian_cha            
	static const int XK_Armenian_PE             
	static const int XK_Armenian_pe             
	static const int XK_Armenian_JE             
	static const int XK_Armenian_je             
	static const int XK_Armenian_RA             
	static const int XK_Armenian_ra             
	static const int XK_Armenian_SE             
	static const int XK_Armenian_se             
	static const int XK_Armenian_VEV            
	static const int XK_Armenian_vev            
	static const int XK_Armenian_TYUN           
	static const int XK_Armenian_tyun           
	static const int XK_Armenian_RE             
	static const int XK_Armenian_re             
	static const int XK_Armenian_TSO            
	static const int XK_Armenian_tso            
	static const int XK_Armenian_VYUN           
	static const int XK_Armenian_vyun           
	static const int XK_Armenian_PYUR           
	static const int XK_Armenian_pyur           
	static const int XK_Armenian_KE             
	static const int XK_Armenian_ke             
	static const int XK_Armenian_O              
	static const int XK_Armenian_o              
	static const int XK_Armenian_FE             
	static const int XK_Armenian_fe             
	static const int XK_Armenian_apostrophe     


/*
 * Georgian
 */


	static const int XK_Georgian_an  
	static const int XK_Georgian_ban 
	static const int XK_Georgian_gan 
	static const int XK_Georgian_don 
	static const int XK_Georgian_en  
	static const int XK_Georgian_vin 
	static const int XK_Georgian_zen 
	static const int XK_Georgian_tan 
	static const int XK_Georgian_in  
	static const int XK_Georgian_kan 
	static const int XK_Georgian_las 
	static const int XK_Georgian_man 
	static const int XK_Georgian_nar 
	static const int XK_Georgian_on  
	static const int XK_Georgian_par 
	static const int XK_Georgian_zhar
	static const int XK_Georgian_rae 
	static const int XK_Georgian_san 
	static const int XK_Georgian_tar 
	static const int XK_Georgian_un  
	static const int XK_Georgian_phar
	static const int XK_Georgian_khar
	static const int XK_Georgian_ghan
	static const int XK_Georgian_qar 
	static const int XK_Georgian_shin
	static const int XK_Georgian_chin
	static const int XK_Georgian_can 
	static const int XK_Georgian_jil 
	static const int XK_Georgian_cil 
	static const int XK_Georgian_char
	static const int XK_Georgian_xan 
	static const int XK_Georgian_jhan
	static const int XK_Georgian_hae 
	static const int XK_Georgian_he  
	static const int XK_Georgian_hie 
	static const int XK_Georgian_we  
	static const int XK_Georgian_har 
	static const int XK_Georgian_hoe 
	static const int XK_Georgian_fi  


/*
 * Azeri (and other Turkic or Caucasian languages)
 */


/* latin */
	static const int XK_Xabovedot     
	static const int XK_Ibreve        
	static const int XK_Zstroke       
	static const int XK_Gcaron        
	static const int XK_Ocaron        
	static const int XK_Obarred       
	static const int XK_xabovedot     
	static const int XK_ibreve        
	static const int XK_zstroke       
	static const int XK_gcaron        
	static const int XK_ocaron        
	static const int XK_obarred       
	static const int XK_SCHWA         
	static const int XK_schwa         
/* those are not really Caucasus */
/* For Inupiak */
	static const int XK_Lbelowdot     
	static const int XK_lbelowdot     


/*
 * Vietnamese
 */
 

	static const int XK_Abelowdot          
	static const int XK_abelowdot          
	static const int XK_Ahook              
	static const int XK_ahook              
	static const int XK_Acircumflexacute   
	static const int XK_acircumflexacute   
	static const int XK_Acircumflexgrave   
	static const int XK_acircumflexgrave   
	static const int XK_Acircumflexhook    
	static const int XK_acircumflexhook    
	static const int XK_Acircumflextilde   
	static const int XK_acircumflextilde   
	static const int XK_Acircumflexbelowdot
	static const int XK_acircumflexbelowdot
	static const int XK_Abreveacute        
	static const int XK_abreveacute        
	static const int XK_Abrevegrave        
	static const int XK_abrevegrave        
	static const int XK_Abrevehook         
	static const int XK_abrevehook         
	static const int XK_Abrevetilde        
	static const int XK_abrevetilde        
	static const int XK_Abrevebelowdot     
	static const int XK_abrevebelowdot     
	static const int XK_Ebelowdot          
	static const int XK_ebelowdot          
	static const int XK_Ehook              
	static const int XK_ehook              
	static const int XK_Etilde             
	static const int XK_etilde             
	static const int XK_Ecircumflexacute   
	static const int XK_ecircumflexacute   
	static const int XK_Ecircumflexgrave   
	static const int XK_ecircumflexgrave   
	static const int XK_Ecircumflexhook    
	static const int XK_ecircumflexhook    
	static const int XK_Ecircumflextilde   
	static const int XK_ecircumflextilde   
	static const int XK_Ecircumflexbelowdot
	static const int XK_ecircumflexbelowdot
	static const int XK_Ihook              
	static const int XK_ihook              
	static const int XK_Ibelowdot          
	static const int XK_ibelowdot          
	static const int XK_Obelowdot          
	static const int XK_obelowdot          
	static const int XK_Ohook              
	static const int XK_ohook              
	static const int XK_Ocircumflexacute   
	static const int XK_ocircumflexacute   
	static const int XK_Ocircumflexgrave   
	static const int XK_ocircumflexgrave   
	static const int XK_Ocircumflexhook    
	static const int XK_ocircumflexhook    
	static const int XK_Ocircumflextilde   
	static const int XK_ocircumflextilde   
	static const int XK_Ocircumflexbelowdot
	static const int XK_ocircumflexbelowdot
	static const int XK_Ohornacute         
	static const int XK_ohornacute         
	static const int XK_Ohorngrave         
	static const int XK_ohorngrave         
	static const int XK_Ohornhook          
	static const int XK_ohornhook          
	static const int XK_Ohorntilde         
	static const int XK_ohorntilde         
	static const int XK_Ohornbelowdot      
	static const int XK_ohornbelowdot      
	static const int XK_Ubelowdot          
	static const int XK_ubelowdot          
	static const int XK_Uhook              
	static const int XK_uhook              
	static const int XK_Uhornacute         
	static const int XK_uhornacute         
	static const int XK_Uhorngrave         
	static const int XK_uhorngrave         
	static const int XK_Uhornhook          
	static const int XK_uhornhook          
	static const int XK_Uhorntilde         
	static const int XK_uhorntilde         
	static const int XK_Uhornbelowdot      
	static const int XK_uhornbelowdot      
	static const int XK_Ybelowdot          
	static const int XK_ybelowdot          
	static const int XK_Yhook              
	static const int XK_yhook              
	static const int XK_Ytilde             
	static const int XK_ytilde             
	static const int XK_Ohorn              
	static const int XK_ohorn              
	static const int XK_Uhorn              
	static const int XK_uhorn              

	// Currency

	static const int XK_EcuSign      
	static const int XK_ColonSign    
	static const int XK_CruzeiroSign 
	static const int XK_FFrancSign   
	static const int XK_LiraSign     
	static const int XK_MillSign     
	static const int XK_NairaSign    
	static const int XK_PesetaSign   
	static const int XK_RupeeSign    
	static const int XK_WonSign      
	static const int XK_NewSheqelSign
	static const int XK_DongSign     
	static const int XK_EuroSign     

	// Mathematical

	static const int XK_zerosuperior    
	static const int XK_foursuperior    
	static const int XK_fivesuperior    
	static const int XK_sixsuperior     
	static const int XK_sevensuperior   
	static const int XK_eightsuperior   
	static const int XK_ninesuperior    
	static const int XK_zerosubscript   
	static const int XK_onesubscript    
	static const int XK_twosubscript    
	static const int XK_threesubscript  
	static const int XK_foursubscript   
	static const int XK_fivesubscript   
	static const int XK_sixsubscript    
	static const int XK_sevensubscript  
	static const int XK_eightsubscript  
	static const int XK_ninesubscript   
	static const int XK_partdifferential
	static const int XK_emptyset        
	static const int XK_elementof       
	static const int XK_notelementof    
	static const int XK_containsas      
	static const int XK_squareroot      
	static const int XK_cuberoot        
	static const int XK_fourthroot      
	static const int XK_dintegral       
	static const int XK_tintegral       
	static const int XK_because         
	static const int XK_approxeq        
	static const int XK_notapproxeq     
	static const int XK_notidentical    
	static const int XK_stricteq                  

	// Braille

	static const int XK_braille_dot_1       
	static const int XK_braille_dot_2       
	static const int XK_braille_dot_3       
	static const int XK_braille_dot_4       
	static const int XK_braille_dot_5       
	static const int XK_braille_dot_6       
	static const int XK_braille_dot_7       
	static const int XK_braille_dot_8       
	static const int XK_braille_dot_9       
	static const int XK_braille_dot_10      
	static const int XK_braille_blank       
	static const int XK_braille_dots_1      
	static const int XK_braille_dots_2      
	static const int XK_braille_dots_12     
	static const int XK_braille_dots_3      
	static const int XK_braille_dots_13     
	static const int XK_braille_dots_23     
	static const int XK_braille_dots_123    
	static const int XK_braille_dots_4      
	static const int XK_braille_dots_14     
	static const int XK_braille_dots_24     
	static const int XK_braille_dots_124    
	static const int XK_braille_dots_34     
	static const int XK_braille_dots_134    
	static const int XK_braille_dots_234    
	static const int XK_braille_dots_1234   
	static const int XK_braille_dots_5      
	static const int XK_braille_dots_15     
	static const int XK_braille_dots_25     
	static const int XK_braille_dots_125    
	static const int XK_braille_dots_35     
	static const int XK_braille_dots_135    
	static const int XK_braille_dots_235    
	static const int XK_braille_dots_1235   
	static const int XK_braille_dots_45     
	static const int XK_braille_dots_145    
	static const int XK_braille_dots_245    
	static const int XK_braille_dots_1245   
	static const int XK_braille_dots_345    
	static const int XK_braille_dots_1345   
	static const int XK_braille_dots_2345   
	static const int XK_braille_dots_12345  
	static const int XK_braille_dots_6      
	static const int XK_braille_dots_16     
	static const int XK_braille_dots_26     
	static const int XK_braille_dots_126    
	static const int XK_braille_dots_36     
	static const int XK_braille_dots_136    
	static const int XK_braille_dots_236    
	static const int XK_braille_dots_1236   
	static const int XK_braille_dots_46     
	static const int XK_braille_dots_146    
	static const int XK_braille_dots_246    
	static const int XK_braille_dots_1246   
	static const int XK_braille_dots_346    
	static const int XK_braille_dots_1346   
	static const int XK_braille_dots_2346   
	static const int XK_braille_dots_12346  
	static const int XK_braille_dots_56     
	static const int XK_braille_dots_156    
	static const int XK_braille_dots_256    
	static const int XK_braille_dots_1256   
	static const int XK_braille_dots_356    
	static const int XK_braille_dots_1356   
	static const int XK_braille_dots_2356   
	static const int XK_braille_dots_12356  
	static const int XK_braille_dots_456    
	static const int XK_braille_dots_1456   
	static const int XK_braille_dots_2456   
	static const int XK_braille_dots_12456  
	static const int XK_braille_dots_3456   
	static const int XK_braille_dots_13456  
	static const int XK_braille_dots_23456  
	static const int XK_braille_dots_123456 
	static const int XK_braille_dots_7      
	static const int XK_braille_dots_17     
	static const int XK_braille_dots_27     
	static const int XK_braille_dots_127    
	static const int XK_braille_dots_37     
	static const int XK_braille_dots_137    
	static const int XK_braille_dots_237    
	static const int XK_braille_dots_1237   
	static const int XK_braille_dots_47     
	static const int XK_braille_dots_147    
	static const int XK_braille_dots_247    
	static const int XK_braille_dots_1247   
	static const int XK_braille_dots_347    
	static const int XK_braille_dots_1347   
	static const int XK_braille_dots_2347   
	static const int XK_braille_dots_12347  
	static const int XK_braille_dots_57     
	static const int XK_braille_dots_157    
	static const int XK_braille_dots_257    
	static const int XK_braille_dots_1257   
	static const int XK_braille_dots_357    
	static const int XK_braille_dots_1357   
	static const int XK_braille_dots_2357   
	static const int XK_braille_dots_12357  
	static const int XK_braille_dots_457    
	static const int XK_braille_dots_1457   
	static const int XK_braille_dots_2457   
	static const int XK_braille_dots_12457  
	static const int XK_braille_dots_3457   
	static const int XK_braille_dots_13457  
	static const int XK_braille_dots_23457  
	static const int XK_braille_dots_123457 
	static const int XK_braille_dots_67     
	static const int XK_braille_dots_167    
	static const int XK_braille_dots_267    
	static const int XK_braille_dots_1267   
	static const int XK_braille_dots_367    
	static const int XK_braille_dots_1367   
	static const int XK_braille_dots_2367   
	static const int XK_braille_dots_12367  
	static const int XK_braille_dots_467    
	static const int XK_braille_dots_1467   
	static const int XK_braille_dots_2467   
	static const int XK_braille_dots_12467  
	static const int XK_braille_dots_3467   
	static const int XK_braille_dots_13467  
	static const int XK_braille_dots_23467  
	static const int XK_braille_dots_123467 
	static const int XK_braille_dots_567    
	static const int XK_braille_dots_1567   
	static const int XK_braille_dots_2567   
	static const int XK_braille_dots_12567  
	static const int XK_braille_dots_3567   
	static const int XK_braille_dots_13567  
	static const int XK_braille_dots_23567  
	static const int XK_braille_dots_123567 
	static const int XK_braille_dots_4567   
	static const int XK_braille_dots_14567  
	static const int XK_braille_dots_24567  
	static const int XK_braille_dots_124567 
	static const int XK_braille_dots_34567  
	static const int XK_braille_dots_134567 
	static const int XK_braille_dots_234567 
	static const int XK_braille_dots_1234567
	static const int XK_braille_dots_8      
	static const int XK_braille_dots_18     
	static const int XK_braille_dots_28     
	static const int XK_braille_dots_128    
	static const int XK_braille_dots_38     
	static const int XK_braille_dots_138    
	static const int XK_braille_dots_238    
	static const int XK_braille_dots_1238   
	static const int XK_braille_dots_48     
	static const int XK_braille_dots_148    
	static const int XK_braille_dots_248    
	static const int XK_braille_dots_1248   
	static const int XK_braille_dots_348    
	static const int XK_braille_dots_1348   
	static const int XK_braille_dots_2348   
	static const int XK_braille_dots_12348  
	static const int XK_braille_dots_58     
	static const int XK_braille_dots_158    
	static const int XK_braille_dots_258    
	static const int XK_braille_dots_1258   
	static const int XK_braille_dots_358    
	static const int XK_braille_dots_1358   
	static const int XK_braille_dots_2358   
	static const int XK_braille_dots_12358  
	static const int XK_braille_dots_458    
	static const int XK_braille_dots_1458   
	static const int XK_braille_dots_2458   
	static const int XK_braille_dots_12458  
	static const int XK_braille_dots_3458   
	static const int XK_braille_dots_13458  
	static const int XK_braille_dots_23458  
	static const int XK_braille_dots_123458 
	static const int XK_braille_dots_68     
	static const int XK_braille_dots_168    
	static const int XK_braille_dots_268    
	static const int XK_braille_dots_1268   
	static const int XK_braille_dots_368    
	static const int XK_braille_dots_1368   
	static const int XK_braille_dots_2368   
	static const int XK_braille_dots_12368  
	static const int XK_braille_dots_468    
	static const int XK_braille_dots_1468   
	static const int XK_braille_dots_2468   
	static const int XK_braille_dots_12468  
	static const int XK_braille_dots_3468   
	static const int XK_braille_dots_13468  
	static const int XK_braille_dots_23468  
	static const int XK_braille_dots_123468 
	static const int XK_braille_dots_568    
	static const int XK_braille_dots_1568   
	static const int XK_braille_dots_2568   
	static const int XK_braille_dots_12568  
	static const int XK_braille_dots_3568   
	static const int XK_braille_dots_13568  
	static const int XK_braille_dots_23568  
	static const int XK_braille_dots_123568 
	static const int XK_braille_dots_4568   
	static const int XK_braille_dots_14568  
	static const int XK_braille_dots_24568  
	static const int XK_braille_dots_124568 
	static const int XK_braille_dots_34568  
	static const int XK_braille_dots_134568 
	static const int XK_braille_dots_234568 
	static const int XK_braille_dots_1234568
	static const int XK_braille_dots_78     
	static const int XK_braille_dots_178    
	static const int XK_braille_dots_278    
	static const int XK_braille_dots_1278   
	static const int XK_braille_dots_378    
	static const int XK_braille_dots_1378   
	static const int XK_braille_dots_2378   
	static const int XK_braille_dots_12378  
	static const int XK_braille_dots_478    
	static const int XK_braille_dots_1478   
	static const int XK_braille_dots_2478   
	static const int XK_braille_dots_12478  
	static const int XK_braille_dots_3478   
	static const int XK_braille_dots_13478  
	static const int XK_braille_dots_23478  
	static const int XK_braille_dots_123478 
	static const int XK_braille_dots_578    
	static const int XK_braille_dots_1578   
	static const int XK_braille_dots_2578   
	static const int XK_braille_dots_12578  
	static const int XK_braille_dots_3578   
	static const int XK_braille_dots_13578  
	static const int XK_braille_dots_23578  
	static const int XK_braille_dots_123578 
	static const int XK_braille_dots_4578   
	static const int XK_braille_dots_14578  
	static const int XK_braille_dots_24578  
	static const int XK_braille_dots_124578 
	static const int XK_braille_dots_34578  
	static const int XK_braille_dots_134578 
	static const int XK_braille_dots_234578 
	static const int XK_braille_dots_1234578
	static const int XK_braille_dots_678    
	static const int XK_braille_dots_1678   
	static const int XK_braille_dots_2678   
	static const int XK_braille_dots_12678  
	static const int XK_braille_dots_3678   
	static const int XK_braille_dots_13678  
	static const int XK_braille_dots_23678  
	static const int XK_braille_dots_123678 
	static const int XK_braille_dots_4678   
	static const int XK_braille_dots_14678  
	static const int XK_braille_dots_24678  
	static const int XK_braille_dots_124678 
	static const int XK_braille_dots_34678  
	static const int XK_braille_dots_134678 
	static const int XK_braille_dots_234678 
	static const int XK_braille_dots_1234678
	static const int XK_braille_dots_5678   
	static const int XK_braille_dots_15678  
	static const int XK_braille_dots_25678  
	static const int XK_braille_dots_125678 
	static const int XK_braille_dots_35678  
	static const int XK_braille_dots_135678 
	static const int XK_braille_dots_235678 
	static const int XK_braille_dots_1235678
	static const int XK_braille_dots_45678  
	static const int XK_braille_dots_145678 
	static const int XK_braille_dots_245678 
	static const int XK_braille_dots_1245678
	static const int XK_braille_dots_345678 
	static const int XK_braille_dots_1345678
	static const int XK_braille_dots_2345678
	static const int XK_braille_dots_12345678

/*
 * Sinhala (http://unicode.org/charts/PDF/U0D80.pdf)
 * http://www.nongnu.org/sinhala/doc/transliteration/sinhala-transliteration_6.html
 */

	static const int XK_Sinh_ng      
	static const int XK_Sinh_h2      
	static const int XK_Sinh_a       
	static const int XK_Sinh_aa      
	static const int XK_Sinh_ae      
	static const int XK_Sinh_aee     
	static const int XK_Sinh_i       
	static const int XK_Sinh_ii      
	static const int XK_Sinh_u       
	static const int XK_Sinh_uu      
	static const int XK_Sinh_ri      
	static const int XK_Sinh_rii     
	static const int XK_Sinh_lu      
	static const int XK_Sinh_luu     
	static const int XK_Sinh_e       
	static const int XK_Sinh_ee      
	static const int XK_Sinh_ai      
	static const int XK_Sinh_o       
	static const int XK_Sinh_oo      
	static const int XK_Sinh_au      
	static const int XK_Sinh_ka      
	static const int XK_Sinh_kha     
	static const int XK_Sinh_ga      
	static const int XK_Sinh_gha     
	static const int XK_Sinh_ng2     
	static const int XK_Sinh_nga     
	static const int XK_Sinh_ca      
	static const int XK_Sinh_cha     
	static const int XK_Sinh_ja      
	static const int XK_Sinh_jha     
	static const int XK_Sinh_nya     
	static const int XK_Sinh_jnya    
	static const int XK_Sinh_nja     
	static const int XK_Sinh_tta     
	static const int XK_Sinh_ttha    
	static const int XK_Sinh_dda     
	static const int XK_Sinh_ddha    
	static const int XK_Sinh_nna     
	static const int XK_Sinh_ndda    
	static const int XK_Sinh_tha     
	static const int XK_Sinh_thha    
	static const int XK_Sinh_dha     
	static const int XK_Sinh_dhha    
	static const int XK_Sinh_na      
	static const int XK_Sinh_ndha    
	static const int XK_Sinh_pa      
	static const int XK_Sinh_pha     
	static const int XK_Sinh_ba      
	static const int XK_Sinh_bha     
	static const int XK_Sinh_ma      
	static const int XK_Sinh_mba     
	static const int XK_Sinh_ya      
	static const int XK_Sinh_ra      
	static const int XK_Sinh_la      
	static const int XK_Sinh_va      
	static const int XK_Sinh_sha     
	static const int XK_Sinh_ssha    
	static const int XK_Sinh_sa      
	static const int XK_Sinh_ha      
	static const int XK_Sinh_lla     
	static const int XK_Sinh_fa      
	static const int XK_Sinh_al      
	static const int XK_Sinh_aa2     
	static const int XK_Sinh_ae2     
	static const int XK_Sinh_aee2    
	static const int XK_Sinh_i2      
	static const int XK_Sinh_ii2     
	static const int XK_Sinh_u2      
	static const int XK_Sinh_uu2     
	static const int XK_Sinh_ru2     
	static const int XK_Sinh_e2      
	static const int XK_Sinh_ee2     
	static const int XK_Sinh_ai2     
	static const int XK_Sinh_o2      
	static const int XK_Sinh_oo2     
	static const int XK_Sinh_au2     
	static const int XK_Sinh_lu2     
	static const int XK_Sinh_ruu2    
	static const int XK_Sinh_luu2    
	static const int XK_Sinh_kunddaliya

};

#endif // KEYSYMBOLS_H
