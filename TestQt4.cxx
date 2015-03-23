#include "TestQt4.h"
#include <iostream>
TestQt4::TestQt4(QWidget * parent , Qt::WFlags f  ): QMainWindow(parent, f)
{
  setupUi(this);
  connect(this->exitButton, SIGNAL(clicked()), this, SLOT(slotExit()));
  connect(this->slider, SIGNAL(valueChanged(int)), lcd , SLOT(display(int)) );
  myForm =new  myWidget(tab) ;
  myForm2 =new  myWidget2(tab );
  QObject::connect(this->radioWidget,SIGNAL(clicked(bool)),this,SLOT(changeForm(bool)));
  QObject::connect(this->radioWidget2,SIGNAL(clicked(bool)),this,SLOT(changeForm(bool)));
  this->radioWidget->setChecked(true);
  changeForm(0);
}

void TestQt4::slotExit()
{
  qApp->exit();
}

void TestQt4::changeForm(bool)
{
    if( this->radioWidget->isChecked() )
    {
        myForm2->hide();
        myForm->show();
    }
    else
    {
        myForm->hide();
        myForm2->show();
    }
}
