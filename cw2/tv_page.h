//
// Created by sc18jt on 08/12/2019.
//

#ifndef CW2_TV_PAGE_H
#define CW2_TV_PAGE_H

#include <QtWidgets/QGridLayout>

class TvPage: public QGridLayout {

public:
    TvPage(){};
    QGridLayout * layout(QWidget* window, QRect w);
    void resize(QRect w);
};


#endif //CW2_TV_PAGE_H
