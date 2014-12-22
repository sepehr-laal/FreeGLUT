/*
* freeglut_types.h
*
* The freeglut library global typedefs.
* 
* Ideally *every* type that is visible via freeglut_std.h
* should be moved here so if a developer changes the underlying type
* client code can also take advantage of using the new type w/o
* changing its code. For now this covers callback types only.
*
* Copyright (c) 1999-2000 Pawel W. Olszta. All Rights Reserved.
* Written by Pawel W. Olszta, <olszta@sourceforge.net>
* Creation date: Thu Dec 2 1999
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
* PAWEL W. OLSZTA BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
* IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
* CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef  FREEGLUT_TYPES_H
#define  FREEGLUT_TYPES_H

#include <functional>
#include <string.h>

/* -- GLOBAL TYPE DEFINITIONS ---------------------------------------------- */

/* Freeglut callbacks type definitions */

typedef std::function<void(void)>							FGCBDisplay;
typedef std::function<void(int, int)>						FGCBReshape;
typedef std::function<void(int, int)>						FGCBPosition;
typedef std::function<void(int)>							FGCBVisibility;
typedef std::function<void(unsigned char, int, int)>		FGCBKeyboard;
typedef std::function<void(unsigned char, int, int)>		FGCBKeyboardUp;
typedef std::function<void(int, int, int)>					FGCBSpecial;
typedef std::function<void(int, int, int)>					FGCBSpecialUp;
typedef std::function<void(int, int, int, int)>				FGCBMouse;
typedef std::function<void(int, int, int, int)>				FGCBMouseWheel;
typedef std::function<void(int, int)>						FGCBMotion;
typedef std::function<void(int, int)>						FGCBPassive;
typedef std::function<void(int)>							FGCBEntry;
typedef std::function<void(int)>							FGCBWindowStatus;
typedef std::function<void(unsigned int, int, int, int)>	FGCBJoystick;
typedef std::function<void(void)>							FGCBOverlayDisplay;
typedef std::function<void(int, int, int)>					FGCBSpaceMotion;
typedef std::function<void(int, int, int)>					FGCBSpaceRotation;
typedef std::function<void(int, int)>						FGCBSpaceButton;
typedef std::function<void(int, int)>						FGCBDials;
typedef std::function<void(int, int)>						FGCBButtonBox;
typedef std::function<void(int, int)>						FGCBTabletMotion;
typedef std::function<void(int, int, int, int)>				FGCBTabletButton;
typedef std::function<void(void)>							FGCBDestroy;
typedef std::function<void(void)>							FGCBClose;
typedef std::function<void(void)>							FGCBWMClose;
typedef std::function<void(int, int)>						FGCBMultiEntry;
typedef std::function<void(int, int, int, int, int)>		FGCBMultiButton;
typedef std::function<void(int, int, int)>					FGCBMultiMotion;
typedef std::function<void(int, int, int)>					FGCBMultiPassive;
typedef std::function<void()>								FGCBInitContext;
typedef std::function<void(int)>							FGCBAppStatus;
typedef std::function<void(void)>							FGCBIdle;
typedef std::function<void(int)>							FGCBTimer;
typedef std::function<void(int)>							FGCBMenuState;
typedef std::function<void(int, int, int)>					FGCBMenuStatus;
typedef std::function<void(int)>							FGCBMenu;
typedef std::function<void(const char *fmt, va_list ap)>	FGError;
typedef std::function<void(const char *fmt, va_list ap)>	FGWarning;

#endif /* FREEGLUT_TYPES_H */

/*** END OF FILE ***/
