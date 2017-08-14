#ifndef OUTPUTWINDOW_H
#define OUTPUTWINDOW_H

#include <QDialog>

namespace Ui {
class outputwindow;
}

class outputwindow : public QDialog
{
    Q_OBJECT

public:
    explicit outputwindow(QWidget *parent = 0);
    ~outputwindow();

private slots:
    void on_closeapp_clicked();

    void on_solveanother_clicked();

private:
    Ui::outputwindow *ui;
};

#endif // OUTPUTWINDOW_H
