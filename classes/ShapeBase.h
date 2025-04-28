#pragma once

class ShapeBase {
protected:
  double size;

public:
  explicit ShapeBase(double size) : size(size) {}
  virtual ~ShapeBase() = default;

  virtual double surface_area() const = 0; // Pure virtual function
};