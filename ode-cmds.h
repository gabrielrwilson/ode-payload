#ifndef ODE_CMDS_H
#define ODE_CMDS_H

#define ODE_BLINK_LED1_CMD 2
#define ODE_BLINK_LED1_RESP (ODE_BLINK_LED1_CMD | 0x80)

#define ODE_BURN_BALL1_CMD 10
#define ODE_BURN_BALL1_RESP (ODE_BURN_BALL1_CMD | 0x80)

struct ODEStatus {
   uint8_t sw_1;
   uint8_t sw_2;
   uint8_t sw_3;
   uint8_t LED_505L
   uint8_t LED_645L
   uint8_t LED_851L
   uint8_t LED_CREE
} __attribute__((packed));

struct ODEBlinkData {
   uint32_t period;
   int32_t duration;
} __attribute__((packed));

struct ODEDeployData {
   uint32_t Door_duration;
   uint32_t Nitonal_duration
} __attribute__((packed));



#endif
