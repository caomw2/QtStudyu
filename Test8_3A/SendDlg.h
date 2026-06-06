#pragma once

#include <QDialog>
#include "ui_SendDlg.h"
#include "SendTask.h"

class SendDlg : public QDialog
{
	Q_OBJECT

public:
	SendDlg(QString _FileName,QWidget *parent = Q_NULLPTR);
	~SendDlg();

private:
	Ui::SendDlg ui;

private:

	SendTask * mTask;
	int mTimerID;

private:

	virtual void timerEvent(QTimerEvent *event);

};
