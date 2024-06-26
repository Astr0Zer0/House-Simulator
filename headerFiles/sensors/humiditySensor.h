//
// Created by guilh on 28/12/2023.
//

#ifndef HOUSE_SIMULATOR_HUMIDITYSENSOR_H
#define HOUSE_SIMULATOR_HUMIDITYSENSOR_H

#include "sensor.h"

class humiditySensor : public sensor {
private:
public:

    explicit humiditySensor(const std::shared_ptr<property> &sharedPtr);

    ~humiditySensor() override = default;

    [[nodiscard]]
    std::string describe() const override;
};


#endif //HOUSE_SIMULATOR_HUMIDITYSENSOR_H
