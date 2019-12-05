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

QVBoxLayout* HomePage::layout(QRect w){

    QVBoxLayout *home = new QVBoxLayout();

    QGridLayout* top = new QGridLayout();
    QGridLayout* bottom = new QGridLayout();
    home->addLayout(top);
    home->addLayout(bottom);

    home_label = new QLabel("Home");
    search_edit = new QLineEdit();
    movie_button = new QPushButton("Movies");
    tv_button = new QPushButton("TV Series");
    favourites_button = new QPushButton("Favourites");

    //add widgets to the layout
    top->addWidget(home_label, 0,0);
    top->addWidget(search_edit, 0, 1);
    bottom->addWidget(movie_button, 0,0);
    bottom->addWidget(tv_button,0,1);
    bottom->addWidget(favourites_button,0,2);

    home_label->setMinimumSize(w.width() * 0.2, w.height() * 0.1);
    search_edit->setMinimumSize(w.width() * 0.8, w.height() * 0.1);
    movie_button->setMinimumSize(w.width() * 0.3, w.height() * 0.8);
    tv_button->setMinimumSize(w.width() * 0.3, w.height() * 0.8);
    favourites_button->setMinimumSize(w.width() * 0.3, w.height() * 0.8);

    home_label->show();
    search_edit->show();
    movie_button->show();
    tv_button->show();
    favourites_button->show();

    return home;
}