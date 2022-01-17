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
  pproxies.reset(new QWidget);
  prules.reset(new QWidget);
  plogs.reset(new QWidget);
  pconfig.reset(new QWidget);
  ptabs->addTab(poverview.get(), tr("概览"));
  ptabs->addTab(pproxies.get(), tr("代理"));
  ptabs->addTab(prules.get(), tr("规则"));
  ptabs->addTab(plogs.get(), tr("日志"));
  ptabs->addTab(pconfig.get(), tr("配置"));
  resetOverview();
  resetProxies();
  resetRules();
  resetLogs();
  resetConfigs();
}

MainWindow::~MainWindow() {
  delete ui;
}

void MainWindow::paintEvent(QPaintEvent* event) {
  this->ptabs->setGeometry(0, 0, this->width(), this->height());
}

void MainWindow::resetOverview() {

}

void MainWindow::resetProxies() {

}

void MainWindow::resetRules() {

}

void MainWindow::resetLogs() {

}

void MainWindow::resetConfigs() {

}