//
// Created by sc18jt on 04/12/2019.
//

#include <QtWidgets/QWidget>
#include <QtWidgets/QVBoxLayout>
#include "home_page.h"
#include "the_player.h"
#include "the_button.h"

QGridLayout* HomePage::layout(QWidget* window, QRect w){

    //layout init and styling
    homeLayout = new QGridLayout();
    window->setStyleSheet("background: #B0E1E2");

    //widgets init
    search_button = new QPushButton();
    search_edit = new QLineEdit();
    movie_button = new QPushButton();
    tv_button = new QPushButton();
    favourites_button = new QPushButton();
    pageButtons[0] = movie_button;
    pageButtons[1] = tv_button;
    pageButtons[2] = favourites_button;

    //widget styling
    movie_button->setStyleSheet("background: #81C471");
    tv_button->setStyleSheet("background: #28AFB0");
    favourites_button->setStyleSheet("background: #F4D35E");
    search_button->setStyleSheet("background: #FDF7E1");
    search_edit->setStyleSheet("background: #FDF7E1; font-size: 24px; color: #EE964B");

    //add widgets to the layout
    homeLayout->addWidget(search_button,0,7,1,2);
    homeLayout->addWidget(search_edit, 0, 0,1,7);
    homeLayout->addWidget(movie_button, 10,0,8,3);
    homeLayout->addWidget(tv_button,10,3,8,3);
    homeLayout->addWidget(favourites_button,10,6,8,3);

    //alter widget attributes
    search_edit->setPlaceholderText("Search");
    search_button->setIcon(QIcon("icons/search.png"));
    movie_button->setIcon(QIcon("icons/movies.png"));
    tv_button->setIcon(QIcon("icons/tv.png"));
    favourites_button->setIcon(QIcon("icons/favourites.png"));

    search_edit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    for(int i = 0; i < 3; i++){
        pageButtons[i]->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    }

    //perform dynamic widget styling
    resize(w);

    //setup button functionality
    connect(tv_button, SIGNAL(clicked()), window, SLOT(setTv()));
    connect(movie_button, SIGNAL(clicked()), window, SLOT(setMovie()));
    connect(favourites_button, SIGNAL(clicked()), window, SLOT(setFavourites()));

    //display widgets
    search_button->show();
    search_edit->show();
    movie_button->show();
    tv_button->show();
    favourites_button->show();

    return homeLayout;
}

void HomePage::resize(QRect w){

    //set margins
    homeLayout->setMargin(w.height()*0.018);
    homeLayout->setVerticalSpacing(w.height()*0.018);
    search_edit->setTextMargins(w.width()*0.05,0,w.width()*0.05,0);

    //alter minimum and maximum sizing
    search_button->setMinimumSize(0, w.height()*0.1);
    search_edit->setMaximumSize(w.width() * 5, w.height() * 0.1);

    //alter icon sizing
    search_button->setIconSize(QSize(w.width()*0.05,w.height()*0.05));
    for(int i = 0; i < 3; i++) {
        //TODO: add constant rect sizes for phone, tablet, large tablet and use those as a reference point
        if(w.width() < 1200){
            pageButtons[i]->setIconSize(QSize(pageButtons[i]->width()*0.4, pageButtons[i]->height()*0.4));
        }
        else{
            pageButtons[i]->setIconSize(QSize(pageButtons[i]->width()*0.3, pageButtons[i]->height()*0.3));
        }

    }
}