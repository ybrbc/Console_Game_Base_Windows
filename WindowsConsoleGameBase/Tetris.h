#ifndef TETRIS_H
#define TETRIS_H
#include "Engine.h"
#include "Figure.h"
#include "GameField.h"


class Tetris : public Engine {
    GameField m_GameField;
    const size_t m_Width = TetrisConstants::Field::m_Width;
    const size_t m_Height = TetrisConstants::Field::m_Height;
    Figure *m_Figure;

public:
    Tetris();

    ~Tetris() override {
    }

protected:
    bool end() const override { return false; }

    void on_button_press(const int button) override {
    }

    void update(const int dt) override;

    void render(PaintDevice &paintDevice) override;
};

#endif //TETRIS_H
