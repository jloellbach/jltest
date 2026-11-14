#pragma once

#include <array>

class Node {
public:
    void setX(std::array<double, 3> coord);
    std::array<double, 3> getX();
private:
    std::array<double, 3> coord_;
};
