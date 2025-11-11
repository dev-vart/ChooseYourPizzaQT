#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qlabel.h>

#include <QKeyEvent>
#include <QLabel>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

   public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

   private slots:
    void on_PizzaChooseAllPushButton_clicked();
    void on_PizzaUnChooseAllPushButton_clicked();

   private:
    Ui::MainWindow *ui;
    QLabel *CheckSummaryLabel;
    float discount;
    bool hasDiscount;
    void keyPressEvent(QKeyEvent *event);
    void showSummary();
    void showPromocode();
};
#endif  // MAINWINDOW_H
