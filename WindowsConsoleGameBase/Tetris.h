#ifndef TETRIS_H
#define TETRIS_H
#include "Engine.h"
#include "Figure.h"
#include "GameField.h"
#include "TetrisConstants.h"


class Tetris : public Engine {
    GameField m_GameField;
    const size_t m_Width = TetrisConstants::Field::m_Width;
    const size_t m_Height = TetrisConstants::Field::m_Height;
    Figure *m_Figure;
    bool m_End = false;
    bool m_Exit = false;

public:
    Tetris();

    ~Tetris() override {
    }

protected:
    bool end() const override { return m_Exit; }

    void on_button_press(int button, int time) override;

    void update(int dt) override;

    void render(PaintDevice &paintDevice) override;
};

#endif //TETRIS_H
