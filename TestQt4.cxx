#include "TestQt4.h"
#include <iostream>
TestQt4::TestQt4(QWidget * parent , Qt::WFlags f  ): QMainWindow(parent, f)
{
  setupUi(this);
  connect(this->exitButton, SIGNAL(clicked()), this, SLOT(slotExit()));
  connect(this->slider, SIGNAL(valueChanged(int)), lcd , SLOT(display(int)) );
}

void TestQt4::slotExit()
{
  qApp->exit();
}
