#ifndef TETRISCONSTANTS_H
#define TETRISCONSTANTS_H
#include "Point.h"

namespace TetrisConstants {
    namespace Figure {
        const Point SPAWNPOINT= Point(5,1);
        const std::vector<std::vector<Point>> I = {
            {Point(1, 0), Point(1, 1), Point(1, 2), Point(1, 3)},
            {Point(0, 2), Point(1, 2), Point(2, 2), Point(3, 2)},
            {Point(2, 0), Point(2, 1), Point(2, 2), Point(2, 3)},
            {Point(0, 1), Point(1, 1), Point(2, 1), Point(3, 1)}
        };
    }

    namespace Field {
        constexpr size_t m_Width = 14;
        constexpr size_t m_Height = 26;
        constexpr size_t m_InfoPanelWidth = 6;
        constexpr size_t NormalSpeed = 500;
        constexpr size_t BoostSpeed = 500;
    }
}
#endif //TETRISCONSTANTS_H
