#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>

namespace Ui {
class TrackerViewer;
}

class TrackerViewer : public QMainWindow {
    Q_OBJECT

public:
    explicit TrackerViewer(QWidget *parent = 0);
    ~TrackerViewer();

private slots:
    void on_urlLineEdit_textChanged(const QString &url);
    void on_requestButton_clicked();
    void http_ready();
    void http_finished();

private:
    Ui::TrackerViewer *ui_;
    QString url_;
    QNetworkAccessManager nam_;
    QNetworkReply *reply_;
};

#endif // MAINWINDOW_HPP
