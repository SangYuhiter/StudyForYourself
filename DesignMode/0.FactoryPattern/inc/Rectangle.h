#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <cstdio>

#include "Shape.h"

class Rectangle : public Shape {
public:
  virtual void draw() override;
};

void Rectangle::draw() {
  printf("%s:%d\t%s() in here\n", __FILE__, __LINE__, __FUNCTION__);
}
#endif
