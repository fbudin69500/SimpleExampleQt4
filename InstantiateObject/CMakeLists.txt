CMAKE_MINIMUM_REQUIRED( VERSION 2.6 )
CMAKE_POLICY(VERSION 2.6)
PROJECT(TestQt4_2)

find_package(Qt4 REQUIRED )
include(${QT_USE_FILE})

# Use the include path and library for Qt that is used by VTK.
INCLUDE_DIRECTORIES(
  ${QT_INCLUDE_DIR}
  ${TestQt4_2_BINARY_DIR}
  ${TestQt4_2_SOURCE_DIR}
)

QT4_WRAP_CPP(MOC_FILES TestQt4_2.h)
QT4_WRAP_UI(UI_FILES TestQt4.ui)

set(TestQt4_2_SOURCE main.cxx TestQt4_2.cxx ${MOC_FILES} ${UI_FILES})
add_executable( TestQt4_2 ${TestQt4_2_SOURCE})
target_link_libraries(TestQt4_2 ${QT_LIBRARIES})
