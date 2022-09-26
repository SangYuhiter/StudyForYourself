/*************************************************************************
 @File Name    : FactoryPatternDemo.cpp
 @Author       : SangYu
 @Email        : sangyu.code@gmail.com
 @Created Time : 2022年09月26日 星期一 22时09分42秒
 @Description  :
 ************************************************************************/

#include "ShapeFactory.h"

int main() {
  ShapeFactory *shapeFactory = new ShapeFactory();

  Shape *shapeRectangle = shapeFactory->getShape(ShapeType::RECTANGLE);
  shapeRectangle->draw();

  Shape *shapeSquare = shapeFactory->getShape(ShapeType::SQUARE);
  shapeSquare->draw();

  Shape *shapeCircle = shapeFactory->getShape(ShapeType::CIRCLE);
  shapeCircle->draw();

  // delete memory
  if (nullptr != shapeFactory) {
    delete shapeFactory;
    shapeFactory = nullptr;
  }

  if (nullptr != shapeRectangle) {
    delete shapeRectangle;
    shapeRectangle = nullptr;
  }

  if (nullptr != shapeSquare) {
    delete shapeSquare;
    shapeSquare = nullptr;
  }

  if (nullptr != shapeCircle) {
    delete shapeCircle;
    shapeCircle = nullptr;
  }

  return 0;
}
