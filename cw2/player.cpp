//
// Created by sc18jt on 16/12/2019.
//

#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "player.h"

QGridLayout* Player::layout(QWidget *window, QRect w){

    playerLayout = new QGridLayout();
    QLabel* p = new QLabel("Loading...");
    p->setAlignment(Qt::AlignCenter);
    QPushButton* exit = new QPushButton("x");
    playerLayout->addWidget(exit, 0, 4, 1, 1);
    playerLayout->addWidget(p, 1, 0, 4, 5);

    connect(exit, SIGNAL(clicked()), window, SLOT(setStack()));

    return playerLayout;
}