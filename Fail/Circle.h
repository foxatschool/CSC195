#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    Circle(float r) { m_radius = r; }
    ~Circle() {}

    float area() override {
        return 3.14f * m_radius * m_radius;
    }

    void setRadius(float radius) const { radius = radius; }
    float getRadius() { return m_radius; }

    Type getType() override { return Type::CIRCLE; }

private:
    float m_radius;
};
