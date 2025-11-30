#include "tododetaildialog.h"

#include "ui_tododetaildialog.h"

TodoDetailDialog::TodoDetailDialog(const TodoItem& item, QWidget* parent)
	: QDialog(parent), ui(new Ui::TodoDetailDialog) {
	ui->setupUi(this);

	ui->titleLabel->setText(item.title);
	ui->categoryLabel->setText(item.category.isEmpty() ? "无" : item.category);

	QString priorityStr;
	switch (item.priority) {
		case 0:
			priorityStr = "低";
			break;
		case 1:
			priorityStr = "中";
			break;
		case 2:
			priorityStr = "高";
			break;
		default:
			priorityStr = "未知";
	}
	ui->priorityLabel->setText(priorityStr);

	if (item.deadline.isValid()) {
		ui->deadlineLabel->setText(item.deadline.toString("yyyy-MM-dd HH:mm"));
	} else {
		ui->deadlineLabel->setText("无");
	}

	ui->statusLabel->setText(item.completed ? "已完成" : "未完成");
	ui->descriptionBrowser->setText(item.description);
}

TodoDetailDialog::~TodoDetailDialog() { delete ui; }
