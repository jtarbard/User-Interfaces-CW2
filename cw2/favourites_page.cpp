//
// Created by sc18jt on 16/12/2019.
//

#include <QtWidgets/QPushButton>
#include "favourites_page.h";

QGridLayout *favouritesLayout = new QGridLayout();

QGridLayout* FavouritesPage::layout(QWidget* window, QRect w) {

    QFont font("Arial", 16);
    cat1_label = new QLabel("Favourites");

    favouritesLayout->addWidget(cat1_label, 0,0,1,2);
    cat1_label->setFont(font);
    //Creates Category 1 Labels
    for ( int i = 0; i < 4; i++ ) {
        auto* thumbnail = new QPushButton("Placeholder");
        thumbnail->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        thumbnail->setMinimumSize(w.width()*0.4,w.height()*0.5);
        favouritesLayout->addWidget(thumbnail,1,i,1,1);
        thumbnail->setFont(font);
    }

    return favouritesLayout;
}

