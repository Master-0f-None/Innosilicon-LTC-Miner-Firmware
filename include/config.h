/******************************************************************************
 *
 * 文件名  ： config.h
 * 负责人  ： 彭鹏(pengp@innosilicon.com.cn)
 * 创建日期： 20171212
 * 版本号  ： v1.0
 * 文件描述： Innosilicon so库的配置
 * 版权说明： Copyright (c) 2000-2020 Innosilicon
 * 其    他： 无
 * 修改日志： 无
 *
 *******************************************************************************/
/*---------------------------------- 预处理区 ---------------------------------*/
#ifndef _CONFIG_H_
#define _CONFIG_H_

/************************************ 头文件 ***********************************/
#include <stdio.h>
#include <stdint.h>

/************************************ 宏定义 ***********************************/
/* log打印的最长行 */
#define INNO_CONFIG_LOG_LINE_BUF_SIZE           (512)

#define INNO_CONFIG_MAX_CHAIN_NUM               (8)
#define INNO_CONFIG_MAX_CHIP_NUM                (72)
#define INNO_CONFIG_MAX_JOB_LEN                 (92)
#define INNO_CONFIG_MAX_CMD_LENGTH              (256)


/* Ax芯片命令 */
#define CMD_BIST_START                          (0x01)
#define CMD_BIST_COLLECT                        (0x0b)
#define CMD_BIST_FIX                            (0x03)
#define CMD_RESET                               (0x04)
#define CMD_RESETBC                             (0x05)
#define CMD_WRITE_JOB                           (0x07)
#define CMD_READ_RESULT                         (0x08)
#define CMD_WRITE_REG                           (0x09)
#define CMD_READ_REG                            (0x0a)
#define CMD_POWER_ON                            (0x02)
#define CMD_POWER_OFF                           (0x06)
#define CMD_POWER_RESET                         (0x0c)

#define RESP_READ_REG                           (0x1a)




/* 第一个2由芯片数据手册得到,第二个2是由于芯片的数据单位为16bits(2Bytes) */
#define INNO_CONFIG_CMD_MAX_LEN                 (INNO_CONFIG_MAX_JOB_LEN + INNO_CONFIG_MAX_CHAIN_NUM * 2 * 2)
#define INNO_CONFIG_CMD_RST_MAX_LEN             (INNO_CONFIG_CMD_MAX_LEN)

/* 矿机配置 */
/* SPI */
#define INNO_CONFIG_SPI_DEFAULT_CS_LINE         (0)
#define INNO_CONFIG_SPI_DEFAULT_MODE            (SPI_MODE_1)
#define INNO_CONFIG_SPI_DEFAULT_SPEED           (1500000)
#define INNO_CONFIG_SPI_DEFAULT_BITS_PER_WORD   (8)
/* GPIO */
#define INNO_CONFIG_CHAIN0_POWER_EN_GPIO        (872)
#define INNO_CONFIG_CHAIN1_POWER_EN_GPIO        (873)
#define INNO_CONFIG_CHAIN2_POWER_EN_GPIO        (874)
#define INNO_CONFIG_CHAIN3_POWER_EN_GPIO        (875)
#define INNO_CONFIG_CHAIN4_POWER_EN_GPIO        (876)
#define INNO_CONFIG_CHAIN5_POWER_EN_GPIO        (877)
#define INNO_CONFIG_CHAIN6_POWER_EN_GPIO        (878)
#define INNO_CONFIG_CHAIN7_POWER_EN_GPIO        (879)
#define INNO_CONFIG_CHAIN0_START_EN_GPIO        (854)
#define INNO_CONFIG_CHAIN1_START_EN_GPIO        (856)
#define INNO_CONFIG_CHAIN2_START_EN_GPIO        (858)
#define INNO_CONFIG_CHAIN3_START_EN_GPIO        (860)
#define INNO_CONFIG_CHAIN4_START_EN_GPIO        (862)
#define INNO_CONFIG_CHAIN5_START_EN_GPIO        (864)
#define INNO_CONFIG_CHAIN6_START_EN_GPIO        (866)
#define INNO_CONFIG_CHAIN7_START_EN_GPIO        (868)
#define INNO_CONFIG_CHAIN0_RESET_GPIO           (855)
#define INNO_CONFIG_CHAIN1_RESET_GPIO           (857)
#define INNO_CONFIG_CHAIN2_RESET_GPIO           (859)
#define INNO_CONFIG_CHAIN3_RESET_GPIO           (861)
#define INNO_CONFIG_CHAIN4_RESET_GPIO           (863)
#define INNO_CONFIG_CHAIN5_RESET_GPIO           (865)
#define INNO_CONFIG_CHAIN6_RESET_GPIO           (867)
#define INNO_CONFIG_CHAIN7_RESET_GPIO           (869)
#define INNO_CONFIG_CHAIN0_LED_GPIO             (881)
#define INNO_CONFIG_CHAIN1_LED_GPIO             (882)
#define INNO_CONFIG_CHAIN2_LED_GPIO             (883)
#define INNO_CONFIG_CHAIN3_LED_GPIO             (884)
#define INNO_CONFIG_CHAIN4_LED_GPIO             (885)
#define INNO_CONFIG_CHAIN5_LED_GPIO             (886)
#define INNO_CONFIG_CHAIN6_LED_GPIO             (887)
#define INNO_CONFIG_CHAIN7_LED_GPIO             (888)
#define INNO_CONFIG_CHAIN0_PLUG_GPIO            (896)
#define INNO_CONFIG_CHAIN1_PLUG_GPIO            (897)
#define INNO_CONFIG_CHAIN2_PLUG_GPIO            (898)
#define INNO_CONFIG_CHAIN3_PLUG_GPIO            (899)
#define INNO_CONFIG_CHAIN4_PLUG_GPIO            (900)
#define INNO_CONFIG_CHAIN5_PLUG_GPIO            (901)
#define INNO_CONFIG_CHAIN6_PLUG_GPIO            (902)
#define INNO_CONFIG_CHAIN7_PLUG_GPIO            (903)

/*********************************** 类型定义 **********************************/


/*--------------------------------- 接口声明区 --------------------------------*/

/*********************************** 全局变量 **********************************/

/*********************************** 接口函数 **********************************/

#endif // #ifndef _CONFIG_H_

