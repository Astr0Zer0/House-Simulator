cmake_minimum_required(VERSION 3.27)
project(House_Simulator)

set(CMAKE_CXX_STANDARD 20)

add_executable(House_Simulator main.cpp
        sourceFiles/house.cpp
        headerFiles/house.h
        sourceFiles/room.cpp
        headerFiles/room.h
        exceptions/positionOcuppied.h
        sourceFiles/houseElements.cpp
        headerFiles/houseElements.h
        exceptions/roomNotFound.h
        sourceFiles/sensors/sensor.cpp
        headerFiles/sensors/sensor.h
        sourceFiles/devices/devices.cpp
        headerFiles/devices/devices.h
        sourceFiles/processor.cpp
        headerFiles/processor.h
        sourceFiles/rules/rule.cpp
        headerFiles/rules/rule.h
        sourceFiles/rules/equalTo.cpp
        headerFiles/rules/equalTo.h
        sourceFiles/rules/lessThan.cpp
        headerFiles/rules/lessThan.h
        sourceFiles/rules/greaterThan.cpp
        headerFiles/rules/greaterThan.h
        sourceFiles/rules/within.cpp
        headerFiles/rules/within.h
        sourceFiles/rules/outsideOf.cpp
        headerFiles/rules/outsideOf.h
        sourceFiles/devices/cooler.cpp
        headerFiles/devices/cooler.h
        sourceFiles/devices/heater.cpp
        headerFiles/devices/heater.h
        sourceFiles/devices/sprinkler.cpp
        headerFiles/devices/sprinkler.h
        sourceFiles/devices/lamp.cpp
        headerFiles/devices/lamp.h
        sourceFiles/sensors/smokeSensor.cpp
        headerFiles/sensors/smokeSensor.h
        sourceFiles/sensors/humiditySensor.cpp
        headerFiles/sensors/humiditySensor.h
        sourceFiles/sensors/luminositySensor.cpp
        headerFiles/sensors/luminositySensor.h
        sourceFiles/sensors/movementSensor.cpp
        headerFiles/sensors/movementSensor.h
        sourceFiles/sensors/radiationSensor.cpp
        headerFiles/sensors/radiationSensor.h
        sourceFiles/sensors/soundSensor.cpp
        headerFiles/sensors/soundSensor.h
        sourceFiles/sensors/temperatureSensor.cpp
        headerFiles/sensors/temperatureSensor.h
        exceptions/invalidPosition.h
        sourceFiles/propertys/property.cpp
        headerFiles/propertys/property.h
        sourceFiles/propertys/temperature.cpp
        headerFiles/propertys/temperature.h
        sourceFiles/propertys/vibration.cpp
        headerFiles/propertys/vibration.h
        sourceFiles/propertys/luminosity.cpp
        headerFiles/propertys/luminosity.h
        sourceFiles/propertys/radiation.cpp
        headerFiles/propertys/radiation.h
        sourceFiles/propertys/humidity.cpp
        headerFiles/propertys/humidity.h
        sourceFiles/propertys/sound.cpp
        headerFiles/propertys/sound.h
        sourceFiles/propertys/smoke.cpp
        headerFiles/propertys/smoke.h
        exceptions/invalidDeviceType.h
        exceptions/invalidSensorType.h
        exceptions/outOfRangeProperty.h
        exceptions/processorNotFound.h
        exceptions/unknowRule.h
        exceptions/sensorNotFound.h
        exceptions/ruleNotFound.h
        exceptions/deviceNotFound.h
        exceptions/acessError.h
        exceptions/nameAlreadyExists.h
        exceptions/nameNotFound.h
        sourceFiles/app.cpp
        headerFiles/app.h
        sourceFiles/Terminal.cpp
        exceptions/commandNotFound.h
        exceptions/fileNotOpened.h
        exceptions/houseNotCreated.h
)
target_link_libraries(${PROJECT_NAME} C:/Users/guilh/Documents/GitHub/House-Simulator/pdcurses.a)