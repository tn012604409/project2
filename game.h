#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include "set.h"
namespace Ui {
class game;
}

class game : public QMainWindow
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = 0);
    ~game();
    void gamestart(void);
    void setboard(set & b);
    void setrandom(void);
    void keyPressEvent(QKeyEvent * event);

private:
    Ui::game *ui;
    set b[17];

};

#endif // GAME_H
