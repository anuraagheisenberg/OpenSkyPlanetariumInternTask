#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_clear_clicked();
    void on_exit_clicked();
    void on_calculate_clicked();
    void on_size_textChanged(const QString &arg1);
    void on_about_clicked();

private:
    Ui::MainWindow *ui;
};
#endif
