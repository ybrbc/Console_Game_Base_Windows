#include "IBlock.h"
#include <random>
#include "TetrisConstants.h"

IBlock::IBlock(Point position) : Figure(position) {
    int figureId = choiceFigure();
    m_Body = TetrisConstants::Figure::AllFigures[figureId];
    m_color = TetrisConstants::Figure::AllColors[figureId];
}

int IBlock::choiceFigure() {
    std::mt19937 random_number(std::random_device{}());
    std::uniform_int_distribution<int> distribution(0, TetrisConstants::Figure::AllFigures.size() - 1);
    return distribution(random_number);
}
