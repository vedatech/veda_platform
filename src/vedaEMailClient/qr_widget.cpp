#include "qr_widget.h"
#include "ui_qr_widget.h"

qr_widget::qr_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qr_widget)
{
    ui->setupUi(this);
}

qr_widget::~qr_widget()
{
    delete ui;
}

void qr_widget::paintQRCode(const QVector<bool> &blacks, const int side_size)
{

}

void qr_widget::paintEvent(QPaintEvent *e)
{
//    QPainter p(this);
//    QBrush black(Qt::black),
//           white(Qt::white);

//    p.setBrush(white);
//    p.drawRect(this->geometry());
//    p.setBrush(black);

//    for (int y = 0; y < 400; y += 20){
//        for (int x = 0; x < 400; x += 20){
//            p.drawRect(x,y,10,10);
//        }
//    }

    QWidget::paintEvent(e);
}

void qr_widget::resizeQRpolygon(int remains)
{
    maxside = ((this->height() / 10) * 7) - 50 - remains;
    xasset = (this->width() - maxside) / 2;
    yasset = (((this->height() / 10) * 7) - maxside) / 2;
}
