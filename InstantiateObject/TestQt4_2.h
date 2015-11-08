#ifndef TestQt4_2_h
#define TestQt4_2_h

#include "ui_TestQt4.h"

class TestQt4_2 :public QMainWindow
{
  Q_OBJECT
  public:
    TestQt4_2(QWidget * parent = 0, Qt::WFlags f = 0 );
  private slots:
   void slotExit();
  private:
   Ui::MainWindow *ui ;
};

#endif
