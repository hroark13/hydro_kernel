#ifndef HS_IO_CTL_A_WS1_H
#define HS_IO_CTL_A_WS1_H
/*
This software is contributed or developed by KYOCERA Corporation.
(C)2012 KYOCERA Corporation
*/

extern uint32_t socinfo_get_hw_id(void);

#define GPIO_LCD_CONNECT     GPIO_19

#define GPIO_CAM_RST         GPIO_2
#define GPIO_CAM_PWDN        GPIO_3

#define HF_DET               GPIO_16

#define GPIO_GS_RSTN         GPIO_20
#define GPIO_GS_INT          GPIO_21

#define GPIO_TP_RST_N        GPIO_24
#define GPIO_TP_INT_N        GPIO_25

#define GPIO_CARD_DETB       GPIO_44

#define GPIO_PS_OUT          GPIO_76

#define GPIO_I2C_SENSOR_SCL  GPIO_22
#define GPIO_I2C_SENSOR_SDA  GPIO_23
#define GPIO_I2C_TP_SCL      GPIO_87
#define GPIO_I2C_TP_SDA      GPIO_88

#define GPIO_SPK_ON1         GPIO_127
#define GPIO_SPK_ON2         GPIO_128

extern unsigned GPIO_CAM_SCL;
extern unsigned GPIO_CAM_SDA;

#define GPIO_I2C_PROX_SCL    GPIO_77
#define GPIO_I2C_PROX_SDA    GPIO_78

#define GPIO_5V_CNT          GPIO_133

#define GPIO_KYPD_0          PM_GPIO_9
#define GPIO_KYPD_1          PM_GPIO_10

#define GPIO_KEYSENSE_N_5    PM_GPIO_6

#define GPIO_WLAN_RST        PM_GPIO_23
#define GPIO_LED_PWM_D       PM_GPIO_24

#define GPIO_LIGHT_EN        PM_GPIO_25
#define GPIO_FLASH_EN        PM_GPIO_26

#define GPIO_AUD_RST       PM_GPIO_31
#define GPIO_SLEEP_CLK1      PM_GPIO_38

#define GPIO_HW_ID0          PM_GPIO_32
#define GPIO_HW_ID1          PM_GPIO_33
#define GPIO_HW_ID2          PM_GPIO_34

#define GPIO_MAIN_ANT_SW_AWS         PM_GPIO_35
#define GPIO_MAIN_ANT_SW_PCSCELLULAR PM_GPIO_36
#define GPIO_SUB_ANT_SW_PCSCELLULAR  PM_GPIO_37

#define HS_A_CAM_RST_HI() \
  gpio_direction_output( GPIO_CAM_RST, GPIO_HI )

#define HS_A_CAM_RST_LO() \
  gpio_direction_output( GPIO_CAM_RST, GPIO_LO )


#define HS_A_CAM_PWDN_HI() \
  gpio_direction_output( GPIO_CAM_PWDN, GPIO_HI )

#define HS_A_CAM_PWDN_LO() \
  gpio_direction_output( GPIO_CAM_PWDN, GPIO_LO )


#define HS_A_CAM_LIGHT_EN_HI() \
  gpio_set_value_cansleep( GPIO_LIGHT_EN, GPIO_HI )

#define HS_A_CAM_LIGHT_EN_LO() \
  gpio_set_value_cansleep( GPIO_LIGHT_EN, GPIO_LO )


#define HS_A_CAM_FLASH_EN_HI() \
  gpio_set_value_cansleep( GPIO_FLASH_EN, GPIO_HI )

#define HS_A_CAM_FLASH_EN_LO() \
  gpio_set_value_cansleep( GPIO_FLASH_EN, GPIO_LO )


#define HS_A_CAM_VDD_D_CNT_HI() \
  hs_vreg_ctl("gp5", ON_CMD, 1250000, 1250000)

#define HS_A_CAM_VDD_D_CNT_LO() \
  hs_vreg_ctl("gp5", OFF_CMD, 1250000, 1250000)


#define HS_A_CAM_VDD_A_CNT_HI() \
  hs_vreg_ctl("wlan2", ON_CMD, 2800000, 2800000)

#define HS_A_CAM_VDD_A_CNT_LO() \
  hs_vreg_ctl("wlan2", OFF_CMD, 2800000, 2800000)


#define HS_A_CAM_VDD_IO_CNT_HI() \
  hs_vreg_ctl("lvsw0", ON_CMD, 1800000, 1800000)

#define HS_A_CAM_VDD_IO_CNT_LO() \
  hs_vreg_ctl("lvsw0", OFF_CMD, 1800000, 1800000)

#define HS_VREG_L8_ON() \
  hs_vreg_ctl("gp7", ON_CMD, 2900000, 2900000)

#define HS_A_GS_RSTN_HI() \
    gpio_direction_output( GPIO_GS_RSTN, GPIO_HI)

#define HS_A_GS_RSTN_LO() \
    gpio_direction_output( GPIO_GS_RSTN, GPIO_LO)


#define HS_GET_LCD_CONNECT() \
  ( gpio_get_value( GPIO_LCD_CONNECT ) == GPIO_LO )


#define HS_A_SPK_ON1_HI() \
        gpio_tlmm_config(GPIO_CFG(GPIO_SPK_ON1, 0, GPIO_CFG_OUTPUT, \
                         GPIO_CFG_NO_PULL, GPIO_CFG_2MA), GPIO_CFG_ENABLE); \
        gpio_direction_output( GPIO_SPK_ON1, GPIO_HI )

#define HS_A_SPK_ON1_LO() \
        gpio_direction_output( GPIO_SPK_ON1, GPIO_LO ); \
        gpio_tlmm_config(GPIO_CFG(GPIO_SPK_ON1, 0, GPIO_CFG_OUTPUT, \
                         GPIO_CFG_NO_PULL, GPIO_CFG_2MA), GPIO_CFG_DISABLE)

#define HS_A_SPK_ON2_HI() \
        gpio_tlmm_config(GPIO_CFG(GPIO_SPK_ON2, 0, GPIO_CFG_OUTPUT, \
                         GPIO_CFG_NO_PULL, GPIO_CFG_2MA), GPIO_CFG_ENABLE); \
        gpio_direction_output( GPIO_SPK_ON2, GPIO_HI )

#define HS_A_SPK_ON2_LO() \
        gpio_direction_output( GPIO_SPK_ON2, GPIO_LO ); \
        gpio_tlmm_config(GPIO_CFG(GPIO_SPK_ON2, 0, GPIO_CFG_OUTPUT, \
                         GPIO_CFG_NO_PULL, GPIO_CFG_2MA), GPIO_CFG_DISABLE)

#define HS_A_AUD_RST_N_HI() \
        gpio_set_value_cansleep( GPIO_AUD_RST, GPIO_HI )

#define HS_A_AUD_RST_N_LO() \
        gpio_set_value_cansleep( GPIO_AUD_RST, GPIO_LO )

#define HS_A_5V_CNT_HI() \
        gpio_tlmm_config(GPIO_CFG(GPIO_5V_CNT, 0, GPIO_CFG_OUTPUT, \
                         GPIO_CFG_NO_PULL, GPIO_CFG_2MA), GPIO_CFG_ENABLE); \
        gpio_direction_output( GPIO_5V_CNT, GPIO_HI )

#define HS_A_5V_CNT_LO() \
        gpio_direction_output( GPIO_5V_CNT, GPIO_LO ); \
        gpio_tlmm_config(GPIO_CFG(GPIO_5V_CNT, 0, GPIO_CFG_OUTPUT, \
                         GPIO_CFG_NO_PULL, GPIO_CFG_2MA), GPIO_CFG_DISABLE)

#define HS_A_GET_HW_ID() socinfo_get_hw_id()

#define HS_A_SET_GPIO_FOR_HW_ID() \
	switch(socinfo_get_hw_id())\
	{\
		case 1: \
			GPIO_CAM_SCL = GPIO_0;\
			GPIO_CAM_SDA = GPIO_1;\
			break;\
		default:\
			GPIO_CAM_SCL = GPIO_72;\
			GPIO_CAM_SDA = GPIO_73;\
			break;\
	}
#endif /* HS_IO_CTL_A_WS1_H */
