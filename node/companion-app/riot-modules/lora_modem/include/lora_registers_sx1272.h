#ifndef LORA_REGISTERS_SX1272_H
#define LORA_REGISTERS_SX1272_H

#define REG1272_LORA_INVERTIQ2                        0x3B
#define REG1272_PADAC                                 0x5A

#define VAL1272_VERSION                               0x22

#define MSK1272_LORA_MODEMCONFIG1_BW                  0xc0
#define VAL1272_LORA_MODEMCONFIG1_BW125               0x00
#define VAL1272_LORA_MODEMCONFIG1_BW250               0x40
#define VAL1272_LORA_MODEMCONFIG1_BW500               0x80
#define MSK1272_LORA_MODEMCONFIG1_CR                  0x38
#define MSK1272_LORA_MODEMCONFIG1_RXPAYLOADCRC        0x02
#define VAL1272_LORA_MODEMCONFIG1_RXPAYLOADCRC_ON     0x02
#define VAL1272_LORA_MODEMCONFIG1_RXPAYLOADCRC_OFF    0x00
#define MSK1272_LORA_MODEMCONFIG1_IMPLICIT_HDR        0x04
#define VAL1272_LORA_MODEMCONFIG1_IMPLICIT_HDR_OFF    0x00
#define VAL1272_LORA_MODEMCONFIG1_IMPLICIT_HDR_ON     0x04
#define MSK1272_LORA_MODEMCONFIG1_LOWDATARATEOPTIMIZE     0x01
#define VAL1272_LORA_MODEMCONFIG1_LOWDATARATEOPTIMIZE_ON  0x01
#define VAL1272_LORA_MODEMCONFIG1_LOWDATARATEOPTIMIZE_OFF 0x00

#define MSK1272_LORA_MODEMCONFIG2_AGCAUTOON           0x04


// Register 0x33: InvertIQ
#define MSK1272_LORA_INVERTIQ_INVERTIQ_RX             0x40
#define VAL1272_LORA_INVERTIQ_INVERTIQ_RX_DEFAULT     0x00
#define VAL1272_LORA_INVERTIQ_INVERTIQ_RX_INVERTED    0x40
#define MSK1272_LORA_INVERTIQ_INVERTIQ_TX             0x01
#define VAL1272_LORA_INVERTIQ_INVERTIQ_TX_DEFAULT     0x00
#define VAL1272_LORA_INVERTIQ_INVERTIQ_TX_INVERTED    0x01

// Register 0x3B: InvertIQ 2
#define MSK1272_LORA_INVERTIQ2_INVERTIQ2              0xFF
#define VAL1272_LORA_INVERTIQ2_INVERTIQ2_DEFAULT      0x1D
#define VAL1272_LORA_INVERTIQ2_INVERTIQ2_INVERTED     0x19


#endif /* LORA_REGISTERS_SX1272_H */