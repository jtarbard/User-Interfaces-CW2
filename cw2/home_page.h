//
// Created by sc18jt on 04/12/2019.
//

#ifndef CW2_HOME_PAGE_H
#define CW2_HOME_PAGE_H

#include <QtWidgets/QGridLayout>

class HomePage: public QGridLayout{

public:
    HomePage(){};
    QGridLayout* layout(QWidget* window, QRect w);
};

#endif //CW2_HOME_PAGE_H
