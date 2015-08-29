#include "tracker_viewer.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TrackerViewer w;
    w.show();

    return a.exec();
}
