#include "game.h"
#include "ui_game.h"
#include <cstdlib>
#include <ctime>
#include <QDebug>
game::game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    for(int i=0;i<17;i++){
        b[i].position=i;
        b[i].number=0;
        b[i].isAdded=false;
        b[i].isMoved=false;
        setboard(b[i]);
    }//初始化
    srand(time(NULL));
}

game::~game()
{
    delete ui;
}
void game::setboard(set & b){
    switch (b.position) {
    case 1:
        switch (b.number) {
        case 0:ui->b1->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b1->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi1";break;
        case 4:ui->b1->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b1->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b1->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b1->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b1->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b1->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b1->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b1->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b1->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b1->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 2:
        switch (b.number) {
        case 0:ui->b2->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b2->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi2";break;
        case 4:ui->b2->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b2->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b2->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b2->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b2->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b2->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b2->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b2->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b2->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b2->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 3:
        switch (b.number) {
        case 0:ui->b3->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b3->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi3";break;
        case 4:ui->b3->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b3->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b3->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b3->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b3->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b3->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b3->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b3->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b3->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b3->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 4:
        switch (b.number) {
        case 0:ui->b4->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b4->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi4";break;
        case 4:ui->b4->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b4->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b4->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b4->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b4->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b4->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b4->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b4->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b4->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b4->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 5:
        switch (b.number) {
        case 0:ui->b5->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b5->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi5";break;
        case 4:ui->b5->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b5->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b5->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b5->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b5->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b5->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b5->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b5->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b5->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b5->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 6:
        switch (b.number) {
        case 0:ui->b6->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b6->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi6";break;
        case 4:ui->b6->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b6->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b6->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b6->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b6->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b6->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b6->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b6->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b6->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b6->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 7:
        switch (b.number) {
        case 0:ui->b7->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b7->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi7";break;
        case 4:ui->b7->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b7->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b7->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b7->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b7->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b7->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b7->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b7->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b7->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b7->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 8:
        switch (b.number) {
        case 0:ui->b8->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b8->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi8";break;
        case 4:ui->b8->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b8->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b8->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b8->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b8->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b8->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b8->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b8->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b8->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b8->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 9:
        switch (b.number) {
        case 0:ui->b9->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b9->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi9";break;
        case 4:ui->b9->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b9->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b9->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b9->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b9->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b9->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b9->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b9->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b9->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b9->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 10:
        switch (b.number) {
        case 0:ui->b10->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b10->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi10";break;
        case 4:ui->b10->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b10->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b10->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b10->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b10->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b10->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b10->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b10->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b10->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b10->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 11:
        switch (b.number) {
        case 0:ui->b11->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b11->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi11";break;
        case 4:ui->b11->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b11->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b11->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b11->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b11->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b11->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b11->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b11->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b11->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b11->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 12:
        switch (b.number) {
        case 0:ui->b12->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b12->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi12";break;
        case 4:ui->b12->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b12->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b12->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b12->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b12->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b12->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b12->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b12->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b12->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b12->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 13:
        switch (b.number) {
        case 0:ui->b13->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b13->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi13";break;
        case 4:ui->b13->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b13->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b13->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b13->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b13->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b13->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b13->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b13->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b13->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b13->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 14:
        switch (b.number) {
        case 0:ui->b14->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b14->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi14";break;
        case 4:ui->b14->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b14->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b14->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b14->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b14->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b14->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b14->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b14->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b14->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b14->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 15:
        switch (b.number) {
        case 0:ui->b15->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b15->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi15";break;
        case 4:ui->b15->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b15->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b15->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b15->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b15->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b15->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b15->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b15->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b15->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b15->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    case 16:
        switch (b.number) {
        case 0:ui->b16->setPixmap(QPixmap(":/pic/0.png"));break;
        case 2:ui->b16->setPixmap(QPixmap(":/pic/2.png"));qDebug()<<"Hi16";break;
        case 4:ui->b16->setPixmap(QPixmap(":/pic/4.png"));break;
        case 8:ui->b16->setPixmap(QPixmap(":/pic/8.png"));break;
        case 16:ui->b16->setPixmap(QPixmap(":/pic/16.png"));break;
        case 32:ui->b16->setPixmap(QPixmap(":/pic/32.png"));break;
        case 64:ui->b16->setPixmap(QPixmap(":/pic/64.png"));break;
        case 128:ui->b16->setPixmap(QPixmap(":/pic/128.png"));break;
        case 256:ui->b16->setPixmap(QPixmap(":/pic/256.png"));break;
        case 512:ui->b16->setPixmap(QPixmap(":/pic/512.png"));break;
        case 1024:ui->b16->setPixmap(QPixmap(":/pic/1024.png"));break;
        case 2048:ui->b16->setPixmap(QPixmap(":/pic/2048.png"));break;
        }break;
    }
}

void game::setrandom()//在空格處random2
{
    while(1){
      int t=rand()%16+1;
      if (b[t].number==0){
          b[t].number=2;
          setboard(b[t]);qDebug()<<"Hello";
          return;
      }
    }
}

void game::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
       for(int j=0;j<4;j++){
            for(int i=2+j*4;i<=4+j*4;i++){
                if(b[i].number!=0&&b[i].number==b[i-1].number&&b[i-1].isAdded==false&&b[i]==false){
                    b[i-1].number=b[i-1].number+b[i-1].number;
                    b[i].number=0;
                    b[i-1].isAdded=true;
                    b[i].isAdded=false;
                    setboard(b[i-1]);
                    setboard(b[i]);
                    b[i-1].isMoved=true;
                    b[i].isMoved=false;
                    }
                else if(b[i].number!=0&&b[i-1].number==0){
                    b[i-1].number=b[i].number;
                    b[i].number=0;
                    b[i-1].isMoved=true;
                    b[i].isMoved=false;
                    b[i-1].isAdded=b[i].isAdded;
                    b[i].isAdded=false;
                    setboard(b[i-1]);
                    setboard(b[i]);
                }
            }
       }
    }
    else if(event->key() == Qt::Key_Right){
       for(int j=0;j<4;j++){
            for(int i=3+j*4;i>=4+j*4;i--){
                if(b[i].number!=0&&b[i].number==b[i+1].number&&b[i+1].isAdded==false&&b[i]==false){
                    b[i+1].number=b[i+1].number+b[i+1].number;
                    b[i].number=0;
                    b[i+1].isAdded=true;
                    b[i].isAdded=false;
                    setboard(b[i+1]);
                    setboard(b[i]);
                    b[i+1].isMoved=true;
                    b[i].isMoved=false;
                    }
                else if(b[i].number!=0&&b[i+1].number==0){
                    b[i+1].number=b[i].number;
                    b[i].number=0;
                    b[i+1].isMoved=true;
                    b[i].isMoved=false;
                    b[i+1].isAdded=b[i].isAdded;
                    b[i].isAdded=false;
                    setboard(b[i+1]);
                    setboard(b[i]);
                }
            }
       }
    }
    else if(event->key() == Qt::Key_Up){
       for(int j=0;j<4;j++){
            for(int i=5+j;i<=13+j;i+=4){
                if(b[i].number!=0&&b[i].number==b[i-4].number&&b[i-4].isAdded==false&&b[i]==false){
                    b[i-4].number=b[i-4].number+b[i-4].number;
                    b[i].number=0;
                    b[i-4].isAdded=true;
                    b[i].isAdded=false;
                    setboard(b[i-4]);
                    setboard(b[i]);
                    b[i-4].isMoved=true;
                    b[i].isMoved=false;
                    }
                else if(b[i].number!=0&&b[i-4].number==0){
                    b[i-4].number=b[i].number;
                    b[i].number=0;
                    b[i-4].isMoved=true;
                    b[i].isMoved=false;
                    b[i-4].isAdded=b[i].isAdded;
                    b[i].isAdded=false;
                    setboard(b[i-4]);
                    setboard(b[i]);
                }
            }
       }
    }
    else if(event->key() == Qt::Key_Down){
       for(int j=0;j<4;j++){
            for(int i=9+j;i>=1+j;i-=4){
                if(b[i].number!=0&&b[i].number==b[i+4].number&&b[i+4].isAdded==false&&b[i]==false){
                    b[i+4].number=b[i+4].number+b[i+4].number;
                    b[i].number=0;
                    b[i+4].isAdded=true;
                    b[i].isAdded=false;
                    setboard(b[i+4]);
                    setboard(b[i]);
                    b[i+4].isMoved=true;
                    b[i].isMoved=false;
                    }
                else if(b[i].number!=0&&b[i+4].number==0){
                    b[i+4].number=b[i].number;
                    b[i].number=0;
                    b[i+4].isMoved=true;
                    b[i].isMoved=false;
                    b[i+4].isAdded=b[i].isAdded;
                    b[i].isAdded=false;
                    setboard(b[i+4]);
                    setboard(b[i]);
                }
            }
       }
    }
}

void game::gamestart(){
    for(int i=0;i<17;i++){
        b[i].position=i;
        b[i].number=0;
        setboard(b[i]);
    }//初始化
    setrandom();
    setrandom();
}
