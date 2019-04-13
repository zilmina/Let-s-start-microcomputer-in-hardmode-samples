                                                                          
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                          
/************************************************************************/
/*    File Version: V1.80                                               */
/*    History : 1.00  (2012-06-12)  [Hardware Manual Revision : 1.00]   */
/*            : 1.10  (2013-02-18)  [Hardware Manual Revision : 1.00]   */
/*            : 1.80  (2015-04-22)  [Hardware Manual Revision : 1.80]   */
/*    Date Generated: 25/05/2015                                        */
/************************************************************************/

#include "interrupt_handlers.h"

/* INT_Exception(Supervisor Instruction)*/
void INT_Excep_SuperVisorInst(void){/* brk(); */}

/* INT_Exception(Access Instruction)*/
void INT_Excep_AccessInst(void){/* brk(); */}

/* INT_Exception(Undefined Instruction)*/
void INT_Excep_UndefinedInst(void){/* brk(); */}

/* INT_Exception(Floating Point)*/
void INT_Excep_FloatingPoint(void){/* brk(); */}

/* NMI*/
void INT_NonMaskableInterrupt(void){/* brk(); */}

/* Dummy*/
void INT_Dummy(void){/* brk(); */}

/* BRK*/
void INT_Excep_BRK(void){/* wait();*/ }

/* BSC BUSERR*/
void INT_Excep_BSC_BUSERR(void){ }

/* FCU FIFERR*/
void INT_Excep_FCU_FIFERR(void){ }

/* FCU FRDYI*/
void INT_Excep_FCU_FRDYI(void){ }

/* ICU SWINT*/
void INT_Excep_ICU_SWINT(void){ }

/* CMT0 CMI0*/
void INT_Excep_CMT0_CMI0(void){ }

/* CMT1 CMI1*/
void INT_Excep_CMT1_CMI1(void){ }

/* CMT2 CMI2*/
void INT_Excep_CMT2_CMI2(void){ }

/* CMT3 CMI3*/
void INT_Excep_CMT3_CMI3(void){ }

/* ETHER EINT*/
void INT_Excep_ETHER_EINT(void){ }

/* USB0 D0FIFO0*/
void INT_Excep_USB0_D0FIFO0(void){ }

/* USB0 D1FIFO0*/
void INT_Excep_USB0_D1FIFO0(void){ }

/* USB0 USBI0*/
void INT_Excep_USB0_USBI0(void){ }

/* USB1 D0FIFO1*/
void INT_Excep_USB1_D0FIFO1(void){ }

/* USB1 D1FIFO1*/
void INT_Excep_USB1_D1FIFO1(void){ }

/* USB1 USBI1*/
void INT_Excep_USB1_USBI1(void){ }

/* RSPI0 SPRI0*/
void INT_Excep_RSPI0_SPRI0(void){ }

/* RSPI0 SPTI0*/
void INT_Excep_RSPI0_SPTI0(void){ }

/* RSPI0 SPII0*/
void INT_Excep_RSPI0_SPII0(void){ }

/* RSPI1 SPRI1*/
void INT_Excep_RSPI1_SPRI1(void){ }

/* RSPI1 SPTI1*/
void INT_Excep_RSPI1_SPTI1(void){ }

/* RSPI1 SPII1*/
void INT_Excep_RSPI1_SPII1(void){ }

/* RSPI2 SPRI2*/
void INT_Excep_RSPI2_SPRI2(void){ }

/* RSPI2 SPTI2*/
void INT_Excep_RSPI2_SPTI2(void){ }

/* RSPI2 SPII2*/
void INT_Excep_RSPI2_SPII2(void){ }

/* CAN0 RXF0*/
void INT_Excep_CAN0_RXF0(void){ }

/* CAN0 TXF0*/
void INT_Excep_CAN0_TXF0(void){ }

/* CAN0 RXM0*/
void INT_Excep_CAN0_RXM0(void){ }

/* CAN0 TXM0*/
void INT_Excep_CAN0_TXM0(void){ }

/* CAN1 RXF1*/
void INT_Excep_CAN1_RXF1(void){ }

/* CAN1 TXF1*/
void INT_Excep_CAN1_TXF1(void){ }

/* CAN1 RXM1*/
void INT_Excep_CAN1_RXM1(void){ }

/* CAN1 TXM1*/
void INT_Excep_CAN1_TXM1(void){ }

/* CAN2 RXF2*/
void INT_Excep_CAN2_RXF2(void){ }

/* CAN2 TXF2*/
void INT_Excep_CAN2_TXF2(void){ }

/* CAN2 RXM2*/
void INT_Excep_CAN2_RXM2(void){ }

/* CAN2 TXM2*/
void INT_Excep_CAN2_TXM2(void){ }

/* RTC CUP*/
void INT_Excep_RTC_CUP(void){ }

/* ICU IRQ0*/
void INT_Excep_ICU_IRQ0(void){ }

/* ICU IRQ1*/
void INT_Excep_ICU_IRQ1(void){ }

/* ICU IRQ2*/
void INT_Excep_ICU_IRQ2(void){ }

/* ICU IRQ3*/
void INT_Excep_ICU_IRQ3(void){ }

/* ICU IRQ4*/
void INT_Excep_ICU_IRQ4(void){ }

/* ICU IRQ5*/
void INT_Excep_ICU_IRQ5(void){ }

/* ICU IRQ6*/
void INT_Excep_ICU_IRQ6(void){ }

/* ICU IRQ7*/
void INT_Excep_ICU_IRQ7(void){ }

/* ICU IRQ8*/
void INT_Excep_ICU_IRQ8(void){ }

/* ICU IRQ9*/
void INT_Excep_ICU_IRQ9(void){ }

/* ICU IRQ10*/
void INT_Excep_ICU_IRQ10(void){ }

/* ICU IRQ11*/
void INT_Excep_ICU_IRQ11(void){ }

/* ICU IRQ12*/
void INT_Excep_ICU_IRQ12(void){ }

/* ICU IRQ13*/
void INT_Excep_ICU_IRQ13(void){ }

/* ICU IRQ14*/
void INT_Excep_ICU_IRQ14(void){ }

/* ICU IRQ15*/
void INT_Excep_ICU_IRQ15(void){ }

/* USB USBR0*/
void INT_Excep_USB_USBR0(void){ }

/* USB USBR1*/
void INT_Excep_USB_USBR1(void){ }

/* RTC ALM*/
void INT_Excep_RTC_ALM(void){ }

/* RTC PRD*/
void INT_Excep_RTC_PRD(void){ }

/* AD ADI0*/
void INT_Excep_AD_ADI0(void){ }

/* S12AD S12ADI0*/
void INT_Excep_S12AD_S12ADI0(void){ }

/* ICU GROUP0*/
void INT_Excep_ICU_GROUP0(void){ }

/* ICU GROUP1*/
void INT_Excep_ICU_GROUP1(void){ }

/* ICU GROUP2*/
void INT_Excep_ICU_GROUP2(void){ }

/* ICU GROUP3*/
void INT_Excep_ICU_GROUP3(void){ }

/* ICU GROUP4*/
void INT_Excep_ICU_GROUP4(void){ }

/* ICU GROUP5*/
void INT_Excep_ICU_GROUP5(void){ }

/* ICU GROUP6*/
void INT_Excep_ICU_GROUP6(void){ }

/* ICU GROUP12*/
void INT_Excep_ICU_GROUP12(void){ }

/* SCI12 SCIX0*/
void INT_Excep_SCI12_SCIX0(void){ }

/* SCI12 SCIX1*/
void INT_Excep_SCI12_SCIX1(void){ }

/* SCI12 SCIX2*/
void INT_Excep_SCI12_SCIX2(void){ }

/* SCI12 SCIX3*/
void INT_Excep_SCI12_SCIX3(void){ }

/* TPU0 TGI0A*/
void INT_Excep_TPU0_TGI0A(void){ }

/* TPU0 TGI0B*/
void INT_Excep_TPU0_TGI0B(void){ }

/* TPU0 TGI0C*/
void INT_Excep_TPU0_TGI0C(void){ }

/* TPU0 TGI0D*/
void INT_Excep_TPU0_TGI0D(void){ }

/* TPU1 TGI1A*/
void INT_Excep_TPU1_TGI1A(void){ }

/* TPU1 TGI1B*/
void INT_Excep_TPU1_TGI1B(void){ }

/* TPU2 TGI2A*/
void INT_Excep_TPU2_TGI2A(void){ }

/* TPU2 TGI2B*/
void INT_Excep_TPU2_TGI2B(void){ }

/* TPU3 TGI3A*/
void INT_Excep_TPU3_TGI3A(void){ }

/* TPU3 TGI3B*/
void INT_Excep_TPU3_TGI3B(void){ }

/* TPU3 TGI3C*/
void INT_Excep_TPU3_TGI3C(void){ }

/* TPU3 TGI3D*/
void INT_Excep_TPU3_TGI3D(void){ }

/* TPU4 TGI4A*/
void INT_Excep_TPU4_TGI4A(void){ }

/* TPU4 TGI4B*/
void INT_Excep_TPU4_TGI4B(void){ }

/* TPU5 TGI5A*/
void INT_Excep_TPU5_TGI5A(void){ }

/* TPU5 TGI5B*/
void INT_Excep_TPU5_TGI5B(void){ }

/* TPU6 TGI6A*/
void INT_Excep_TPU6_TGI6A(void){ }

/* TPU6 TGI6B*/
void INT_Excep_TPU6_TGI6B(void){ }

/* TPU6 TGI6C*/
void INT_Excep_TPU6_TGI6C(void){ }

/* TPU6 TGI6D*/
void INT_Excep_TPU6_TGI6D(void){ }

/* MTU0 TGIA0*/
void INT_Excep_MTU0_TGIA0(void){ }

/* MTU0 TGIB0*/
void INT_Excep_MTU0_TGIB0(void){ }

/* MTU0 TGIC0*/
void INT_Excep_MTU0_TGIC0(void){ }

/* MTU0 TGID0*/
void INT_Excep_MTU0_TGID0(void){ }

/* MTU0 TGIE0*/
void INT_Excep_MTU0_TGIE0(void){ }

/* MTU0 TGIF0*/
void INT_Excep_MTU0_TGIF0(void){ }

/* TPU7 TGI7A*/
void INT_Excep_TPU7_TGI7A(void){ }

/* TPU7 TGI7B*/
void INT_Excep_TPU7_TGI7B(void){ }

/* MTU1 TGIA1*/
void INT_Excep_MTU1_TGIA1(void){ }

/* MTU1 TGIB1*/
void INT_Excep_MTU1_TGIB1(void){ }

/* TPU8 TGI8A*/
void INT_Excep_TPU8_TGI8A(void){ }

/* TPU8 TGI8B*/
void INT_Excep_TPU8_TGI8B(void){ }

/* MTU2 TGIA2*/
void INT_Excep_MTU2_TGIA2(void){ }

/* MTU2 TGIB2*/
void INT_Excep_MTU2_TGIB2(void){ }

/* TPU9 TGI9A*/
void INT_Excep_TPU9_TGI9A(void){ }

/* TPU9 TGI9B*/
void INT_Excep_TPU9_TGI9B(void){ }

/* TPU9 TGI9C*/
void INT_Excep_TPU9_TGI9C(void){ }

/* TPU9 TGI9D*/
void INT_Excep_TPU9_TGI9D(void){ }

/* MTU3 TGIA3*/
void INT_Excep_MTU3_TGIA3(void){ }

/* MTU3 TGIB3*/
void INT_Excep_MTU3_TGIB3(void){ }

/* MTU3 TGIC3*/
void INT_Excep_MTU3_TGIC3(void){ }

/* MTU3 TGID3*/
void INT_Excep_MTU3_TGID3(void){ }

/* TPU10 TGI10A*/
void INT_Excep_TPU10_TGI10A(void){ }

/* TPU10 TGI10B*/
void INT_Excep_TPU10_TGI10B(void){ }

/* MTU4 TGIA4*/
void INT_Excep_MTU4_TGIA4(void){ }

/* MTU4 TGIB4*/
void INT_Excep_MTU4_TGIB4(void){ }

/* MTU4 TGIC4*/
void INT_Excep_MTU4_TGIC4(void){ }

/* MTU4 TGID4*/
void INT_Excep_MTU4_TGID4(void){ }

/* MTU4 TCIV4*/
void INT_Excep_MTU4_TCIV4(void){ }

/* TPU11 TGI11A*/
void INT_Excep_TPU11_TGI11A(void){ }

/* TPU11 TGI11B*/
void INT_Excep_TPU11_TGI11B(void){ }

/* MTU5 TGIU5*/
void INT_Excep_MTU5_TGIU5(void){ }

/* MTU5 TGIV5*/
void INT_Excep_MTU5_TGIV5(void){ }

/* MTU5 TGIW5*/
void INT_Excep_MTU5_TGIW5(void){ }

/* POE OEI1*/
void INT_Excep_POE_OEI1(void){ }

/* POE OEI2*/
void INT_Excep_POE_OEI2(void){ }

/* TMR0 CMIA0*/
void INT_Excep_TMR0_CMIA0(void){ }

/* TMR0 CMIB0*/
void INT_Excep_TMR0_CMIB0(void){ }

/* TMR0 OVI0*/
void INT_Excep_TMR0_OVI0(void){ }

/* TMR1 CMIA1*/
void INT_Excep_TMR1_CMIA1(void){ }

/* TMR1 CMIB1*/
void INT_Excep_TMR1_CMIB1(void){ }

/* TMR1 OVI1*/
void INT_Excep_TMR1_OVI1(void){ }

/* TMR2 CMIA2*/
void INT_Excep_TMR2_CMIA2(void){ }

/* TMR2 CMIB2*/
void INT_Excep_TMR2_CMIB2(void){ }

/* TMR2 OVI2*/
void INT_Excep_TMR2_OVI2(void){ }

/* TMR3 CMIA3*/
void INT_Excep_TMR3_CMIA3(void){ }

/* TMR3 CMIB3*/
void INT_Excep_TMR3_CMIB3(void){ }

/* TMR3 OVI3*/
void INT_Excep_TMR3_OVI3(void){ }

/* RIIC0 EEI0*/
void INT_Excep_RIIC0_EEI0(void){ }

/* RIIC0 RXI0*/
void INT_Excep_RIIC0_RXI0(void){ }

/* RIIC0 TXI0*/
void INT_Excep_RIIC0_TXI0(void){ }

/* RIIC0 TEI0*/
void INT_Excep_RIIC0_TEI0(void){ }

/* RIIC1 EEI1*/
void INT_Excep_RIIC1_EEI1(void){ }

/* RIIC1 RXI1*/
void INT_Excep_RIIC1_RXI1(void){ }

/* RIIC1 TXI1*/
void INT_Excep_RIIC1_TXI1(void){ }

/* RIIC1 TEI1*/
void INT_Excep_RIIC1_TEI1(void){ }

/* RIIC2 EEI2*/
void INT_Excep_RIIC2_EEI2(void){ }

/* RIIC2 RXI2*/
void INT_Excep_RIIC2_RXI2(void){ }

/* RIIC2 TXI2*/
void INT_Excep_RIIC2_TXI2(void){ }

/* RIIC2 TEI2*/
void INT_Excep_RIIC2_TEI2(void){ }

/* RIIC3 EEI3*/
void INT_Excep_RIIC3_EEI3(void){ }

/* RIIC3 RXI3*/
void INT_Excep_RIIC3_RXI3(void){ }

/* RIIC3 TXI3*/
void INT_Excep_RIIC3_TXI3(void){ }

/* RIIC3 TEI3*/
void INT_Excep_RIIC3_TEI3(void){ }

/* DMAC DMAC0I*/
void INT_Excep_DMAC_DMAC0I(void){ }

/* DMAC DMAC1I*/
void INT_Excep_DMAC_DMAC1I(void){ }

/* DMAC DMAC2I*/
void INT_Excep_DMAC_DMAC2I(void){ }

/* DMAC DMAC3I*/
void INT_Excep_DMAC_DMAC3I(void){ }

/* EXDMAC EXDMAC0I*/
void INT_Excep_EXDMAC_EXDMAC0I(void){ }

/* EXDMAC EXDMAC1I*/
void INT_Excep_EXDMAC_EXDMAC1I(void){ }

/* DEU DEU0*/
void INT_Excep_DEU_DEU0(void){ }

/* DEU DEU1*/
void INT_Excep_DEU_DEU1(void){ }

/* PDC PCDFI*/
void INT_Excep_PDC_PCDFI(void){ }

/* PDC PCFEI*/
void INT_Excep_PDC_PCFEI(void){ }

/* PDC PCERI*/
void INT_Excep_PDC_PCERI(void){ }

/* SCI0 RXI0*/
void INT_Excep_SCI0_RXI0(void){ }

/* SCI0 TXI0*/
void INT_Excep_SCI0_TXI0(void){ }

/* SCI0 TEI0*/
void INT_Excep_SCI0_TEI0(void){ }

/* SCI1 RXI1*/
void INT_Excep_SCI1_RXI1(void){ }

/* SCI1 TXI1*/
void INT_Excep_SCI1_TXI1(void){ }

/* SCI1 TEI1*/
void INT_Excep_SCI1_TEI1(void){ }

/* SCI2 RXI2*/
void INT_Excep_SCI2_RXI2(void){ }

/* SCI2 TXI2*/
void INT_Excep_SCI2_TXI2(void){ }

/* SCI2 TEI2*/
void INT_Excep_SCI2_TEI2(void){ }

/* SCI3 RXI3*/
void INT_Excep_SCI3_RXI3(void){ }

/* SCI3 TXI3*/
void INT_Excep_SCI3_TXI3(void){ }

/* SCI3 TEI3*/
void INT_Excep_SCI3_TEI3(void){ }

/* SCI4 RXI4*/
void INT_Excep_SCI4_RXI4(void){ }

/* SCI4 TXI4*/
void INT_Excep_SCI4_TXI4(void){ }

/* SCI4 TEI4*/
void INT_Excep_SCI4_TEI4(void){ }

/* SCI5 RXI5*/
void INT_Excep_SCI5_RXI5(void){ }

/* SCI5 TXI5*/
void INT_Excep_SCI5_TXI5(void){ }

/* SCI5 TEI5*/
void INT_Excep_SCI5_TEI5(void){ }

/* SCI6 RXI6*/
void INT_Excep_SCI6_RXI6(void){ }

/* SCI6 TXI6*/
void INT_Excep_SCI6_TXI6(void){ }

/* SCI6 TEI6*/
void INT_Excep_SCI6_TEI6(void){ }

/* SCI7 RXI7*/
void INT_Excep_SCI7_RXI7(void){ }

/* SCI7 TXI7*/
void INT_Excep_SCI7_TXI7(void){ }

/* SCI7 TEI7*/
void INT_Excep_SCI7_TEI7(void){ }

/* SCI8 RXI8*/
void INT_Excep_SCI8_RXI8(void){ }

/* SCI8 TXI8*/
void INT_Excep_SCI8_TXI8(void){ }

/* SCI8 TEI8*/
void INT_Excep_SCI8_TEI8(void){ }

/* SCI9 RXI9*/
void INT_Excep_SCI9_RXI9(void){ }

/* SCI9 TXI9*/
void INT_Excep_SCI9_TXI9(void){ }

/* SCI9 TEI9*/
void INT_Excep_SCI9_TEI9(void){ }

/* SCI10 RXI10*/
void INT_Excep_SCI10_RXI10(void){ }

/* SCI10 TXI10*/
void INT_Excep_SCI10_TXI10(void){ }

/* SCI10 TEI10*/
void INT_Excep_SCI10_TEI10(void){ }

/* SCI11 RXI11*/
void INT_Excep_SCI11_RXI11(void){ }

/* SCI11 TXI11*/
void INT_Excep_SCI11_TXI11(void){ }

/* SCI11 TEI11*/
void INT_Excep_SCI11_TEI11(void){ }

/* SCI12 RXI12*/
void INT_Excep_SCI12_RXI12(void){ }

/* SCI12 TXI12*/
void INT_Excep_SCI12_TXI12(void){ }

/* SCI12 TEI12*/
void INT_Excep_SCI12_TEI12(void){ }

/* IEB IEBINT*/
void INT_Excep_IEB_IEBINT(void){ }
