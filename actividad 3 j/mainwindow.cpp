#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Neuronas");

}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_Captura_clicked()
{

    ui->res->setText(QString::number(ui->Id->value()));
    ui->res->setText(QString::number(ui->Voltaje->value()));
    ui->res->setText(QString::number(ui->Posicionx->value()));
    ui->res->setText(QString::number(ui->PosicionY->value()));
    ui->res->setText(QString::number(ui->red->value()));
    ui->res->setText(QString::number(ui->green->value()));
    ui->res->setText(QString::number(ui->blue->value()));

}

