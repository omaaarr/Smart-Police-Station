/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCrime;
    QAction *actionCitoyen;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuCrime;
    QMenu *menuCitoyen;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(619, 375);
        actionCrime = new QAction(MainWindow);
        actionCrime->setObjectName(QStringLiteral("actionCrime"));
        actionCitoyen = new QAction(MainWindow);
        actionCitoyen->setObjectName(QStringLiteral("actionCitoyen"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 619, 21));
        menuCrime = new QMenu(menubar);
        menuCrime->setObjectName(QStringLiteral("menuCrime"));
        menuCitoyen = new QMenu(menubar);
        menuCitoyen->setObjectName(QStringLiteral("menuCitoyen"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCrime->menuAction());
        menubar->addAction(menuCitoyen->menuAction());
        menuCrime->addAction(actionCrime);
        menuCitoyen->addAction(actionCitoyen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Smart Police Station", Q_NULLPTR));
        actionCrime->setText(QApplication::translate("MainWindow", "Crime", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCrime->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCitoyen->setText(QApplication::translate("MainWindow", "Citoyen", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCitoyen->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        menuCrime->setTitle(QApplication::translate("MainWindow", "Crime", Q_NULLPTR));
        menuCitoyen->setTitle(QApplication::translate("MainWindow", "Citoyen", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
