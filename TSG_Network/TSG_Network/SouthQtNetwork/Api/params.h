#pragma once
//文件管理报错：
enum class FT_Warning {
	File_Not_Exist,	//文件不存在

	//------
	File_Agreement_Error,	//文件接收失败
	File_Head_Error,	//文件头错误
	File_End_Error,	//文件头错误
	Folder_Create_Error,	//文件夹创建失败
};
enum class FT_Info {
	Sending_file,	//发送文件中
	Send_file,		//发送文件成功
};