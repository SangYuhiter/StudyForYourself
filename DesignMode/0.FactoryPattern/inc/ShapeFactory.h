#ifndef SHAPEFACTORY_H_
#define SHAPEFACTORY_H_

#include <cstdio>

#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Square.h"

enum class ShapeType {
  RECTANGLE = 0,
  SQUARE,
  CIRCLE,
  SHAPE_TYPE_NUM,
};

class ShapeFactory {
public:
  Shape *getShape(ShapeType shapeType);
};

Shape *ShapeFactory::getShape(ShapeType shapeType) {
  switch (shapeType) {
  case ShapeType::RECTANGLE:
    return new Rectangle();
    break;
  case ShapeType::SQUARE:
    return new Square();
    break;
  case ShapeType::CIRCLE:
    return new Circle();
    break;
  default:
    return nullptr;
    break;
  }
}
#endif
