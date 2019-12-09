//
// Created by sc18jt on 05/12/2019.
//

#ifndef CW2_MAIN_WINDOW_H
#define CW2_MAIN_WINDOW_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include "home_page.h"
#include "tv_page.h"

class MainWindow: public QWidget {
    Q_OBJECT
    QStackedWidget* stack;
    HomePage* home;
    TvPage* tv;
    QWidget* homeWidget;
    QWidget* tvWidget;
public:
    MainWindow();
    QStackedWidget* returnStack();

private Q_SLOTS:
    void setHome();
    void setTv();
};


#endif //CW2_MAIN_WINDOW_H
