#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked(bool checked)
{
//   ui->stackedWidget->SetPage(ui->page_1, QAnimationStackedWidget::eRightToLeft);
    ui->stackedWidget->forward();
}

void Widget::on_pushButton_2_clicked(bool checked)
{
//  ui->stackedWidget->SetPage(ui->page_1, QAnimationStackedWidget::eLeftToRight);
    ui->stackedWidget->next();
}
