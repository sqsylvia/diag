#ifndef __CDK_SCU_REG_H
#define __CDK_SCU_REG_H


#define CDK_SCU_REG_BASE			SOCLE_APB0_SCU

#define CDK_SCU_MPLLCON				0X0000
#define CDK_SCU_E0PLLCON			0X0004
#define CDK_SCU_E1PLLCON			0X0008
#define CDK_SCU_OSCCON				0X000C
#define CDK_SCU_MCLKEN				0X0010
#define CDK_SCU_ACLKEN				0X0014
#define CDK_SCU_MCLKDIV				0X0018
#define CDK_SCU_PWMCON				0X001C
#define CDK_SCU_SWRST				0X0020
#define CDK_SCU_REMAP				0X0024
#define CDK_SCU_DEVCON				0X0028
#define CDK_SCU_SDICON0				0X002C
#define CDK_SCU_SDICON1				0X0030
#define CDK_SCU_INFORM0				0X0034
#define CDK_SCU_INFORM1				0X0038
#define CDK_SCU_INFORM2				0X003C
#define CDK_SCU_INFORM3				0X0040
#define CDK_SCU_CID					0X0044

//CDK_SCU_MCLKDIV Bits
#define SCU_PLL_LOCK				0X00010000
#define SCU_CLK_RATIO_MASK			0X00000007
#define SCU_CLK_RATIO_1VS1			0X00000000
#define SCU_CLK_RATIO_2VS1			0X00000001
#define SCU_CLK_RATIO_3VS1			0X00000002
#define SCU_CLK_RATIO_4VS1			0X00000003
#define SCU_CLK_RATIO_8VS1			0X00000004


#endif	//__CDK_SCU_REG_H
