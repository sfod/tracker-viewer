#include "tracker_viewer.hpp"
#include "ui_tracker_viewer.h"
#include <QDebug>

TrackerViewer::TrackerViewer(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::TrackerViewer), url_()
{
    ui_->setupUi(this);
}

TrackerViewer::~TrackerViewer()
{
    delete ui_;
}

void TrackerViewer::on_urlLineEdit_textChanged(const QString &url)
{
    url_ = url;
}

void TrackerViewer::on_requestButton_clicked()
{
    qDebug() << "requested URL" << url_;
}
