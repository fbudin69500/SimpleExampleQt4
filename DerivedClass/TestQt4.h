#ifndef TestQt4_h
#define TestQt4_h

#include "ui_TestQt4.h"
#include "qcheckbox.h"
#include <QDoubleSpinBox>
#include "qlabel.h"

class TestQt4 :public QMainWindow, public Ui::MainWindow
{
  Q_OBJECT
  public:
    TestQt4(QWidget * parent = 0, Qt::WFlags f = 0 );
  private slots:
   void slotExit();

};

#endif
