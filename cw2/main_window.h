//
// Created by sc18jt on 05/12/2019.
//

#ifndef CW2_MAIN_WINDOW_H
#define CW2_MAIN_WINDOW_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTabBar>
#include "home_page.h"
#include "tv_page.h"

class MainWindow: public QWidget {
    Q_OBJECT
    QStackedWidget* stack;
    QTabWidget* tabs;
    QTabBar* tabsbar;
    HomePage* home;
    TvPage* tv;
    QWidget* homeWidget;
    QWidget* tvWidget;
    QWidget* movieWidget;
    QWidget* favouritesWidget;

public:
    MainWindow();

private Q_SLOTS:
    void setHome();
    void setTv();

    void resizeEvent(QResizeEvent *event);
};


#endif //CW2_MAIN_WINDOW_H
