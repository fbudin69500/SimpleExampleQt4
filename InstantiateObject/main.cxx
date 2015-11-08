#include "TestQt4_2.h"
#include <QApplication>


int main( int argc , char** argv )
{
  QApplication app(argc, argv);
  
  TestQt4_2 window;
  window.show();
  
  return app.exec();
  
}
