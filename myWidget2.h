#ifndef myWidget2_h
#define myWidget2_h

#include "ui_widget2.h"

class myWidget2 :public QWidget, public Ui::Form
{
  Q_OBJECT
  public:
    myWidget2(QWidget * parent = 0, Qt::WFlags f = 0 );
};

#endif
