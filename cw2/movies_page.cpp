//
// Created by sc18jt on 16/12/2019.
//

#include "movies_page.h"

#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "vector"

QGridLayout *movieLayout = new QGridLayout();


QGridLayout *layout(QWidget *window, QRect w);

void resize(QRect w);

QGridLayout* MoviesPage::layout(QWidget* window, QRect w){

    QFont font("Arial", 16);

    cat1_label = new QLabel("Disney");
    cat2_label = new QLabel("Dreamworks");
    cat3_label = new QLabel("Studio Ghibli");

    for(int i = 0; i < 4; i++) {
        movieLayout->setColumnMinimumWidth(i, w.width() * 0.3);
    }

    for(int i = 0; i < 6; i++) {
        if(i%2 == 1) {
//            movieLayout->setRowMinimumHeight(i, w.width() * 0.5);
        }
        else{
            movieLayout->setRowMinimumHeight(i, w.height() * 0.1);
        }
    }

    movieLayout->addWidget(cat1_label, 0,0,1,2);
    cat1_label->setFont(font);
    //Creates Category 1 Labels
    for ( int i = 0; i < 4; i++ ) {
        auto* thumbnail = new QPushButton("Placeholder");
        thumbnail->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        thumbnail->setMinimumSize(w.width()*0.3,w.height()*0.5);
        movieLayout->addWidget(thumbnail,1,i,1,1);
        thumbnail->setFont(font);
        buttons.append(thumbnail);
    }

    movieLayout->addWidget(cat2_label, 2,0,1,2);
    cat2_label->setFont(font);
    //Creates Category 2 Labels
    for ( int i = 0; i < 4; i++ ) {
        auto* thumbnail = new QPushButton("Placeholder");
        thumbnail->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        thumbnail->setMinimumSize(w.width()*0.3,w.height()*0.5);
        movieLayout->addWidget(thumbnail,3,i,1,1);
        thumbnail->setFont(font);
        buttons.append(thumbnail);
    }

    movieLayout->addWidget(cat3_label, 4,0,1,2);
    cat3_label->setFont(font);
    //Creates Category 3 Labels
    for ( int i = 0; i < 4; i++ ) {
        auto* thumbnail = new QPushButton("Placeholder");
        thumbnail->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        thumbnail->setMinimumSize(w.width()*0.3,w.height()*0.5);
        movieLayout->addWidget(thumbnail,5,i,1,1);
        thumbnail->setFont(font);
        buttons.append(thumbnail);
    }

    return movieLayout;
}

void MoviesPage::resize(QRect w){

}