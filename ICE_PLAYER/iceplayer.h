#ifndef ICEPLAYER_H
#define ICEPLAYER_H

#include <QtWidgets>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QMediaMetaData>


namespace Ui {
class IcePlayer;
}

//枚举播放模式
enum ICE_Play_Mode{SINGLE,LISTCIRCLE,SINGLECIRCLE,RANDOM};

class IcePlayer : public QWidget
{
    Q_OBJECT

public:
    explicit IcePlayer(QWidget *parent = 0);
    ~IcePlayer();

protected:
    //重写鼠标事件，使窗体移动
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    //绘制窗体
    void paintEvent(QPaintEvent *event);

private slots:

    //添加mp3格式文件
    void  ice_open_music();

    //把现有播放类表写入列表文件
    void ice_write_list();

    //程序打开时读取播放列表文件
    void ice_read_list();

    //双击播放音乐
    void ice_playlisttable_cell_double_clicked(int row,int);

    //请求右键菜单
    void ice_playlisttable_menu_requested(const QPoint &pos);

    //删除指定行音乐
    void ice_remove_current_music();

    //清空播放列表
    void ice_clear_list();

    //设置各按钮单击事件，激活各按钮
    void ice_play_button_clicked();
    void ice_mode_button_clicked();
    void ice_next_button_clicked();
    void ice_last_button_clicked();

    //更新音乐信息
    void ice_update_meta_data();

    //更新播放状态
    void ice_update_state(QMediaPlayer::State state);

    //更新进度条
    void ice_update_duration(qint64 duration);

    //更新滑块,时间显示
    void ice_update_position(qint64 position);

    //设置播放模式
    void ice_set_play_mode();


private:

    //初始化主界面
    void ice_init_ui();


    //初始化播放模块
    void ice_init_player();


    //初始化菜单项
    void ice_init_menu_actions();

    //初始化信号-槽连接
    void ice_init_connections();

    //添加到播放列表
    void ice_add_list(QStringList list);


    //定制tablewidget外观
    void ice_color_table();




    //鼠标事件
    bool isMousePressed;
    QPoint mousePoint;

    Ui::IcePlayer *ui;

    QMediaPlayer *mediaPlayer;
    QMediaPlaylist *mediaList;


    QString iceDir;
    QStringList playList;

    QMenu *contextMenuMore;
    QMenu *contextMenuLess;
    QMenu *playModeMenu;

    QActionGroup *modeActionGroup;

    //enum ICE_Play_Mode{SINGLE,LISTCIRCLE,SINGLECIRCLE,RANDOM};
    QAction *modeSingle;
    QAction *modeListCircle;
    QAction *modeSingleCircle;
    QAction *modeRandom;

    QAction *removeAll;
    QAction *addMusic;
    QAction *addFileDiv;
    QAction *removeCurr;

    int currentIndex;
    int playMode;

    bool firstClicked;



};

#endif // ICEPLAYER_H
