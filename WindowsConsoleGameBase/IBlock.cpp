#include "IBlock.h"
#include <random>
#include "TetrisConstants.h"

IBlock::IBlock(Point position) : Figure(position) {
    m_Body = choiceFigure();
}

std::vector<std::vector<Point> > IBlock::choiceFigure() {
    std::mt19937 random_number(std::random_device{}());
    std::uniform_int_distribution<int> distribution(0, TetrisConstants::Figure::AllFigures.size() - 1);
    return TetrisConstants::Figure::AllFigures[distribution(random_number)];
}
