#include "Tetris.h"
#include "IBlock.h"

Tetris::Tetris() {
    paint_device().resize(Size(m_Width + TetrisConstants::Field::m_InfoPanelWidth, m_Height));
    m_GameField.resize(m_Width, m_Height);
    m_Figure = new IBlock(TetrisConstants::Figure::spawnPoint);
    track_key(VK_LEFT);
    track_key(VK_RIGHT);
    track_key(VK_DOWN);
    track_key(VK_SPACE);
    track_key(VK_UP);
    track_key('Q');
    track_key('R');
    track_key('W');
    track_key('A');
    track_key('S');
    track_key('D');
}

void Tetris::on_button_press(int button, int time) {
    if (m_End) {
        switch (button) {
            case 'Q':
                m_Exit = true;
                break;
            case 'R':
                m_End = false;
                m_GameField.clear();
                break;
        }
    } else {
        m_Figure->backup();
        if (time == 1 || time > 1800 && time % 100 == 1) {
            switch (button) {
                case VK_LEFT:
                case 'A':
                    m_Figure->move_left();
                    break;
                case VK_RIGHT:
                case 'D':
                    m_Figure->move_right();
                    break;
                case VK_DOWN:
                case 'S':
                    this->update(TetrisConstants::Field::BoostSpeed);
                    break;
                case VK_SPACE:
                case 'W':
                case VK_UP:
                    if (time % 1000 == 1) { m_Figure->rotate(); }
                    break;
            }
            if (m_GameField.has_collision(*m_Figure)) {
                m_Figure->restore();
            }
        }
    }
}

void Tetris::update(int dt) {
    if (m_GameField.has_collision(*m_Figure) || m_End) {
        m_End = true;
    } else {
        m_Figure->backup();
        m_Figure->update(dt);
        if (m_GameField.has_collision(*m_Figure)) {
            m_Figure->restore();
            m_GameField.merge(*m_Figure);
            m_Figure = new IBlock(TetrisConstants::Figure::spawnPoint);
        }
    }
}

void Tetris::render(PaintDevice &paintDevice) {
    m_GameField.render(paintDevice);
    m_Figure->render(paintDevice);
}
