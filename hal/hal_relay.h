#ifndef __RELAY_H
#define __RELAY_H	 



#define RELAYPORT	GPIOA	                //����IO�ӿ�
#define RELAY1	    GPIO_Pin_14	            //����IO�ӿ�
#define RELAY2	    GPIO_Pin_13	            //����IO�ӿ�



void RELAY_Init(void);              //�̵�����ʼ��
void RELAY_1(unsigned char c);      //�̵�������1
void RELAY_2(unsigned char c);      //�̵�������2
		 				    
#endif
