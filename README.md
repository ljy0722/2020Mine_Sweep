# 开发工具与项目管理

|   名称   |    工具     |
| :------: | :---------: |
| 版本控制 | Git, GitHub |
| 构建工具 |    qmake    |
| 编程语言 |   C++ 17    |
| 软件框架 |    MVVM     |
| 交流协作 |    钉钉     |
| 图形界面 |     Qt      |

# 分工

|  姓名  |                    工作                    |
| :----: | :----------------------------------------: |
| 孙嘉锴 | 分工，管理Git，搭建框架，写Comoon层与App层 |
| 陈崇轩 |           写ViewModel层与Model层           |
| 陆佳誉 |                  写View层                  |

# 构建方式

qmake:

```cmake
qmake.exe Mine_sweeping.pro -spec win32-msvc "CONFIG+=qtquickcompiler"
```

