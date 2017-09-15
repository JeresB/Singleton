#ifndef VECTORMANAGMENTWINDOW_H
#define VECTORMANAGMENTWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QListWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>

class VectorManagmentWindow : public QWidget
{
    Q_OBJECT

private:
    QPushButton* update;
    QPushButton* remove;
    QPushButton* add;
    QListWidget* liste;
    QLineEdit* input;

public:
    VectorManagmentWindow(QWidget *parent = 0);
    ~VectorManagmentWindow();

private slots:
    void appendList();
    void display();
    void removeList();
};

#endif // VECTORMANAGMENTWINDOW_H
