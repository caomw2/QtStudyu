#include "SendDlg.h"

#include <QMessageBox>

SendDlg::SendDlg(QString _FileName, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	mTask = new SendTask(nullptr);

	mTask->BeginTask(_FileName.toStdString().c_str());
	
	//启动定时器

	mTimerID = startTimer(500);

	
}

SendDlg::~SendDlg()
{

}

void SendDlg::timerEvent(QTimerEvent *event)
{

	if (mTimerID == event->timerId())
	{
		//设置进度条值;

		int status = mTask->GetStatus();
		int progress = mTask->GetProgress();

		ui.progressBar->setValue(progress);

		if (status == 1)
		{

			//QMessageBox::information(this, "info", "status=1");

			//销毁线程;
			mTask->EndTask();
			delete mTask;

			//关闭定时器;
			killTimer(mTimerID);

			this->accept();//关闭对话框;
		}

	}



}
