//
// Created by sc18jt on 08/12/2019.
//

#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "vector"
#include "tv_page.h"

QLabel* cat1_label;
QLabel* cat2_label;
QLabel* cat3_label;

QGridLayout* TvPage::layout(QWidget* window, QRect w){

    QGridLayout *tvLayout = new QGridLayout();
    QFont font("Arial", 16);

    cat1_label = new QLabel("Superheroes");
    cat2_label = new QLabel("Animals");
    cat3_label = new QLabel("Gameshows");

    tvLayout->addWidget(cat1_label, 0,0,1,2);
    cat1_label->setFont(font);
    //Creates Category 1 Labels
    for ( int i = 0; i < 4; i++ ) {
        auto* thumbnail = new QPushButton("Placeholder");
        thumbnail->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        tvLayout->setColumnMinimumWidth(0,w.width()*0.1);
        tvLayout->addWidget(thumbnail,1,i,2,1);
        thumbnail->setFont(font);
    }

    tvLayout->addWidget(cat2_label, 3,0,1,2);
    cat2_label->setFont(font);
    //Creates Category 2 Labels
    for ( int i = 0; i < 4; i++ ) {
        auto* thumbnail = new QPushButton("Placeholder");
        thumbnail->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        tvLayout->addWidget(thumbnail,4,i,2,1);
        thumbnail->setFont(font);
    }

    tvLayout->addWidget(cat3_label, 6,0,1,2);
    cat3_label->setFont(font);
    //Creates Category 3 Labels
    for ( int i = 0; i < 4; i++ ) {
        auto* thumbnail = new QPushButton("Placeholder");
        thumbnail->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        tvLayout->addWidget(thumbnail,7,i,2,1);
        thumbnail->setFont(font);
    }




    return tvLayout;
}