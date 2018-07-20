项目说明：
Qt版本：Qt5.11.0 
编译器：msvc2015_64
目的：该项目用来测试Qt内加载CreoView(QAxWidget)控件

文件说明：
“.\CreoViewFile”  关于CreoView接口的相关说明文件；
“.\CreoViewFile\pviewlib.h” 由qt的dumpdoc.exe导出；
“.\CreoViewFile\CreoViewApi.html” 由函数QAxBase::generateDocumentation();获得；

信号与槽说明：
QObject::connect(ui.axWidget, SIGNAL(OnLoadComplete()), this, SLOT(OnLoadComplete()));
ui.axWidget为控件对象；"SIGNAL(OnLoadComplete())" 为控件内部信号函数，由moc生成；“SLOT(OnLoadComplete())” 为自定义槽函数
