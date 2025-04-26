#ifndef FIGURE_H
#define FIGURE_H
#include <vector>

#include "PaintDevice.h"

struct Point {
    int x;
    int y;

    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {
    }
};

class Figure {
protected:
    Point m_Position;
    double m_TimeFromLastUpdate = 0;
    double m_TimeForUpdate = 500;
    std::vector<Point> m_Body;

public:
    Figure(Point position): m_Position(position) {
    }

    void render(PaintDevice &paintDevice) {
        for (const Point &point: m_Body) {
            Vector2 v(point.x + m_Position.x,
                      point.y + m_Position.y);
            paintDevice.set_char(v, 8);
        }
    }

    void update(double dt) {
        m_TimeFromLastUpdate += dt;
        if (m_TimeFromLastUpdate > m_TimeForUpdate) {
            m_TimeFromLastUpdate = 0;
            ++m_Position.y;
        }
    }
};


#endif //FIGURE_H
