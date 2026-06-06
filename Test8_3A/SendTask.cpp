
#pragma warning(disable:4996)

#include <cstdio>
#include <cstring>

#include "SendTask.h"

#include <QThread>
#include <QDebug>
#include <QMessageBox>

SendTask::SendTask(QObject *parent)
	: QThread(parent), mByteRead(0)
{

}

SendTask::~SendTask()
{

}

void SendTask::run()
{

	FILE *fp = fopen(mFilePath, "rb");

	if (fp == nullptr)
	{
		mStatus = -1; //状态发生错误;

		return;
	}


	//获取文件大小;
	fseek(fp, 0, SEEK_END);
	mFileSize = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	char buf[2048];

	while (1)
	{
		int n = fread(buf, 1, 2048, fp);

		if (n<=0)
		{
			break;
		}

		mByteRead += n;

		//qDebug() << n;
		QThread::msleep(50);

	}

	fclose(fp);

	mStatus = 1;//状态已完成;
	
}

int SendTask::BeginTask(const char * _FileName)
{

	std::strcpy(mFilePath, _FileName);

	mFileSize = 0;
	mByteRead = 0;
	mStatus = 0;

	//启动运行线程;
	start();

	return 0;
}

int SendTask::EndTask()
{
	wait();

	return 0;
}

int SendTask::GetStatus()
{

	return mStatus;
}

int SendTask::GetProgress()
{

	if (mFileSize <=0)
	{
		return 0;
	}
	
	return mByteRead * 100 / mFileSize;
}
