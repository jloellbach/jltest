#include "Node.h"

void Node::setX(std::array<double, 3> coord) {coord_ = coord;};

std::array<double, 3> Node::getX() {return coord_;};
