

#include "hal_relay.h"
#include "stm32f10x.h"

void RELAY_Init(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure; 	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE); //APB2����ʱ��ʹ��      
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);//����AFIO��ӳ�书��ʱ��    
    GPIO_InitStructure.GPIO_Pin = RELAY1 | RELAY2; //ѡ��˿ںţ�0~15��all��                        
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; //ѡ��IO�ӿڹ�����ʽ       
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; //����IO�ӿ��ٶȣ�2/10/50MHz��    
	GPIO_Init(RELAYPORT, &GPIO_InitStructure);

	//���뽫����JTAG���ܲ�����GPIOʹ��
	GPIO_PinRemapConfig(GPIO_Remap_SWJ_Disable, ENABLE);// �ı�ָ���ܽŵ�ӳ��,��ȫ����JTAG+SW-DP
	GPIO_ResetBits(RELAYPORT,RELAY1 | RELAY2); //��Ϊ�͵�ƽ��0�� ��ʼΪ�ؼ̵���							
}


void RELAY_1(unsigned char c){ //�̵����Ŀ��Ƴ���c=0�̵����ſ���c=1�̵������ϣ�
	GPIO_WriteBit(RELAYPORT,RELAY1,(BitAction)(c));//ͨ������ֵд��ӿ�
}

void RELAY_2(unsigned char c){ //�̵����Ŀ��Ƴ���c=0�̵����ſ���c=1�̵������ϣ�
	GPIO_WriteBit(RELAYPORT,RELAY2,(BitAction)(c));//ͨ������ֵд��ӿ�
}

