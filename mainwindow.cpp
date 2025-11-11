#include "mainwindow.h"

#include "./ui_mainwindow.h"

#define _25SM 1
#define _30SM 2
#define _35SM 3

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), CheckSummaryLabel(new QLabel(this)), hasDiscount(false), discount(1) {
    ui->setupUi(this);

    CheckSummaryLabel->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    CheckSummaryLabel->setWordWrap(true);
    ui->scrollArea->setWidget(CheckSummaryLabel);
    ui->scrollArea->setWidgetResizable(true);

    // setGeometry(300, 250, 455, 316);
    showSummary();

    connect(ui->PizzaSizeSlider, &QSlider::valueChanged, this, &MainWindow::showSummary);

    connect(ui->PizzaDoughTradRadioButton, &QRadioButton::toggled, this, &MainWindow::showSummary);
    connect(ui->PizzaDoughThinRadioButton, &QRadioButton::toggled, this, &MainWindow::showSummary);

    connect(ui->PizzaMozzarellaCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaParmesanCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaCheddarCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaGorgonzolaCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaBrinzaCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaCheeseSideCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaChickenCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaPepperoniCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaBaconCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaHamCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaChorizoCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaMeatballsCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaJalapenoCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaChampignogsCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaCucumbersCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaRedOnionCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaSweerPepperCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaTomatoesCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaAppleCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaPineappleCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaPearCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaMandarinCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaBananasCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);
    connect(ui->PizzaKiwiCheckBox, &QCheckBox::checkStateChanged, this, &MainWindow::showSummary);

    connect(ui->PizzaChooseAllPushButton, &QPushButton::clicked, this, &MainWindow::on_PizzaChooseAllPushButton_clicked);
    connect(ui->PizzaUnChooseAllPushButton, &QPushButton::clicked, this, &MainWindow::on_PizzaUnChooseAllPushButton_clicked);

    connect(ui->PizzaPromocode, &QLineEdit::textChanged, this, &MainWindow::showPromocode);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape) {
        close();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}

void MainWindow::on_PizzaUnChooseAllPushButton_clicked() {
    ui->PizzaMozzarellaCheckBox->setChecked(false);
    ui->PizzaParmesanCheckBox->setChecked(false);
    ui->PizzaCheddarCheckBox->setChecked(false);
    ui->PizzaGorgonzolaCheckBox->setChecked(false);
    ui->PizzaBrinzaCheckBox->setChecked(false);
    ui->PizzaCheeseSideCheckBox->setChecked(false);
    ui->PizzaChickenCheckBox->setChecked(false);
    ui->PizzaPepperoniCheckBox->setChecked(false);
    ui->PizzaBaconCheckBox->setChecked(false);
    ui->PizzaHamCheckBox->setChecked(false);
    ui->PizzaChorizoCheckBox->setChecked(false);
    ui->PizzaMeatballsCheckBox->setChecked(false);
    ui->PizzaJalapenoCheckBox->setChecked(false);
    ui->PizzaChampignogsCheckBox->setChecked(false);
    ui->PizzaCucumbersCheckBox->setChecked(false);
    ui->PizzaRedOnionCheckBox->setChecked(false);
    ui->PizzaSweerPepperCheckBox->setChecked(false);
    ui->PizzaTomatoesCheckBox->setChecked(false);
    ui->PizzaAppleCheckBox->setChecked(false);
    ui->PizzaPineappleCheckBox->setChecked(false);
    ui->PizzaPearCheckBox->setChecked(false);
    ui->PizzaMandarinCheckBox->setChecked(false);
    ui->PizzaBananasCheckBox->setChecked(false);
    ui->PizzaKiwiCheckBox->setChecked(false);
    showSummary();
}

void MainWindow::on_PizzaChooseAllPushButton_clicked() {
    ui->PizzaMozzarellaCheckBox->setChecked(true);
    ui->PizzaParmesanCheckBox->setChecked(true);
    ui->PizzaCheddarCheckBox->setChecked(true);
    ui->PizzaGorgonzolaCheckBox->setChecked(true);
    ui->PizzaBrinzaCheckBox->setChecked(true);
    ui->PizzaCheeseSideCheckBox->setChecked(true);
    ui->PizzaChickenCheckBox->setChecked(true);
    ui->PizzaPepperoniCheckBox->setChecked(true);
    ui->PizzaBaconCheckBox->setChecked(true);
    ui->PizzaHamCheckBox->setChecked(true);
    ui->PizzaChorizoCheckBox->setChecked(true);
    ui->PizzaMeatballsCheckBox->setChecked(true);
    ui->PizzaJalapenoCheckBox->setChecked(true);
    ui->PizzaChampignogsCheckBox->setChecked(true);
    ui->PizzaCucumbersCheckBox->setChecked(true);
    ui->PizzaRedOnionCheckBox->setChecked(true);
    ui->PizzaSweerPepperCheckBox->setChecked(true);
    ui->PizzaTomatoesCheckBox->setChecked(true);
    ui->PizzaAppleCheckBox->setChecked(true);
    ui->PizzaPineappleCheckBox->setChecked(true);
    ui->PizzaPearCheckBox->setChecked(true);
    ui->PizzaMandarinCheckBox->setChecked(true);
    ui->PizzaBananasCheckBox->setChecked(true);
    ui->PizzaKiwiCheckBox->setChecked(true);
    showSummary();
}

void MainWindow::showSummary() {
    QString StrSummary1 = "";
    float UnsCheckSumm{}, CheckSaleSumm{}, BaseCheckSumm{}, IngCheckSum{}, DiscountSum{};
    unsigned countIngridients{};

    // Проверка размера пиццы
    switch (ui->PizzaSizeSlider->value()) {
        case _25SM:
            StrSummary1 += "- 25 см\n";
            UnsCheckSumm += 250;
            break;
        case _30SM:
            StrSummary1 += "- 30 см\n";
            UnsCheckSumm += 300;
            break;
        case _35SM:
            StrSummary1 += "- 35 см\n";
            UnsCheckSumm += 350;
            break;
    }

    BaseCheckSumm = UnsCheckSumm;

    // Проверка выбранного вида теста
    if (ui->PizzaDoughTradRadioButton->isChecked()) {
        StrSummary1 += "- на традиционном тесте\n";
    } else if (ui->PizzaDoughThinRadioButton->isChecked()) {
        StrSummary1 += "- на тонком тесте\n";
    }

    // Проверка всех ингредиентов
    if (ui->PizzaMozzarellaCheckBox->isChecked()) {
        StrSummary1 += "- моцарелла (71 руб.)\n";
        UnsCheckSumm += 71;
        countIngridients++;
    }
    if (ui->PizzaCheddarCheckBox->isChecked()) {
        StrSummary1 += "- чеддер (71 руб.)\n";
        UnsCheckSumm += 71;
        countIngridients++;
    }
    if (ui->PizzaParmesanCheckBox->isChecked()) {
        StrSummary1 += "- пармезан (71 руб.)\n";
        UnsCheckSumm += 71;
        countIngridients++;
    }
    if (ui->PizzaGorgonzolaCheckBox->isChecked()) {
        StrSummary1 += "- горгонзола (71 руб.)\n";
        UnsCheckSumm += 71;
        countIngridients++;
    }
    if (ui->PizzaBrinzaCheckBox->isChecked()) {
        StrSummary1 += "- брынза (71 руб.)\n";
        UnsCheckSumm += 71;
        countIngridients++;
    }
    if (ui->PizzaCheeseSideCheckBox->isChecked()) {
        StrSummary1 += "- сырный бортик (66 руб.)\n";
        UnsCheckSumm += 66;
        countIngridients++;
    }
    if (ui->PizzaChickenCheckBox->isChecked()) {
        StrSummary1 += "- цыпленок (102 руб.)\n";
        UnsCheckSumm += 102;
        countIngridients++;
    }
    if (ui->PizzaPepperoniCheckBox->isChecked()) {
        StrSummary1 += "- пепперони (102 руб.)\n";
        UnsCheckSumm += 102;
        countIngridients++;
    }
    if (ui->PizzaBaconCheckBox->isChecked()) {
        StrSummary1 += "- бекон (102 руб.)\n";
        UnsCheckSumm += 102;
        countIngridients++;
    }
    if (ui->PizzaHamCheckBox->isChecked()) {
        StrSummary1 += "- ветчина (102 руб.)\n";
        UnsCheckSumm += 102;
        countIngridients++;
    }
    if (ui->PizzaChorizoCheckBox->isChecked()) {
        StrSummary1 += "- чоризо (102 руб.)\n";
        UnsCheckSumm += 102;
        countIngridients++;
    }
    if (ui->PizzaMeatballsCheckBox->isChecked()) {
        StrSummary1 += "- фрикадельки (102 руб.)\n";
        UnsCheckSumm += 102;
        countIngridients++;
    }
    if (ui->PizzaJalapenoCheckBox->isChecked()) {
        StrSummary1 += "- халапеньо (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }
    if (ui->PizzaChampignogsCheckBox->isChecked()) {
        StrSummary1 += "- шампиньоны (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }
    if (ui->PizzaCucumbersCheckBox->isChecked()) {
        StrSummary1 += "- огурчики (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }
    if (ui->PizzaRedOnionCheckBox->isChecked()) {
        StrSummary1 += "- красный лук (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }
    if (ui->PizzaSweerPepperCheckBox->isChecked()) {
        StrSummary1 += "- сладкий перец (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }
    if (ui->PizzaTomatoesCheckBox->isChecked()) {
        StrSummary1 += "- томаты (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }
    if (ui->PizzaAppleCheckBox->isChecked()) {
        StrSummary1 += "- яблоко (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }
    if (ui->PizzaPearCheckBox->isChecked()) {
        StrSummary1 += "- груша (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }
    if (ui->PizzaPineappleCheckBox->isChecked()) {
        StrSummary1 += "- ананас (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }
    if (ui->PizzaMandarinCheckBox->isChecked()) {
        StrSummary1 += "- мандарин (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }
    if (ui->PizzaBananasCheckBox->isChecked()) {
        StrSummary1 += "- банан (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }
    if (ui->PizzaKiwiCheckBox->isChecked()) {
        StrSummary1 += "- киви (49 руб.)\n";
        UnsCheckSumm += 49;
        countIngridients++;
    }

    IngCheckSum = UnsCheckSumm - BaseCheckSumm;

    // if (countIngridients == 24) {
    //     StrSummary1 += "- выбраны все ингредиенты (скидка 10%)\n";
    //     UnsCheckSumm *= 0.9;
    // }

    if (countIngridients >= 6) {
        // StrSummary1 += "- выбрано 6 ингредиентов (скидка 10%)\n";
        CheckSaleSumm = UnsCheckSumm - UnsCheckSumm * 0.9;
        UnsCheckSumm *= 0.9;
    }

    if (hasDiscount) {
        // StrSummary1 += "- промокод (скидка 25%)\n";
        DiscountSum = UnsCheckSumm - UnsCheckSumm * discount;
        UnsCheckSumm *= discount;
    }

    CheckSummaryLabel->setText(StrSummary1);
    QString resultLabel = "Итого: " + QString::number(UnsCheckSumm) + QString(" руб.");
    resultLabel += "\nТесто: " + QString::number(BaseCheckSumm) + QString(" руб.");
    resultLabel += "\nИнгредиенты: " + QString::number(IngCheckSum) + QString(" руб.");
    if (CheckSaleSumm) resultLabel += "\nСкидка(6 ингр.): -" + QString::number(CheckSaleSumm) + QString(" руб.");
    if (hasDiscount) resultLabel += "\nСкидка(промокод): -" + QString::number(DiscountSum) + QString(" руб.");
    ui->CheckSumm->setText(resultLabel);
}

void MainWindow::showPromocode() {
    if (ui->PizzaPromocode->text() == "FIRST") {
        ui->PromoFeedback->setText("Промокод применен!");
        hasDiscount = true;
        discount = 0.75;
    } else {
        if (ui->PizzaPromocode->text() == "")
            ui->PromoFeedback->clear();
        else
            ui->PromoFeedback->setText("Промокод не найден ;(");
        hasDiscount = false;
        discount = 1;
    }
    showSummary();
}
