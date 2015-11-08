#include "TestQt4_2.h"
#include <iostream>
TestQt4_2::TestQt4_2(QWidget * parent , Qt::WFlags f  ): QMainWindow(parent, f)
{
  this->ui = new Ui::MainWindow ;
  this->ui->setupUi(this) ;
  connect(this->ui->exitButton, SIGNAL(clicked()), this, SLOT(slotExit()));
  connect(this->ui->slider, SIGNAL(valueChanged(int)), this->ui->lcd , SLOT(display(int)) );
}

void TestQt4_2::slotExit()
{
  qApp->exit();
}
