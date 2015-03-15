#include "animation_inputs.h"
#include "animation_editor.h"
#include "animator.h"
#include <qlayout.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qtableview.h>


AnimationInputs::AnimationInputs(AnimationEditor& editor)
	: m_editor(editor)
{
	setWindowTitle("Inputs");
	setObjectName("animationEditorInputs");
	QWidget* widget = new QWidget(this);
	QVBoxLayout* layout = new QVBoxLayout(widget);
	layout->setContentsMargins(0, 0, 0, 0);

	m_table_view = new QTableView(widget);
	layout->addWidget(m_table_view);
	setWidget(widget);

	m_table_view->setContextMenuPolicy(Qt::CustomContextMenu);
	m_table_view->setModel(m_editor.getAnimator()->getInputModel());
	m_editor.connect(&m_editor, &AnimationEditor::animatorCreated, [this](){
		m_table_view->setModel(m_editor.getAnimator()->getInputModel());
	});
	connect(m_table_view, &QWidget::customContextMenuRequested, this, &AnimationInputs::showContextMenu);

	m_table_view->setItemDelegate(new AnimatorInputTypeDelegate());
}


void AnimationInputs::showContextMenu(const QPoint& pos)
{
	QMenu* menu = new QMenu();
	QAction* create_action = menu->addAction("Create");
	QAction* selected_action = menu->exec(mapToGlobal(pos));
	if (selected_action == create_action)
	{
		m_editor.getAnimator()->createInput();
	}
}
