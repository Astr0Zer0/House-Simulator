//
// Created by guilh on 28/12/2023.
//

#ifndef HOUSE_SIMULATOR_LUMINOSITYSENSOR_H
#define HOUSE_SIMULATOR_LUMINOSITYSENSOR_H

#include "sensor.h"

class luminositySensor : public sensor {
private:
public:
    explicit luminositySensor(const std::shared_ptr<property> &sharedPtr);

    ~luminositySensor() override = default;

    [[nodiscard]]
    std::string describe() const override;
};


#endif //HOUSE_SIMULATOR_LUMINOSITYSENSOR_H
