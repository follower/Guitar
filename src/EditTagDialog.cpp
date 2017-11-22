#include "EditTagDialog.h"
#include "ui_EditTagDialog.h"
#include "common/misc.h"

EditTagDialog::EditTagDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::EditTagDialog)
{
	ui->setupUi(this);
	Qt::WindowFlags flags = windowFlags();
	flags &= ~Qt::WindowContextHelpButtonHint;
	setWindowFlags(flags);

	misc::setFixedSize(this);
}

EditTagDialog::~EditTagDialog()
{
	delete ui;
}

QString EditTagDialog::text() const
{
	return ui->lineEdit->text();
}


