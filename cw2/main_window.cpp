//
// Created by sc18jt on 05/12/2019.
//

#include <QtWidgets/QLayout>
#include "main_window.h"
#include "home_page.h"
#include "tv_page.h"
#include "movies_page.h"

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
    movies = new MoviesPage();
    favourites = new FavouritesPage();
    homeWidget = new QWidget();
    tvWidget = new QWidget();
    moviesWidget = new QWidget();
    favouritesWidget = new QWidget();

    tabs->setStyleSheet("margin: 0; border: 0; ");

    //initialise stack members
    homeWidget->setLayout(home->layout(this,this->rect())); //home
    tvWidget->setLayout(tv->layout(this,this->rect())); //tv
    moviesWidget->setLayout(movies->layout(this,this->rect())); //movies
    favouritesWidget->setLayout(favourites->layout(this,this->rect())); //favourites

    //declare tv vars
    tvScroll = new QScrollArea();
    tvScrollWidget = new QWidget();
    tvLayout = new QVBoxLayout();
    tvScroll->setWidgetResizable(true);
    //initialise tv vars
    tvScroll->setWidget(tvWidget);
    tvLayout->addWidget(tvScroll);
    tvScrollWidget->setLayout(tvLayout);

    //declare movies vars
    moviesScroll = new QScrollArea();
    moviesScrollWidget = new QWidget();
    moviesLayout = new QVBoxLayout();
    moviesScroll->setWidgetResizable(true);
    //initialise movies vars
    moviesScroll->setWidget(moviesWidget);
    moviesLayout->addWidget(moviesScroll);
    moviesScrollWidget->setLayout(moviesLayout);

    //declare favourites vars
    favouritesScroll = new QScrollArea();
    favouritesScrollWidget = new QWidget();
    favouritesLayout = new QVBoxLayout();
    favouritesScroll->setWidgetResizable(true);
    //initialise favourites vars
    favouritesScroll->setWidget(favouritesWidget);
    favouritesLayout->addWidget(favouritesScroll);
    favouritesScrollWidget->setLayout(favouritesLayout);

    stack->addWidget(tabs);
    tabs->setTabPosition(QTabWidget::West);
    tabs->addTab(homeWidget, QIcon("icons/home.png"),"Home");
    tabs->addTab(tvScrollWidget,QIcon("icons/tv.png"),"TV");
    tabs->addTab(moviesScrollWidget, QIcon("icons/movies.png"),"Movies");
    tabs->addTab(favouritesScrollWidget,QIcon("icons/favourites.png"),"Favourites");

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
    tv->resize(this->rect());
}

void MainWindow::setHome(){
    if(tabs->currentWidget() == homeWidget) {
        tabs->setCurrentWidget(homeWidget);
        tabsbar->setVisible(false);
    }
}

void MainWindow::setTv(){
    tabs->setCurrentWidget(tvScrollWidget);
    if(!tabsbar->isVisible()){
        tabsbar->setVisible(true);
    }
}

void MainWindow::setMovie(){
    tabs->setCurrentWidget(moviesScrollWidget);
    if(!tabsbar->isVisible()){
        tabsbar->setVisible(true);
    }
}

void MainWindow::setFavourites(){
    tabs->setCurrentWidget(favouritesScrollWidget);
    if(!tabsbar->isVisible()){
        tabsbar->setVisible(true);
    }
}