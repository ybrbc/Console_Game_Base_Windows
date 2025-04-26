#include "Figure.h"

#include "ConsoleOutput.h"

void Figure::render(PaintDevice &paintDevice) {
    for (const Point &point: m_Body) {
        Vector2 v(point.x + m_Position.x,
                  point.y + m_Position.y);
        paintDevice.set_char(v, ConsoleOutput::Symbols::BLOCK);
    }
}

void Figure::move_right(size_t width) {
    if (m_Position.x < width -3) {
        ++m_Position.x;
    }
}

void Figure::move_left() {
    if (0 < m_Position.x) {
        --m_Position.x;
    }
}

void Figure::update(double dt) {
    m_TimeFromLastUpdate += dt;
    if (m_TimeFromLastUpdate > m_TimeForUpdate) {
        m_TimeFromLastUpdate = 0;
        ++m_Position.y;
    }
}
