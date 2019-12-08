//
// Created by sc18jt on 04/12/2019.
//

#include <QtWidgets/QWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include "home_page.h"
#include "the_player.h"
#include "the_button.h"

QLabel* home_label;
QLineEdit* search_edit;
QPushButton* movie_button;
QPushButton* tv_button;
QPushButton* favourites_button;
QGridLayout *homeLayout;

QGridLayout* HomePage::layout(QWidget* window, QRect w){

    homeLayout = new QGridLayout();
    QFont font("Arial", 16);

    home_label = new QLabel("Home");
    search_edit = new QLineEdit();
    movie_button = new QPushButton("Movies");
    tv_button = new QPushButton("TV Series");
    favourites_button = new QPushButton("Favourites");

    //add widgets to the layout

    homeLayout->addWidget(home_label, 0,0,1,2);
    homeLayout->addWidget(search_edit, 0, 2,1,5);
    homeLayout->setRowMinimumHeight(0,w.width()*0.1);
    homeLayout->addWidget(movie_button, 10,0,8,3);
    homeLayout->addWidget(tv_button,10,3,8,3);
    homeLayout->addWidget(favourites_button,10,6,8,3);

    search_edit->setMaximumSize(w.width() * 5, w.height() * 0.1);
    home_label->setAlignment(Qt::AlignCenter);
    search_edit->setPlaceholderText("Search");
    search_edit->setTextMargins(w.width()*0.05,0,w.width()*0.05,0);
    search_edit->setFont(font);

    home_label->setFont(font);
    movie_button->setFont(font);
    tv_button->setFont(font);
    favourites_button->setFont(font);

    search_edit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    movie_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    tv_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    favourites_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    connect(tv_button, SIGNAL(clicked()), window, SLOT(setTv()));

    home_label->show();
    search_edit->show();
    movie_button->show();
    tv_button->show();
    favourites_button->show();

    return homeLayout;
}