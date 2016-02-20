/*=====================================================================
 
 QGroundControl Open Source Ground Control Station
 
 (c) 2009 - 2014 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 
 This file is part of the QGROUNDCONTROL project
 
 QGROUNDCONTROL is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 QGROUNDCONTROL is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with QGROUNDCONTROL. If not, see <http://www.gnu.org/licenses/>.
 
 ======================================================================*/

#ifndef SimpleMissionItem_H
#define SimpleMissionItem_H

#include "MissionItem.h"

class SimpleMissionItem : public MissionItem
{
    Q_OBJECT
    
public:
    SimpleMissionItem(Vehicle* vehicle, QObject* parent = NULL);

    SimpleMissionItem(Vehicle*        vehicle,
                int             sequenceNumber,
                MAV_CMD         command,
                MAV_FRAME       frame,
                double          param1,
                double          param2,
                double          param3,
                double          param4,
                double          param5,
                double          param6,
                double          param7,
                bool            autoContinue,
                bool            isCurrentItem,
                QObject*        parent = NULL);

    SimpleMissionItem(const SimpleMissionItem& other, QObject* parent = NULL);

    const SimpleMissionItem& operator=(const SimpleMissionItem& other);

    // Overrides from MissionItem base class
    bool            simpleItem      (void) const final { return true; }
    QGeoCoordinate  exitCoordinate  (void) const final { return coordinate(); }

private:
};

#endif