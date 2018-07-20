/********************************************************************************
** Form generated from reading UI file 'CreoViewTest.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREOVIEWTEST_H
#define UI_CREOVIEWTEST_H

#include <ActiveQt/QAxWidget>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreoViewTestClass
{
public:
    QAction *actionchushi;
    QAction *actiontuichu;
    QAction *actionmdltree;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QAxWidget *axWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_5;
    QListWidget *listWidget;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_4;
    QListView *listView;
    QDockWidget *dockWidget_5;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_6;
    QListWidget *listWidget_2;
    QDockWidget *dockWidget_6;
    QWidget *dockWidgetContents_6;
    QVBoxLayout *verticalLayout_7;
    QListWidget *listWidget_3;
    QDockWidget *dockWidget_7;
    QWidget *dockWidgetContents_7;
    QVBoxLayout *verticalLayout_8;
    QListWidget *listWidget_4;
    QDockWidget *dockWidget_8;
    QWidget *dockWidgetContents_8;
    QVBoxLayout *verticalLayout_3;
    QAxWidget *axWidget_2;
    QDockWidget *dockWidget_9;
    QWidget *dockWidgetContents_9;
    QVBoxLayout *verticalLayout_9;
    QListWidget *listWidget_5;

    void setupUi(QMainWindow *CreoViewTestClass)
    {
        if (CreoViewTestClass->objectName().isEmpty())
            CreoViewTestClass->setObjectName(QStringLiteral("CreoViewTestClass"));
        CreoViewTestClass->resize(991, 793);
        actionchushi = new QAction(CreoViewTestClass);
        actionchushi->setObjectName(QStringLiteral("actionchushi"));
        actiontuichu = new QAction(CreoViewTestClass);
        actiontuichu->setObjectName(QStringLiteral("actiontuichu"));
        actionmdltree = new QAction(CreoViewTestClass);
        actionmdltree->setObjectName(QStringLiteral("actionmdltree"));
        centralWidget = new QWidget(CreoViewTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        axWidget = new QAxWidget(centralWidget);
        axWidget->setControl(QStringLiteral("{f07443a6-02cf-4215-9413-55ee10d509cc}"));
        axWidget->setObjectName(QStringLiteral("axWidget"));

        verticalLayout->addWidget(axWidget);


        horizontalLayout->addLayout(verticalLayout);

        CreoViewTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CreoViewTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 991, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        CreoViewTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CreoViewTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CreoViewTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CreoViewTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CreoViewTestClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(CreoViewTestClass);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setLayoutDirection(Qt::LeftToRight);
        treeWidget->setFrameShape(QFrame::StyledPanel);
        treeWidget->header()->setVisible(true);

        verticalLayout_2->addWidget(treeWidget);

        dockWidget->setWidget(dockWidgetContents);
        CreoViewTestClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        dockWidget_2 = new QDockWidget(CreoViewTestClass);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidget_2->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(dockWidgetContents_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_5->addWidget(listWidget);

        dockWidget_2->setWidget(dockWidgetContents_2);
        CreoViewTestClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_2);
        dockWidget_4 = new QDockWidget(CreoViewTestClass);
        dockWidget_4->setObjectName(QStringLiteral("dockWidget_4"));
        dockWidget_4->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        listView = new QListView(dockWidgetContents_4);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_4->addWidget(listView);

        dockWidget_4->setWidget(dockWidgetContents_4);
        CreoViewTestClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_4);
        dockWidget_5 = new QDockWidget(CreoViewTestClass);
        dockWidget_5->setObjectName(QStringLiteral("dockWidget_5"));
        dockWidget_5->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        listWidget_2 = new QListWidget(dockWidgetContents_5);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        verticalLayout_6->addWidget(listWidget_2);

        dockWidget_5->setWidget(dockWidgetContents_5);
        CreoViewTestClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_5);
        dockWidget_6 = new QDockWidget(CreoViewTestClass);
        dockWidget_6->setObjectName(QStringLiteral("dockWidget_6"));
        dockWidget_6->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
        verticalLayout_7 = new QVBoxLayout(dockWidgetContents_6);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        listWidget_3 = new QListWidget(dockWidgetContents_6);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));

        verticalLayout_7->addWidget(listWidget_3);

        dockWidget_6->setWidget(dockWidgetContents_6);
        CreoViewTestClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_6);
        dockWidget_7 = new QDockWidget(CreoViewTestClass);
        dockWidget_7->setObjectName(QStringLiteral("dockWidget_7"));
        dockWidget_7->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QStringLiteral("dockWidgetContents_7"));
        verticalLayout_8 = new QVBoxLayout(dockWidgetContents_7);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        listWidget_4 = new QListWidget(dockWidgetContents_7);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));

        verticalLayout_8->addWidget(listWidget_4);

        dockWidget_7->setWidget(dockWidgetContents_7);
        CreoViewTestClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_7);
        dockWidget_8 = new QDockWidget(CreoViewTestClass);
        dockWidget_8->setObjectName(QStringLiteral("dockWidget_8"));
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QStringLiteral("dockWidgetContents_8"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_8);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        axWidget_2 = new QAxWidget(dockWidgetContents_8);
        axWidget_2->setControl(QStringLiteral("{f07443a6-02cf-4215-9413-55ee10d509cc}"));
        axWidget_2->setObjectName(QStringLiteral("axWidget_2"));

        verticalLayout_3->addWidget(axWidget_2);

        dockWidget_8->setWidget(dockWidgetContents_8);
        CreoViewTestClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_8);
        dockWidget_9 = new QDockWidget(CreoViewTestClass);
        dockWidget_9->setObjectName(QStringLiteral("dockWidget_9"));
        dockWidget_9->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_9 = new QWidget();
        dockWidgetContents_9->setObjectName(QStringLiteral("dockWidgetContents_9"));
        verticalLayout_9 = new QVBoxLayout(dockWidgetContents_9);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        listWidget_5 = new QListWidget(dockWidgetContents_9);
        listWidget_5->setObjectName(QStringLiteral("listWidget_5"));

        verticalLayout_9->addWidget(listWidget_5);

        dockWidget_9->setWidget(dockWidgetContents_9);
        CreoViewTestClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_9);

        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu->menuAction());
        menu->addAction(actionmdltree);
        menu_2->addAction(actionchushi);
        menu_2->addSeparator();
        menu_2->addAction(actiontuichu);

        retranslateUi(CreoViewTestClass);

        QMetaObject::connectSlotsByName(CreoViewTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *CreoViewTestClass)
    {
        CreoViewTestClass->setWindowTitle(QApplication::translate("CreoViewTestClass", "\350\243\205\351\205\215\346\250\241\345\236\213\347\212\266\346\200\201\347\233\221\346\216\247\347\263\273\347\273\237", nullptr));
        actionchushi->setText(QApplication::translate("CreoViewTestClass", "\345\210\235\345\247\213\345\214\226", nullptr));
        actiontuichu->setText(QApplication::translate("CreoViewTestClass", "\351\200\200\345\207\272", nullptr));
        actionmdltree->setText(QApplication::translate("CreoViewTestClass", "mdltree", nullptr));
        axWidget->setProperty("renderatstartup", QVariant(QApplication::translate("CreoViewTestClass", "true", nullptr)));
        axWidget->setProperty("sourceUrl", QVariant(QString()));
        axWidget->setProperty("thumbnailView", QVariant(QApplication::translate("CreoViewTestClass", "true", nullptr)));
        menu->setTitle(QApplication::translate("CreoViewTestClass", "\350\247\206\345\233\276", nullptr));
        menu_2->setTitle(QApplication::translate("CreoViewTestClass", "\346\226\207\344\273\266", nullptr));
        dockWidget->setWindowTitle(QApplication::translate("CreoViewTestClass", "\346\250\241\345\236\213\346\240\221", nullptr));
        dockWidget_2->setWindowTitle(QApplication::translate("CreoViewTestClass", "\350\276\205\345\212\251\346\235\220\346\226\231\346\270\205\345\215\225", nullptr));
        dockWidget_4->setWindowTitle(QApplication::translate("CreoViewTestClass", "\344\272\247\345\223\201\344\277\241\346\201\257", nullptr));
        dockWidget_5->setWindowTitle(QApplication::translate("CreoViewTestClass", "\345\267\245\350\243\205\345\267\245\345\205\267\346\270\205\345\215\225", nullptr));
        dockWidget_6->setWindowTitle(QApplication::translate("CreoViewTestClass", "\346\240\207\345\207\206\344\273\266\351\205\215\345\245\227\346\230\216\347\273\206", nullptr));
        dockWidget_7->setWindowTitle(QApplication::translate("CreoViewTestClass", "\345\267\245\345\272\217\345\267\245\346\255\245", nullptr));
        dockWidget_8->setWindowTitle(QApplication::translate("CreoViewTestClass", "\345\255\220\346\250\241\345\236\213", nullptr));
        axWidget_2->setProperty("renderatstartup", QVariant(QApplication::translate("CreoViewTestClass", "true", nullptr)));
        axWidget_2->setProperty("sourceUrl", QVariant(QString()));
        axWidget_2->setProperty("thumbnailView", QVariant(QApplication::translate("CreoViewTestClass", "true", nullptr)));
        dockWidget_9->setWindowTitle(QApplication::translate("CreoViewTestClass", "\344\272\272\345\221\230\345\234\272\345\234\260\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreoViewTestClass: public Ui_CreoViewTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREOVIEWTEST_H
