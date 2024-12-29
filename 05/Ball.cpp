#define _USE_MATH_DEFINES
#include <cmath>
#include "Ball.hpp"


/**
 * Задает скорость объекта
 * @param velocity новое значение скорости
 */
void Ball::setVelocity(const Velocity& _velocity) {
    // TODO: место для доработки
    velocity = _velocity;
}

/**
 * @return скорость объекта
 */
Velocity Ball::getVelocity() const {
    // TODO: место для доработки
    return velocity;
}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const {
    // TODO: место для доработки
    painter.draw(center, radius, color);
}

/**
 * Задает координаты центра объекта
 * @param center новый центр объекта
 */
void Ball::setCenter(const Point& _center) {
    // TODO: место для доработки
    center = _center;
}

/**
 * @return центр объекта
 */
Point Ball::getCenter() const {
    // TODO: место для доработки
    return center;
}

/**
 * @brief Возвращает радиус объекта
 * @details обратите внимание, что метод setRadius()
 * не требуется
 */
double Ball::getRadius() const {
    // TODO: место для доработки
    return radius;
}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    // TODO: место для доработки
    return M_PI * pow(radius,3) * 4.0 / 3.0;
}

/**
 * @brief Возвращает тру или фолс
 * @details возвращает иформацию о столкновении шара
 */
bool Ball::getIsCollidable() const {

    return isCollidable; 
}
Ball::Ball(Point _center, Velocity _velocity, Color _color, double _radius, bool _isCollidable)
{
    center = _center;
    velocity = _velocity;
    color = _color;
    radius = _radius;
    isCollidable = _isCollidable;


}
