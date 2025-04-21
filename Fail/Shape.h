#pragma once


class Shape {
public:
    Shape() {}
    ~Shape() {}

    enum class Type {
        CIRCLE,
        RECTANGLE
    };

    virtual Type getType();

    virtual float area();
};