#include "tracker_viewer.hpp"
#include "ui_tracker_viewer.h"

TrackerViewer::TrackerViewer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TrackerViewer)
{
    ui->setupUi(this);
}

TrackerViewer::~TrackerViewer()
{
    delete ui;
}
