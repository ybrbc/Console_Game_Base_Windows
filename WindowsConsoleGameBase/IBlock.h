#ifndef IBLOCK_H
#define IBLOCK_H
#include "Figure.h"


class IBlock : public Figure {
public:
    IBlock(Point position);

    static std::vector<std::vector<Point> > choiceFigure();
};


#endif //IBLOCK_H
