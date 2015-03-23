#ifndef TestQt4_h
#define TestQt4_h

#include "ui_TestQt4.h"
#include "myWidget.h"
#include "myWidget2.h"

class TestQt4 :public QMainWindow, public Ui::MainWindow
{
  Q_OBJECT
  public:
    TestQt4(QWidget * parent = 0, Qt::WFlags f = 0 );
  private slots:
   void slotExit();
   void changeForm(bool);
  private:
   myWidget *myForm ;
   myWidget2 *myForm2 ;
};

#endif
