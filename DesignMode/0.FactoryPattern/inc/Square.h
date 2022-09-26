#ifndef SQUARE_H_
#define SQUARE_H_

#include <cstdio>

#include "Shape.h"

class Square : public Shape {
public:
  virtual void draw() override;
};

void Square::draw() {
  printf("%s:%d\t%s() in here\n", __FILE__, __LINE__, __FUNCTION__);
}
#endif
