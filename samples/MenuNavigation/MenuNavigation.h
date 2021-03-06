/***********************************************************************
    created:    30/5/2013
    author:     Timotei Dolean
*************************************************************************/
/***************************************************************************
 *   Copyright (C) 2004 - 2013 Paul D Turner & The CEGUI Development Team
 *
 *   Permission is hereby granted, free of charge, to any person obtaining
 *   a copy of this software and associated documentation files (the
 *   "Software"), to deal in the Software without restriction, including
 *   without limitation the rights to use, copy, modify, merge, publish,
 *   distribute, sublicense, and/or sell copies of the Software, and to
 *   permit persons to whom the Software is furnished to do so, subject to
 *   the following conditions:
 *
 *   The above copyright notice and this permission notice shall be
 *   included in all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 *   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *   OTHER DEALINGS IN THE SOFTWARE.
 ***************************************************************************/
#ifndef _Sample_Menu_Navigation_h_
#define _Sample_Menu_Navigation_h_

#include "SampleBase.h"
#include "NavigationStrategies.h"

class MenuNavigationSample : public Sample
{
public:
    MenuNavigationSample();

    virtual bool initialise(CEGUI::GUIContext* gui_context);
    virtual void deinitialise();

private:
    CEGUI::Window*      d_root;
    CEGUI::Window*      d_logWidget1;
    CEGUI::Window*      d_logWidget2;
    CEGUI::ListWidget*  d_classesList;;

    CEGUI::WindowNavigator*     d_matrixWindowNavigator;
    CEGUI::WindowNavigator*     d_linearWindowNavigator;

    void initialiseClasses(CEGUI::ListWidget* classes_listwidget);
    bool handleSelectButtonClicked(const CEGUI::EventArgs& e);
    bool handleNumberButtonClicked(const CEGUI::EventArgs& e);
    bool handleTabSelectionChanged(const CEGUI::EventArgs& e);

   std::map<int, CEGUI::String> createMatrixNavigationMappings();
   std::map<int, CEGUI::String> createLinearNavigationMappings();
};

#endif  // end of guard _Sample_Menu_Navigation_h_
