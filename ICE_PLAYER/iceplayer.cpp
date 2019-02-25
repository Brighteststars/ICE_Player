#include "iceplayer.h"
#include "ui_iceplayer.h"
#include "icebutton.h" //QPushButton
#include "icevolbutton.h"
#include "nofocusdelegate.h"


IcePlayer::IcePlayer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IcePlayer)
{
    ui->setupUi(this);

    ice_init_ui();
	ice_init_player();
    ice_init_connections();
    ice_init_menu_actions();
    
    //"D:/QtProjects/build-ICE_PLAYER-Desktop_Qt_5_6_2_MSVC2013_32bit-Debug/debug" QString iceDir
    iceDir = QCoreApplication::applicationDirPath();
    qDebug() << iceDir;

    ice_read_list();
}

IcePlayer::~IcePlayer()
{
    delete ui;
}

void IcePlayer::ice_init_ui()

{
    ui->picLabel->setScaledContents(true);
    ui->picLabel->setPixmap(QPixmap(":/Resources/default_album.jpg"));

//    ui->volBtn->ICE_Set_Volume(100);

    this->setWindowIcon(QIcon(":/Resources/logo.ico")); //设置窗口图标

    //设置图标
    QIcon icon_play,icon_play_focus,icon_pause,icon_pause_focus;
    icon_play.addFile(QStringLiteral(":/Resources/playBtn1.png"), QSize(), QIcon::Normal, QIcon::Off);
    icon_play_focus.addFile(QStringLiteral(":/Resources/playBtn2.png"), QSize(), QIcon::Normal, QIcon::Off);
    icon_pause.addFile(QStringLiteral(":/Resources/pauseIcon.png"));
    icon_pause_focus.addFile(QStringLiteral(":/Resources/pauseIconFocus.png"));
    ui->playBtn->ICE_Set_Button_Icons(icon_play,icon_play_focus,icon_pause_focus,icon_pause);

    QIcon icon_min,icon_min_focus;
    icon_min.addFile(QStringLiteral(":/Resources/minBtn.png"));
    icon_min_focus.addFile(QStringLiteral(":/Resources/minBtnFocus.png"));
    ui->minBtn->ICE_Set_Button_Icons(icon_min,icon_min_focus);

    QIcon icon_logo,icon_logo_focus;
    icon_logo.addFile(QStringLiteral(":/Resources/topLeftLogoBtn.png"));
    icon_logo.addFile(QStringLiteral(":/Resources/topLeftLogoBtn2.png"));
    ui->logoBtn->ICE_Set_Button_Icons(icon_logo,icon_logo_focus);

    QIcon icon_mini,icon_mini_focus;
    icon_mini.addFile(QStringLiteral(":/Resources/miniBtn.png"));
    icon_mini_focus.addFile(QStringLiteral(":/Resources/miniBtn2.png"));
    ui->miniBtn->ICE_Set_Button_Icons(icon_mini,icon_mini_focus);

    QIcon icon_exit,icon_exit_focus;
    icon_exit.addFile(QStringLiteral(":/Resources/exitBtn.png"));
    icon_exit_focus.addFile(QStringLiteral(":/Resources/exitBtn2.png"));
    ui->exitBtn->ICE_Set_Button_Icons(icon_exit,icon_exit_focus);

    QIcon icon_add,icon_add_focus;
    icon_add.addFile(QStringLiteral(":/Resources/addBtn.png"));
    icon_add_focus.addFile(QStringLiteral(":/Resources/addBtn2.png"));
    ui->addBtn->ICE_Set_Button_Icons(icon_add,icon_add_focus);

    QIcon icon_lyric,icon_lyric_focus;
    icon_lyric.addFile(QStringLiteral(":/Resources/lyric.png"));
    icon_lyric_focus.addFile(QStringLiteral(":/Resources/lyricBtnFocus.png"));
    ui->lyricBtn->ICE_Set_Button_Icons(icon_lyric,icon_lyric_focus);

    QIcon icon_last,icon_last_focus;
    icon_last.addFile(QStringLiteral(":/Resources/lastBtn.png"));
    icon_last_focus.addFile(QStringLiteral(":/Resources/lastBtn2.png"));
    ui->lastBtn->ICE_Set_Button_Icons(icon_last,icon_last_focus);

    QIcon icon_next,icon_next_focus;
    icon_next.addFile(QStringLiteral(":/Resources/nextBtn.png"));
    icon_next_focus.addFile(QStringLiteral(":/Resources/nextBtn2.png"));
    ui->nextBtn->ICE_Set_Button_Icons(icon_next,icon_next_focus);

    QIcon icon_mode,icon_mode_focus;
    icon_mode.addFile(QStringLiteral(":/Resources/playMode.png"));
    icon_mode_focus.addFile(QStringLiteral(":/Resources/playMode2.png"));
    ui->modeBtn->ICE_Set_Button_Icons(icon_mode,icon_mode_focus);

    //设置音乐信息和字体颜色
    QColor fontcolor(1, 149, 255);
    QPalette fontPalette;
    fontPalette.setColor(QPalette::WindowText,fontcolor);
    ui->nameLabel->setPalette(fontPalette);
    ui->musicianLabel->setPalette(fontPalette);
    ui->albumLabel->setPalette(fontPalette);

    QColor timeColor(106, 182, 240);
    QPalette timePalette;
    timePalette.setColor(QPalette::WindowText,timeColor);
    ui->timeLabel->setPalette(timePalette);

    ui->nameLabel->setFont(QFont(QString::fromLocal8Bit("微软雅黑"),12));
    QFont otherFont(QString::fromLocal8Bit("微软雅黑"),9);
    ui->musicianLabel->setFont(otherFont);
    ui->albumLabel->setFont(otherFont);
    ui->timeLabel->setFont(otherFont);

    ui->playlistTable->setItemDelegate(new NoFocusDelegate());

    if(ui->playlistTable->columnCount() < 1)
        ui->playlistTable->setColumnCount(2);
    QTableWidgetItem *item = new QTableWidgetItem();
    ui->playlistTable->setHorizontalHeaderItem(0,item);



    //设置列宽
    ui->playlistTable->setColumnWidth(0,300);
    ui->playlistTable->setColumnWidth(1,50);


    //禁止编辑单元格内容
    ui->playlistTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //选中一行
    ui->playlistTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    //去除水平滚动条
    ui->playlistTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //垂直滚动条按想移动
    ui->playlistTable->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
    //去除水平表头
    ui->playlistTable->horizontalHeader()->setHidden(true);
    ui->playlistTable->horizontalHeader()->setEnabled(false);
    //去除竖直表头
    ui->playlistTable->verticalHeader()->setHidden(true);
    ui->playlistTable->verticalHeader()->setEnabled(false);

    //设置无边框
    ui->playlistTable->setFrameShape(QFrame::NoFrame);
    //设置无网格
    ui->playlistTable->setShowGrid(false);
    //设置右键菜单
    ui->playlistTable->setContextMenuPolicy(Qt::CustomContextMenu);
    //设置背景颜色
    QPalette pal;
    pal.setBrush(QPalette::Base,QBrush(QColor(255,255,255)));
    ui->playlistTable->setPalette(pal);
    //设置竖直滚动条样式
    ui->playlistTable->setStyleSheet("QScrollBar{background:transparent; width: 5px;}"
            "QScrollBar::handle{background:lightgray; border:2px solid transparent; border-radius:5px;}"
            "QScrollBar::handle:hover{background:gray;}"
            "QScrollBar::sub-line{background:transparent;}"
            "QScrollBar::add-line{background:transparent;}");
    //使拖动操作生效
    ui->playlistTable->setAcceptDrops(true);
    setAcceptDrops(true);



    //去除标题栏
    this->setWindowFlags(Qt::FramelessWindowHint);
    //半透明
    this->setWindowOpacity(0.9); //设置window不透明性



    //设置关于窗体为圆角

    QBitmap bmp(this->size()); //位图

    bmp.fill(); //位图填充白色

    QPainter p(&bmp);

    p.setPen(Qt::NoPen);

    p.setBrush(Qt::black);

    p.drawRoundedRect(bmp.rect(),6,6);

    setMask(bmp);




}

void IcePlayer::ice_init_player()
{
    mediaPlayer = new QMediaPlayer(this);
    mediaList = new QMediaPlaylist(this);
    mediaPlayer->setPlaylist(mediaList);
    currentIndex = 0;
    playMode = ICE_Play_Mode::SINGLE;

    mediaList->setPlaybackMode(QMediaPlaylist::CurrentItemOnce);

    firstClicked = true;

}

void IcePlayer::ice_init_menu_actions()
{
    modeSingle = new QAction(QString::fromLocal8Bit("单曲播放"),this);
    modeListCircle = new QAction(QString::fromLocal8Bit("列表循环"),this);
    modeSingleCircle = new QAction(QString::fromLocal8Bit("单曲循环"),this);
    modeRandom = new QAction(QString::fromLocal8Bit("随机播放"),this);

    modeSingle->setCheckable(true);
    modeListCircle->setCheckable(true);
    modeSingleCircle->setCheckable(true);
    modeRandom->setCheckable(true);

    connect(modeSingle,SIGNAL(triggered(bool)),this,SLOT(ice_set_play_mode()));
    connect(modeListCircle,SIGNAL(triggered(bool)),this,SLOT(ice_set_play_mode()));
    connect(modeSingleCircle,SIGNAL(triggered(bool)),this,SLOT(ice_set_play_mode()));
    connect(modeRandom,SIGNAL(triggered(bool)),this,SLOT(ice_set_play_mode()));


    modeActionGroup = new QActionGroup(this);
    modeActionGroup->addAction(modeSingle);
    modeActionGroup->addAction(modeListCircle);
    modeActionGroup->addAction(modeSingleCircle);
    modeActionGroup->addAction(modeRandom);

    playModeMenu = new QMenu(ui->modeBtn);
    playModeMenu->addActions(modeActionGroup->actions());
    playModeMenu->setStyleSheet(
                "QMenu{padding:5px;background:white;border:1px solid gray;}"
                "QMenu::item{padding:0px 40px 0px 30px;height:25px;}"
                "QMenu::item:selected:enabled{background:#0096ff;color:white;}"
                "QMenu::item:selected:!enabled{background:transparent");





    contextMenuLess = new QMenu(ui->playlistTable);
    contextMenuMore = new QMenu(ui->playlistTable);

    addMusic = new QAction(QString::fromLocal8Bit("添加歌曲"),this);
    addFileDiv = new QAction(QString::fromLocal8Bit("添加目录"),this);
    removeCurr = new QAction(QString::fromLocal8Bit("移除本曲"),this);
    removeAll = new QAction(QString::fromLocal8Bit("移除所有"),this);


    connect(addMusic, SIGNAL(triggered()), this, SLOT(ice_open_music()));
    connect(addFileDiv, SIGNAL(triggered()), this, SLOT(ice_open_dir()));
    connect(removeCurr, SIGNAL(triggered()), this, SLOT(ice_remove_current_music()));
    connect(removeAll, SIGNAL(triggered()), this, SLOT(ice_clear_list()));



    contextMenuLess->addAction(addMusic);
    contextMenuLess->addAction(addFileDiv);
    contextMenuLess->addSeparator();
    contextMenuLess->addAction(removeAll);

    contextMenuMore->addAction(addMusic);
    contextMenuMore->addAction(addFileDiv);
    contextMenuMore->addSeparator();
    contextMenuMore->addAction(removeCurr);
    contextMenuMore->addAction(removeAll);

    contextMenuMore->setStyleSheet(
                "QMenu{padding:5px;background:white;border:1px solid gray;}"
                "QMenu::item{padding:0px 40px 0px 30px;height:25px;}"
                "QMenu::item:selected::enabled{background:#0096ff;color:white;}"
                "QMenu::item:selected:!enabled{background:transparent;}"
                "QMenu::separator{height:1px;background:lightgray;margin:5px 0px 5px 0px;}");


    contextMenuLess->setStyleSheet(
            "QMenu{padding:5px;background:white;border:1px solid gray;}"
            "QMenu::item{padding:0px 40px 0px 30px;height:25px;}"
            "QMenu::item:selected:enabled{background:#0096ff;color:white;}"
            "QMenu::item:selected:!enabled{background:transparent;}"
            "QMenu::separator{height:1px;background:lightgray;margin:5px 0px 5px 0px;}");



}

void IcePlayer::ice_init_connections()
{
    connect(mediaPlayer,SIGNAL(stateChanged(QMediaPlayer::State)),this,SLOT(ice_update_state(QMediaPlayer::State)));
    connect(mediaPlayer,SIGNAL(metaDataChanged()),this,SLOT(ice_update_meta_data()));
    connect(mediaPlayer,SIGNAL(durationChanged(qint64)),this,SLOT(ice_update_duration(qint64)));
    connect(mediaPlayer,SIGNAL(positionChanged(qint64)),this,SLOT(ice_update_position(qint64)));

    connect(ui->minBtn,SIGNAL(clicked(bool)),this,SLOT(showMinimized()));
    connect(ui->addBtn,SIGNAL(clicked(bool)),this,SLOT(ice_open_music()));
    connect(ui->playBtn,SIGNAL(clicked(bool)),this,SLOT(ice_play_button_clicked()));
    connect(ui->exitBtn,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(ui->modeBtn,SIGNAL(clicked(bool)),this,SLOT(ice_mode_button_clicked()));
    connect(ui->nextBtn,SIGNAL(clicked(bool)),this,SLOT(ice_next_button_clicked()));
    connect(ui->lastBtn,SIGNAL(clicked(bool)),this,SLOT(ice_last_button_clicked()));


    connect(ui->playlistTable,SIGNAL(cellDoubleClicked(int,int)),this,SLOT(ice_playlisttable_cell_double_clicked(int,int)));
    connect(ui->playlistTable,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(ice_playlisttable_menu_requested(QPoint)));


}


//添加音乐
void IcePlayer::ice_open_music()
{
    QStringList fileList = QFileDialog::getOpenFileNames(this,QString::fromLocal8Bit("添加音乐"),QString(),QString("MP3 (*.mp3)"));
    ice_add_list(fileList);
}



void IcePlayer::ice_add_list(QStringList list)
{

    foreach(QString fileName,list)
    {
        if(playList.contains(fileName))
            continue;
        playList.append(fileName);


        mediaList->addMedia(QUrl::fromLocalFile(fileName));
        ui->playlistTable->insertRow(ui->playlistTable->rowCount());

        for(int i = 0;i < ui->playlistTable->columnCount();i++){
            QTableWidgetItem *item  = new QTableWidgetItem;
            item->setFont(QFont(QString::fromLocal8Bit("微软雅黑"), 10));

            ui->playlistTable->setItem(ui->playlistTable->rowCount() - 1,i,item);

        }
        ui->playlistTable->item(ui->playlistTable->rowCount() - 1,0)->setText(QFileInfo(fileName).baseName());

    }
    ice_color_table();
    ice_write_list();
}


void IcePlayer::ice_color_table()
{
    for (int i = 0; i < ui->playlistTable->rowCount(); i++){
            for (int j = 0; j < ui->playlistTable->columnCount(); j++){
                QTableWidgetItem *item = ui->playlistTable->item(i, j);
                if (item){
                    const QColor color = QColor(255, 255, 255);
                    item->setBackgroundColor(color);
                }
            }
            if (i % 2 == 0){
                for (int j = 0; j < ui->playlistTable->columnCount(); j++){
                    QTableWidgetItem *item = ui->playlistTable->item(i, j);
                    if (item){
                        const QColor color = QColor(213, 228, 242);
                        item->setBackgroundColor(color);
                    }
                }
            }
        }
}

void IcePlayer::ice_write_list()
{
    //在路径"D:/QtProjects/build-ICE_PLAYER-Desktop_Qt_5_6_2_MSVC2013_32bit-Debug/debug"下创建IceList.ilst文件
    QFile text(iceDir + "/IceList.ilst");
    QStringList outList = playList;

    if(text.open(QIODevice::WriteOnly))
    {
        QDataStream out(&text);
        out.setVersion(QDataStream::Qt_5_2);
        out << outList;
        text.close();
    }

}

void IcePlayer::ice_read_list()
{
    QFile text(iceDir + "/IceList.ilst");
    QStringList inList;

    if(text.open(QIODevice::ReadOnly))
    {
        QDataStream in(&text);
        in.setVersion(QDataStream::Qt_5_2);
        in >> inList;
        ice_add_list(inList);
        text.close();
    }
}


void IcePlayer::ice_playlisttable_cell_double_clicked(int row,int)
{
    QFile file(playList.at(row));
    if(!file.open(QIODevice::ReadOnly))
    {
        ui->playlistTable->item(row,1)->setText(QString::fromLocal8Bit("失效"));
        return;

    }
    file.close();
    mediaList->setCurrentIndex(row);
    mediaPlayer->play();
    ui->playlistTable->item(row,1)->setText(QString::fromUtf8(""));
    ui->playBtn->setPlayIcon();
}

void IcePlayer::ice_playlisttable_menu_requested(const QPoint &pos)
{
    if(ui->playlistTable->itemAt(pos))
    {
        currentIndex = ui->playlistTable->rowAt(pos.y());
        contextMenuMore->exec(QCursor::pos());
    }
    else
        contextMenuLess->exec(QCursor::pos());
}

void IcePlayer::ice_remove_current_music()
{
    playList.removeAt(currentIndex);
    ui->playlistTable->removeRow(currentIndex);
    mediaList->removeMedia(currentIndex);

    ice_color_table();
}

void IcePlayer::ice_clear_list()
{
    mediaPlayer->stop();
    playList.clear();
    mediaList->clear();
    while(ui->playlistTable->rowCount())
        ui->playlistTable->removeRow(0);

    ui->timeLabel->setText(tr("00:00"));
    ui->nameLabel->setText(tr("Name"));
    ui->musicianLabel->setText(tr("Musician"));
    ui->albumLabel->setText(tr("Album"));

}

void IcePlayer::ice_play_button_clicked()
{
    if(mediaPlayer->state() == QMediaPlayer::PausedState)
        mediaPlayer->play();
    else
        mediaPlayer->pause();

}

void IcePlayer::ice_mode_button_clicked()
{
    playModeMenu->exec(QCursor::pos());
}

void IcePlayer::ice_next_button_clicked()
{
    mediaList->setPlaybackMode(QMediaPlaylist::Loop);

    if(mediaList->currentIndex() != mediaList->nextIndex())
        mediaList->setCurrentIndex(mediaList->nextIndex());
    else if(mediaList->currentIndex() != mediaList->previousIndex())
        mediaList->setCurrentIndex(mediaList->previousIndex());

    mediaPlayer->play();

}

void IcePlayer::ice_last_button_clicked()
{
    mediaList->setPlaybackMode(QMediaPlaylist::Loop);
    if(mediaList->currentIndex() != mediaList->previousIndex())
        mediaList->setCurrentIndex(mediaList->previousIndex());


    mediaPlayer->play();

}

void IcePlayer::ice_update_meta_data()
{
    ui->nameLabel->setText(mediaPlayer->metaData(QMediaMetaData::Title).toString());
    ui->musicianLabel->setText(mediaPlayer->metaData(QMediaMetaData::Author).toString());
    ui->albumLabel->setText(mediaPlayer->metaData(QMediaMetaData::AlbumTitle).toString());

    if(ui->nameLabel->text() == "")
        ui->nameLabel->setText(QString::fromLocal8Bit("未知歌曲"));
    if(ui->musicianLabel->text() == "")
        ui->musicianLabel->setText(QString::fromLocal8Bit("未知音乐家"));
    if(ui->albumLabel->text() == "")
        ui->albumLabel->setText(QString::fromLocal8Bit("未知专辑"));

    if(ui->playlistTable->rowCount() == 0)
    {
        ui->timeLabel->setText(tr("00:00"));
        ui->nameLabel->setText(tr("Name"));
        ui->musicianLabel->setText("Musician");
        ui->albumLabel->setText("Album");
    }
}


void IcePlayer::ice_update_state(QMediaPlayer::State state)
{

//    if(firstClicked)
//    {
//        if(state == QMediaPlayer::PlayingState)
//            ui->playBtn->setPlayIcon();
//        firstClicked = false;
//        ui->playBtn->setPlayState();
//    }
    if(state == QMediaPlayer::PlayingState)
    {
//        ui->playBtn->setPlayIcon();

        ui->playBtn->setPlayState();
    }


}

void IcePlayer::ice_update_duration(qint64 duration)
{
    ui->playSlider->setRange(0,duration);
    ui->playSlider->setEnabled(duration > 0);
    ui->playSlider->setPageStep(duration / 10);
}

void IcePlayer::ice_update_position(qint64 position)
{
    if(!ui->playSlider->isSliderDown()) //如果滑块没有按下
        ui->playSlider->setValue(position);

    qint64 total_time_value = mediaPlayer->duration();
    QTime total_time(0,(total_time_value / 60000)%60,(total_time_value/1000)%60);

    QTime current_time(0,(position/60000)%60,(position/1000)%60);

    ui->timeLabel->setText(current_time.toString(tr("mm::ss")));

}

void IcePlayer::ice_set_play_mode()
{
    if(modeSingle->isChecked())
    {
        playMode = ICE_Play_Mode::SINGLE;
        mediaList->setPlaybackMode(QMediaPlaylist::CurrentItemOnce);

    }
    else if(modeListCircle->isChecked())
    {
        playMode= ICE_Play_Mode::LISTCIRCLE;
        mediaList->setPlaybackMode(QMediaPlaylist::Loop);
    }
    else if(modeSingleCircle->isChecked())
    {
        playMode = ICE_Play_Mode::SINGLECIRCLE;
        mediaList->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    }
    else
    {
        playMode = ICE_Play_Mode::RANDOM;
        mediaList->setPlaybackMode(QMediaPlaylist::Random);
    }
}


void IcePlayer::mousePressEvent(QMouseEvent *event)
{
    mousePoint = event->pos();
    isMousePressed = true;
    event->accept();
}

void IcePlayer::mouseMoveEvent(QMouseEvent *event)
{
    if(isMousePressed)
    {
        QPoint curMousePoint = event->globalPos() - mousePoint;
        move(curMousePoint);
    }
    event->accept();
}

void IcePlayer::mouseReleaseEvent(QMouseEvent *event)
{
    isMousePressed = false;
    event->accept();
}




void IcePlayer::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    painter.drawPixmap(0,0,QPixmap(":/Resources/background.png"));


}
