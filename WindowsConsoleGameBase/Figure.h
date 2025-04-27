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
    Point m_PositionBackup;

public:
    Figure(Point position): m_Position(position) {
    }

    void render(PaintDevice &paintDevice);

    void move_right();

    void move_left();

    void update(double dt);

    const std::vector<Point> &get_body() const;

    Point get_position() const;

    void set_position(Point position);

    void backup();

    void restore();
};


#endif //FIGURE_H
