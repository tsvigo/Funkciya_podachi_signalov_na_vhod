#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Dialog w;
  w.show();
  return a.exec();
}
// Тут просто считать данные файла с изображения в первые 100 нейронов то есть в
// текст. поле первые 100 строк из файла out.txt а ещё 101 нейрон (следующую 101
// строку) из
// /home/viktor/my_projects_qt_2/build-zapolnenie_nejronov_sluchajnymi_nachalnymi_zaryadami_4-Desktop_Qt_5_12_12_GCC_64bit-Debug/neyroni.txt
