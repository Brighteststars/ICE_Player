#include "nofocusdelegate.h"


void NoFocusDelegate::paint(QPainter* painter, const QStyleOptionViewItem & option, const QModelIndex &index) const //风格选择视图部件
{
    QStyleOptionViewItem itemOption(option);
    if (itemOption.state & QStyle::State_HasFocus) //如果QStyle::State state != 0,小部件有状态,
        itemOption.state = itemOption.state ^ QStyle::State_HasFocus; //QStyle::State_None


    //这种抽象的功能必须重新实现，如果你想提供自定义渲染。使用“画家”和“样式”选项来呈现项索引所指定的项。
    QStyledItemDelegate::paint(painter, itemOption, index);
}
