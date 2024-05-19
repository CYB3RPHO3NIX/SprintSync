#include "stdafx.h"
#include "SprintSync.h"

SprintSync::SprintSync(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    Setup();
}

SprintSync::~SprintSync()
{}

void SprintSync::Setup()
{
    //Setup SprintsTab
    ui.TableSprints->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //End Setup
}