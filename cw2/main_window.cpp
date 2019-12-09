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
    tabs = new QTabWidget();
    home = new HomePage();
    tv = new TvPage();
    homeWidget = new QWidget();
    tvWidget = new QWidget();
    movieWidget = new QWidget();
    favouritesWidget = new QWidget();


    //initialise stack members
    homeWidget->setLayout(home->layout(this,this->rect())); //home
    tvWidget->setLayout(tv->layout(this,this->rect())); //tv

    stack->addWidget(tabs);
    tabs->setTabPosition(QTabWidget::West);
    tabs->addTab(homeWidget, QIcon("icons/home.png"),"Home");
    tabs->addTab(tvWidget,QIcon("icons/tv.png"),"TV");
    tabs->addTab(movieWidget, QIcon("icons/movie.png"),"Movies");
    tabs->addTab(favouritesWidget,QIcon("icons/favourites.png"),"Favourites");

    tabsbar = tabs->findChild<QTabBar *>();
    tabsbar->setVisible(false);
    //set default member
    stack->setCurrentWidget(tabs);
    tabs->setCurrentWidget(homeWidget);
    top->addWidget(stack);

    connect(tabs, SIGNAL(currentChanged(int)),this,SLOT(setHome()));
}

void MainWindow::resizeEvent(QResizeEvent *event){
    QWidget::resizeEvent(event);

    switch(stack->currentIndex()){
        case 0:
            home->resize(this->rect());
//        case 1:
//            tv->resize(this->rect());
    }
}

void MainWindow::setHome(){
    if(tabs->currentWidget() == homeWidget) {
        tabs->setCurrentWidget(homeWidget);
        tabsbar->setVisible(false);
    }
}

void MainWindow::setTv(){
    tabs->setCurrentWidget(tvWidget);
    tabsbar->setVisible(true);
}