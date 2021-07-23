# LimitCaught
针对市面上的fiddler ,Charles（花瓶）等抓包工具,封装了对应的网络代理,实现防止抓包的功能

使用方法: 

1 . 导入   #import "LimitCaughtTool.h"



2 . //  可只针对 release 防抓包 , debug 模式下不禁止

#ifdef RELEASE

    // 禁止抓包

    [LimitCaughtTool disableHttpProxy];

#endif
