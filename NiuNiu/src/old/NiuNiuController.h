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

#ifndef NIUNIUCONTROLLER_H
#define NIUNIUCONTROLLER_H

#include <QtGui>
#include "DJGameController.h"

class DJHallInterface;
class DJGameRoom;
class DJGamePanel;

class NiuNiuController : public DJGameController
{
	Q_OBJECT
public:
	NiuNiuController( quint16 gameId, const QString& gameName, const DJHallInterface& hallInterface, QObject *parent = 0 );
	~NiuNiuController();
	
	virtual QString		translatedGameName() const;
	virtual QColor nameColor() const;
	virtual QString roomName( DJGameRoom* room )const;
	//virtual QString	roomDescription( DJGameRoom* normalRoom ) const;
	virtual	DJGamePanel* createGamePanel( DJGameController* gameController, DJGameRoom* normalRoom, const QList<quint32>& userIds, quint8 tableId, quint8 seatId, QWidget * parent = 0, Qt::WFlags f = Qt::Window );
};

#endif
