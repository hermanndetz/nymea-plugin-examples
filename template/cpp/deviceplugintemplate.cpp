/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                         *
 *  Copyright (C) 2019 Developer Name <developer.name@example.com>         *
 *                                                                         *
 *  This file is part of nymea.                                            *
 *                                                                         *
 *  This library is free software; you can redistribute it and/or          *
 *  modify it under the terms of the GNU Lesser General Public             *
 *  License as published by the Free Software Foundation; either           *
 *  version 2.1 of the License, or (at your option) any later version.     *
 *                                                                         *
 *  This library is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
 *  Lesser General Public License for more details.                        *
 *                                                                         *
 *  You should have received a copy of the GNU Lesser General Public       *
 *  License along with this library; If not, see                           *
 *  <http://www.gnu.org/licenses/>.                                        *
 *                                                                         *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "plugininfo.h"
#include "deviceplugintemplate.h"

DevicePluginExample::DevicePluginExample()
{

}

void DevicePluginExample::init()
{
    // Initialize/create objects
}

void DevicePluginExample::startMonitoringAutoDevices()
{
    // Start seaching for devices which can be discovered and added automatically
}

void DevicePluginExample::postSetupDevice(Device *device)
{
    qCDebug(dcTemplate()) << "Post setup device" << device->name() << device->params();

    // This method will be called once the setup for device is finished
}

void DevicePluginExample::deviceRemoved(Device *device)
{
    qCDebug(dcTemplate()) << "Remove device" << device->name() << device->params();

    // Clean up all data related to this device
}

void  DevicePluginExample::setupDevice(Device *device)
{
    qCDebug(dcTemplate()) << "Setup device" << device->name() << device->params();

    return DeviceManager::DeviceSetupStatusSuccess;
}

void DevicePluginExample::executeAction(Device *device, const Action &action)
{
    qCDebug(dcTemplate()) << "Executing action for device" << device->name() << action.actionTypeId().toString() << action.params();

    return DeviceManager::DeviceErrorNoError;
}
