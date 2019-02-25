#include "icelabel.h"

IceLabel::IceLabel(QWidget *parent)
{
    ice_init();
}

IceLabel::~IceLabel()
{
    ICE_Stop();
}

void IceLabel::ICE_Set_Text(const QString &context, const int &ms)
{
    mContext = context;
    mMs = ms;
    if(mMs != 0)
    {
        if(mTimer == NULL)
        {
            mTimer = new QTimer(this);
            if(mTimer)
            {
                connect(mTimer,SIGNAL(timeout()),this,SLOT(ice_time_out()));
                mTimer->start(mMs);
            }
        }
    }
}

void IceLabel::ICE_Stop()
{
    if(mTimer)
    {
        if(mTimer->isActive())
        {
            mTimer->stop();
        }
        delete mTimer;
        mTimer = NULL;
    }
}

void IceLabel::ice_time_out()
{
    QString str = "";
    if(mPos >= mContext.count())
    {
        mPos = 0;
    }
    str = mContext.mid(mPos);
    setText(str);
    mPos++;
}

void IceLabel::ice_init(int ms)
{
    mContext = "";
    mTimer = NULL;
    mMs = ms;
    mPos = 0;
}
