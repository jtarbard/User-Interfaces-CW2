//
// Created by sc18jt on 16/12/2019.
//

#ifndef CW2_MOVIES_PAGE_H
#define CW2_MOVIES_PAGE_H


#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

class MoviesPage: public QGridLayout {
    QLabel* cat1_label;
    QLabel* cat2_label;
    QLabel* cat3_label;

    QWidgetList buttons;
public:
    MoviesPage(){};
    QGridLayout * layout(QWidget* window, QRect w);
    void resize(QRect w);
};


#endif //CW2_MOVIES_PAGE_H
