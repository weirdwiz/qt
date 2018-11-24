#include "mainwindow.h"

#include <QCoreApplication>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
  // Create the button, make "this" the parent
  m_button = new QPushButton("My Button", this);
  // set size and location of the button
  m_button->setGeometry(QRect(QPoint(100, 100), QSize(200, 50)));

  // Connect button signal to appropriate slot
  connect(m_button, SIGNAL(released()), this, SLOT(handleButton()));
}

void MainWindow::handleButton() {
  QMessageBox msgBox;
  msgBox.setText("Hello World!");
  msgBox.exec();
}