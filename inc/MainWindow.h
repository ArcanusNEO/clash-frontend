#pragma once

#include <QMainWindow>
#include <QTabWidget>
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();

private:
  Ui::MainWindow* ui;
  std::unique_ptr<QTabWidget> ptabs;
  std::unique_ptr<QWidget> poverview, pproxyies, prules, plogs;

protected:
  void paintEvent(QPaintEvent* event);
};
