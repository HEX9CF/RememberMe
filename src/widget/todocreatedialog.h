#ifndef TODOCREATEDIALOG_H
#define TODOCREATEDIALOG_H

#include <QDialog>

#include "../model/todoitem.h"

namespace Ui {
class TodoCreateDialog;
}

class TodoCreateDialog : public QDialog {
	Q_OBJECT

   public:
	explicit TodoCreateDialog(QWidget* parent = nullptr);
	~TodoCreateDialog();

	TodoItem getTodoItem() const;

   private slots:
	void onOkClicked();
	void onCancelClicked();
	void onClearClicked();

   private:
	Ui::TodoCreateDialog* ui;
	TodoItem m_todoItem;
};

#endif	// TODOCREATEDIALOG_H
