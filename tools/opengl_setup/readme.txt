第一步，选择一个编译环境 
   现在 Windows 系统的主流编译环境有Visual Studio， Broland C++ Builder，
Dev-C++等，它们都是支持 OpenGL 的。但这里我们选择Visual Studio 2005 作
为学习OpenGL 的环境。 
第二步，安装GLUT 工具包 
   GLUT 不是OpenGL 所必须的，但它会给我们的学习带来一定的方便，推荐安
装。 
Windows 环境下的GLUT 下载地址：（大小约为150k） 
 
无法从以上地址下载的话请使用下面的连接: 
 
Windows 环境下安装GLUT 的步骤： 
1、将下载的压缩包解开，将得到5 个文件 
2、在“我的电脑”中搜索“gl.h”，并找到其所在文件夹（如果是
VisualStudio2005，则应该是其安装目录下面的“VC\PlatformSDK\include\gl
文件夹”）。把解压得到的glut.h 放到这个文件夹。 
3、把解压得到的glut.lib 和glut32.lib 放到静态函数库所在文件夹（如果是
VisualStudio2005，则应该是其安装目录下面的“VC\lib”文件夹）。 
4、把解压得到的glut.dll 和glut32.dll 放到操作系统目录下面的system32
文件夹内。（典型的位置为：C:\Windows\System32） 
第三步，建立一个OpenGL 工
这里以VisualStudio2005 为为例。
选择File->New->Project，然后选择Win32 Console Application，选择一个名
字，然后按OK。 
在谈出的对话框左边点Application Settings，找到 Empty project 并勾上，
选择Finish。 
然后向该工程添加一个代搜索码文件，取名为“OpenGL.c”，注意用.c 来作为文件
结尾。 
搞定了，就跟平时的工程没什么两样的。