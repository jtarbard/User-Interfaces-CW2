//
// Created by sc18jt on 05/12/2019.
//

#include <QtWidgets/QLayout>
#include "main_window.h"
#include "home_page.h"
#include "tv_page.h"

MainWindow::MainWindow(){
    //setup window attributes
    setWindowTitle("tomeo");
    setMinimumSize(800, 680);
    QVBoxLayout* top = new QVBoxLayout();
    setLayout(top);

    //initialise global variables
    stack = new QStackedWidget();
    home = new HomePage();
    tv = new TvPage();
    homeWidget = new QWidget();
    tvWidget = new QWidget();

    //initialise stack members
    homeWidget->setLayout(home->layout(this,this->rect())); //home
    stack->addWidget(homeWidget);
    tvWidget->setLayout(tv->layout(this,this->rect())); //tv
    stack->addWidget(tvWidget);

    //set default member
    stack->setCurrentWidget(homeWidget);
    top->addWidget(stack);
}

void MainWindow::setHome(){
    stack->setCurrentWidget(homeWidget);
}

void MainWindow::setTv(){
    stack->setCurrentWidget(tvWidget);
}