EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 5
Title "PCB robota mobilnego"
Date "2021-10-21"
Rev "v 1.0"
Comp "Politechnika Świętokrzyska"
Comment1 "Grzegorz Socha"
Comment2 "Praca Magisterska"
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L power:GND #PWR0111
U 1 1 6171E140
P 4600 5450
F 0 "#PWR0111" H 4600 5200 50  0001 C CNN
F 1 "GND" H 4605 5277 50  0000 C CNN
F 2 "" H 4600 5450 50  0001 C CNN
F 3 "" H 4600 5450 50  0001 C CNN
	1    4600 5450
	1    0    0    -1  
$EndComp
Wire Wire Line
	4600 5450 4600 5350
$Sheet
S 9450 2400 950  500 
U 61770FA2
F0 "interface" 50
F1 "interface.sch" 50
$EndSheet
$Comp
L Device:C C102
U 1 1 617A05B0
P 3500 2700
F 0 "C102" V 3650 2500 50  0000 C CNN
F 1 "4.7uF" V 3650 2750 50  0000 C CNN
F 2 "Capacitor_THT:C_Disc_D5.0mm_W2.5mm_P2.50mm" H 3538 2550 50  0001 C CNN
F 3 "~" H 3500 2700 50  0001 C CNN
	1    3500 2700
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0106
U 1 1 617A0F41
P 3350 2700
F 0 "#PWR0106" H 3350 2450 50  0001 C CNN
F 1 "GND" V 3355 2527 50  0000 C CNN
F 2 "" H 3350 2700 50  0001 C CNN
F 3 "" H 3350 2700 50  0001 C CNN
	1    3350 2700
	0    1    1    0   
$EndComp
$Comp
L Switch:SW_Push SW101
U 1 1 617A1E09
P 3350 1550
F 0 "SW101" V 3300 1850 50  0000 R CNN
F 1 "RESET" V 3450 1850 50  0000 R CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H9.5mm" H 3350 1750 50  0001 C CNN
F 3 "~" H 3350 1750 50  0001 C CNN
	1    3350 1550
	0    1    1    0   
$EndComp
$Comp
L Device:C C101
U 1 1 617A3C02
P 3000 1500
F 0 "C101" H 2885 1454 50  0000 R CNN
F 1 "100nF" H 2885 1545 50  0000 R CNN
F 2 "Capacitor_THT:C_Disc_D5.0mm_W2.5mm_P2.50mm" H 3038 1350 50  0001 C CNN
F 3 "~" H 3000 1500 50  0001 C CNN
	1    3000 1500
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0103
U 1 1 617A5022
P 3150 1750
F 0 "#PWR0103" H 3150 1500 50  0001 C CNN
F 1 "GND" H 3155 1577 50  0000 C CNN
F 2 "" H 3150 1750 50  0001 C CNN
F 3 "" H 3150 1750 50  0001 C CNN
	1    3150 1750
	1    0    0    -1  
$EndComp
Wire Wire Line
	3350 1750 3150 1750
Wire Wire Line
	3000 1650 3000 1750
Wire Wire Line
	3000 1750 3150 1750
Connection ~ 3150 1750
$Comp
L power:+3.3V #PWR0102
U 1 1 617AA204
P 4650 1700
F 0 "#PWR0102" H 4650 1550 50  0001 C CNN
F 1 "+3.3V" H 4665 1873 50  0000 C CNN
F 2 "" H 4650 1700 50  0001 C CNN
F 3 "" H 4650 1700 50  0001 C CNN
	1    4650 1700
	1    0    0    -1  
$EndComp
Wire Wire Line
	4650 1700 4650 1850
Connection ~ 4650 1850
$Comp
L Connector:Conn_01x03_Female J101
U 1 1 617B4854
P 2550 2250
F 0 "J101" H 2650 2200 50  0000 C CNN
F 1 "BOOT0" H 2700 2300 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 2550 2250 50  0001 C CNN
F 3 "~" H 2550 2250 50  0001 C CNN
	1    2550 2250
	-1   0    0    1   
$EndComp
$Comp
L Device:R R102
U 1 1 617B54D3
P 3100 2250
F 0 "R102" V 3000 2100 50  0000 C CNN
F 1 "10k" V 3000 2350 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 3030 2250 50  0001 C CNN
F 3 "~" H 3100 2250 50  0001 C CNN
	1    3100 2250
	0    1    1    0   
$EndComp
Wire Wire Line
	2950 2250 2750 2250
Wire Wire Line
	2750 2150 2800 2150
Wire Wire Line
	2750 2350 2800 2350
$Comp
L power:GND #PWR0105
U 1 1 617B9F37
P 2800 2350
F 0 "#PWR0105" H 2800 2100 50  0001 C CNN
F 1 "GND" H 2805 2177 50  0000 C CNN
F 2 "" H 2800 2350 50  0001 C CNN
F 3 "" H 2800 2350 50  0001 C CNN
	1    2800 2350
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0104
U 1 1 617BA790
P 2800 2150
F 0 "#PWR0104" H 2800 2000 50  0001 C CNN
F 1 "+3.3V" H 2650 2300 50  0000 C CNN
F 2 "" H 2800 2150 50  0001 C CNN
F 3 "" H 2800 2150 50  0001 C CNN
	1    2800 2150
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x03_Female J102
U 1 1 617BFF5F
P 7100 4200
F 0 "J102" H 7200 4150 50  0000 C CNN
F 1 "BOOT1" H 7250 4250 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 7100 4200 50  0001 C CNN
F 3 "~" H 7100 4200 50  0001 C CNN
	1    7100 4200
	1    0    0    -1  
$EndComp
$Comp
L Device:R R105
U 1 1 617BFF65
P 6550 4200
F 0 "R105" V 6757 4200 50  0000 C CNN
F 1 "10k" V 6666 4200 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 6480 4200 50  0001 C CNN
F 3 "~" H 6550 4200 50  0001 C CNN
	1    6550 4200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6700 4200 6900 4200
Wire Wire Line
	6900 4300 6850 4300
$Comp
L power:+3.3V #PWR0108
U 1 1 617BFF6E
P 6850 4100
F 0 "#PWR0108" H 6850 3950 50  0001 C CNN
F 1 "+3.3V" H 6850 4250 50  0000 C CNN
F 2 "" H 6850 4100 50  0001 C CNN
F 3 "" H 6850 4100 50  0001 C CNN
	1    6850 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	6850 4100 6900 4100
$Comp
L power:GND #PWR0109
U 1 1 617C303C
P 6850 4300
F 0 "#PWR0109" H 6850 4050 50  0001 C CNN
F 1 "GND" H 6855 4127 50  0000 C CNN
F 2 "" H 6850 4300 50  0001 C CNN
F 3 "" H 6850 4300 50  0001 C CNN
	1    6850 4300
	1    0    0    -1  
$EndComp
$Sheet
S 9450 3250 950  500 
U 617D3880
F0 "shields" 50
F1 "shields.sch" 50
$EndSheet
Wire Wire Line
	5300 2050 5400 2050
Text GLabel 5400 2150 2    50   Output ~ 10
M2PWM
Text GLabel 5400 2250 2    50   Output ~ 10
M3PWM
Text GLabel 5400 2350 2    50   Output ~ 10
M4PWM
Wire Wire Line
	5300 2150 5400 2150
Wire Wire Line
	5300 2250 5400 2250
Wire Wire Line
	5300 2350 5400 2350
Text GLabel 5400 2850 2    50   Input ~ 10
ENCODER_1_A
Text GLabel 5400 2950 2    50   Input ~ 10
ENCODER_1_B
Wire Wire Line
	5300 2850 5400 2850
Wire Wire Line
	5300 2950 5400 2950
Text GLabel 3800 4350 0    50   Input ~ 10
ENCODER_3_B
Text GLabel 3800 4250 0    50   Input ~ 10
ENCODER_3_A
Wire Wire Line
	3900 4350 3800 4350
Wire Wire Line
	3900 4250 3800 4250
Text GLabel 5400 4350 2    50   Input ~ 10
ENCODER_4_A
Text GLabel 5400 4450 2    50   Input ~ 10
ENCODER_4_B
Wire Wire Line
	5300 4350 5400 4350
Wire Wire Line
	5300 4450 5400 4450
Text GLabel 6750 4750 2    50   Output ~ 10
PWM_LIDAR
Text GLabel 5400 2550 2    50   Input ~ 10
ENCODER_2_A
Text GLabel 5400 4050 2    50   Input ~ 10
ENCODER_2_B
Wire Wire Line
	5300 4050 5400 4050
Text GLabel 8050 3400 3    50   Input ~ 10
UART6_RX
Text GLabel 7550 3000 1    50   Output ~ 10
UART6_TX
Text GLabel 5400 3050 2    50   Input ~ 10
UART1_RX
Wire Wire Line
	5300 3050 5400 3050
Text GLabel 5400 3550 2    50   Output ~ 10
UART1_TX
Wire Wire Line
	5300 3550 5400 3550
Wire Wire Line
	5300 2550 5400 2550
Wire Wire Line
	4800 5350 4700 5350
Connection ~ 4700 5350
Wire Wire Line
	4600 5350 4700 5350
Connection ~ 4600 5350
Wire Wire Line
	4400 5350 4500 5350
Connection ~ 4500 5350
Wire Wire Line
	4900 1850 4800 1850
Connection ~ 4800 1850
Wire Wire Line
	4650 1850 4700 1850
Wire Wire Line
	4700 1850 4800 1850
Connection ~ 4700 1850
Wire Wire Line
	4600 1850 4650 1850
Connection ~ 4600 1850
Wire Wire Line
	4500 1850 4600 1850
Wire Wire Line
	4400 1850 4500 1850
Connection ~ 4500 1850
$Comp
L MCU_ST_STM32F4:STM32F411RETx U101
U 1 1 61715533
P 4600 3550
F 0 "U101" H 4250 1400 50  0000 C CNN
F 1 "STM32F411RETx" H 4250 1300 50  0000 C CNN
F 2 "Package_QFP:LQFP-64_10x10mm_P0.5mm" H 4000 1850 50  0001 R CNN
F 3 "http://www.st.com/st-web-ui/static/active/en/resource/technical/document/datasheet/DM00115249.pdf" H 4600 3550 50  0001 C CNN
	1    4600 3550
	1    0    0    -1  
$EndComp
Text GLabel 5400 4650 2    50   Input ~ 10
I2C2_SDA_mag+acc
Text GLabel 5400 4750 2    50   Input ~ 10
I2C2_SCL_mag+acc
Wire Wire Line
	3750 3850 3900 3850
Wire Wire Line
	3750 3950 3900 3950
Text GLabel 5400 4250 2    50   Output Italic 0
M4INB
Text GLabel 5400 4150 2    50   Output Italic 0
M4INA
Text GLabel 5400 5150 2    50   Output Italic 0
M3INB
Text GLabel 5400 5050 2    50   Output Italic 0
M3INA
Text GLabel 5400 4950 2    50   Output Italic 0
M2INB
Text GLabel 5400 4850 2    50   Output Italic 0
M2INA
Text GLabel 3750 3850 0    50   Output Italic 0
M1INB
Text GLabel 3750 3950 0    50   Output Italic 0
M1INA
Text GLabel 5400 2050 2    50   Output ~ 10
M1PWM
Wire Wire Line
	5300 4650 5400 4650
Wire Wire Line
	5300 4750 5400 4750
Wire Wire Line
	5300 4850 5400 4850
Wire Wire Line
	5300 4950 5400 4950
Wire Wire Line
	5300 5050 5400 5050
Wire Wire Line
	5300 5150 5400 5150
Wire Wire Line
	5300 4150 5400 4150
Wire Wire Line
	5300 4250 5400 4250
Text GLabel 3800 4450 0    50   Output ~ 0
LED1
Text GLabel 3800 4550 0    50   Output ~ 0
LED2
Text GLabel 3800 4650 0    50   Output ~ 0
LED3
Text GLabel 3800 4750 0    50   Output ~ 0
LED4
Text GLabel 3800 4850 0    50   Input ~ 0
BUTTON_1
Text GLabel 3800 4950 0    50   Input ~ 0
BUTTON_2
Text GLabel 3750 4150 0    50   Input ~ 0
BUTTON_3
Wire Wire Line
	3800 4450 3900 4450
Wire Wire Line
	3800 4550 3900 4550
Wire Wire Line
	3800 4650 3900 4650
Wire Wire Line
	3800 4750 3900 4750
Wire Wire Line
	3800 4850 3900 4850
Wire Wire Line
	3800 4950 3900 4950
Wire Wire Line
	5300 3350 5400 3350
Wire Wire Line
	5300 3450 5400 3450
Text GLabel 3750 4050 0    50   Output Italic 0
BUZZER
Wire Wire Line
	3750 4050 3900 4050
Text GLabel 5400 3350 2    50   Input ~ 0
SWDIO
Text GLabel 5400 3450 2    50   BiDi ~ 0
SWCLK
$Comp
L Device:R R101
U 1 1 61896A63
P 3200 1100
F 0 "R101" V 3100 900 50  0000 C CNN
F 1 "10k" V 3084 1100 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 3130 1100 50  0001 C CNN
F 3 "~" H 3200 1100 50  0001 C CNN
	1    3200 1100
	-1   0    0    1   
$EndComp
Wire Wire Line
	3000 1350 3200 1350
Wire Wire Line
	3200 1250 3200 1350
Connection ~ 3200 1350
Wire Wire Line
	3200 1350 3350 1350
$Comp
L power:+3.3V #PWR0101
U 1 1 618AB376
P 3200 850
F 0 "#PWR0101" H 3200 700 50  0001 C CNN
F 1 "+3.3V" H 3050 1000 50  0000 C CNN
F 2 "" H 3200 850 50  0001 C CNN
F 3 "" H 3200 850 50  0001 C CNN
	1    3200 850 
	1    0    0    -1  
$EndComp
Wire Wire Line
	3900 2050 3900 1350
Wire Wire Line
	3900 1350 3350 1350
Connection ~ 3350 1350
Wire Wire Line
	3200 850  3200 950 
Wire Wire Line
	3250 2250 3900 2250
Wire Wire Line
	5300 3750 5400 3750
Wire Wire Line
	5300 3850 5400 3850
Wire Wire Line
	4500 5350 4600 5350
Wire Wire Line
	5300 3950 6150 3950
$Comp
L Jumper:Jumper_3_Bridged12 JP107
U 1 1 61BAE22E
P 6550 5000
F 0 "JP107" V 6550 5066 50  0001 L CNN
F 1 "Jumper_3_Bridged12" V 6595 5067 50  0001 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 6550 5000 50  0001 C CNN
F 3 "~" H 6550 5000 50  0001 C CNN
	1    6550 5000
	0    1    1    0   
$EndComp
Text GLabel 5400 2750 2    50   Output ~ 0
Dist_Sens_01_Trig
Text GLabel 5400 2650 2    50   Input ~ 0
Dist_Sens_01_Echo
Text GLabel 5400 3750 2    50   Output ~ 0
Dist_Sens_02_Trig
Text GLabel 5400 3850 2    50   Input ~ 0
Dist_Sens_02_Echo
Text GLabel 6450 3700 2    50   Output ~ 0
Dist_Sens_03_Trig
Text GLabel 6750 5250 2    50   Input ~ 0
Dist_Sens_03_Echo
Text GLabel 2550 5150 0    50   Input ~ 0
Dist_Sens_04_Echo
Text GLabel 3750 3750 0    50   Output ~ 0
Dist_Sens_05_Trig
Text GLabel 3750 3650 0    50   Input ~ 0
Dist_Sens_05_Echo
Text GLabel 8050 3000 1    50   Output ~ 0
Dist_Sens_06_Trig
Text GLabel 7550 3400 3    50   Input ~ 0
Dist_Sens_06_Echo
Wire Wire Line
	6300 4200 6400 4200
Wire Wire Line
	6550 4750 6750 4750
Wire Wire Line
	6550 5250 6750 5250
$Comp
L Jumper:Jumper_3_Bridged12 JP105
U 1 1 61CACFFD
P 6300 3950
F 0 "JP105" V 6300 4016 50  0001 L CNN
F 1 "Jumper_3_Bridged12" V 6345 4017 50  0001 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 6300 3950 50  0001 C CNN
F 3 "~" H 6300 3950 50  0001 C CNN
	1    6300 3950
	0    1    1    0   
$EndComp
Wire Wire Line
	5300 2650 5400 2650
Wire Wire Line
	5400 2750 5300 2750
Wire Wire Line
	6300 3700 6450 3700
Wire Wire Line
	3750 4150 3900 4150
Wire Wire Line
	3750 3650 3900 3650
Wire Wire Line
	3900 3750 3750 3750
$Comp
L Jumper:Jumper_3_Bridged12 JP102
U 1 1 61D553F7
P 7800 3000
F 0 "JP102" V 7800 3066 50  0001 L CNN
F 1 "Jumper_3_Bridged12" V 7845 3067 50  0001 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 7800 3000 50  0001 C CNN
F 3 "~" H 7800 3000 50  0001 C CNN
	1    7800 3000
	1    0    0    -1  
$EndComp
$Comp
L Jumper:Jumper_3_Bridged12 JP104
U 1 1 61D56A57
P 7800 3400
F 0 "JP104" V 7800 3466 50  0001 L CNN
F 1 "Jumper_3_Bridged12" V 7845 3467 50  0001 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 7800 3400 50  0001 C CNN
F 3 "~" H 7800 3400 50  0001 C CNN
	1    7800 3400
	-1   0    0    1   
$EndComp
Wire Wire Line
	5300 3150 7800 3150
Wire Wire Line
	5300 3250 7800 3250
Wire Wire Line
	6400 4550 6400 5000
Wire Wire Line
	5300 4550 6400 4550
Text GLabel 2500 3250 0    50   Input ~ 0
INT2_mag+acc
Text GLabel 2500 3150 0    50   Input ~ 0
INT1_mag+acc
Wire Wire Line
	3750 3450 3900 3450
Wire Wire Line
	2550 5050 3900 5050
Wire Wire Line
	2550 5150 3900 5150
Text GLabel 2550 5050 0    50   Output ~ 0
Dist_Sens_04_Trig
Text GLabel 3900 1350 1    50   Input ~ 0
NRST
Text GLabel 3550 2250 1    50   Input ~ 0
BOOT0
Text GLabel 3750 3450 0    50   Input ~ 0
PD2
Text GLabel 5400 2450 2    50   Input ~ 0
ADC_BAT
Wire Wire Line
	5300 2450 5400 2450
$Sheet
S 9450 4100 950  500 
U 61F91A58
F0 "reserve" 50
F1 "reserve.sch" 50
$EndSheet
$Sheet
S 9450 1450 950  500 
U 61720EC8
F0 "power_section" 50
F1 "power.sch" 50
$EndSheet
Wire Wire Line
	2500 3150 3900 3150
Wire Wire Line
	2500 3250 3900 3250
Wire Wire Line
	3650 2700 3900 2700
Wire Wire Line
	3900 2700 3900 2450
$EndSCHEMATC
