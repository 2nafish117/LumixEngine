#pragma once

#include <QDockWidget>

namespace Lux
{
	class EditorClient;
}

namespace Ui {
class AssetBrowser;
}

class AssetBrowser : public QDockWidget
{
	Q_OBJECT

public:
	explicit AssetBrowser(QWidget *parent = 0);
	~AssetBrowser();
	void setEditorClient(Lux::EditorClient& client) { m_client = &client; }

private slots:
	void on_treeView_doubleClicked(const QModelIndex &index);

private:
	Ui::AssetBrowser *m_ui;
	class QFileSystemModel* m_model;
	Lux::EditorClient* m_client;
};
