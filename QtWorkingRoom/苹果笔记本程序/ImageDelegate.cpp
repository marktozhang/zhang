#include "ImageDelegate.h"

ImageDelegate::ImageDelegate(QObject *parent) :
    QStyledItemDelegate(parent)
{
}

void ImageDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QPixmap pixmap=index.data(Qt::DisplayRole).value<QPixmap>();
   /* if(index.data(Qt::DisplayRole).canConvert<QPixmap>())
    {
         QPixmap pix = index.data(Qt::DisplayRole).value<QPixmap>();
         painter->drawPixmap(option.rect,pix);
    }*/
    //QStyledItemDelegate::paint(painter,option,index);
    painter->drawPixmap(option.rect,pixmap);
    qDebug()<<"委托2";
/*
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
    painter->drawText(option.rect,Qt::TextWrapAnywhere,value);*/
}

QWidget *ImageDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QLabel * label=new QLabel(parent);
    return label;
}

void ImageDelegate::setEditorData(QWidget *Imagedelegate, const QModelIndex &index) const
{
    QLabel * label=static_cast<QLabel*>(Imagedelegate);
    QPixmap pixmap=index.data(Qt::DisplayRole).value<QPixmap>();
    label->setPixmap(pixmap);

}

void ImageDelegate::setModelData(QWidget *Imagedelegate, QAbstractItemModel *model, const QModelIndex &index) const
{
    /*GetImageWidget *newTextEdit= static_cast<GetImageWidget*>(Imagedelegate);
    QImage image(newTextEdit->image);
    QPixmap pixmap=QPixmap::fromImage(image);
    model->setData(index, QVariant::fromValue<QPixmap>(pixmap), Qt::DisplayRole);*/
}
void ImageDelegate::updateEditorGeometry(QWidget *Imagedelegate, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Imagedelegate->setGeometry(option.rect);
}
