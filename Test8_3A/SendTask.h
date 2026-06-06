#pragma once

#include <QThread>

class SendTask : public QThread
{
	Q_OBJECT

public:
	SendTask(QObject *parent);
	~SendTask();

private:

	//线程的入口函数;
	void run();	

public:

	//任务的状态;
	int GetStatus();

	//任务的进度;
	int GetProgress();

	//开始
	int BeginTask(const char * _FileName);

	//结束
	int EndTask();

public:
	char mFilePath[128];
	int mFileSize;//文件总字节数;

	int mByteRead; //已经读取并处理的多少字节;

	int mStatus; //任务的状态;

	
};
