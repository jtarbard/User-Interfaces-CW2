//
// Created by sc18jt on 05/12/2019.
//

#ifndef CW2_MAIN_WINDOW_H
#define CW2_MAIN_WINDOW_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTabBar>
#include <QtWidgets/QScrollArea>
#include "home_page.h"
#include "tv_page.h"
#include "movies_page.h"
#include "favourites_page.h"
#include "player.h"

class MainWindow: public QWidget {
    Q_OBJECT
    //core
    QStackedWidget* stack;
    QTabWidget* tabs;
    QTabBar* tabsbar;
    QVBoxLayout* top;
    //instances
    HomePage* home;
    TvPage* tv;
    MoviesPage* movies;
    FavouritesPage* favourites;
    Player* player;
    //qwidgets
    QWidget* homeWidget;
    QWidget* tvWidget;
    QWidget* tvScrollWidget;
    QWidget* moviesWidget;
    QWidget* moviesScrollWidget;
    QWidget* favouritesWidget;
    QWidget* favouritesScrollWidget;
    QWidget* playerWidget;
    //scrolls
    QScrollArea* tvScroll;
    QScrollArea* moviesScroll;
    QScrollArea* favouritesScroll;
    //layouts
    QVBoxLayout* tvLayout;
    QVBoxLayout* moviesLayout;
    QVBoxLayout* favouritesLayout;

public:
    MainWindow();

private Q_SLOTS:
    void setHome();
    void setTv();

    void resizeEvent(QResizeEvent *event);

    void setMovie();

    void setFavourites();

    void setPlayer();

    void setStack();
};


#endif //CW2_MAIN_WINDOW_H
