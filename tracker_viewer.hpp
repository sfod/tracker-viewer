#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

namespace Ui {
class TrackerViewer;
}

class TrackerViewer : public QMainWindow {
    Q_OBJECT

public:
    explicit TrackerViewer(QWidget *parent = 0);
    ~TrackerViewer();

private:
    Ui::TrackerViewer *ui;
};

#endif // MAINWINDOW_HPP