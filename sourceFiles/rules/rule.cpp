//
// Created by guilh on 28/12/2023.
//

#include "../../headerFiles/rules/rule.h"

rule::rule(const std::shared_ptr<sensor> &sensorPtr, int parameter1) : detector(sensorPtr), state(false),
                                                                       firstParameter(parameter1) {
    static unsigned int counter{};
    num = counter++;
}

std::string rule::getId() const {
    return "r" + std::to_string(getNum());
}

std::string rule::describeSensor() const {
    auto sensor = detector.lock();
    if (sensor)
        return sensor->describe();
    throw acessError();
}

bool rule::getState() const {
    return state;
}

void rule::setState(bool newState) {
    state = newState;
}

int rule::getFirstParameter() const {
    return firstParameter;
}

int rule::getSensorValue() const {
    auto sensorPtr = detector.lock();
    if (sensorPtr)
        return sensorPtr->getValue();
    throw acessError();
}