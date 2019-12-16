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

QGridLayout *tvLayout = new QGridLayout();
QWidgetList buttons;

QGridLayout* TvPage::layout(QWidget* window, QRect w){

    QFont font("Arial", 16);

    cat1_label = new QLabel("Superheroes");
    cat2_label = new QLabel("Animals");
    cat3_label = new QLabel("Gameshows");

    for(int i = 0; i < 4; i++) {
        tvLayout->setColumnMinimumWidth(i, w.width() * 0.3);
    }

    for(int i = 0; i < 6; i++) {
        if(i%2 == 1) {
//            tvLayout->setRowMinimumHeight(i, w.width() * 0.5);
        }
        else{
            tvLayout->setRowMinimumHeight(i, w.height() * 0.1);
        }
    }

    tvLayout->addWidget(cat1_label, 0,0,1,2);
    cat1_label->setFont(font);
    //Creates Category 1 Labels
    for ( int i = 0; i < 4; i++ ) {
        auto* thumbnail = new QPushButton("Placeholder");
        thumbnail->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        thumbnail->setMinimumSize(w.width()*0.3,w.height()*0.5);
        tvLayout->addWidget(thumbnail,1,i,1,1);
        thumbnail->setFont(font);
        buttons.append(thumbnail);
    }

    tvLayout->addWidget(cat2_label, 2,0,1,2);
    cat2_label->setFont(font);
    //Creates Category 2 Labels
    for ( int i = 0; i < 4; i++ ) {
        auto* thumbnail = new QPushButton("Placeholder");
        thumbnail->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        thumbnail->setMinimumSize(w.width()*0.3,w.height()*0.5);
        tvLayout->addWidget(thumbnail,3,i,1,1);
        thumbnail->setFont(font);
        buttons.append(thumbnail);
    }

    tvLayout->addWidget(cat3_label, 4,0,1,2);
    cat3_label->setFont(font);
    //Creates Category 3 Labels
    for ( int i = 0; i < 4; i++ ) {
        auto* thumbnail = new QPushButton("Placeholder");
        thumbnail->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        thumbnail->setMinimumSize(w.width()*0.3,w.height()*0.5);
        tvLayout->addWidget(thumbnail,5,i,1,1);
        thumbnail->setFont(font);
        buttons.append(thumbnail);
    }

    return tvLayout;
}

void TvPage::resize(QRect w){

}