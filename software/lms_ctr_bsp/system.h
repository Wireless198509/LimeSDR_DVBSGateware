/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_cpu' in SOPC Builder design 'lms_ctr'
 * SOPC Builder design path: ../../lms_ctr.sopcinfo
 *
 * Generated: Thu May 19 10:42:53 EEST 2016
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * Av_FIFO_Int_0 configuration
 *
 */

#define ALT_MODULE_CLASS_Av_FIFO_Int_0 Av_FIFO_Int
#define AV_FIFO_INT_0_BASE 0x90c0
#define AV_FIFO_INT_0_IRQ -1
#define AV_FIFO_INT_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define AV_FIFO_INT_0_NAME "/dev/Av_FIFO_Int_0"
#define AV_FIFO_INT_0_SPAN 16
#define AV_FIFO_INT_0_TYPE "Av_FIFO_Int"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00008820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 100000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00004020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 100000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x10
#define ALT_CPU_NAME "nios2_cpu"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00004000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00008820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 100000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00004020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x10
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00004000


/*
 * Custom instruction macros
 *
 */

#define ALT_CI_NIOS_CUSTOM_INSTR_BITSWAP_0(A) __builtin_custom_ini(ALT_CI_NIOS_CUSTOM_INSTR_BITSWAP_0_N,(A))
#define ALT_CI_NIOS_CUSTOM_INSTR_BITSWAP_0_N 0x0


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SPI
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_NIOS_CUSTOM_INSTR_BITSWAP
#define __AV_FIFO_INT
#define __I2C_OPENCORES


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "MAX 10"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/null"
#define ALT_STDERR_BASE 0x0
#define ALT_STDERR_DEV null
#define ALT_STDERR_TYPE ""
#define ALT_STDIN "/dev/null"
#define ALT_STDIN_BASE 0x0
#define ALT_STDIN_DEV null
#define ALT_STDIN_TYPE ""
#define ALT_STDOUT "/dev/null"
#define ALT_STDOUT_BASE 0x0
#define ALT_STDOUT_DEV null
#define ALT_STDOUT_TYPE ""
#define ALT_SYSTEM_NAME "lms_ctr"


/*
 * dac_spi configuration
 *
 */

#define ALT_MODULE_CLASS_dac_spi altera_avalon_spi
#define DAC_SPI_BASE 0x9000
#define DAC_SPI_CLOCKMULT 1
#define DAC_SPI_CLOCKPHASE 1
#define DAC_SPI_CLOCKPOLARITY 0
#define DAC_SPI_CLOCKUNITS "Hz"
#define DAC_SPI_DATABITS 8
#define DAC_SPI_DATAWIDTH 16
#define DAC_SPI_DELAYMULT "1.0E-9"
#define DAC_SPI_DELAYUNITS "ns"
#define DAC_SPI_EXTRADELAY 0
#define DAC_SPI_INSERT_SYNC 0
#define DAC_SPI_IRQ 3
#define DAC_SPI_IRQ_INTERRUPT_CONTROLLER_ID 0
#define DAC_SPI_ISMASTER 1
#define DAC_SPI_LSBFIRST 0
#define DAC_SPI_NAME "/dev/dac_spi"
#define DAC_SPI_NUMSLAVES 1
#define DAC_SPI_PREFIX "spi_"
#define DAC_SPI_SPAN 32
#define DAC_SPI_SYNC_REG_DEPTH 2
#define DAC_SPI_TARGETCLOCK 20000000u
#define DAC_SPI_TARGETSSDELAY "0.0"
#define DAC_SPI_TYPE "altera_avalon_spi"


/*
 * fpga_spi configuration
 *
 */

#define ALT_MODULE_CLASS_fpga_spi altera_avalon_spi
#define FPGA_SPI_BASE 0x9020
#define FPGA_SPI_CLOCKMULT 1
#define FPGA_SPI_CLOCKPHASE 0
#define FPGA_SPI_CLOCKPOLARITY 0
#define FPGA_SPI_CLOCKUNITS "Hz"
#define FPGA_SPI_DATABITS 8
#define FPGA_SPI_DATAWIDTH 16
#define FPGA_SPI_DELAYMULT "1.0E-9"
#define FPGA_SPI_DELAYUNITS "ns"
#define FPGA_SPI_EXTRADELAY 1
#define FPGA_SPI_INSERT_SYNC 0
#define FPGA_SPI_IRQ 2
#define FPGA_SPI_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FPGA_SPI_ISMASTER 1
#define FPGA_SPI_LSBFIRST 0
#define FPGA_SPI_NAME "/dev/fpga_spi"
#define FPGA_SPI_NUMSLAVES 2
#define FPGA_SPI_PREFIX "spi_"
#define FPGA_SPI_SPAN 32
#define FPGA_SPI_SYNC_REG_DEPTH 2
#define FPGA_SPI_TARGETCLOCK 2000000u
#define FPGA_SPI_TARGETSSDELAY "200.0"
#define FPGA_SPI_TYPE "altera_avalon_spi"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * i2c_opencores_0 configuration
 *
 */

#define ALT_MODULE_CLASS_i2c_opencores_0 i2c_opencores
#define I2C_OPENCORES_0_BASE 0x9080
#define I2C_OPENCORES_0_IRQ 0
#define I2C_OPENCORES_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define I2C_OPENCORES_0_NAME "/dev/i2c_opencores_0"
#define I2C_OPENCORES_0_SPAN 32
#define I2C_OPENCORES_0_TYPE "i2c_opencores"


/*
 * leds configuration
 *
 */

#define ALT_MODULE_CLASS_leds altera_avalon_pio
#define LEDS_BASE 0x90a0
#define LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDS_CAPTURE 0
#define LEDS_DATA_WIDTH 8
#define LEDS_DO_TEST_BENCH_WIRING 0
#define LEDS_DRIVEN_SIM_VALUE 0
#define LEDS_EDGE_TYPE "NONE"
#define LEDS_FREQ 100000000
#define LEDS_HAS_IN 0
#define LEDS_HAS_OUT 1
#define LEDS_HAS_TRI 0
#define LEDS_IRQ -1
#define LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDS_IRQ_TYPE "NONE"
#define LEDS_NAME "/dev/leds"
#define LEDS_RESET_VALUE 0
#define LEDS_SPAN 16
#define LEDS_TYPE "altera_avalon_pio"


/*
 * lms_ctr_gpio configuration
 *
 */

#define ALT_MODULE_CLASS_lms_ctr_gpio altera_avalon_pio
#define LMS_CTR_GPIO_BASE 0x9040
#define LMS_CTR_GPIO_BIT_CLEARING_EDGE_REGISTER 0
#define LMS_CTR_GPIO_BIT_MODIFYING_OUTPUT_REGISTER 1
#define LMS_CTR_GPIO_CAPTURE 0
#define LMS_CTR_GPIO_DATA_WIDTH 4
#define LMS_CTR_GPIO_DO_TEST_BENCH_WIRING 0
#define LMS_CTR_GPIO_DRIVEN_SIM_VALUE 0
#define LMS_CTR_GPIO_EDGE_TYPE "NONE"
#define LMS_CTR_GPIO_FREQ 100000000
#define LMS_CTR_GPIO_HAS_IN 0
#define LMS_CTR_GPIO_HAS_OUT 1
#define LMS_CTR_GPIO_HAS_TRI 0
#define LMS_CTR_GPIO_IRQ -1
#define LMS_CTR_GPIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LMS_CTR_GPIO_IRQ_TYPE "NONE"
#define LMS_CTR_GPIO_NAME "/dev/lms_ctr_gpio"
#define LMS_CTR_GPIO_RESET_VALUE 3
#define LMS_CTR_GPIO_SPAN 32
#define LMS_CTR_GPIO_TYPE "altera_avalon_pio"


/*
 * oc_mem configuration
 *
 */

#define ALT_MODULE_CLASS_oc_mem altera_avalon_onchip_memory2
#define OC_MEM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define OC_MEM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define OC_MEM_BASE 0x4000
#define OC_MEM_CONTENTS_INFO ""
#define OC_MEM_DUAL_PORT 0
#define OC_MEM_GUI_RAM_BLOCK_TYPE "AUTO"
#define OC_MEM_INIT_CONTENTS_FILE "lms_ctr_oc_mem"
#define OC_MEM_INIT_MEM_CONTENT 1
#define OC_MEM_INSTANCE_ID "NONE"
#define OC_MEM_IRQ -1
#define OC_MEM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OC_MEM_NAME "/dev/oc_mem"
#define OC_MEM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define OC_MEM_RAM_BLOCK_TYPE "AUTO"
#define OC_MEM_READ_DURING_WRITE_MODE "DONT_CARE"
#define OC_MEM_SINGLE_CLOCK_OP 0
#define OC_MEM_SIZE_MULTIPLE 1
#define OC_MEM_SIZE_VALUE 16384
#define OC_MEM_SPAN 16384
#define OC_MEM_TYPE "altera_avalon_onchip_memory2"
#define OC_MEM_WRITABLE 1


/*
 * switch configuration
 *
 */

#define ALT_MODULE_CLASS_switch altera_avalon_pio
#define SWITCH_BASE 0x90b0
#define SWITCH_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH_CAPTURE 0
#define SWITCH_DATA_WIDTH 8
#define SWITCH_DO_TEST_BENCH_WIRING 0
#define SWITCH_DRIVEN_SIM_VALUE 0
#define SWITCH_EDGE_TYPE "NONE"
#define SWITCH_FREQ 100000000
#define SWITCH_HAS_IN 1
#define SWITCH_HAS_OUT 0
#define SWITCH_HAS_TRI 0
#define SWITCH_IRQ -1
#define SWITCH_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCH_IRQ_TYPE "NONE"
#define SWITCH_NAME "/dev/switch"
#define SWITCH_RESET_VALUE 0
#define SWITCH_SPAN 16
#define SWITCH_TYPE "altera_avalon_pio"


/*
 * sysid_qsys_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys_0 altera_avalon_sysid_qsys
#define SYSID_QSYS_0_BASE 0x90d0
#define SYSID_QSYS_0_ID 4920
#define SYSID_QSYS_0_IRQ -1
#define SYSID_QSYS_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_0_NAME "/dev/sysid_qsys_0"
#define SYSID_QSYS_0_SPAN 8
#define SYSID_QSYS_0_TIMESTAMP 1463643451
#define SYSID_QSYS_0_TYPE "altera_avalon_sysid_qsys"


/*
 * uart configuration
 *
 */

#define ALT_MODULE_CLASS_uart altera_avalon_uart
#define UART_BASE 0x9060
#define UART_BAUD 115200
#define UART_DATA_BITS 8
#define UART_FIXED_BAUD 1
#define UART_FREQ 100000000
#define UART_IRQ 1
#define UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_NAME "/dev/uart"
#define UART_PARITY 'N'
#define UART_SIM_CHAR_STREAM ""
#define UART_SIM_TRUE_BAUD 0
#define UART_SPAN 32
#define UART_STOP_BITS 1
#define UART_SYNC_REG_DEPTH 2
#define UART_TYPE "altera_avalon_uart"
#define UART_USE_CTS_RTS 0
#define UART_USE_EOP_REGISTER 0

#endif /* __SYSTEM_H_ */