#include "Test10_2A.h"

#include <QMessageBox>
#include <QFileDialog>

#include <string>

#include "GBK.hpp"

Test10_2A::Test10_2A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(OnMenuNew()));
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(OnMenuOpen()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(OnMenuSave()));

}

int Test10_2A::OnMenuNew()
{

	//QMessageBox::information(this, "info", "New", Qt::Window);
	mFilePath = "";

	ui.mTextEdit->clear();

	return 0;
}

int Test10_2A::OnMenuOpen()
{

	//打开文件名;
	QString filePath = QFileDialog::getOpenFileName(this, "Open File");

	if (filePath.length() == 0)
	{
		return -1;
	}

	std::string fileName = GBK::GetInstance()->fromUnicode(filePath);

	//打开文件
	std::FILE *fp = std::fopen(fileName.c_str(), "r");

	if (fp == nullptr)
	{	
		return -1;
	}

	//将文件定位到末尾;
	long sizeT = 0;

	std::fseek(fp, 0, SEEK_END);
	
	//获取文件大小
	sizeT = std::ftell(fp);

	//分配缓冲区;
	char * buf = new char[sizeT];

	std::memset(buf, 0, sizeT * sizeof(char));
	buf[sizeT] = 0;

	//将文件定位到开始;
	std::fseek(fp, 0, SEEK_SET);

	//读取文件内容;
	std::fread(buf, 1, sizeT, fp);

	//关闭文件;
	std::fclose(fp);

	//转换为QString;
	QString text = GBK::GetInstance()->toUnicode(buf);

	//显示文件内容;
	ui.mTextEdit->setText(text);


	return 0;
}

int Test10_2A::OnMenuSave()
{
	
	QString fileName = QFileDialog::getSaveFileName(this, "Save File");

	if (fileName.length() ==0)
	{
		return 0;
	}

	std::string fileNameT = GBK::GetInstance()->fromUnicode(fileName);
	
	QString text = ui.mTextEdit->toPlainText();

	std::string textT = GBK::GetInstance()->fromUnicode(text);

	//打开文件;
	std::FILE * file = std::fopen(fileNameT.c_str(), "wb");

	//写入数据;
	std::fwrite(textT.c_str(), 1, textT.length(), file);

	//关闭文件;
	std::fclose(file);

	//保存文件路径;
	mFilePath = fileName;

	//状态栏的使用
	ui.statusBar->showMessage(GBK::GetInstance()->toUnicode("保存文件结束"), 1000 * 3);


	return 0;

}
