# FileTransfer
Qt，线程池中通过TCP实现长连接在局域网下收发文件，接收端自带文件校验，但请注意本库不带补包，测试环境下目前暂未出现问题，IO不写爆的情况下没有出现丢文件的情况下不会出问题。

接口文件见TSG_Network_Client.h 和 TSG_Network_Sever.h，具体内容见头文件吧，注释写的挺细了
