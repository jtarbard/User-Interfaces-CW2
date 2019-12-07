//
// Created by sc18jt on 04/12/2019.
//

#include <QtWidgets/QWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
//#include "home_page.h"
#include "the_player.h"
#include "the_button.h"
#include "main_window.h"
#include "home_page.h"

QLabel* home_label;
QLineEdit* search_edit;
QPushButton* movie_button;
QPushButton* tv_button;
QPushButton* favourites_button;

QGridLayout* HomePage::layout(QRect w){

    QGridLayout *home = new QGridLayout();
    QFont font("Arial", 16);

    home_label = new QLabel("Home");
    search_edit = new QLineEdit();
    movie_button = new QPushButton("Movies");
    tv_button = new QPushButton("TV Series");
    favourites_button = new QPushButton("Favourites");

    //add widgets to the layout

    home->addWidget(home_label, 0,0,1,2);
    home->addWidget(search_edit, 0, 2,1,5);
    home->setRowMinimumHeight(0,w.width()*0.1);
    home->addWidget(movie_button, 10,0,8,3);
    home->addWidget(tv_button,10,3,8,3);
    home->addWidget(favourites_button,10,6,8,3);

    search_edit->setMaximumSize(w.width() * 5, w.height() * 0.1);

    home_label->setFont(font);
    movie_button->setFont(font);
    tv_button->setFont(font);
    favourites_button->setFont(font);

    search_edit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    movie_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    tv_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    favourites_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    home_label->show();
    search_edit->show();
    movie_button->show();
    tv_button->show();
    favourites_button->show();

    return home;
}