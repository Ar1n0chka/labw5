#pragma once
#include "Painter.h"
#include "Point.h"
#include "Velocity.h"

class Ball {
public:
    Ball(Point cords, Velocity velocity, Color color, double radius, bool isCollidable);
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    bool getIsCollidable() const;
private:
    double mass;
    double radius;
    Point center;
    Velocity velocity;
    Painter painter;
    Color color;
    bool isCollidable;
};  
