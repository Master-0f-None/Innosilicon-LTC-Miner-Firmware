/******************************************************************************
 *
 * 文件名  ： zynq_spi.h
 * 负责人  ： 王鹏(wangp@innosilicon.com.cn)
 * 创建日期： 20171208
 * 版本号  ： v1.0
 * 文件描述： zynq平台spi驱动接口
 * 版权说明： Copyright (c) 2000-2020 Innosilicon
 * 其    他： 无
 * 修改日志： 无
 *
 *******************************************************************************/
/*---------------------------------- 预处理区 ---------------------------------*/
#ifndef _ZYNQ_SPI_H_
#define _ZYNQ_SPI_H_

/************************************ 头文件 ***********************************/
#include <stdint.h>
#include <stdbool.h>
#include <pthread.h>
#include <linux/spi/spidev.h>

/************************************ 宏定义 ***********************************/

/*********************************** 类型定义 **********************************/
/* zynq spi结构体 */
typedef struct ZYNQ_SPI_TAG{
    int             fd;     /* 文件句柄 */
    pthread_mutex_t lock;   /* 锁 */
}ZYNQ_SPI_T;

/*--------------------------------- 接口声明区 --------------------------------*/

/*********************************** 全局变量 **********************************/

/*********************************** 接口函数 **********************************/
/*******************************************************************************
 *
 * 函数名  : zynq_spi_init
 * 描述    : 使用默认配置(宏)初始化spi
 * 输入参数: spi - 结构指针
 *           bus - 总线编号,8条链对应(0-7)
 * 输出参数: 无
 * 返回值:   无
 * 调用关系: 无
 * 其 它:    无
 *
 ******************************************************************************/
void zynq_spi_init(ZYNQ_SPI_T *spi, int bus);

/*******************************************************************************
 *
 * 函数名  : zynq_spi_exit
 * 描述    : 反初始化指定spi结构
 * 输入参数: spi结构指针
 * 输出参数: 无
 * 返回值:   无
 * 调用关系: 无
 * 其 它:    无
 *
 ******************************************************************************/
void zynq_spi_exit(ZYNQ_SPI_T *spi);

/*******************************************************************************
 *
 * 函数名  : zynq_spi_read
 * 描述    : spi读取
 * 输入参数: spi   - spi结构指针
 *           len   - 缓存长度
 * 输出参数: rxbuf - 接收缓存
 * 返回值:   无
 * 调用关系: 无
 * 其 它:    无
 *
 ******************************************************************************/
void zynq_spi_read(ZYNQ_SPI_T *spi, uint8_t *rxbuf, int len);

/*******************************************************************************
 *
 * 函数名  : zynq_spi_write
 * 描述    : spi写入
 * 输入参数: spi   - spi结构指针
 *           txbuf - 发送缓存
 *           len   - 缓存长度
 * 输出参数: 无
 * 返回值:   无
 * 调用关系: 无
 * 其 它:    无
 *
 ******************************************************************************/
void zynq_spi_write(ZYNQ_SPI_T *spi, uint8_t *txbuf, int len);

#endif // #ifndef _ZYNQ_SPI_H_

