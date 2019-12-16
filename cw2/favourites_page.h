//
// Created by sc18jt on 16/12/2019.
//

#ifndef CW2_FAVOURITES_PAGE_H
#define CW2_FAVOURITES_PAGE_H


#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

class FavouritesPage : public QGridLayout{

    QLabel* cat1_label;
public:
    FavouritesPage(){};
    QGridLayout* layout(QWidget* window, QRect w);

};


#endif //CW2_FAVOURITES_PAGE_H
