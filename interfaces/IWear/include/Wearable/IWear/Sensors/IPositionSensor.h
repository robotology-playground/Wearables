/*
 * Copyright (C) 2018 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * GNU Lesser General Public License v2.1 or any later version.
 */

#ifndef WEARABLE_IPOSITION_SENSOR_H
#define WEARABLE_IPOSITION_SENSOR_H

#include "Wearable/IWear/Sensors/ISensor.h"

namespace wearable {
    namespace sensor {
        class IPositionSensor;
    } // namespace sensor
} // namespace wearable

class wearable::sensor::IPositionSensor : public wearable::sensor::ISensor
{
public:
    virtual ~IPositionSensor() = 0;

    virtual bool getPosition(Vector3& position) const = 0;
};

#endif // WEARABLE_IPOSITION_SENSOR_H
