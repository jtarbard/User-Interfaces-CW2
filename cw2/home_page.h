//
// Created by sc18jt on 04/12/2019.
//

#ifndef CW2_HOME_PAGE_H
#define CW2_HOME_PAGE_H

#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

class HomePage: public QGridLayout{

    QGridLayout* homeLayout;
    QLineEdit* search_edit;
    QPushButton* search_button;
    QPushButton* movie_button;
    QPushButton* tv_button;
    QPushButton* favourites_button;
    QPushButton* pageButtons[3];

public:
    HomePage(){};
    QGridLayout* layout(QWidget* window, QRect w);
    void resize(QRect w);
};

#endif //CW2_HOME_PAGE_H
