#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SprintSync.h"

class SprintSync : public QMainWindow
{
    Q_OBJECT

public:
    SprintSync(QWidget *parent = nullptr);
    void Setup();
    ~SprintSync();

private:
    Ui::SprintSyncClass ui;
};
