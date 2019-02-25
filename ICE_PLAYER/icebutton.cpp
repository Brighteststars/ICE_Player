#include "icebutton.h"



ICE_Ice_Button::ICE_Ice_Button(QWidget *parent)
    : QPushButton(parent)
{
    //setDown(false);

    //设置图标无焦点
    setFocusPolicy(Qt::NoFocus); //设置焦点策略

    //QWidgetResizeHandler *movewin = new QWidgetResizeHandler(this);
    //movewin->setMovingEnabled(true);
}

ICE_Ice_Button::~ICE_Ice_Button()
{

}

void ICE_Ice_Button::enterEvent(QEvent *event)
{
    if(pressedIcon.isNull())
    {
        if( isEnabled() && !focusIcon.isNull() )
            setIcon(focusIcon);
    }
    else
    {
        if(isPlayState)
        {
            if(isEnabled())
                setIcon(focusIcon);
        }
        else
        {
            if(isEnabled() && !pressedIcon.isNull())
                setIcon(pressedIcon);
        }

    }

}

void ICE_Ice_Button::leaveEvent(QEvent *event)
{
    if(pressedIcon.isNull())
    {
        if( isEnabled() )
            setIcon(normalIcon);
    }
    else
    {
        if(isPlayState)
        {
            if(isEnabled())
                setIcon(normalIcon);
        }
        else{
            if(isEnabled())
                setIcon(pauseIcon);
        }


    }

}


void ICE_Ice_Button::mousePressEvent(QMouseEvent *event)
{
    if (isEnabled() && !pressedIcon.isNull())
    {
        if(isPlayState)
        {
            setIcon(pressedIcon);
            isPlayState = false;
        }
        else
        {
            setIcon(focusIcon);
            isPlayState = true;
        }

    }
    QPushButton::mousePressEvent(event);
}

void ICE_Ice_Button::mouseReleaseEvent(QMouseEvent *event)
{
    /*if( isEnabled() && focusIcon.isNull() )
        setIcon(focusIcon);  */
    QPushButton::mouseReleaseEvent(event);
}

void ICE_Ice_Button::ICE_Set_Button_Icons(const QIcon &normal, const QIcon &focus, const QIcon &pressed,
                                          const QIcon &pause)
{
    isPlayState = true;
    normalIcon = normal;
    focusIcon = focus;
    pressedIcon = pressed;
    pauseIcon = pause;
    setIcon(normalIcon);
}

void ICE_Ice_Button::setPlayIcon()
{
    setIcon(pauseIcon);
}

void ICE_Ice_Button::setPlayState()
{
    isPlayState = false;
}

//void ICE_Ice_Button::setPauseIcon()
//{
//    setIcon(normalIcon);
//}
