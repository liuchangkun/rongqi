#pragma once


#ifndef	  _VECT_H_    /*防止多重包含*/
#define    _VECT_H_   /*防止多重包含*/

 struct  Array   //结构体Array 
{
	int  size;//当前数组大小
	int *data;//存储数据的指针(数组)
	int maxsize;//数组默认大小
	void(*constructor)(Array *pthis);//构造函数
	void(*add_value)(Array *pthis,int data);//添加数据,新元素
	void(*print)( Array *pthis);//打印出所有数据
	int(*get_array_size)(struct Array *pthis);//返回数组大小
	int(*return_index_of_firstmatch)( Array *pthis, int data);//根据数据返回数据的下标
	int(*return_index_value)( Array *pthis, int data);//返回指定下标的数据
	void(*descontructor)( Array *pthis);//释放内存

};

 void _constructor(Array *pthis);//构造函数

  void _chushihua(Array *pthis);//初始化函数

  void _add_value(Array *pthis,int data);//添加新的数据

  void  _print(Array *pthis);//打印出所有数据

  int  _get_array_size(Array *pthis);//返回数组大小

  int _return_index_of_firstmatch(Array *pthis,int data);//根据数据返回下标;

  int _return_index_value(Array *pthis,int data);//根据下标返回数据

  void _descontructor(Array *pthis);//释放内存

















#endif                     /*防止多重包含*/
