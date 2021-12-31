#ifndef HAMSTRONE_CONFIG_H
#define HAMSTRONE_CONFIG_H

#ifdef __cplusplus
 extern "C" {
#endif

#define HAMSTRONE_CONFIG_VALUE_SIZE 16
#define HAMSTRONE_CONFIG_VALUE_TYPE uint32_t

#define HAMSTRONE_CONFIG_SERIALPORT1_PATH "/dev/ttyS0"
#define HAMSTRONE_CONFIG_SERIALPORT2_PATH "/dev/ttyS1"
#define HAMSTRONE_CONFIG_I2CPORT1_PATH "/dev/i2c3"
#define HAMSTRONE_CONFIG_TIMER1PWM_PATH "/dev/pwm0"
#define HAMSTRONE_CONFIG_I2C_ADDRESS_SO6203 0x39
#define HAMSTRONE_CONFIG_I2C_ADDRESS_TCA9548 0x70
#define HAMSTRONE_CONFIG_I2C_ADDRESS_TFmini 0x10
#define HAMSTRONE_CONFIG_SPIPORT1_PATH "/dev/spi1"
#define HAMSTRONE_CONFIG_SPIPORT1_FREQUENCY 400000

#define HAMSTRONE_CONFIG_RADIAN_TO_ANGLE 57.2957795131
#define HAMSTRONE_CONFIG_COMPLEMENTARY_FILTER_COEFFICIENT 0.96

#define HAMSTRONE_CONFIG_SO6203_EN 0x80
#define HAMSTRONE_CONFIG_SO6203_ADCC_H 0xA2
#define HAMSTRONE_CONFIG_SO6203_ADCC_L 0xA3
#define HAMSTRONE_CONFIG_SO6203_ADCW_H 0xA8
#define HAMSTRONE_CONFIG_SO6203_ADCW_L 0xA9
#define HAMSTRONE_CONFIG_SO6203_ADCSPD_H 0xAC
#define HAMSTRONE_CONFIG_SO6203_ADCSPD_L 0xAD

#define HAMSTRONE_CONFIG_TCA9548_CHAN 0x70

#define HAMSTRONE_CONFIG_ISSTANDALONE

#define ESC_DUTY_MAX 35000
#define ESC_DUTY_MIN 10000
#define ESC_DUTY_PERCENTILE_STEP 50
#define PWM_PERIOD 160

#ifdef __cplusplus
}
#endif

#endif