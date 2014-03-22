//****************************************************************************
//Copyright (C) 2005-2006 Beijing BlueDJ Technology Co.,Ltd. All rights reserved.

//This program is free software; you can redistribute it and/or
//modify it under the terms of the GNU General Public License
//as published by the Free Software Foundation; either version 2
//of the License, or (at your option) any later version.

//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

//You should have received a copy of the GNU General Public License
//along with this program (in the file LICENSE.GPL); if not, write to the Free Software
//Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

//Please visit http://www.bluedj.com for more infomation about us.
//Contact us at ggwizard@gmail.com or darkdong@gmail.com.
//****************************************************************************/

#ifndef LLKPANELCONTROLLER_H
#define LLKPANELCONTROLLER_H

#include <QtGui>
#include "DJPanelController.h"

class DJDesktopController;
class DJGameRankTabWidget;

class LLKPanelController : public DJPanelController
{
	Q_OBJECT
public : 
	LLKPanelController( DJTableController* tableController, quint8 seatId );
	~LLKPanelController();
	virtual void createAccessoryWidgets( QWidget *parent );
	virtual DJDesktopController* createDesktopController( const QSize& desktopSize, QWidget *parent );
	virtual void gameTrace( const GeneralGameTrace2Head *gameTrace );
private:
	DJGameRankTabWidget	*m_rankWidget;
};

#endif
