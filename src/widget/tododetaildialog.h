#ifndef TODODETAILDIALOG_H
#define TODODETAILDIALOG_H

#include <QDialog>

#include "../model/todoitem.h"

namespace Ui {
class TodoDetailDialog;
}

class TodoDetailDialog : public QDialog {
	Q_OBJECT

   public:
	explicit TodoDetailDialog(const TodoItem& item, QWidget* parent = nullptr);
	~TodoDetailDialog();

   private:
	Ui::TodoDetailDialog* ui;
};

#endif	// TODODETAILDIALOG_H
