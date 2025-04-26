#include "IBlock.h"
#include "TetrisConstants.h"

IBlock::IBlock(Point position) : Figure(position) {
    m_Body = TetrisConstants::Figure::I;
}
