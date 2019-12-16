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

class MainWindow: public QWidget {
    Q_OBJECT
    //core
    QStackedWidget* stack;
    QTabWidget* tabs;
    QTabBar* tabsbar;
    //instances
    HomePage* home;
    TvPage* tv;
    //qwidgets
    QWidget* homeWidget;
    QWidget* tvWidget;
    QWidget* tvScrollWidget;
    QWidget* moviesWidget;
    QWidget* moviesScrollWidget;
    QWidget* favouritesWidget;
    QWidget* favouritesScrollWidget;
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
};


#endif //CW2_MAIN_WINDOW_H
