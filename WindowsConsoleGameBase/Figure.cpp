#include "Figure.h"

#include "ConsoleOutput.h"

void Figure::render(PaintDevice &paintDevice) {
    for (const Point &point: m_Body) {
        Vector2 v(point.x + m_Position.x,
                  point.y + m_Position.y);
        paintDevice.set_char(v, ConsoleOutput::Symbols::BLOCK);
    }
}

void Figure::move_right() {
    ++m_Position.x;
}

void Figure::move_left() {
    --m_Position.x;
}

void Figure::update(double dt) {
    m_TimeFromLastUpdate += dt;
    if (m_TimeFromLastUpdate > m_TimeForUpdate) {
        m_TimeFromLastUpdate = 0;
        ++m_Position.y;
    }
}

const std::vector<Point> &Figure::get_body() const {
    return m_Body;
}

Point Figure::get_position() const {
    return m_Position;
}

void Figure::set_position(Point position) {
    m_Position = position;
}

void Figure::backup() {
    m_PositionBackup = m_Position;
}

void Figure::restore() {
    m_Position = m_PositionBackup;
}

void Figure::boost() {
    m_TimeForUpdate = TetrisConstants::Field::BoostSpeed;
}
