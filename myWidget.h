#ifndef myWidget_h
#define myWidget_h

#include "ui_widget.h"

class myWidget :public QWidget, public Ui::myWidget
{
  Q_OBJECT
  public:
    myWidget(QWidget * parent = 0, Qt::WFlags f = 0 );
};

#endif
