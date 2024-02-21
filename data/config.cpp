#include "config.h"
#include <QCoreApplication>

Cfg::Cfg(QObject *parent): QObject{parent}
{

}

QString Cfg::GetProjectPath()
{
    return QCoreApplication::applicationDirPath();

}

QString Cfg::LoadLocalConfig()
{

}
