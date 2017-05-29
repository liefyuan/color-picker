#include "color_label.h"

ColorLabel::ColorLabel(QLabel *parent)
    : QLabel(parent)
{
    defaultStyle = "border: 1px solid #F5F5F5; border-radius: 5px;";

    this->setStyleSheet("background-color: #404244;" + defaultStyle);
    this->setFixedSize(150, 50);
    this->setMouseTracking(true);
}

void ColorLabel::background_color(const QString &text)
{
    const QString style = defaultStyle + "background-color:" + text + ";";
    this->setStyleSheet(style);
}

void ColorLabel::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event)

    emit clicked();
}

void ColorLabel::mouseMoveEvent(QMouseEvent *event)
{
    this->setCursor(Qt::CrossCursor);
}
