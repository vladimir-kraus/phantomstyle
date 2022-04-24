#include "phantomstyleplugin.h"
#include "phantomstyle.h"

PhantomStylePlugin::PhantomStylePlugin() : QStylePlugin() {}
PhantomStylePlugin::~PhantomStylePlugin() {}
QStyle* PhantomStylePlugin::create(const QString& key) {
  if (QString::compare(key, QLatin1String("phantommodern"), Qt::CaseInsensitive) != 0)
    return nullptr;
  return new PhantomStyle();
}

#include "moc_phantomstyleplugin.cpp"
