#ifndef FIGURE_H
#define FIGURE_H
#include <vector>

#include "PaintDevice.h"
#include "Point.h"
#include "TetrisConstants.h"

class Figure {
protected:
    Point m_Position;
    double m_TimeFromLastUpdate = 0;
    double m_TimeForUpdate = TetrisConstants::Field::NormalSpeed;
    std::vector<std::vector<Point> > m_Body;
    Point m_PositionBackup = TetrisConstants::Figure::SPAWNPOINT;
    size_t m_CurrentRotate = 0;
    size_t m_CurrentRotateBackup = 0;

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

    void rotate();
};


#endif //FIGURE_H
