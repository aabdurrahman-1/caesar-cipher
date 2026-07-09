#include "mainwindow.h"
#include "caesarcipher.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Done_clicked()
{
    QString msg = ui->lineEdit_MessageInput->text();
    int num = ui->spinBox_ShiftNum->value();

    CaesarCipher cipher(msg, num);

    if (ui->radioButton_Encrypt->isChecked()) {

        QString result = cipher.encryptMessage(msg);
        ui->lineEdit_Output->setText(result);

        QMessageBox::information(this, "Success", "Encryption successful!");

        ui->lineEdit_MessageInput->clear();
        ui->spinBox_ShiftNum->setValue(1);
        ui->radioButton_Encrypt->setChecked(false);
        ui->radioButton_Decrypt->setChecked(false);

    } else if (ui->radioButton_Decrypt->isChecked()) {

        QString result = cipher.decryptMessage(msg);
        ui->lineEdit_Output->setText(result);
        QMessageBox::information(this, "Success", "Decryption successful!");

        ui->lineEdit_MessageInput->clear();
        ui->spinBox_ShiftNum->setValue(1);
        ui->radioButton_Encrypt->setChecked(false);
        ui->radioButton_Decrypt->setChecked(false);

    } else {
        QMessageBox::warning(this, "No Option Selected", "Please select Encrypt or Decrypt.");

        ui->lineEdit_MessageInput->clear();
        ui->spinBox_ShiftNum->setValue(1);
        ui->radioButton_Encrypt->setChecked(false);
        ui->radioButton_Decrypt->setChecked(false);
    }
}


