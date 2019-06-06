/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "H743"
#define USBD_PRODUCT_STRING "Nucleo-H743"

#define USE_TARGET_CONFIG

#define LED0_PIN                PB0
#define LED1_PIN                PB7
//#define LED2_PIN                PB14 // SDMMC2_D0

// Nucleo-H743 has one button (The blue USER button).
// Force two buttons to look at the single button so config reset on button works
#define USE_BUTTONS
#define	BUTTON_A_PIN            PC13
#define BUTTON_A_PIN_INVERTED // Active high
#define	BUTTON_B_PIN            PC13
#define BUTTON_B_PIN_INVERTED // Active high

#define USE_BEEPER
#define BEEPER_PIN              PE3
#define BEEPER_INVERTED

#define USE_UART

#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

#define USE_UART2
#define UART2_RX_PIN            PD6
#define UART2_TX_PIN            PD5

#define USE_UART3
#define UART3_RX_PIN            PD9
#define UART3_TX_PIN            PD8

#define USE_UART4
#define UART4_RX_PIN            PC11
#define UART4_TX_PIN            PC10

#define USE_UART5
#define UART5_RX_PIN            PD2
#define UART5_TX_PIN            PC12

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define USE_UART7
#define UART7_RX_PIN            PE7
#define UART7_TX_PIN            PE8

#define USE_UART8
#define UART8_RX_PIN            PE0
#define UART8_TX_PIN            PE1

#define USE_VCP

#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2

#define SERIAL_PORT_COUNT       11

#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PB3
#define SPI1_MISO_PIN           PB4
#define SPI1_MOSI_PIN           PB5

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            NONE
#define SPI2_MISO_PIN           NONE
#define SPI2_MOSI_PIN           NONE

#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PC10 // PC10
#define SPI3_MISO_PIN           PC11 // PC11
#define SPI3_MOSI_PIN           PC12 // PC12

#define USE_SPI_DEVICE_4
#define SPI4_SCK_PIN            NONE
#define SPI4_MISO_PIN           NONE
#define SPI4_MOSI_PIN           NONE

#define USE_SPI_DEVICE_5
#define SPI5_SCK_PIN            NONE
#define SPI5_MISO_PIN           NONE
#define SPI5_MOSI_PIN           NONE

#define USE_SPI_DEVICE_6
#define SPI6_SCK_PIN            NONE
#define SPI6_MISO_PIN           NONE
#define SPI6_MOSI_PIN           NONE

// #define USE_QUADSPI
#define USE_QUADSPI_DEVICE_1

#define QUADSPI1_SCK_PIN        NONE // PB2

#define QUADSPI1_BK1_IO0_PIN    NONE // PD11
#define QUADSPI1_BK1_IO1_PIN    NONE // PD12
#define QUADSPI1_BK1_IO2_PIN    NONE // PE2
#define QUADSPI1_BK1_IO3_PIN    NONE // PD13
#define QUADSPI1_BK1_CS_PIN     NONE // PB10

#define QUADSPI1_BK2_IO0_PIN    NONE // PE7
#define QUADSPI1_BK2_IO1_PIN    NONE // PE8
#define QUADSPI1_BK2_IO2_PIN    NONE // PE9
#define QUADSPI1_BK2_IO3_PIN    NONE // PE10
#define QUADSPI1_BK2_CS_PIN     NONE // NONE

#define QUADSPI1_MODE QUADSPI_MODE_BK1_ONLY
#define QUADSPI1_CS_FLAGS (QUADSPI_BK1_CS_HARDWARE | QUADSPI_BK2_CS_NONE | QUADSPI_CS_MODE_LINKED)

#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9
#define I2C_DEVICE (I2CDEV_1)

#define USE_MAG
#define USE_MAG_HMC5883
#define USE_MAG_SPI_HMC5883
#define HMC5883_SPI_INSTANCE    NULL
#define HMC5883_CS_PIN          NONE

#define USE_BARO
#define USE_BARO_BMP085
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_SPI_BMP280
#define BMP280_SPI_INSTANCE     NULL
#define BMP280_CS_PIN           NONE

#define USE_GYRO
#define USE_MULTI_GYRO
#define USE_ACC

#define USE_GYRO_SPI_MPU6000
#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6500
#define USE_ACC_SPI_MPU6500
#define USE_GYRO_SPI_MPU9250
#define USE_ACC_SPI_MPU9250

#define GYRO_1_CS_PIN           PD15
#define GYRO_1_SPI_INSTANCE     SPI1

// I2C acc/gyro test, may require to activate
// set gyro_x_bustype = I2C
// set gyro_x_i2cBus = <Bus ordinal of I2C_DEVICE>
//#define USE_GYRO_MPU6050
//#define USE_ACC_MPU6050

#define USE_FLASH_CHIP
#define USE_FLASH_M25P16
#define USE_FLASH_W25M
#define FLASH_SPI_INSTANCE      NULL
#define FLASH_CS_PIN            NONE
#define USE_FLASHFS

#define USE_BRUSHED_ESC_AUTODETECT  // Detect if brushed motors are connected and set defaults appropriately to avoid motors spinning on boot
#define USE_GYRO_REGISTER_DUMP  // Adds gyroregisters command to cli to dump configured register values
#define USE_TIMER
#define USE_PWM_OUTPUT
#define USE_MOTOR
#define USE_EXTI

#define USE_RANGEFINDER
#define USE_RANGEFINDER_HCSR04
#define USE_RANGEFINDER_TF

#define USE_TRANSPONDER

#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    NULL // SPI3
#define MAX7456_SPI_CS_PIN      NONE // PC9

#define USE_I2C_OLED_DISPLAY

#define USE_DMA

// H7 allows all stream to handle any peripheral
// No need for channel definition; each peripheral i/o has a unique channel thanks to MUX.
//#define UART1_TX_DMA_STREAM     DMA1_Stream0
//#define UART2_TX_DMA_STREAM     DMA1_Stream1
//#define UART3_TX_DMA_STREAM     DMA1_Stream2
//#define UART4_TX_DMA_STREAM     DMA1_Stream3
//#define UART5_TX_DMA_STREAM     DMA1_Stream4
//#define UART6_TX_DMA_STREAM     DMA1_Stream5
//#define UART7_TX_DMA_STREAM     DMA1_Stream6
//#define UART8_TX_DMA_STREAM     DMA1_Stream7

#define USE_ADC

#define ADC1_INSTANCE ADC1
#define ADC2_INSTANCE ADC2
#define ADC3_INSTANCE ADC3
#define ADC1_DMA_STREAM DMA2_Stream0
#define ADC2_DMA_STREAM DMA2_Stream1
#define ADC3_DMA_STREAM DMA2_Stream2

#define VBAT_ADC_PIN            PB1  // ADC1
#define CURRENT_METER_ADC_PIN   PC0  // ADC1
#define RSSI_ADC_PIN            PF14 // ADC2
#define EXTERNAL1_ADC_PIN       PC3  // ADC3

#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC

#define USE_DSHOT
#define USE_DSHOT_DMAR

#define DEFAULT_FEATURE (FEATURE_OSD)

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff
#define TARGET_IO_PORTF 0xffff
#define TARGET_IO_PORTG 0xffff

#define USABLE_TIMER_CHANNEL_COUNT 15

#define USED_TIMERS  ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(5) | TIM_N(8) | TIM_N(12) )
