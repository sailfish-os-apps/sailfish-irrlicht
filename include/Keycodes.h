// Copyright (C) 2002-2012 Nikolaus Gebhardt
// This file is part of the "Irrlicht Engine".
// For conditions of distribution and use, see copyright notice in irrlicht.h

#ifndef __IRR_KEY_CODES_H_INCLUDED__
#define __IRR_KEY_CODES_H_INCLUDED__

namespace irr
{

	enum EKEY_CODE
	{
		KEY_UNKNOWN          = 0x0,
		KEY_LBUTTON          = 0x01,  // Left mouse button
		KEY_RBUTTON          = 0x02,  // Right mouse button
		KEY_CANCEL           = 0x03,  // Control-break processing
		KEY_MBUTTON          = 0x04,  // Middle mouse button (three-button mouse)
		KEY_XBUTTON1         = 0x05,  // Windows 2000/XP: X1 mouse button
		KEY_XBUTTON2         = 0x06,  // Windows 2000/XP: X2 mouse button
		KEY_BACK             = 0x08,  // BACKSPACE key
		KEY_TAB              = 0x09,  // TAB key
		KEY_CLEAR            = 0x0C,  // CLEAR key
		KEY_RETURN           = 0x0D,  // ENTER key
		KEY_SHIFT            = 0x10,  // SHIFT key
		KEY_CONTROL          = 0x11,  // CTRL key
		KEY_MENU             = 0x12,  // ALT key
		KEY_PAUSE            = 0x13,  // PAUSE key
		KEY_CAPITAL          = 0x14,  // CAPS LOCK key
		KEY_KANA             = 0x15,  // IME Kana mode
		KEY_HANGUEL          = 0x15,  // IME Hanguel mode (maintained for compatibility use KEY_HANGUL)
		KEY_HANGUL           = 0x15,  // IME Hangul mode
		KEY_JUNJA            = 0x17,  // IME Junja mode
		KEY_FINAL            = 0x18,  // IME final mode
		KEY_HANJA            = 0x19,  // IME Hanja mode
		KEY_KANJI            = 0x19,  // IME Kanji mode
		KEY_ESCAPE           = 0x1B,  // ESC key
		KEY_CONVERT          = 0x1C,  // IME convert
		KEY_NONCONVERT       = 0x1D,  // IME nonconvert
		KEY_ACCEPT           = 0x1E,  // IME accept
		KEY_MODECHANGE       = 0x1F,  // IME mode change request
		KEY_SPACE            = 0x20,  // SPACEBAR
		KEY_PRIOR            = 0x21,  // PAGE UP key
		KEY_NEXT             = 0x22,  // PAGE DOWN key
		KEY_END              = 0x23,  // END key
		KEY_HOME             = 0x24,  // HOME key
		KEY_LEFT             = 0x25,  // LEFT ARROW key
		KEY_UP               = 0x26,  // UP ARROW key
		KEY_RIGHT            = 0x27,  // RIGHT ARROW key
		KEY_DOWN             = 0x28,  // DOWN ARROW key
		KEY_SELECT           = 0x29,  // SELECT key
		KEY_PRINT            = 0x2A,  // PRINT key
		KEY_EXECUT           = 0x2B,  // EXECUTE key
		KEY_SNAPSHOT         = 0x2C,  // PRINT SCREEN key
		KEY_INSERT           = 0x2D,  // INS key
		KEY_DELETE           = 0x2E,  // DEL key
		KEY_HELP             = 0x2F,  // HELP key
		KEY_KEY_0            = 0x30,  // 0 key
		KEY_KEY_1            = 0x31,  // 1 key
		KEY_KEY_2            = 0x32,  // 2 key
		KEY_KEY_3            = 0x33,  // 3 key
		KEY_KEY_4            = 0x34,  // 4 key
		KEY_KEY_5            = 0x35,  // 5 key
		KEY_KEY_6            = 0x36,  // 6 key
		KEY_KEY_7            = 0x37,  // 7 key
		KEY_KEY_8            = 0x38,  // 8 key
		KEY_KEY_9            = 0x39,  // 9 key
		KEY_KEY_A            = 0x41,  // A key
		KEY_KEY_B            = 0x42,  // B key
		KEY_KEY_C            = 0x43,  // C key
		KEY_KEY_D            = 0x44,  // D key
		KEY_KEY_E            = 0x45,  // E key
		KEY_KEY_F            = 0x46,  // F key
		KEY_KEY_G            = 0x47,  // G key
		KEY_KEY_H            = 0x48,  // H key
		KEY_KEY_I            = 0x49,  // I key
		KEY_KEY_J            = 0x4A,  // J key
		KEY_KEY_K            = 0x4B,  // K key
		KEY_KEY_L            = 0x4C,  // L key
		KEY_KEY_M            = 0x4D,  // M key
		KEY_KEY_N            = 0x4E,  // N key
		KEY_KEY_O            = 0x4F,  // O key
		KEY_KEY_P            = 0x50,  // P key
		KEY_KEY_Q            = 0x51,  // Q key
		KEY_KEY_R            = 0x52,  // R key
		KEY_KEY_S            = 0x53,  // S key
		KEY_KEY_T            = 0x54,  // T key
		KEY_KEY_U            = 0x55,  // U key
		KEY_KEY_V            = 0x56,  // V key
		KEY_KEY_W            = 0x57,  // W key
		KEY_KEY_X            = 0x58,  // X key
		KEY_KEY_Y            = 0x59,  // Y key
		KEY_KEY_Z            = 0x5A,  // Z key
		KEY_LWIN             = 0x5B,  // Left Windows key (Microsoft� Natural� keyboard)
		KEY_RWIN             = 0x5C,  // Right Windows key (Natural keyboard)
		KEY_APPS             = 0x5D,  // Applications key (Natural keyboard)
		KEY_SLEEP            = 0x5F,  // Computer Sleep key
		KEY_NUMPAD0          = 0x60,  // Numeric keypad 0 key
		KEY_NUMPAD1          = 0x61,  // Numeric keypad 1 key
		KEY_NUMPAD2          = 0x62,  // Numeric keypad 2 key
		KEY_NUMPAD3          = 0x63,  // Numeric keypad 3 key
		KEY_NUMPAD4          = 0x64,  // Numeric keypad 4 key
		KEY_NUMPAD5          = 0x65,  // Numeric keypad 5 key
		KEY_NUMPAD6          = 0x66,  // Numeric keypad 6 key
		KEY_NUMPAD7          = 0x67,  // Numeric keypad 7 key
		KEY_NUMPAD8          = 0x68,  // Numeric keypad 8 key
		KEY_NUMPAD9          = 0x69,  // Numeric keypad 9 key
		KEY_MULTIPLY         = 0x6A,  // Multiply key
		KEY_ADD              = 0x6B,  // Add key
		KEY_SEPARATOR        = 0x6C,  // Separator key
		KEY_SUBTRACT         = 0x6D,  // Subtract key
		KEY_DECIMAL          = 0x6E,  // Decimal key
		KEY_DIVIDE           = 0x6F,  // Divide key
		KEY_F1               = 0x70,  // F1 key
		KEY_F2               = 0x71,  // F2 key
		KEY_F3               = 0x72,  // F3 key
		KEY_F4               = 0x73,  // F4 key
		KEY_F5               = 0x74,  // F5 key
		KEY_F6               = 0x75,  // F6 key
		KEY_F7               = 0x76,  // F7 key
		KEY_F8               = 0x77,  // F8 key
		KEY_F9               = 0x78,  // F9 key
		KEY_F10              = 0x79,  // F10 key
		KEY_F11              = 0x7A,  // F11 key
		KEY_F12              = 0x7B,  // F12 key
		KEY_F13              = 0x7C,  // F13 key
		KEY_F14              = 0x7D,  // F14 key
		KEY_F15              = 0x7E,  // F15 key
		KEY_F16              = 0x7F,  // F16 key
		KEY_F17              = 0x80,  // F17 key
		KEY_F18              = 0x81,  // F18 key
		KEY_F19              = 0x82,  // F19 key
		KEY_F20              = 0x83,  // F20 key
		KEY_F21              = 0x84,  // F21 key
		KEY_F22              = 0x85,  // F22 key
		KEY_F23              = 0x86,  // F23 key
		KEY_F24              = 0x87,  // F24 key
		KEY_NUMLOCK          = 0x90,  // NUM LOCK key
		KEY_SCROLL           = 0x91,  // SCROLL LOCK key
		KEY_LSHIFT           = 0xA0,  // Left SHIFT key
		KEY_RSHIFT           = 0xA1,  // Right SHIFT key
		KEY_LCONTROL         = 0xA2,  // Left CONTROL key
		KEY_RCONTROL         = 0xA3,  // Right CONTROL key
		KEY_LMENU            = 0xA4,  // Left MENU key
		KEY_RMENU            = 0xA5,  // Right MENU key
		KEY_BROWSER_BACK     = 0xA6,  // Browser Back key
		KEY_BROWSER_FORWARD  = 0xA7,  // Browser Forward key
		KEY_BROWSER_REFRESH  = 0xA8,  // Browser Refresh key
		KEY_BROWSER_STOP     = 0xA9,  // Browser Stop key
		KEY_BROWSER_SEARCH   = 0xAA,  // Browser Search key 
		KEY_BROWSER_FAVORITES =0xAB,  // Browser Favorites key
		KEY_BROWSER_HOME     = 0xAC,  // Browser Start and Home key
		KEY_VOLUME_MUTE      = 0xAD,  // Volume Mute key
		KEY_VOLUME_DOWN      = 0xAE,  // Volume Down key
		KEY_VOLUME_UP        = 0xAF,  // Volume Up key
		KEY_MEDIA_NEXT_TRACK = 0xB0,  // Next Track key
		KEY_MEDIA_PREV_TRACK = 0xB1,  // Previous Track key
		KEY_MEDIA_STOP       = 0xB2,  // Stop Media key
		KEY_MEDIA_PLAY_PAUSE = 0xB3,  // Play/Pause Media key
		KEY_OEM_1            = 0xBA,  // for US    ";:"
		KEY_PLUS             = 0xBB,  // Plus Key   "+"
		KEY_COMMA            = 0xBC,  // Comma Key  ","
		KEY_MINUS            = 0xBD,  // Minus Key  "-"
		KEY_PERIOD           = 0xBE,  // Period Key "."
		KEY_OEM_2            = 0xBF,  // for US    "/?"
		KEY_OEM_3            = 0xC0,  // for US    "`~"
		KEY_OEM_4            = 0xDB,  // for US    "[{"
		KEY_OEM_5            = 0xDC,  // for US    "\|"
		KEY_OEM_6            = 0xDD,  // for US    "]}"
		KEY_OEM_7            = 0xDE,  // for US    "'""
		KEY_OEM_8            = 0xDF,  // None
		KEY_OEM_AX           = 0xE1,  // for Japan "AX"
		KEY_OEM_102          = 0xE2,  // "<>" or "\|"
		KEY_ATTN             = 0xF6,  // Attn key
		KEY_CRSEL            = 0xF7,  // CrSel key
		KEY_EXSEL            = 0xF8,  // ExSel key
		KEY_EREOF            = 0xF9,  // Erase EOF key
		KEY_PLAY             = 0xFA,  // Play key
		KEY_ZOOM             = 0xFB,  // Zoom key
		KEY_PA1              = 0xFD,  // PA1 key
		KEY_OEM_CLEAR        = 0xFE,  // Clear key
		KEY_NONE             = 0xFF,  // usually no key mapping, but some laptops use it for fn key
#ifdef SAILFISH
		EKC_KEY_UNKNOWN     = KEY_UNKNOWN,
		EKC_KEY_LBUTTON     = KEY_LBUTTON,  // Left mouse button
		EKC_KEY_RBUTTON     = KEY_RBUTTON,  // Right mouse button
		EKC_KEY_CANCEL      = KEY_CANCEL,  // Control-break processing
		EKC_KEY_MBUTTON     = KEY_MBUTTON,  // Middle mouse button (three-button mouse)
		EKC_KEY_XBUTTON1    = KEY_XBUTTON1,  // Windows 2000/XP: X1 mouse button
		EKC_KEY_XBUTTON2    = KEY_XBUTTON2,  // Windows 2000/XP: X2 mouse button
		EKC_KEY_BACK        = KEY_BACK,  // BACKSPACE key
		EKC_KEY_TAB         = KEY_TAB,  // TAB key
		EKC_KEY_CLEAR       = KEY_CLEAR,  // CLEAR key
		EKC_KEY_RETURN      = KEY_RETURN,  // ENTER key
		EKC_KEY_SHIFT       = KEY_SHIFT,  // SHIFT key
		EKC_KEY_CONTROL     = KEY_CONTROL,  // CTRL key
		EKC_KEY_MENU        = KEY_MENU,  // ALT key
		EKC_KEY_PAUSE       = KEY_PAUSE,  // PAUSE key
		EKC_KEY_CAPITAL     = KEY_CAPITAL,  // CAPS LOCK key
		EKC_KEY_KANA        = KEY_KANA,  // IME Kana mode
		EKC_KEY_HANGUEL     = KEY_HANGUEL,  // IME Hanguel mode (maintained for compatibility use KEY_HANGUL)
		EKC_KEY_HANGUL      = KEY_HANGUL,  // IME Hangul mode
		EKC_KEY_JUNJA       = KEY_JUNJA,  // IME Junja mode
		EKC_KEY_FINAL       = KEY_FINAL,  // IME final mode
		EKC_KEY_HANJA       = KEY_HANJA,  // IME Hanja mode
		EKC_KEY_KANJI       = KEY_KANJI,  // IME Kanji mode
		EKC_KEY_ESCAPE      = KEY_ESCAPE,  // ESC key
		EKC_KEY_CONVERT     = KEY_CONVERT,  // IME convert
		EKC_KEY_NONCONVERT  = KEY_NONCONVERT,  // IME nonconvert
		EKC_KEY_ACCEPT      = KEY_ACCEPT,  // IME accept
		EKC_KEY_MODECHANGE  = KEY_MODECHANGE,  // IME mode change request
		EKC_KEY_SPACE       = KEY_SPACE,  // SPACEBAR
		EKC_KEY_PRIOR       = KEY_PRIOR,  // PAGE UP key
		EKC_KEY_NEXT        = KEY_NEXT,  // PAGE DOWN key
		EKC_KEY_END         = KEY_END,  // END key
		EKC_KEY_HOME        = KEY_HOME,  // HOME key
		EKC_KEY_LEFT        = KEY_LEFT,  // LEFT ARROW key
		EKC_KEY_UP          = KEY_UP,  // UP ARROW key
		EKC_KEY_RIGHT       = KEY_RIGHT,  // RIGHT ARROW key
		EKC_KEY_DOWN        = KEY_DOWN,  // DOWN ARROW key
		EKC_KEY_SELECT      = KEY_SELECT,  // SELECT key
		EKC_KEY_PRINT       = KEY_PRINT,  // PRINT key
		EKC_KEY_EXECUT      = KEY_EXECUT,  // EXECUTE key
		EKC_KEY_SNAPSHOT    = KEY_SNAPSHOT,  // PRINT SCREEN key
		EKC_KEY_INSERT      = KEY_INSERT,  // INS key
		EKC_KEY_DELETE      = KEY_DELETE,  // DEL key
		EKC_KEY_HELP        = KEY_HELP,  // HELP key
		EKC_KEY_0           = KEY_KEY_0,  // 0 key
		EKC_KEY_1           = KEY_KEY_1,  // 1 key
		EKC_KEY_2           = KEY_KEY_2,  // 2 key
		EKC_KEY_3           = KEY_KEY_3,  // 3 key
		EKC_KEY_4           = KEY_KEY_4,  // 4 key
		EKC_KEY_5           = KEY_KEY_5,  // 5 key
		EKC_KEY_6           = KEY_KEY_6,  // 6 key
		EKC_KEY_7           = KEY_KEY_7,  // 7 key
		EKC_KEY_8           = KEY_KEY_8,  // 8 key
		EKC_KEY_9           = KEY_KEY_9,  // 9 key
		EKC_KEY_A           = KEY_KEY_A,  // A key
		EKC_KEY_B           = KEY_KEY_B,  // B key
		EKC_KEY_C           = KEY_KEY_C,  // C key
		EKC_KEY_D           = KEY_KEY_D,  // D key
		EKC_KEY_E           = KEY_KEY_E,  // E key
		EKC_KEY_F           = KEY_KEY_F,  // F key
		EKC_KEY_G           = KEY_KEY_G,  // G key
		EKC_KEY_H           = KEY_KEY_H,  // H key
		EKC_KEY_I           = KEY_KEY_I,  // I key
		EKC_KEY_J           = KEY_KEY_J,  // J key
		EKC_KEY_K           = KEY_KEY_K,  // K key
		EKC_KEY_L           = KEY_KEY_L,  // L key
		EKC_KEY_M           = KEY_KEY_M,  // M key
		EKC_KEY_N           = KEY_KEY_N,  // N key
		EKC_KEY_O           = KEY_KEY_O,  // O key
		EKC_KEY_P           = KEY_KEY_P,  // P key
		EKC_KEY_Q           = KEY_KEY_Q,  // Q key
		EKC_KEY_R           = KEY_KEY_R,  // R key
		EKC_KEY_S           = KEY_KEY_S,  // S key
		EKC_KEY_T           = KEY_KEY_T,  // T key
		EKC_KEY_U           = KEY_KEY_U,  // U key
		EKC_KEY_V           = KEY_KEY_V,  // V key
		EKC_KEY_W           = KEY_KEY_W,  // W key
		EKC_KEY_X           = KEY_KEY_X,  // X key
		EKC_KEY_Y           = KEY_KEY_Y,  // Y key
		EKC_KEY_Z           = KEY_KEY_Z,  // Z key
		EKC_KEY_LWIN        = KEY_LWIN,  // Left Windows key (Microsoft� Natural� keyboard)
		EKC_KEY_RWIN        = KEY_RWIN,  // Right Windows key (Natural keyboard)
		EKC_KEY_APPS        = KEY_APPS,  // Applications key (Natural keyboard)
		EKC_KEY_SLEEP       = KEY_SLEEP,  // Computer Sleep key
		EKC_KEY_NUMPAD0     = KEY_NUMPAD0,  // Numeric keypad 0 key
		EKC_KEY_NUMPAD1     = KEY_NUMPAD1,  // Numeric keypad 1 key
		EKC_KEY_NUMPAD2     = KEY_NUMPAD2,  // Numeric keypad 2 key
		EKC_KEY_NUMPAD3     = KEY_NUMPAD3,  // Numeric keypad 3 key
		EKC_KEY_NUMPAD4     = KEY_NUMPAD4,  // Numeric keypad 4 key
		EKC_KEY_NUMPAD5     = KEY_NUMPAD5,  // Numeric keypad 5 key
		EKC_KEY_NUMPAD6     = KEY_NUMPAD6,  // Numeric keypad 6 key
		EKC_KEY_NUMPAD7     = KEY_NUMPAD7,  // Numeric keypad 7 key
		EKC_KEY_NUMPAD8     = KEY_NUMPAD8,  // Numeric keypad 8 key
		EKC_KEY_NUMPAD9     = KEY_NUMPAD9,  // Numeric keypad 9 key
		EKC_KEY_MULTIPLY    = KEY_MULTIPLY,  // Multiply key
		EKC_KEY_ADD         = KEY_ADD,  // Add key
		EKC_KEY_SEPARATOR   = KEY_SEPARATOR,  // Separator key
		EKC_KEY_SUBTRACT    = KEY_SUBTRACT,  // Subtract key
		EKC_KEY_DECIMAL     = KEY_DECIMAL,  // Decimal key
		EKC_KEY_DIVIDE      = KEY_DIVIDE,  // Divide key
		EKC_KEY_F1          = KEY_F1,  // F1 key
		EKC_KEY_F2          = KEY_F2,  // F2 key
		EKC_KEY_F3          = KEY_F3,  // F3 key
		EKC_KEY_F4          = KEY_F4,  // F4 key
		EKC_KEY_F5          = KEY_F5,  // F5 key
		EKC_KEY_F6          = KEY_F6,  // F6 key
		EKC_KEY_F7          = KEY_F7,  // F7 key
		EKC_KEY_F8          = KEY_F8,  // F8 key
		EKC_KEY_F9          = KEY_F9,  // F9 key
		EKC_KEY_F10         = KEY_F10,  // F10 key
		EKC_KEY_F11         = KEY_F11,  // F11 key
		EKC_KEY_F12         = KEY_F12,  // F12 key
		EKC_KEY_F13         = KEY_F13,  // F13 key
		EKC_KEY_F14         = KEY_F14,  // F14 key
		EKC_KEY_F15         = KEY_F15,  // F15 key
		EKC_KEY_F16         = KEY_F16,  // F16 key
		EKC_KEY_F17         = KEY_F17,  // F17 key
		EKC_KEY_F18         = KEY_F18,  // F18 key
		EKC_KEY_F19         = KEY_F19,  // F19 key
		EKC_KEY_F20         = KEY_F20,  // F20 key
		EKC_KEY_F21         = KEY_F21,  // F21 key
		EKC_KEY_F22         = KEY_F22,  // F22 key
		EKC_KEY_F23         = KEY_F23,  // F23 key
		EKC_KEY_F24         = KEY_F24,  // F24 key
		EKC_KEY_NUMLOCK     = KEY_NUMLOCK,  // NUM LOCK key
		EKC_KEY_SCROLL      = KEY_SCROLL,  // SCROLL LOCK key
		EKC_KEY_LSHIFT      = KEY_LSHIFT,  // Left SHIFT key
		EKC_KEY_RSHIFT      = KEY_RSHIFT,  // Right SHIFT key
		EKC_KEY_LCONTROL    = KEY_LCONTROL,  // Left CONTROL key
		EKC_KEY_RCONTROL    = KEY_RCONTROL,  // Right CONTROL key
		EKC_KEY_LMENU       = KEY_LMENU,  // Left MENU key
		EKC_KEY_RMENU       = KEY_RMENU,  // Right MENU key
		EKC_KEY_BROWSER_BACK      = KEY_BROWSER_BACK,  // Browser Back key
		EKC_KEY_BROWSER_FORWARD   = KEY_BROWSER_FORWARD,  // Browser Forward key
		EKC_KEY_BROWSER_REFRESH   = KEY_BROWSER_REFRESH,  // Browser Refresh key
		EKC_KEY_BROWSER_STOP      = KEY_BROWSER_STOP,  // Browser Stop key
		EKC_KEY_BROWSER_SEARCH    = KEY_BROWSER_SEARCH,  // Browser Search key
		EKC_KEY_BROWSER_FAVORITES = KEY_BROWSER_FAVORITES,  // Browser Favorites key
		EKC_KEY_BROWSER_HOME      = KEY_BROWSER_HOME,  // Browser Start and Home key
		EKC_KEY_VOLUME_MUTE       = KEY_VOLUME_MUTE,  // Volume Mute key
		EKC_KEY_VOLUME_DOWN       = KEY_VOLUME_DOWN,  // Volume Down key
		EKC_KEY_VOLUME_UP         = KEY_VOLUME_UP,  // Volume Up key
		EKC_KEY_MEDIA_NEXT_TRACK  = KEY_MEDIA_NEXT_TRACK,  // Next Track key
		EKC_KEY_MEDIA_PREV_TRACK  = KEY_MEDIA_PREV_TRACK,  // Previous Track key
		EKC_KEY_MEDIA_STOP        = KEY_MEDIA_STOP,  // Stop Media key
		EKC_KEY_MEDIA_PLAY_PAUSE  = KEY_MEDIA_PLAY_PAUSE,  // Play/Pause Media key
		EKC_KEY_OEM_1       = KEY_OEM_1,  // for US    ";:"
		EKC_KEY_PLUS        = KEY_PLUS,  // Plus Key   "+"
		EKC_KEY_COMMA       = KEY_COMMA,  // Comma Key  ","
		EKC_KEY_MINUS       = KEY_MINUS,  // Minus Key  "-"
		EKC_KEY_PERIOD      = KEY_PERIOD,  // Period Key "."
		EKC_KEY_OEM_2       = KEY_OEM_2,  // for US    "/?"
		EKC_KEY_OEM_3       = KEY_OEM_3,  // for US    "`~"
		EKC_KEY_OEM_4       = KEY_OEM_4,  // for US    "[{"
		EKC_KEY_OEM_5       = KEY_OEM_5,  // for US    "\|"
		EKC_KEY_OEM_6       = KEY_OEM_6,  // for US    "]}"
		EKC_KEY_OEM_7       = KEY_OEM_7,  // for US    "'""
		EKC_KEY_OEM_8       = KEY_OEM_8,  // None
		EKC_KEY_OEM_AX      = KEY_OEM_AX,  // for Japan "AX"
		EKC_KEY_OEM_102     = KEY_OEM_102,  // "<>" or "\|"
		EKC_KEY_ATTN        = KEY_ATTN,  // Attn key
		EKC_KEY_CRSEL       = KEY_CRSEL,  // CrSel key
		EKC_KEY_EXSEL       = KEY_EXSEL,  // ExSel key
		EKC_KEY_EREOF       = KEY_EREOF,  // Erase EOF key
		EKC_KEY_PLAY        = KEY_PLAY,  // Play key
		EKC_KEY_ZOOM        = KEY_ZOOM,  // Zoom key
		EKC_KEY_PA1         = KEY_PA1,  // PA1 key
		EKC_KEY_OEM_CLEAR   = KEY_OEM_CLEAR,  // Clear key
		EKC_KEY_NONE        = KEY_NONE,  // usually no key mapping, but some laptops use it for fn key
#endif
		KEY_KEY_CODES_COUNT  = 0x100 // this is not a key, but the amount of keycodes there are.
	};

} // end namespace irr

#endif

