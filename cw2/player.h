//
// Created by sc18jt on 16/12/2019.
//

#ifndef CW2_PLAYER_H
#define CW2_PLAYER_H


#include <QtWidgets/QGridLayout>

class Player: public QGridLayout {
    QGridLayout *playerLayout;
public:
    Player(){};
    QGridLayout* layout(QWidget* window, QRect w);

};


#endif //CW2_PLAYER_H
