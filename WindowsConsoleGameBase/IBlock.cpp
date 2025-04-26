#include "IBlock.h"
#include "ConsoleOutput.h"

IBlock::IBlock(Point position) : Figure(position) {
    m_Body = ConsoleOutput::Tetris::I;
}
