#include "textshow.h"
#pragma exetion_charator_set("utf_8");
#include<QDebug>

textshow::textshow(QObject *parent) :
    QStyledItemDelegate (parent)
{
    typeData =1;
}

void textshow::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{

    QPixmap pixmap=index.data(Qt::DisplayRole).value<QPixmap>();
    if(pixmap.isNull())
    {
        QString value = index.model()->data(index, Qt::EditRole).toString();
        QPen pen;

        if (option.state & QStyle::State_Selected ) {
            if( option.state & QStyle::State_HasFocus )
            {
                painter->fillRect(option.rect, option.palette.highlight());
                pen.setColor( Qt::white);
            }
            else
            {
                painter->fillRect(option.rect, option.palette.base() );
                pen.setColor( Qt::black );
            }
        }
        else
        {
            painter->fillRect(option.rect, option.palette.base() );
            pen.setColor( Qt::black );
        }
        painter->setPen(pen);
        painter->drawText(option.rect,Qt::TextWrapAnywhere,value);
    }
    else
    {
        QPixmap pixmap=index.data(Qt::DisplayRole).value<QPixmap>();
        painter->drawPixmap(option.rect,pixmap);
    }
}

//创建编辑器，当视图需要一个编辑器时，它通知委托来为被修改的项目提供一个编辑器部件
QWidget *textshow::createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                                       const QModelIndex &index) const
{
    //数据判断
    QPixmap pixmap=index.data(Qt::DisplayRole).value<QPixmap>();
    if(pixmap.isNull())
    {
        QTextEdit *editor = new QTextEdit(parent);
        editor->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        return editor;
    }
    else
    {
        QLabel * label=new QLabel(parent);
        return label;
    }
    QTextEdit *editor = new QTextEdit(parent);
    editor->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    return editor;
}


void textshow::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QPixmap pixmap=index.data(Qt::DisplayRole).value<QPixmap>();
    if(pixmap.isNull())
    {
        QString value = index.model()->data(index, Qt::EditRole).toString();
        QTextEdit *newTextEdit= static_cast<QTextEdit*>(editor);
        newTextEdit->setPlainText(value);
        return;
    }
    else
    {
        QLabel * label=static_cast<QLabel*>(editor);
        QPixmap pixmap=index.data(Qt::DisplayRole).value<QPixmap>();
        label->setPixmap(pixmap);
        return;
    }
    QString value = index.model()->data(index, Qt::EditRole).toString();
    QTextEdit *newTextEdit= static_cast<QTextEdit*>(editor);
    newTextEdit->setPlainText(value);

}
//函数在用户完成了输入之后，将数据存储到模型中
void textshow::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QPixmap pixmap=index.data(Qt::DisplayRole).value<QPixmap>();
    if(pixmap.isNull())
    {
        QTextEdit *newTextEdit= static_cast<QTextEdit*>(editor);
        QString value = newTextEdit->toPlainText();
        model->setData(index, value, Qt::EditRole);
        return;
    }
    return;
}
//QStyleOptionViewItem对象提供了几何布局相关的信息。
void textshow::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}








