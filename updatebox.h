#ifndef UPDATEBOX_H
#define UPDATEBOX_H

#include <QDialog>

namespace Ui {
class updateBox;
}

class updateBox : public QDialog
{
    Q_OBJECT

public:
    explicit updateBox(QWidget *parent = nullptr);
    ~updateBox();
signals:
    void newSub(const QString &rn,const QString &s);
private slots:
    void updateSub();

private:
    Ui::updateBox *ui;
};

#endif // UPDATEBOX_H
