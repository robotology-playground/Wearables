/*
 * Copyright (C) 2018 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * GNU Lesser General Public License v2.1 or any later version.
 */

#ifndef WEARABLE_COMMON_H
#define WEARABLE_COMMON_H

#ifndef wError
#include <iostream>
#define wError std::cerr
#endif

#ifndef wWarning
#include <iostream>
#define wWarning std::cout
#endif

#include <string>

namespace wearable {

    const std::string Separator = "::";

    enum class ElementType
    {
        WearableSensor = 0,
        WearableActuator,
    };

    class IWearableDevice;

} // namespace wearable

class wearable::IWearableDevice
{
protected:
    ElementType m_wearable_element_type;

    virtual ElementType getWearableElementType() const = 0;
};

#endif // WEARABLE_COMMON_H
