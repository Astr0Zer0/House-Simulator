//
// Created by guilh on 28/12/2023.
//

#ifndef HOUSE_SIMULATOR_HOUSE_H
#define HOUSE_SIMULATOR_HOUSE_H

#include <vector>
#include <memory>
#include <iostream>
#include <algorithm>
#include "room.h"
#include "Terminal.h"
#include "../exceptions/positionOcuppied.h"
#include "../exceptions/roomNotFound.h"
#include "../exceptions/invalidPosition.h"
#include "../exceptions/invalidDeviceType.h"
#include "../exceptions/nameAlreadyExists.h"
#include "../exceptions/nameNotFound.h"

class house {
private:
    std::map<std::string, std::unique_ptr<processor>> processorMemory;
    std::vector<std::unique_ptr<room>> houseRooms;
    std::vector<std::unique_ptr<term::Window>> roomWindows;
    unsigned int nLines, nCollums;
public:
    explicit house(unsigned int nLines = 2,
                   unsigned int nCollums = 2);

    ~house() = default;

    void newRoom(unsigned int roomNlines, unsigned int roomNCollums);

    void deleteRoom(const std::string &id);

    [[nodiscard]]
    unsigned int getNLines() const;

    [[nodiscard]]
    unsigned int getNCollums() const;

    void newComponent(const std::string &idRoom, char type, const std::string &command) const;

    void removeComponent(const std::string &idRoom, char type, const std::string &idComponent) const;

    [[nodiscard]]
    std::string describeHouse() const;

    [[nodiscard]]
    std::string describeRoom(const std::string &idRoom) const;

    [[nodiscard]]
    std::string showPropertysOfRoom(const std::string &idRoom) const;

    void changePropertyOfRoom(const std::string &idRoom, const std::string &propertyTobeChanged, int valueToBe) const;

    void
    addRule(const std::string &idRoom, const std::string &idProcessor, const std::string &idSensor,
            const std::string &type,
            int parameter1) const;

    void
    addRule(const std::string &idRoom, const std::string &idProcessor, const std::string &idSensor,
            const std::string &type,
            int parameter1,
            int parameter2) const;

    void removeRuleFrom(const std::string &idRoom, const std::string &idProcessor, const std::string &idRule) const;


    void changeCommandFromProcessor(const std::string &idRoom, const std::string &idProcessor,
                                    const std::string &newCommand) const;

    [[nodiscard]]
    std::string showRulesFrom(const std::string &idRoom, const std::string &idProcessor) const;

    void
    associateDeviceToProcessor(const std::string &idRoom, const std::string &idProcessor,
                               const std::string &idDevice) const;

    void
    disaDeviceFromProcessor(const std::string &id, const std::string &idProcessor, const std::string &idDevice) const;

    void
    sendCommandToDevice(const std::string &idRoom, const std::string &idDevice, const std::string &newCommand) const;

    [[nodiscard]]
    std::vector<std::unique_ptr<room>>::const_iterator findRoomItByID(const std::string &idRoom) const;

    void saveProcessor(const std::string &idRoom, const std::string &idProcessor, const std::string &name);

    void restoreProcessor(const std::string &name);

    void removeProcessorFromMemory(const std::string &name);

    [[nodiscard]]
    std::string showProcessorsFromMemory() const;

    void carryOut() const;
};


#endif //HOUSE_SIMULATOR_HOUSE_H