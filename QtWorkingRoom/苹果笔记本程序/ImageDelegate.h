#ifndef IMAGEDELEGATE_H
#define IMAGEDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>
#include<QImage>
#include<QPixmap>
#include<QLabel>
#include<QPainter>
#include<QDebug>
class ImageDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit ImageDelegate(QObject *parent = 0);
    void paint(QPainter *painter, const QStyleOptionViewItem &option,
                     const QModelIndex &index) const Q_DECL_OVERRIDE;
    //创建编辑器
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
            const QModelIndex &index) const;
    //为编辑器设置数据
     void setEditorData(QWidget *editor, const QModelIndex &index) const;
    //将数据写入到模型
     void setModelData(QWidget *editor, QAbstractItemModel *model,
            const QModelIndex &index) const;
    //更新编辑器布局
     void updateEditorGeometry(QWidget *editor,
            const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

#endif // IMAGEDELEGATE_H
