#include "myWidget.h"
#include <iostream>

myWidget::myWidget(QWidget * parent , Qt::WFlags f  ): QWidget(parent, f)
{
  setupUi(this);
}

