//------------------------------------------------------------------------------
//	Copyright (c) 2012-2013, Guido Pola.
//
//	Permission is hereby granted, free of charge, to any person obtaining a
//	copy of this software and associated documentation files (the "Software"),
//	to deal in the Software without restriction, including without limitation
//	the rights to use, copy, modify, merge, publish, distribute, sublicense,
//	and/or sell copies of the Software, and to permit persons to whom the
//	Software is furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//	DEALINGS IN THE SOFTWARE.
//
//	File Name:		AddMagnetLinkWindow.h
//	Authors:		Guido Pola <prodito@live.com>
//	Description:	
//------------------------------------------------------------------------------
#ifndef TORRENTOR_ADD_MAGNET_LINK_WINDOW_H
#define TORRENTOR_ADD_MAGNET_LINK_WINDOW_H

class BString;
class BTextControl;

class AddMagnetLinkWindow : public BWindow
{
public:
	AddMagnetLinkWindow();
	
	void MessageReceived(BMessage* message);
protected:
	void OnMagnetOpenRequest();
private:

	/**
	 * Retreives a magnet link that's been copied to the system clipboard.
	 * @returns The magnet link or an empty string if there was none.
	 */
	BString GetMagnetFromClipboard();

	BTextControl* fLinkText;
};

#endif // TORRENTOR_ADD_MAGNET_LINK_WINDOW_H
