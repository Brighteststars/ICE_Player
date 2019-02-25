/********************************************************************************
** Form generated from reading UI file 'iceplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICEPLAYER_H
#define UI_ICEPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "icebutton.h"
#include "icelabel.h"
#include "icevolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_IcePlayer
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    ICE_Ice_Button *logoBtn;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    ICE_Ice_Button *miniBtn;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    ICE_Ice_Button *minBtn;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    ICE_Ice_Button *exitBtn;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *picLabel;
    QVBoxLayout *verticalLayout_5;
    IceLabel *nameLabel;
    QLabel *musicianLabel;
    QLabel *albumLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QSlider *playSlider;
    QLabel *timeLabel;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    ICE_Ice_Button *addBtn;
    ICE_Ice_Button *lyricBtn;
    ICE_Ice_Button *lastBtn;
    ICE_Ice_Button *playBtn;
    ICE_Ice_Button *nextBtn;
    ICE_Ice_Button *modeBtn;
    ICE_Vol_Button *volBtn;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *playlistTable;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *IcePlayer)
    {
        if (IcePlayer->objectName().isEmpty())
            IcePlayer->setObjectName(QStringLiteral("IcePlayer"));
        IcePlayer->resize(390, 590);
        IcePlayer->setMinimumSize(QSize(390, 590));
        IcePlayer->setMaximumSize(QSize(390, 590));
        IcePlayer->setStyleSheet(QStringLiteral(""));
        verticalLayout_4 = new QVBoxLayout(IcePlayer);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        logoBtn = new ICE_Ice_Button(IcePlayer);
        logoBtn->setObjectName(QStringLiteral("logoBtn"));
        logoBtn->setMinimumSize(QSize(120, 48));
        logoBtn->setMaximumSize(QSize(120, 48));
        logoBtn->setFocusPolicy(Qt::NoFocus);
        logoBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgba(255, 255, 255,0);\n"
"border-style:solid;\n"
"border-width:0px;\n"
"}"));
        logoBtn->setIconSize(QSize(120, 48));
        logoBtn->setFlat(true);

        horizontalLayout_3->addWidget(logoBtn);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        miniBtn = new ICE_Ice_Button(IcePlayer);
        miniBtn->setObjectName(QStringLiteral("miniBtn"));
        miniBtn->setMinimumSize(QSize(29, 31));
        miniBtn->setMaximumSize(QSize(29, 31));
        miniBtn->setFocusPolicy(Qt::NoFocus);
        miniBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgba(255, 255, 255,0);\n"
"border-style:solid;\n"
"border-width:0px;\n"
"}"));
        miniBtn->setIconSize(QSize(20, 20));
        miniBtn->setFlat(true);

        horizontalLayout->addWidget(miniBtn);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        minBtn = new ICE_Ice_Button(IcePlayer);
        minBtn->setObjectName(QStringLiteral("minBtn"));
        minBtn->setMinimumSize(QSize(29, 31));
        minBtn->setMaximumSize(QSize(29, 31));
        minBtn->setFocusPolicy(Qt::NoFocus);
        minBtn->setIconSize(QSize(20, 20));
        minBtn->setFlat(true);

        verticalLayout_2->addWidget(minBtn);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        exitBtn = new ICE_Ice_Button(IcePlayer);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setMinimumSize(QSize(29, 31));
        exitBtn->setMaximumSize(QSize(29, 31));
        exitBtn->setFocusPolicy(Qt::NoFocus);
        exitBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgba(255, 255, 255,0);\n"
"border-style:solid;\n"
"border-width:0px;\n"
"}"));
        exitBtn->setIconSize(QSize(20, 20));
        exitBtn->setFlat(true);

        verticalLayout_3->addWidget(exitBtn);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(31, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        picLabel = new QLabel(IcePlayer);
        picLabel->setObjectName(QStringLiteral("picLabel"));
        picLabel->setMinimumSize(QSize(100, 100));
        picLabel->setMaximumSize(QSize(100, 100));

        horizontalLayout_4->addWidget(picLabel);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        nameLabel = new IceLabel(IcePlayer);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(220, 20));
        nameLabel->setMaximumSize(QSize(220, 22));

        verticalLayout_5->addWidget(nameLabel);

        musicianLabel = new QLabel(IcePlayer);
        musicianLabel->setObjectName(QStringLiteral("musicianLabel"));
        musicianLabel->setMinimumSize(QSize(220, 15));
        musicianLabel->setMaximumSize(QSize(220, 15));

        verticalLayout_5->addWidget(musicianLabel);

        albumLabel = new QLabel(IcePlayer);
        albumLabel->setObjectName(QStringLiteral("albumLabel"));
        albumLabel->setMaximumSize(QSize(220, 15));

        verticalLayout_5->addWidget(albumLabel);


        horizontalLayout_4->addLayout(verticalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(18, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(67, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        playSlider = new QSlider(IcePlayer);
        playSlider->setObjectName(QStringLiteral("playSlider"));
        playSlider->setMinimumSize(QSize(290, 20));
        playSlider->setMaximumSize(QSize(290, 20));
        playSlider->setStyleSheet(QLatin1String("QSlider::groove::horizontal{\n"
"border:0px;\n"
"height:4px;\n"
"}\n"
"QSlider::sub-page:horizontal{background:#0096ff;}\n"
"QSlider::add-page::horizontal{background:lightgray;}\n"
"QSlider::handle:horizontal{background:white;width:10px;border:#51b5fb 10px;border-radius:5px;margin:-3px 0px -3px 0px;}"));
        playSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(playSlider);

        timeLabel = new QLabel(IcePlayer);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setMinimumSize(QSize(51, 16));
        timeLabel->setMaximumSize(QSize(51, 16));

        horizontalLayout_5->addWidget(timeLabel);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(9);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(10, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        addBtn = new ICE_Ice_Button(IcePlayer);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setMinimumSize(QSize(31, 31));
        addBtn->setMaximumSize(QSize(31, 31));
        addBtn->setFocusPolicy(Qt::NoFocus);
        addBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgba(255, 255, 255,0);\n"
"border-style:solid;\n"
"border-width:0px;\n"
"}"));
        addBtn->setIconSize(QSize(25, 25));
        addBtn->setFlat(true);

        horizontalLayout_6->addWidget(addBtn);

        lyricBtn = new ICE_Ice_Button(IcePlayer);
        lyricBtn->setObjectName(QStringLiteral("lyricBtn"));
        lyricBtn->setMinimumSize(QSize(31, 31));
        lyricBtn->setMaximumSize(QSize(31, 31));
        lyricBtn->setFocusPolicy(Qt::NoFocus);
        lyricBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgba(255, 255, 255,0);\n"
"border-style:solid;\n"
"border-width:0px;\n"
"}"));
        lyricBtn->setIconSize(QSize(25, 25));
        lyricBtn->setFlat(true);

        horizontalLayout_6->addWidget(lyricBtn);

        lastBtn = new ICE_Ice_Button(IcePlayer);
        lastBtn->setObjectName(QStringLiteral("lastBtn"));
        lastBtn->setMinimumSize(QSize(41, 41));
        lastBtn->setMaximumSize(QSize(41, 41));
        lastBtn->setFocusPolicy(Qt::NoFocus);
        lastBtn->setIconSize(QSize(41, 41));
        lastBtn->setFlat(true);

        horizontalLayout_6->addWidget(lastBtn);

        playBtn = new ICE_Ice_Button(IcePlayer);
        playBtn->setObjectName(QStringLiteral("playBtn"));
        playBtn->setMinimumSize(QSize(61, 61));
        playBtn->setMaximumSize(QSize(61, 61));
        playBtn->setFocusPolicy(Qt::NoFocus);
        playBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgba(255, 255, 255,0);\n"
"border-style:solid;\n"
"border-width:0px;\n"
"}"));
        playBtn->setIconSize(QSize(60, 60));
        playBtn->setFlat(true);

        horizontalLayout_6->addWidget(playBtn);

        nextBtn = new ICE_Ice_Button(IcePlayer);
        nextBtn->setObjectName(QStringLiteral("nextBtn"));
        nextBtn->setMinimumSize(QSize(41, 41));
        nextBtn->setMaximumSize(QSize(41, 41));
        nextBtn->setFocusPolicy(Qt::NoFocus);
        nextBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgba(255, 255, 255,0);\n"
"border-style:solid;\n"
"border-width:0px;\n"
"}"));
        nextBtn->setIconSize(QSize(41, 41));
        nextBtn->setFlat(true);

        horizontalLayout_6->addWidget(nextBtn);

        modeBtn = new ICE_Ice_Button(IcePlayer);
        modeBtn->setObjectName(QStringLiteral("modeBtn"));
        modeBtn->setMinimumSize(QSize(31, 31));
        modeBtn->setMaximumSize(QSize(31, 31));
        modeBtn->setFocusPolicy(Qt::NoFocus);
        modeBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgba(255, 255, 255,0);\n"
"border-style:solid;\n"
"border-width:0px;\n"
"}"));
        modeBtn->setIconSize(QSize(25, 25));
        modeBtn->setFlat(true);

        horizontalLayout_6->addWidget(modeBtn);

        volBtn = new ICE_Vol_Button(IcePlayer);
        volBtn->setObjectName(QStringLiteral("volBtn"));
        volBtn->setMinimumSize(QSize(31, 31));
        volBtn->setMaximumSize(QSize(31, 31));

        horizontalLayout_6->addWidget(volBtn);

        horizontalSpacer_7 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(8, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        playlistTable = new QTableWidget(IcePlayer);
        playlistTable->setObjectName(QStringLiteral("playlistTable"));
        playlistTable->setMinimumSize(QSize(350, 320));
        playlistTable->setMaximumSize(QSize(350, 320));
        playlistTable->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_7->addWidget(playlistTable);

        horizontalSpacer_5 = new QSpacerItem(8, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalSpacer_4 = new QSpacerItem(17, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        retranslateUi(IcePlayer);

        QMetaObject::connectSlotsByName(IcePlayer);
    } // setupUi

    void retranslateUi(QWidget *IcePlayer)
    {
        IcePlayer->setWindowTitle(QApplication::translate("IcePlayer", "IcePlayer", 0));
        logoBtn->setText(QString());
        miniBtn->setText(QString());
        minBtn->setText(QString());
        exitBtn->setText(QString());
        picLabel->setText(QApplication::translate("IcePlayer", "TextLabel", 0));
        nameLabel->setText(QApplication::translate("IcePlayer", "Name", 0));
        musicianLabel->setText(QApplication::translate("IcePlayer", "Musician", 0));
        albumLabel->setText(QApplication::translate("IcePlayer", "Album", 0));
        timeLabel->setText(QApplication::translate("IcePlayer", "00:00", 0));
        addBtn->setText(QString());
        lyricBtn->setText(QString());
        lastBtn->setText(QString());
        playBtn->setText(QString());
        nextBtn->setText(QString());
        modeBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IcePlayer: public Ui_IcePlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICEPLAYER_H
