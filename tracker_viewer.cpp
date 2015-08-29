#include "tracker_viewer.hpp"
#include "ui_tracker_viewer.h"
#include <QDebug>
#include <QtNetwork>

TrackerViewer::TrackerViewer(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::TrackerViewer), url_(), nam_(), reply_()
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
    reply_ = nam_.get(QNetworkRequest(url_));
    connect(reply_, SIGNAL(readyRead()), this, SLOT(http_ready()));
    connect(reply_, SIGNAL(finished()), this, SLOT(http_finished()));
}

void TrackerViewer::http_ready()
{
    qDebug() << "ready to read";
    qDebug() << reply_->readAll();
}

void TrackerViewer::http_finished()
{
    reply_->deleteLater();
    reply_ = NULL;
}
