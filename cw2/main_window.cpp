//
// Created by sc18jt on 05/12/2019.
//

#include <QtWidgets/QLayout>
#include <QtWidgets/QScrollArea>
#include "main_window.h"
#include "home_page.h"
#include "tv_page.h"

MainWindow::MainWindow(){
    //setup window attributes
    setWindowTitle("tomeo");
    setMinimumSize(800, 680);
    QVBoxLayout* top = new QVBoxLayout();
    setLayout(top);
    top->setMargin(0);

    //initialise global variables
    stack = new QStackedWidget();
    tabs = new QTabWidget();
    home = new HomePage();
    tv = new TvPage();
    homeWidget = new QWidget();
    tvWidget = new QWidget();
    movieWidget = new QWidget();
    favouritesWidget = new QWidget();

    tabs->setStyleSheet("margin: 0; border: 0; ");

    //initialise stack members
    homeWidget->setLayout(home->layout(this,this->rect())); //home
    tvWidget->setLayout(tv->layout(this,this->rect())); //tv

    //TODO: rename variables and maybe move code
    QScrollArea* tvScroll = new QScrollArea();
    tvScroll->setWidget(tvWidget);
    QWidget* temp = new QWidget();
    QVBoxLayout* bltemp = new QVBoxLayout();
    bltemp->addWidget(tvScroll);
    temp->setLayout(bltemp);

    stack->addWidget(tabs);
    tabs->setTabPosition(QTabWidget::West);
    tabs->addTab(homeWidget, QIcon("icons/home.png"),"Home");
    tabs->addTab(temp,QIcon("icons/tv.png"),"TV");
    tabs->addTab(movieWidget, QIcon("icons/movies.png"),"Movies");
    tabs->addTab(favouritesWidget,QIcon("icons/favourites.png"),"Favourites");

    tabsbar = tabs->findChild<QTabBar *>();
    tabsbar->setVisible(false);
    tabsbar->setIconSize(QSize(this->width()*0.05,this->height()*0.05));

    tabs->setStyleSheet("QTabBar::tab { min-width: 100px; max-width: 150px; background-color: #B0E1E2;} QTabBar::tab:selected{background-color: #28AFB0;}");

    //set default member
    stack->setCurrentWidget(tabs);
    tabs->setCurrentWidget(homeWidget);
    top->addWidget(stack);

    connect(tabs, SIGNAL(currentChanged(int)),this,SLOT(setHome()));
}

void MainWindow::resizeEvent(QResizeEvent *event){
    QWidget::resizeEvent(event);
    home->resize(this->rect());
}

void MainWindow::setHome(){
    if(tabs->currentWidget() == homeWidget) {
        tabs->setCurrentWidget(homeWidget);
        tabsbar->setVisible(false);
    }
}

void MainWindow::setTv(){
    tabs->setCurrentWidget(tvWidget);
    if(!tabsbar->isVisible()){
        tabsbar->setVisible(true);
    }
}

void MainWindow::setMovie(){
    tabs->setCurrentWidget(movieWidget);
    if(!tabsbar->isVisible()){
        tabsbar->setVisible(true);
    }
}

void MainWindow::setFavourites(){
    tabs->setCurrentWidget(favouritesWidget);
    if(!tabsbar->isVisible()){
        tabsbar->setVisible(true);
    }
}