/************************************************************************
	filename: 	CEGUIRect.h
	created:	8/3/2004
	author:		Paul D Turner
	
	purpose:	Defines 'Rect' class
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://crayzedsgui.sourceforge.net)
    Copyright (C)2004 Paul D Turner (crayzed@users.sourceforge.net)

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*************************************************************************/
#ifndef _CEGUIRect_h_
#define _CEGUIRect_h_

#include "CEGUIBase.h"
#include "CEGUIVector.h"

// Start of CEGUI namespace section
namespace CEGUI
{
/*!
\brief
	Class encapsulation operations on a Rectangle
*/
class CEGUIBASE_API Rect
{
public:
	Rect(void) {}


	/*!
	\brief
		Constructor for a Rect.
	*/
	Rect(float left, float top, float right, float bottom);


	/*!
	\brief
		Destructor for Rect objects.
	*/
	virtual ~Rect(void) {}


	/*!
	\brief
		return width of Rect area
	*/
	float	getWidth(void) const		{return d_right - d_left;}


	/*!
	\brief
		return height of Rect area
	*/
	float	getHeight(void) const		{return d_bottom - d_top;}

	/*!
	\brief
		set the width of the Rect object
	*/
	void	setWidth(float width)		{d_right = d_left + width;}

	/*!
	\brief
		set the height of the Rect object
	*/
	void	setHeight(float height)		{d_bottom = d_top + height;}

	/*!
	\brief
		return a Rect that is the intersection of 'this' Rect with the Rect 'rect'

	\note
		It can be assumed that if d_left == d_right, or d_top == d_bottom, or getWidth() == 0, or getHeight() == 0, then
		'this' rect was totally outside 'rect'.
	*/
	Rect	getIntersection(const Rect& rect) const;


	/*!
	\brief
		Applies an offset the Rect object

	\param pt
		Point object containing the offsets to be applied to the Rect.

	\return
		this Rect after the offset is performed
	*/
	Rect&	offset(const Point& pt);


	/*************************************************************************
		Data Fields
	*************************************************************************/
	float	d_top, d_bottom, d_left, d_right;
};

} // End of  CEGUI namespace section


#endif	// end of guard _CEGUIRect_h_
