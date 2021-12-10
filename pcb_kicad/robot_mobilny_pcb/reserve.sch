EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 4 5
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Connector:Conn_01x16_Female J?
U 1 1 61F9E78B
P 5350 1750
AR Path="/61F9E78B" Ref="J?"  Part="1" 
AR Path="/61F91A58/61F9E78B" Ref="J?"  Part="1" 
F 0 "J?" V 5515 1680 50  0000 C CNN
F 1 "TOP_CONN" V 5424 1680 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x16_P2.54mm_Vertical" H 5350 1750 50  0001 C CNN
F 3 "~" H 5350 1750 50  0001 C CNN
	1    5350 1750
	0    -1   -1   0   
$EndComp
$Comp
L Connector:Conn_01x16_Female J?
U 1 1 61F9E791
P 5550 5250
AR Path="/61F9E791" Ref="J?"  Part="1" 
AR Path="/61F91A58/61F9E791" Ref="J?"  Part="1" 
F 0 "J?" V 5623 5180 50  0000 C CNN
F 1 "BOTTOM_CONN" V 5714 5180 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x16_P2.54mm_Vertical" H 5550 5250 50  0001 C CNN
F 3 "~" H 5550 5250 50  0001 C CNN
	1    5550 5250
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x16_Female J?
U 1 1 61F9E797
P 7050 3550
AR Path="/61F9E797" Ref="J?"  Part="1" 
AR Path="/61F91A58/61F9E797" Ref="J?"  Part="1" 
F 0 "J?" H 7078 3526 50  0000 L CNN
F 1 "RIGHT_CONN" H 7078 3435 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x16_P2.54mm_Vertical" H 7050 3550 50  0001 C CNN
F 3 "~" H 7050 3550 50  0001 C CNN
	1    7050 3550
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x16_Female J?
U 1 1 61F9E79D
P 3800 3600
AR Path="/61F9E79D" Ref="J?"  Part="1" 
AR Path="/61F91A58/61F9E79D" Ref="J?"  Part="1" 
F 0 "J?" H 4000 3450 50  0000 C CNN
F 1 "LEFT_CONN" H 4100 3600 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x16_P2.54mm_Vertical" H 3800 3600 50  0001 C CNN
F 3 "~" H 3800 3600 50  0001 C CNN
	1    3800 3600
	-1   0    0    1   
$EndComp
Text GLabel 4000 2900 2    50   Input ~ 0
BUTTON_2
Text GLabel 4000 3000 2    50   Output ~ 0
Dist_Sens_04_Trig
Text GLabel 4000 3100 2    50   Input ~ 0
Dist_Sens_04_Echo
Text GLabel 4000 3200 2    50   Input ~ 0
INT1_mag+acc
Text GLabel 4000 3300 2    50   Input ~ 0
INT2_mag+acc
Text GLabel 4000 3400 2    50   Input ~ 0
NRST
Text GLabel 4000 3700 2    50   Output Italic 0
M1INB
Text GLabel 4000 3800 2    50   Output Italic 0
M1INA
Text GLabel 4000 3600 2    50   Output ~ 0
Dist_Sens_05_Trig
Text GLabel 4000 3500 2    50   Input ~ 0
Dist_Sens_05_Echo
$Comp
L power:+3.3V #PWR?
U 1 1 61F9E7AD
P 4100 3950
AR Path="/61F9E7AD" Ref="#PWR?"  Part="1" 
AR Path="/61F91A58/61F9E7AD" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 4100 3800 50  0001 C CNN
F 1 "+3.3V" V 4100 4200 50  0000 C CNN
F 2 "" H 4100 3950 50  0001 C CNN
F 3 "" H 4100 3950 50  0001 C CNN
	1    4100 3950
	0    1    1    0   
$EndComp
Wire Wire Line
	4000 3900 4100 3900
Wire Wire Line
	4100 3900 4100 3950
Wire Wire Line
	4000 4000 4100 4000
Wire Wire Line
	4100 4000 4100 3950
Connection ~ 4100 3950
Text GLabel 4000 4200 2    50   Output ~ 10
M2PWM
Text GLabel 4000 4300 2    50   Output ~ 10
M3PWM
Text GLabel 4000 4100 2    50   Output ~ 10
M1PWM
Wire Wire Line
	6850 2850 6850 2900
$Comp
L power:+3.3V #PWR?
U 1 1 61F9E7BC
P 6850 2900
AR Path="/61F9E7BC" Ref="#PWR?"  Part="1" 
AR Path="/61F91A58/61F9E7BC" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 6850 2750 50  0001 C CNN
F 1 "+3.3V" V 6850 3150 50  0000 C CNN
F 2 "" H 6850 2900 50  0001 C CNN
F 3 "" H 6850 2900 50  0001 C CNN
	1    6850 2900
	0    -1   -1   0   
$EndComp
Connection ~ 6850 2900
Wire Wire Line
	6850 2900 6850 2950
Text GLabel 6850 3050 0    50   Input ~ 0
SWDIO
Text GLabel 6850 3150 0    50   Input ~ 10
UART6_RX
Text GLabel 6850 3250 0    50   Output ~ 10
UART6_TX
Text GLabel 6850 3350 0    50   Input ~ 10
UART1_RX
Text GLabel 6850 3450 0    50   Input ~ 10
ENCODER_1_B
Text GLabel 6850 3550 0    50   Input ~ 10
ENCODER_1_A
Text GLabel 6850 3650 0    50   Output ~ 0
LED2
Text GLabel 6850 3750 0    50   Output ~ 0
LED1
Text GLabel 6850 3850 0    50   Input ~ 10
ENCODER_3_B
Text GLabel 6850 3950 0    50   Input ~ 10
ENCODER_3_A
Text GLabel 6850 4050 0    50   Output ~ 10
UART1_TX
Text GLabel 6850 4250 0    50   Input ~ 0
SWDIO
Text GLabel 6850 4150 0    50   BiDi ~ 0
SWCLK
Text GLabel 6850 4350 0    50   Output Italic 0
M2INA
Wire Wire Line
	4650 1950 4700 1950
$Comp
L power:+3.3V #PWR?
U 1 1 61F9E7D3
P 4700 1950
AR Path="/61F9E7D3" Ref="#PWR?"  Part="1" 
AR Path="/61F91A58/61F9E7D3" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 4700 1800 50  0001 C CNN
F 1 "+3.3V" V 4700 2200 50  0000 C CNN
F 2 "" H 4700 1950 50  0001 C CNN
F 3 "" H 4700 1950 50  0001 C CNN
	1    4700 1950
	-1   0    0    1   
$EndComp
Connection ~ 4700 1950
Wire Wire Line
	4700 1950 4750 1950
Text GLabel 4850 1950 3    50   Input ~ 10
I2C2_SDA_mag+acc
Text GLabel 4950 1950 3    50   Output ~ 10
PWM_LIDAR
Text GLabel 5050 1950 3    50   Input ~ 0
BOOT0
Text GLabel 5250 1950 3    50   Input ~ 10
ENCODER_4_A
Text GLabel 5150 1950 3    50   Input ~ 10
ENCODER_4_B
Text GLabel 5550 1950 3    50   Input ~ 10
ENCODER_2_B
Text GLabel 5350 1950 3    50   Output Italic 0
M4INB
Text GLabel 5450 1950 3    50   Output Italic 0
M4INA
Text GLabel 5650 1950 3    50   Input ~ 0
PD2
Text GLabel 5950 1950 3    50   Output ~ 0
LED3
Text GLabel 5750 1950 3    50   Input ~ 0
BUTTON_1
Text GLabel 5850 1950 3    50   Output ~ 0
LED4
Text GLabel 6050 1950 3    50   Output ~ 10
UART1_TX
Text GLabel 6150 1950 3    50   BiDi ~ 0
SWCLK
Wire Wire Line
	4850 5050 4950 5050
Wire Wire Line
	6250 5050 6150 5050
NoConn ~ 6050 5050
Text GLabel 4750 5050 1    50   Output ~ 10
M4PWM
Text GLabel 5150 5050 1    50   Input ~ 10
ENCODER_2_A
Text GLabel 5350 5050 1    50   Output ~ 0
Dist_Sens_01_Trig
Text GLabel 5250 5050 1    50   Input ~ 0
Dist_Sens_01_Echo
Text GLabel 5050 5050 1    50   Input ~ 0
ADC_BAT
Text GLabel 5550 5050 1    50   Input ~ 0
BUTTON_3
Text GLabel 5450 5050 1    50   Output Italic 0
BUZZER
Text GLabel 5650 5050 1    50   Output ~ 0
Dist_Sens_02_Trig
Text GLabel 5750 5050 1    50   Input ~ 0
Dist_Sens_02_Echo
Text GLabel 5850 5050 1    50   Output ~ 0
Dist_Sens_03_Trig
Text GLabel 5950 5050 1    50   Input ~ 10
I2C2_SCL_mag+acc
Wire Notes Line
	3100 5700 7750 5700
Wire Notes Line
	7750 5700 7750 1350
Wire Notes Line
	7750 1350 3100 1350
Wire Notes Line
	3100 1350 3100 5700
Text Notes 3100 1300 0    50   ~ 0
wyprowadzenie wszystkich pinów uC na goldpiny na wypadek błędów
$EndSCHEMATC
