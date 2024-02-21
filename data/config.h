#include <QIcon>
#include <QDir>
#ifndef CONFIG_H
#define CONFIG_H
//常量定义
//所有窗体的宽1080
const int App_width=600;
//所有窗体的高640
const int App_height=400;
//APP图标路径
const QString App_Icon_Path=":/drawable/app_icon.png";
//图标按钮的大小
const int Icon_Bar_width=30;
const int Icon_Bar_height=30;

//窗体的背景色
const QString Win_BackGround_Color="#e0ebeb";


//标题的字体大小
const int Title_Font_Size=18;
//输入框name的字体大小
const int Name_Input_Font_Size=12;
//输入框的字体大小
const int Input_Font_Size=12;


//项目路径


//文件路径
//set.json


    class Cfg : public QObject
{
    Q_OBJECT
public:
    explicit Cfg(QObject *parent = nullptr);

    //获得项目路径
    static QString GetProjectPath();
    QString LoadLocalConfig();

signals:

};
#endif // CONFIG_H
