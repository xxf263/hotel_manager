#ifndef CONTENT_H
#define CONTENT_H

#include <QFrame>
#include <QPushButton>
#include <QStackedWidget>

#include "callCheckin.h"
#include "callCheckout.h"
#include "detail.h"

class Content : public QFrame
{
    Q_OBJECT
public:
    Content(QWidget *parent=0, Qt::WindowFlags f1=0);
    
    QPushButton *pushButtonAmend;
    QPushButton *pushButtonClose;
    
    QStackedWidget *stack;

private:    
    CallCheckin *callCheckin;
    CallCheckout *callCheckout;
    Detail *detail;
    
};

#endif //CONTENT_H
