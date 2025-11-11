/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *GroupBoxPizzaSize;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *PizzaSize25Label;
    QLabel *PizzaSize30Label;
    QLabel *PizzaSize35Label;
    QSlider *PizzaSizeSlider;
    QGroupBox *GroupBoxPizzaDough;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *PizzaDoughTradRadioButton;
    QRadioButton *PizzaDoughThinRadioButton;
    QGroupBox *GroupBoxPizzaIngredients;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *PizzaIngredientsCheesesLabel;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *PizzaMozzarellaCheckBox;
    QCheckBox *PizzaCheddarCheckBox;
    QCheckBox *PizzaParmesanCheckBox;
    QCheckBox *PizzaGorgonzolaCheckBox;
    QCheckBox *PizzaBrinzaCheckBox;
    QCheckBox *PizzaCheeseSideCheckBox;
    QVBoxLayout *verticalLayout_7;
    QLabel *PizzaIngredientsMeatLabel;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *PizzaChickenCheckBox;
    QCheckBox *PizzaPepperoniCheckBox;
    QCheckBox *PizzaBaconCheckBox;
    QCheckBox *PizzaHamCheckBox;
    QCheckBox *PizzaChorizoCheckBox;
    QCheckBox *PizzaMeatballsCheckBox;
    QVBoxLayout *verticalLayout_8;
    QLabel *PizzaIngredientsVegiesLabel;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *PizzaJalapenoCheckBox;
    QCheckBox *PizzaChampignogsCheckBox;
    QCheckBox *PizzaCucumbersCheckBox;
    QCheckBox *PizzaRedOnionCheckBox;
    QCheckBox *PizzaSweerPepperCheckBox;
    QCheckBox *PizzaTomatoesCheckBox;
    QVBoxLayout *verticalLayout_9;
    QLabel *PizzaIngredientsFruitsLabel;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *PizzaPineappleCheckBox;
    QCheckBox *PizzaPearCheckBox;
    QCheckBox *PizzaMandarinCheckBox;
    QCheckBox *PizzaBananasCheckBox;
    QCheckBox *PizzaAppleCheckBox;
    QCheckBox *PizzaKiwiCheckBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *PizzaChooseAllPushButton;
    QPushButton *PizzaUnChooseAllPushButton;
    QLabel *label;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_12;
    QLabel *PizzaPromoLabel;
    QLineEdit *PizzaPromocode;
    QLabel *PromoFeedback;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QLabel *PizzaHintPromoLabel1;
    QLabel *CheckSumm;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(643, 629);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        GroupBoxPizzaSize = new QGroupBox(centralwidget);
        GroupBoxPizzaSize->setObjectName("GroupBoxPizzaSize");
        GroupBoxPizzaSize->setGeometry(QRect(10, 20, 301, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        GroupBoxPizzaSize->setFont(font);
        GroupBoxPizzaSize->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(GroupBoxPizzaSize);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 40, 261, 51));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        PizzaSize25Label = new QLabel(layoutWidget);
        PizzaSize25Label->setObjectName("PizzaSize25Label");
        PizzaSize25Label->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(PizzaSize25Label);

        PizzaSize30Label = new QLabel(layoutWidget);
        PizzaSize30Label->setObjectName("PizzaSize30Label");
        PizzaSize30Label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(PizzaSize30Label);

        PizzaSize35Label = new QLabel(layoutWidget);
        PizzaSize35Label->setObjectName("PizzaSize35Label");
        PizzaSize35Label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(PizzaSize35Label);


        verticalLayout->addLayout(horizontalLayout);

        PizzaSizeSlider = new QSlider(layoutWidget);
        PizzaSizeSlider->setObjectName("PizzaSizeSlider");
        PizzaSizeSlider->setMinimum(1);
        PizzaSizeSlider->setMaximum(3);
        PizzaSizeSlider->setSingleStep(1);
        PizzaSizeSlider->setPageStep(1);
        PizzaSizeSlider->setSliderPosition(2);
        PizzaSizeSlider->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout->addWidget(PizzaSizeSlider);

        GroupBoxPizzaDough = new QGroupBox(centralwidget);
        GroupBoxPizzaDough->setObjectName("GroupBoxPizzaDough");
        GroupBoxPizzaDough->setGeometry(QRect(330, 20, 301, 101));
        GroupBoxPizzaDough->setFont(font);
        GroupBoxPizzaDough->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget1 = new QWidget(GroupBoxPizzaDough);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 30, 361, 61));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        PizzaDoughTradRadioButton = new QRadioButton(layoutWidget1);
        PizzaDoughTradRadioButton->setObjectName("PizzaDoughTradRadioButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PizzaDoughTradRadioButton->sizePolicy().hasHeightForWidth());
        PizzaDoughTradRadioButton->setSizePolicy(sizePolicy);
        PizzaDoughTradRadioButton->setChecked(true);

        horizontalLayout_7->addWidget(PizzaDoughTradRadioButton);

        PizzaDoughThinRadioButton = new QRadioButton(layoutWidget1);
        PizzaDoughThinRadioButton->setObjectName("PizzaDoughThinRadioButton");
        PizzaDoughThinRadioButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        horizontalLayout_7->addWidget(PizzaDoughThinRadioButton);

        GroupBoxPizzaIngredients = new QGroupBox(centralwidget);
        GroupBoxPizzaIngredients->setObjectName("GroupBoxPizzaIngredients");
        GroupBoxPizzaIngredients->setGeometry(QRect(10, 140, 621, 301));
        GroupBoxPizzaIngredients->setFont(font);
        GroupBoxPizzaIngredients->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget2 = new QWidget(GroupBoxPizzaIngredients);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 40, 601, 210));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        PizzaIngredientsCheesesLabel = new QLabel(layoutWidget2);
        PizzaIngredientsCheesesLabel->setObjectName("PizzaIngredientsCheesesLabel");
        PizzaIngredientsCheesesLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_6->addWidget(PizzaIngredientsCheesesLabel);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        PizzaMozzarellaCheckBox = new QCheckBox(layoutWidget2);
        PizzaMozzarellaCheckBox->setObjectName("PizzaMozzarellaCheckBox");
        PizzaMozzarellaCheckBox->setEnabled(true);
        PizzaMozzarellaCheckBox->setChecked(true);

        verticalLayout_3->addWidget(PizzaMozzarellaCheckBox);

        PizzaCheddarCheckBox = new QCheckBox(layoutWidget2);
        PizzaCheddarCheckBox->setObjectName("PizzaCheddarCheckBox");

        verticalLayout_3->addWidget(PizzaCheddarCheckBox);

        PizzaParmesanCheckBox = new QCheckBox(layoutWidget2);
        PizzaParmesanCheckBox->setObjectName("PizzaParmesanCheckBox");

        verticalLayout_3->addWidget(PizzaParmesanCheckBox);

        PizzaGorgonzolaCheckBox = new QCheckBox(layoutWidget2);
        PizzaGorgonzolaCheckBox->setObjectName("PizzaGorgonzolaCheckBox");

        verticalLayout_3->addWidget(PizzaGorgonzolaCheckBox);

        PizzaBrinzaCheckBox = new QCheckBox(layoutWidget2);
        PizzaBrinzaCheckBox->setObjectName("PizzaBrinzaCheckBox");

        verticalLayout_3->addWidget(PizzaBrinzaCheckBox);

        PizzaCheeseSideCheckBox = new QCheckBox(layoutWidget2);
        PizzaCheeseSideCheckBox->setObjectName("PizzaCheeseSideCheckBox");

        verticalLayout_3->addWidget(PizzaCheeseSideCheckBox);


        verticalLayout_6->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        PizzaIngredientsMeatLabel = new QLabel(layoutWidget2);
        PizzaIngredientsMeatLabel->setObjectName("PizzaIngredientsMeatLabel");
        PizzaIngredientsMeatLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_7->addWidget(PizzaIngredientsMeatLabel);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        PizzaChickenCheckBox = new QCheckBox(layoutWidget2);
        PizzaChickenCheckBox->setObjectName("PizzaChickenCheckBox");

        verticalLayout_4->addWidget(PizzaChickenCheckBox);

        PizzaPepperoniCheckBox = new QCheckBox(layoutWidget2);
        PizzaPepperoniCheckBox->setObjectName("PizzaPepperoniCheckBox");
        PizzaPepperoniCheckBox->setChecked(true);

        verticalLayout_4->addWidget(PizzaPepperoniCheckBox);

        PizzaBaconCheckBox = new QCheckBox(layoutWidget2);
        PizzaBaconCheckBox->setObjectName("PizzaBaconCheckBox");

        verticalLayout_4->addWidget(PizzaBaconCheckBox);

        PizzaHamCheckBox = new QCheckBox(layoutWidget2);
        PizzaHamCheckBox->setObjectName("PizzaHamCheckBox");

        verticalLayout_4->addWidget(PizzaHamCheckBox);

        PizzaChorizoCheckBox = new QCheckBox(layoutWidget2);
        PizzaChorizoCheckBox->setObjectName("PizzaChorizoCheckBox");

        verticalLayout_4->addWidget(PizzaChorizoCheckBox);

        PizzaMeatballsCheckBox = new QCheckBox(layoutWidget2);
        PizzaMeatballsCheckBox->setObjectName("PizzaMeatballsCheckBox");

        verticalLayout_4->addWidget(PizzaMeatballsCheckBox);


        verticalLayout_7->addLayout(verticalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        PizzaIngredientsVegiesLabel = new QLabel(layoutWidget2);
        PizzaIngredientsVegiesLabel->setObjectName("PizzaIngredientsVegiesLabel");
        PizzaIngredientsVegiesLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_8->addWidget(PizzaIngredientsVegiesLabel);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        PizzaJalapenoCheckBox = new QCheckBox(layoutWidget2);
        PizzaJalapenoCheckBox->setObjectName("PizzaJalapenoCheckBox");

        verticalLayout_5->addWidget(PizzaJalapenoCheckBox);

        PizzaChampignogsCheckBox = new QCheckBox(layoutWidget2);
        PizzaChampignogsCheckBox->setObjectName("PizzaChampignogsCheckBox");

        verticalLayout_5->addWidget(PizzaChampignogsCheckBox);

        PizzaCucumbersCheckBox = new QCheckBox(layoutWidget2);
        PizzaCucumbersCheckBox->setObjectName("PizzaCucumbersCheckBox");

        verticalLayout_5->addWidget(PizzaCucumbersCheckBox);

        PizzaRedOnionCheckBox = new QCheckBox(layoutWidget2);
        PizzaRedOnionCheckBox->setObjectName("PizzaRedOnionCheckBox");

        verticalLayout_5->addWidget(PizzaRedOnionCheckBox);

        PizzaSweerPepperCheckBox = new QCheckBox(layoutWidget2);
        PizzaSweerPepperCheckBox->setObjectName("PizzaSweerPepperCheckBox");

        verticalLayout_5->addWidget(PizzaSweerPepperCheckBox);

        PizzaTomatoesCheckBox = new QCheckBox(layoutWidget2);
        PizzaTomatoesCheckBox->setObjectName("PizzaTomatoesCheckBox");
        PizzaTomatoesCheckBox->setChecked(true);

        verticalLayout_5->addWidget(PizzaTomatoesCheckBox);


        verticalLayout_8->addLayout(verticalLayout_5);


        horizontalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        PizzaIngredientsFruitsLabel = new QLabel(layoutWidget2);
        PizzaIngredientsFruitsLabel->setObjectName("PizzaIngredientsFruitsLabel");
        PizzaIngredientsFruitsLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_9->addWidget(PizzaIngredientsFruitsLabel);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        PizzaPineappleCheckBox = new QCheckBox(layoutWidget2);
        PizzaPineappleCheckBox->setObjectName("PizzaPineappleCheckBox");

        verticalLayout_10->addWidget(PizzaPineappleCheckBox);

        PizzaPearCheckBox = new QCheckBox(layoutWidget2);
        PizzaPearCheckBox->setObjectName("PizzaPearCheckBox");

        verticalLayout_10->addWidget(PizzaPearCheckBox);

        PizzaMandarinCheckBox = new QCheckBox(layoutWidget2);
        PizzaMandarinCheckBox->setObjectName("PizzaMandarinCheckBox");

        verticalLayout_10->addWidget(PizzaMandarinCheckBox);

        PizzaBananasCheckBox = new QCheckBox(layoutWidget2);
        PizzaBananasCheckBox->setObjectName("PizzaBananasCheckBox");

        verticalLayout_10->addWidget(PizzaBananasCheckBox);

        PizzaAppleCheckBox = new QCheckBox(layoutWidget2);
        PizzaAppleCheckBox->setObjectName("PizzaAppleCheckBox");

        verticalLayout_10->addWidget(PizzaAppleCheckBox);

        PizzaKiwiCheckBox = new QCheckBox(layoutWidget2);
        PizzaKiwiCheckBox->setObjectName("PizzaKiwiCheckBox");

        verticalLayout_10->addWidget(PizzaKiwiCheckBox);


        verticalLayout_9->addLayout(verticalLayout_10);


        horizontalLayout_3->addLayout(verticalLayout_9);

        layoutWidget3 = new QWidget(GroupBoxPizzaIngredients);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 260, 601, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        PizzaChooseAllPushButton = new QPushButton(layoutWidget3);
        PizzaChooseAllPushButton->setObjectName("PizzaChooseAllPushButton");

        horizontalLayout_5->addWidget(PizzaChooseAllPushButton);

        PizzaUnChooseAllPushButton = new QPushButton(layoutWidget3);
        PizzaUnChooseAllPushButton->setObjectName("PizzaUnChooseAllPushButton");

        horizontalLayout_5->addWidget(PizzaUnChooseAllPushButton);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 450, 200, 20));
        label->setFont(font);
        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(270, 480, 151, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        PizzaPromoLabel = new QLabel(layoutWidget4);
        PizzaPromoLabel->setObjectName("PizzaPromoLabel");
        PizzaPromoLabel->setFont(font);
        PizzaPromoLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_12->addWidget(PizzaPromoLabel);

        PizzaPromocode = new QLineEdit(layoutWidget4);
        PizzaPromocode->setObjectName("PizzaPromocode");

        verticalLayout_12->addWidget(PizzaPromocode);


        verticalLayout_2->addLayout(verticalLayout_12);

        PromoFeedback = new QLabel(layoutWidget4);
        PromoFeedback->setObjectName("PromoFeedback");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(7);
        PromoFeedback->setFont(font1);

        verticalLayout_2->addWidget(PromoFeedback);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(30, 480, 191, 131));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 189, 129));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(170, 0, 17, 131));
        QFont font2;
        font2.setPointSize(6);
        verticalScrollBar->setFont(font2);
        verticalScrollBar->setOrientation(Qt::Orientation::Vertical);
        verticalScrollBar->setInvertedAppearance(false);
        scrollArea->setWidget(scrollAreaWidgetContents);
        PizzaHintPromoLabel1 = new QLabel(centralwidget);
        PizzaHintPromoLabel1->setObjectName("PizzaHintPromoLabel1");
        PizzaHintPromoLabel1->setGeometry(QRect(270, 560, 171, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Century Gothic")});
        font3.setPointSize(6);
        PizzaHintPromoLabel1->setFont(font3);
        PizzaHintPromoLabel1->setWordWrap(true);
        CheckSumm = new QLabel(centralwidget);
        CheckSumm->setObjectName("CheckSumm");
        CheckSumm->setGeometry(QRect(450, 480, 171, 91));
        CheckSumm->setFont(font);
        CheckSumm->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        CheckSumm->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        CheckSumm->setWordWrap(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\321\202\320\265 \320\237\320\270\321\206\321\206\321\203 \320\237\320\276\320\264 \320\241\320\265\320\261\321\217! (\320\222\320\260\321\200\321\202\320\260\320\275\321\217\320\275 4331)", nullptr));
        GroupBoxPizzaSize->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\237\320\270\321\206\321\206\321\213", nullptr));
        PizzaSize25Label->setText(QCoreApplication::translate("MainWindow", "25 \321\201\320\274", nullptr));
        PizzaSize30Label->setText(QCoreApplication::translate("MainWindow", "30 \321\201\320\274", nullptr));
        PizzaSize35Label->setText(QCoreApplication::translate("MainWindow", "35 \321\201\320\274", nullptr));
        GroupBoxPizzaDough->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202\320\276", nullptr));
        PizzaDoughTradRadioButton->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\260\320\264\320\270\321\206\320\270\320\276\320\275\320\275\320\276\320\265", nullptr));
        PizzaDoughThinRadioButton->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\275\320\272\320\276\320\265", nullptr));
        GroupBoxPizzaIngredients->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276 \320\262\320\272\321\203\321\201\321\203 :)", nullptr));
        PizzaIngredientsCheesesLabel->setText(QCoreApplication::translate("MainWindow", "   \320\241\321\213\321\200\321\213", nullptr));
        PizzaMozzarellaCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\321\206\320\260\321\200\320\265\320\273\320\273\320\260", nullptr));
        PizzaCheddarCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\247\320\265\320\264\320\264\320\265\321\200", nullptr));
        PizzaParmesanCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\274\320\265\320\267\320\260\320\275", nullptr));
        PizzaGorgonzolaCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\263\320\276\320\275\320\267\320\276\320\273\320\260", nullptr));
        PizzaBrinzaCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\221\321\200\321\213\320\275\320\267\320\260", nullptr));
        PizzaCheeseSideCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\241\321\213\321\200\320\275\321\213\320\271 \320\221\320\276\321\200\321\202\320\270\320\272", nullptr));
        PizzaIngredientsMeatLabel->setText(QCoreApplication::translate("MainWindow", "   \320\234\321\217\321\201\320\276", nullptr));
        PizzaChickenCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\246\321\213\320\277\320\273\320\265\320\275\320\276\320\272", nullptr));
        PizzaPepperoniCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\320\277\320\277\320\265\321\200\320\276\320\275\320\270", nullptr));
        PizzaBaconCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\221\320\265\320\272\320\276\320\275", nullptr));
        PizzaHamCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\202\321\207\320\270\320\275\320\260", nullptr));
        PizzaChorizoCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\247\320\276\321\200\320\270\320\267\320\276", nullptr));
        PizzaMeatballsCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\244\321\200\320\270\320\272\320\260\320\264\320\265\320\273\321\214\320\272\320\270", nullptr));
        PizzaIngredientsVegiesLabel->setText(QCoreApplication::translate("MainWindow", "   \320\236\320\262\320\276\321\211\320\270 \320\270 \320\224\321\200\321\203\320\263\320\276\320\265", nullptr));
        PizzaJalapenoCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\245\320\260\320\273\320\260\320\277\320\265\320\275\321\214\320\276", nullptr));
        PizzaChampignogsCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\274\320\277\320\270\320\275\321\214\320\276\320\275\321\213", nullptr));
        PizzaCucumbersCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\236\320\263\321\203\321\200\321\207\320\270\320\272\320\270", nullptr));
        PizzaRedOnionCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271 \320\233\321\203\320\272", nullptr));
        PizzaSweerPepperCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\260\320\264\320\272\320\270\320\271 \320\237\320\265\321\200\320\265\321\206", nullptr));
        PizzaTomatoesCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\274\320\260\321\202\321\213", nullptr));
        PizzaIngredientsFruitsLabel->setText(QCoreApplication::translate("MainWindow", "   \320\244\321\200\321\203\320\272\321\202\321\213", nullptr));
        PizzaPineappleCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\260\320\275\320\260\321\201", nullptr));
        PizzaPearCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\321\210\320\260", nullptr));
        PizzaMandarinCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\275\320\264\320\260\321\200\320\270\320\275", nullptr));
        PizzaBananasCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\221\320\260\320\275\320\260\320\275", nullptr));
        PizzaAppleCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\257\320\261\320\273\320\276\320\272\320\276", nullptr));
        PizzaKiwiCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\232\320\270\320\262\320\270", nullptr));
        PizzaChooseAllPushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\222\321\201\320\265 \320\230\320\275\320\263\321\200\320\265\320\264\320\270\320\265\320\275\321\202\321\213 0_0", nullptr));
        PizzaUnChooseAllPushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\275\321\217\321\202\321\214 \320\222\321\201\320\265 \320\222\321\213\320\261\320\276\321\200\321\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\210\320\260 \320\230\320\264\320\265\320\260\320\273\321\214\320\275\320\260\321\217 \320\237\320\270\321\206\321\206\320\260 \360\237\216\224", nullptr));
        PizzaPromoLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\274\320\276\320\272\320\276\320\264", nullptr));
        PizzaPromocode->setText(QString());
        PromoFeedback->setText(QString());
        PizzaHintPromoLabel1->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\205\320\276\320\266\320\265, \321\215\321\202\320\276 \320\262\320\260\321\210 \320\277\320\265\321\200\320\262\321\213\320\271 \320\267\320\260\320\272\320\260\320\267... \320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\321\200\320\276\320\274\320\276\320\272\320\276\320\264 FIRST \320\270 \320\277\320\276\320\273\321\203\321\207\320\270\321\202\320\265 \321\201\320\272\320\270\320\264\320\272\321\203 -25% \320\275\320\260 \320\262\321\201\321\221!", nullptr));
        CheckSumm->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
