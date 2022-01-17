#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow) {
  ui->setupUi(this);
  this->setWindowTitle("Clash GUI");
  ptabs.reset(new QTabWidget(this));
  ptabs->setGeometry(0, 0, this->width(), this->height());
  poverview.reset(new QWidget);
  pproxyies.reset(new QWidget);
  prules.reset(new QWidget);
  plogs.reset(new QWidget);
  ptabs->addTab(poverview.get(), tr("概览"));
  ptabs->addTab(pproxyies.get(), tr("代理"));
  ptabs->addTab(prules.get(), tr("规则"));
  ptabs->addTab(plogs.get(), tr("日志"));
}

MainWindow::~MainWindow() {
  delete ui;
}

void MainWindow::paintEvent(QPaintEvent* event) {
  this->ptabs->setGeometry(0, 0, this->width(), this->height());
}

