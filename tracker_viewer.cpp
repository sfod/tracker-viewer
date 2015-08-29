#include "tracker_viewer.hpp"
#include "ui_tracker_viewer.h"
#include <QDebug>

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

void TrackerViewer::on_requestButton_clicked()
{
    qDebug() << "request sent";
}
