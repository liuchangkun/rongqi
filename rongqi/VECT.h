#pragma once


#ifndef	  _VECT_H_    /*��ֹ���ذ���*/
#define    _VECT_H_   /*��ֹ���ذ���*/

 struct  Array   //�ṹ��Array 
{
	int  size;//��ǰ�����С
	int *data;//�洢���ݵ�ָ��(����)
	int maxsize;//����Ĭ�ϴ�С
	void(*constructor)(Array *pthis);//���캯��
	void(*add_value)(Array *pthis,int data);//�������,��Ԫ��
	void(*print)( Array *pthis);//��ӡ����������
	int(*get_array_size)(struct Array *pthis);//���������С
	int(*return_index_of_firstmatch)( Array *pthis, int data);//�������ݷ������ݵ��±�
	int(*return_index_value)( Array *pthis, int data);//����ָ���±������
	void(*descontructor)( Array *pthis);//�ͷ��ڴ�

};

 void _constructor(Array *pthis);//���캯��

  void _chushihua(Array *pthis);//��ʼ������

  void _add_value(Array *pthis,int data);//����µ�����

  void  _print(Array *pthis);//��ӡ����������

  int  _get_array_size(Array *pthis);//���������С

  int _return_index_of_firstmatch(Array *pthis,int data);//�������ݷ����±�;

  int _return_index_value(Array *pthis,int data);//�����±귵������

  void _descontructor(Array *pthis);//�ͷ��ڴ�

















#endif                     /*��ֹ���ذ���*/
