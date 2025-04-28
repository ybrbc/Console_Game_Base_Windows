#ifndef TETRISCONSTANTS_H
#define TETRISCONSTANTS_H
#include "Point.h"

namespace TetrisConstants {
    namespace Figure {
        const Point spawnPoint = Point(5, 1);
        const std::vector<std::vector<Point> > I = {
            {Point(-1, 1), Point(0, 1), Point(1, 1), Point(2, 1)},
            {Point(1, 0), Point(1, 1), Point(1, 2), Point(1, 3)},
            {Point(-1, 2), Point(0, 2), Point(1, 2), Point(2, 2)},
            {Point(0, 0), Point(0, 1), Point(0, 2), Point(0, 3)},
        };
        const std::vector<std::vector<Point> > J = {
            {Point(-1, 0), Point(-1, 1), Point(0, 1), Point(1, 1)},
            {Point(0, 2), Point(0, 1), Point(0, 0), Point(1, 0)},
            {Point(-1, 1), Point(0, 1), Point(1, 1), Point(1, 2)},
            {Point(0, 0), Point(0, 1), Point(0, 2), Point(-1, 2)},
        };
        const std::vector<std::vector<Point> > L = {
            {Point(1, 0), Point(-1, 1), Point(0, 1), Point(1, 1)},
            {Point(0, 0), Point(0, 1), Point(0, 2), Point(1, 2)},
            {Point(1, 1), Point(-1, 1), Point(0, 1), Point(-1, 2)},
            {Point(0, 2), Point(0, 1), Point(-1, 0), Point(0, 0)},
        };
        const std::vector<std::vector<Point> > O = {
            {Point(0, 0), Point(0, 1), Point(1, 0), Point(1, 1)},
            {Point(0, 0), Point(0, 1), Point(1, 0), Point(1, 1)},
            {Point(0, 0), Point(0, 1), Point(1, 0), Point(1, 1)},
            {Point(0, 0), Point(0, 1), Point(1, 0), Point(1, 1)},
        };
        const std::vector<std::vector<Point> > Z = {
            {Point(-1, 0), Point(0, 0), Point(0, 1), Point(1, 1)},
            {Point(1, -1), Point(1, 0), Point(0, 0), Point(0, 1)},
            {Point(-1, 0), Point(0, 0), Point(0, 1), Point(1, 1)},
            {Point(0, -1), Point(0, 0), Point(-1, 0), Point(-1, 1)},
        };
        const std::vector<std::vector<Point> > T = {
            {Point(0, 0), Point(0, 1), Point(1, 1), Point(-1, 1)},
            {Point(0, 0), Point(0, 1), Point(1, 1), Point(0, 2)},
            {Point(0, 2), Point(0, 1), Point(1, 1), Point(-1, 1)},
            {Point(0, 2), Point(0, 1), Point(0, 0), Point(-1, 1)},
        };
        const std::vector<std::vector<Point> > S = {
            {Point(1, 0), Point(0, 0), Point(0, 1), Point(-1, 1)},
            {Point(-1, -1), Point(-1, 0), Point(0, 0), Point(0, 1)},
            {Point(1, 0), Point(0, 0), Point(0, 1), Point(-1, 1)},
            {Point(0, -1), Point(0, 0), Point(1, 0), Point(1, 1)},
        };
        const std::vector AllFigures = {I, J, L, O, Z, T, S};
    }

    namespace Field {
        constexpr size_t m_Width = 10 + 2;
        constexpr size_t m_Height = 20 + 2;
        constexpr size_t m_InfoPanelWidth = 6;
        constexpr size_t NormalSpeed = 500;
        constexpr size_t BoostSpeed = 250;
    }
}
#endif //TETRISCONSTANTS_H
