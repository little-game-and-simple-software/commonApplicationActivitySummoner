#通用应用程序界面文件生成器文档 
9/26/2020 6:43:42 PM 
构建
---------- 
#构建需要安装wxwidget这个开源图形库,本软件的开发未使用任何构建系统,

----------
# 截图： #

![](https://raw.githubusercontent.com/little-game-and-simple-software/commonApplicationActivitySummoner/master/Images/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE%202020-09-26%20190053.png)
----------

## 如果需要开发此软件，你需要到这个网站下载开发用的ide(IDE里面包括了wxwidget这个开源库,相当于配置好了开发环境,而且自带界面文件可视化编辑器)
[http://wxdsgn.sourceforge.net/](http://wxdsgn.sourceforge.net/)
，(安装时请选择完整安装，如果出现编译失败的问题，请重装ide，或者大佬也可以用命令行来调用gcc/g++编译器构建，我这里推荐一个构建工具scons是需要python的一个构建工具，著名开源游戏引擎godot就是用的这个软件构建的)

----------
# 此软件的用途 #

----------
## 通过这个软件对应用程序界面进行编辑，通过build功能，一键生成各种平台的应用程序界面文件，如安卓的activity.xml文件，javafx的界面xml文件，html的.html文件 ，一次编辑，导出各种平台的界面文件，节省劳动力，让前端设计师，ui界面设计师一次编辑，生成多个平台的文件，解决重复劳动的问题##

----------
# 简单来说就是一个生成器，用于解决反复编写静态界面代码的问题 #