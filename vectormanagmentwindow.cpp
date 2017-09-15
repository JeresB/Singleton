#include "vectormanagmentwindow.h"
#include "vectorsingelton.h"

VectorManagmentWindow::VectorManagmentWindow(QWidget *parent) :
    QWidget(parent),
    update(new QPushButton("Update")),
    remove(new QPushButton("Remove")),
    add(new QPushButton("Add")),
    liste(new QListWidget()),
    input(new QLineEdit()){

    QHBoxLayout* hLayout = new QHBoxLayout();
    QVBoxLayout* vLayout = new QVBoxLayout();

    vLayout->addWidget(this->liste);
    vLayout->addWidget(this->input);
    hLayout->addWidget(this->add);
    hLayout->addWidget(this->update);
    hLayout->addWidget(this->remove);
    vLayout->addLayout(hLayout);

    this->setLayout(vLayout);

    connect(this->add, SIGNAL(released()), this, SLOT(appendList()));
    connect(this->update, SIGNAL(released()), this, SLOT(display()));
    connect(this->remove, SIGNAL(released()), this, SLOT(removeList()));
}

// SLOTS

void VectorManagmentWindow::appendList(){
    VectorSingelton* vect = VectorSingelton::getInstance();
    vect->push_back(this->input->text().toStdString());
    this->input->clear();

    this->display();
}

void VectorManagmentWindow::display(){
    VectorSingelton* vect = VectorSingelton::getInstance();
    liste->clear();
    for (auto element : *vect)
        liste->addItem(QString::fromStdString(element));
}

void VectorManagmentWindow::removeList(){
    VectorSingelton* vect = VectorSingelton::getInstance();
    if (liste->currentRow() < 1) {}
    else
        vect->erase(vect->begin() + liste->currentRow());
    this->display();
}


VectorManagmentWindow::~VectorManagmentWindow(){
}
