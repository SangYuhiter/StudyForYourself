#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <cstdio>

#include "Shape.h"

class Circle : public Shape {
public:
  virtual void draw() override;
};

void Circle::draw() {
  printf("%s:%d\t%s() in here\n", __FILE__, __LINE__, __FUNCTION__);
}
#endif
