#include "settings.h"

#include <QCoreApplication>
#include <QStringList>
#include <QDebug>

Settings::Settings(QObject *parent) : QSettings(parent)
{}

void Settings::setValue(const QString &key, const QVariant &value)
{
    qDebug() << "Saving value " << key << value << " to " << fileName();
    QSettings::setValue(key, value);
}

QVariant Settings::value(const QString &key, const QVariant &defaultValue) const
{
    return QSettings::value(key, defaultValue);
}

void Settings::sync()
{
    QSettings::sync();
}

bool Settings::contains(const QString &key) const
{
    return QSettings::contains(key);
}

void Settings::remove(const QString &key)
{
    QSettings::remove(key);
}
