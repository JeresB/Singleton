#include "vectormanagmentwindow.h"
#include "vectorsingelton.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VectorManagmentWindow w;
    VectorManagmentWindow w2;
    VectorSingelton* ma_liste = VectorSingelton::getInstance();
    ma_liste->push_back("Bonjour");
    ma_liste->push_back("Robert");
    ma_liste->push_back("Bouteille");
    ma_liste->push_back("Jon Snow");
    ma_liste->push_back("Is a Targaryen");
    w.show();
    w2.show();

    return a.exec();
}
