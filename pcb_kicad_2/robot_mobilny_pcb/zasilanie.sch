EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 4
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
L Connector:Conn_01x02_Male J7
U 1 1 61721F49
P 2150 4000
F 0 "J7" H 2258 4181 50  0000 C CNN
F 1 "Power 14.8V" H 2258 4090 50  0000 C CNN
F 2 "Connector_AMASS:AMASS_XT60-M_1x02_P7.20mm_Vertical" H 2150 4000 50  0001 C CNN
F 3 "~" H 2150 4000 50  0001 C CNN
	1    2150 4000
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR017
U 1 1 6172E700
P 7050 3800
F 0 "#PWR017" H 7050 3650 50  0001 C CNN
F 1 "+5V" H 7065 3973 50  0000 C CNN
F 2 "" H 7050 3800 50  0001 C CNN
F 3 "" H 7050 3800 50  0001 C CNN
	1    7050 3800
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_SPDT SW2
U 1 1 6173A5E1
P 2700 4000
F 0 "SW2" H 2700 4285 50  0000 C CNN
F 1 "SW_SPDT" H 2700 4194 50  0000 C CNN
F 2 "" H 2700 4000 50  0001 C CNN
F 3 "~" H 2700 4000 50  0001 C CNN
	1    2700 4000
	1    0    0    -1  
$EndComp
NoConn ~ 2900 3900
$Comp
L Device:LED D2
U 1 1 6174105C
P 7050 4050
F 0 "D2" V 7089 3932 50  0000 R CNN
F 1 "RED" V 6998 3932 50  0000 R CNN
F 2 "LED_THT:LED_D5.0mm" H 7050 4050 50  0001 C CNN
F 3 "~" H 7050 4050 50  0001 C CNN
	1    7050 4050
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7050 3900 7050 3800
$Comp
L Device:R R11
U 1 1 61744B32
P 7050 4450
F 0 "R11" H 7120 4496 50  0000 L CNN
F 1 "200" H 7120 4405 50  0000 L CNN
F 2 "" V 6980 4450 50  0001 C CNN
F 3 "~" H 7050 4450 50  0001 C CNN
	1    7050 4450
	1    0    0    -1  
$EndComp
Wire Wire Line
	7050 4200 7050 4300
$Comp
L power:GND #PWR026
U 1 1 61745939
P 7050 4700
F 0 "#PWR026" H 7050 4450 50  0001 C CNN
F 1 "GND" H 7055 4527 50  0000 C CNN
F 2 "" H 7050 4700 50  0001 C CNN
F 3 "" H 7050 4700 50  0001 C CNN
	1    7050 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	7050 4600 7050 4700
$Comp
L Device:Fuse F1
U 1 1 617817CB
P 3200 4100
F 0 "F1" V 3003 4100 50  0000 C CNN
F 1 "Fuse" V 3094 4100 50  0000 C CNN
F 2 "" V 3130 4100 50  0001 C CNN
F 3 "~" H 3200 4100 50  0001 C CNN
	1    3200 4100
	0    1    1    0   
$EndComp
Wire Wire Line
	2350 4000 2500 4000
Wire Wire Line
	2350 4100 2450 4100
$Comp
L power:GND #PWR024
U 1 1 61726065
P 3100 4600
F 0 "#PWR024" H 3100 4350 50  0001 C CNN
F 1 "GND" H 3105 4427 50  0000 C CNN
F 2 "" H 3100 4600 50  0001 C CNN
F 3 "" H 3100 4600 50  0001 C CNN
	1    3100 4600
	1    0    0    -1  
$EndComp
$Comp
L Device:C C7
U 1 1 617D0670
P 5650 2100
F 0 "C7" H 5765 2146 50  0000 L CNN
F 1 "100nF" H 5765 2055 50  0000 L CNN
F 2 "" H 5688 1950 50  0001 C CNN
F 3 "~" H 5650 2100 50  0001 C CNN
	1    5650 2100
	1    0    0    -1  
$EndComp
$Comp
L Device:C C8
U 1 1 617D0676
P 6100 2100
F 0 "C8" H 6215 2146 50  0000 L CNN
F 1 "100nF" H 6215 2055 50  0000 L CNN
F 2 "" H 6138 1950 50  0001 C CNN
F 3 "~" H 6100 2100 50  0001 C CNN
	1    6100 2100
	1    0    0    -1  
$EndComp
$Comp
L Device:C C9
U 1 1 617D067C
P 6550 2100
F 0 "C9" H 6665 2146 50  0000 L CNN
F 1 "100nF" H 6665 2055 50  0000 L CNN
F 2 "" H 6588 1950 50  0001 C CNN
F 3 "~" H 6550 2100 50  0001 C CNN
	1    6550 2100
	1    0    0    -1  
$EndComp
$Comp
L Device:C C10
U 1 1 617D0682
P 7000 2100
F 0 "C10" H 7115 2146 50  0000 L CNN
F 1 "100nF" H 7115 2055 50  0000 L CNN
F 2 "" H 7038 1950 50  0001 C CNN
F 3 "~" H 7000 2100 50  0001 C CNN
	1    7000 2100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5650 1950 6100 1950
Wire Wire Line
	6550 1950 6350 1950
Connection ~ 6100 1950
Wire Wire Line
	5650 1950 5650 2250
Connection ~ 5650 1950
Connection ~ 6550 1950
Wire Wire Line
	6550 1950 7000 1950
Wire Wire Line
	6100 2250 5650 2250
Connection ~ 5650 2250
Wire Wire Line
	6100 2250 6350 2250
Connection ~ 6100 2250
Wire Wire Line
	6550 2250 7000 2250
Connection ~ 6550 2250
$Comp
L power:+3.3V #PWR013
U 1 1 617D0695
P 6350 1950
F 0 "#PWR013" H 6350 1800 50  0001 C CNN
F 1 "+3.3V" H 6365 2123 50  0000 C CNN
F 2 "" H 6350 1950 50  0001 C CNN
F 3 "" H 6350 1950 50  0001 C CNN
	1    6350 1950
	1    0    0    -1  
$EndComp
Connection ~ 6350 1950
Wire Wire Line
	6350 1950 6100 1950
$Comp
L power:GND #PWR014
U 1 1 617D069D
P 6350 2250
F 0 "#PWR014" H 6350 2000 50  0001 C CNN
F 1 "GND" H 6355 2077 50  0000 C CNN
F 2 "" H 6350 2250 50  0001 C CNN
F 3 "" H 6350 2250 50  0001 C CNN
	1    6350 2250
	1    0    0    -1  
$EndComp
Connection ~ 6350 2250
Wire Wire Line
	6350 2250 6550 2250
Text HLabel 2650 2300 2    50   Output ~ 0
ADC_BAT
$Comp
L Device:R R8
U 1 1 617FFF5E
P 2500 2100
F 0 "R8" H 2570 2146 50  0000 L CNN
F 1 "100k" H 2570 2055 50  0000 L CNN
F 2 "" V 2430 2100 50  0001 C CNN
F 3 "~" H 2500 2100 50  0001 C CNN
	1    2500 2100
	1    0    0    -1  
$EndComp
$Comp
L Device:R R9
U 1 1 6180038E
P 2500 2500
F 0 "R9" H 2570 2546 50  0000 L CNN
F 1 "22k" H 2570 2455 50  0000 L CNN
F 2 "" V 2430 2500 50  0001 C CNN
F 3 "~" H 2500 2500 50  0001 C CNN
	1    2500 2500
	1    0    0    -1  
$EndComp
Wire Wire Line
	2500 2250 2500 2300
Wire Wire Line
	2500 2300 2650 2300
Connection ~ 2500 2300
Wire Wire Line
	2500 2300 2500 2350
$Comp
L power:GND #PWR015
U 1 1 618024FC
P 2500 2750
F 0 "#PWR015" H 2500 2500 50  0001 C CNN
F 1 "GND" H 2505 2577 50  0000 C CNN
F 2 "" H 2500 2750 50  0001 C CNN
F 3 "" H 2500 2750 50  0001 C CNN
	1    2500 2750
	1    0    0    -1  
$EndComp
Wire Wire Line
	2500 2750 2500 2650
$Comp
L power:+BATT #PWR012
U 1 1 61805B4F
P 2500 1850
F 0 "#PWR012" H 2500 1700 50  0001 C CNN
F 1 "+BATT" H 2515 2023 50  0000 C CNN
F 2 "" H 2500 1850 50  0001 C CNN
F 3 "" H 2500 1850 50  0001 C CNN
	1    2500 1850
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x05_Female J8
U 1 1 61911142
P 5550 4200
F 0 "J8" H 5650 4200 50  0000 C CNN
F 1 "STEP_DOWN_D24V50F5" H 5150 3800 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x05_P2.54mm_Vertical" H 5550 4200 50  0001 C CNN
F 3 "~" H 5550 4200 50  0001 C CNN
	1    5550 4200
	-1   0    0    1   
$EndComp
Wire Wire Line
	5750 4000 6250 4000
Wire Wire Line
	5750 4100 5750 4200
$Comp
L power:+BATT #PWR023
U 1 1 6191C75A
P 6250 4300
F 0 "#PWR023" H 6250 4150 50  0001 C CNN
F 1 "+BATT" H 6400 4350 50  0000 C CNN
F 2 "" H 6250 4300 50  0001 C CNN
F 3 "" H 6250 4300 50  0001 C CNN
	1    6250 4300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR021
U 1 1 6191AB55
P 5900 4100
F 0 "#PWR021" H 5900 3850 50  0001 C CNN
F 1 "GND" H 6050 4050 50  0000 C CNN
F 2 "" H 5900 4100 50  0001 C CNN
F 3 "" H 5900 4100 50  0001 C CNN
	1    5900 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5750 4300 6250 4300
Wire Wire Line
	5750 4100 5900 4100
Connection ~ 5750 4100
NoConn ~ 5750 4400
Wire Notes Line
	5300 3650 5300 4550
Wire Notes Line
	5300 4550 6600 4550
Wire Notes Line
	6600 4550 6600 3650
Wire Notes Line
	6600 3650 5300 3650
$Comp
L power:+BATT #PWR016
U 1 1 6194BA99
P 4600 3750
F 0 "#PWR016" H 4600 3600 50  0001 C CNN
F 1 "+BATT" H 4615 3923 50  0000 C CNN
F 2 "" H 4600 3750 50  0001 C CNN
F 3 "" H 4600 3750 50  0001 C CNN
	1    4600 3750
	1    0    0    -1  
$EndComp
Wire Wire Line
	2900 4100 3050 4100
$Comp
L power:+5V #PWR020
U 1 1 61967862
P 6250 4000
F 0 "#PWR020" H 6250 3850 50  0001 C CNN
F 1 "+5V" H 6400 4050 50  0000 C CNN
F 2 "" H 6250 4000 50  0001 C CNN
F 3 "" H 6250 4000 50  0001 C CNN
	1    6250 4000
	1    0    0    -1  
$EndComp
$Comp
L Regulator_Linear:LF33_TO252 U2
U 1 1 619804DD
P 8250 3800
F 0 "U2" H 8250 4042 50  0000 C CNN
F 1 "LF33_TO252" H 8250 3951 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:TO-252-2" H 8250 4025 50  0001 C CIN
F 3 "http://www.st.com/content/ccc/resource/technical/document/datasheet/c4/0e/7e/2a/be/bc/4c/bd/CD00000546.pdf/files/CD00000546.pdf/jcr:content/translations/en.CD00000546.pdf" H 8250 3750 50  0001 C CNN
	1    8250 3800
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR018
U 1 1 6198195F
P 7750 3800
F 0 "#PWR018" H 7750 3650 50  0001 C CNN
F 1 "+5V" H 7765 3973 50  0000 C CNN
F 2 "" H 7750 3800 50  0001 C CNN
F 3 "" H 7750 3800 50  0001 C CNN
	1    7750 3800
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR019
U 1 1 61981FD7
P 8750 3800
F 0 "#PWR019" H 8750 3650 50  0001 C CNN
F 1 "+3.3V" H 8765 3973 50  0000 C CNN
F 2 "" H 8750 3800 50  0001 C CNN
F 3 "" H 8750 3800 50  0001 C CNN
	1    8750 3800
	1    0    0    -1  
$EndComp
Wire Wire Line
	8550 3800 8750 3800
$Comp
L Device:C C11
U 1 1 61987DA4
P 7750 4100
F 0 "C11" H 7865 4146 50  0000 L CNN
F 1 "0,1uF" H 7865 4055 50  0000 L CNN
F 2 "" H 7788 3950 50  0001 C CNN
F 3 "~" H 7750 4100 50  0001 C CNN
	1    7750 4100
	1    0    0    -1  
$EndComp
$Comp
L Device:CP C12
U 1 1 61988AFF
P 8750 4100
F 0 "C12" H 8868 4146 50  0000 L CNN
F 1 "2,2uF" H 8868 4055 50  0000 L CNN
F 2 "" H 8788 3950 50  0001 C CNN
F 3 "~" H 8750 4100 50  0001 C CNN
	1    8750 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	8750 3800 8750 3950
Connection ~ 8750 3800
Wire Wire Line
	7750 3950 7750 3800
Connection ~ 7750 3800
Wire Wire Line
	7750 3800 7950 3800
Wire Wire Line
	7750 4250 8250 4250
Wire Wire Line
	8250 4100 8250 4250
Connection ~ 8250 4250
Wire Wire Line
	8250 4250 8750 4250
$Comp
L power:GND #PWR022
U 1 1 6198F133
P 8250 4250
F 0 "#PWR022" H 8250 4000 50  0001 C CNN
F 1 "GND" H 8255 4077 50  0000 C CNN
F 2 "" H 8250 4250 50  0001 C CNN
F 3 "" H 8250 4250 50  0001 C CNN
	1    8250 4250
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D1
U 1 1 6199E979
P 9150 3950
F 0 "D1" V 9189 3832 50  0000 R CNN
F 1 "RED2" V 9098 3832 50  0000 R CNN
F 2 "LED_THT:LED_D5.0mm" H 9150 3950 50  0001 C CNN
F 3 "~" H 9150 3950 50  0001 C CNN
	1    9150 3950
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R10
U 1 1 6199E97F
P 9150 4300
F 0 "R10" H 9220 4346 50  0000 L CNN
F 1 "470" H 9220 4255 50  0000 L CNN
F 2 "" V 9080 4300 50  0001 C CNN
F 3 "~" H 9150 4300 50  0001 C CNN
	1    9150 4300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR025
U 1 1 6199E985
P 9150 4600
F 0 "#PWR025" H 9150 4350 50  0001 C CNN
F 1 "GND" H 9155 4427 50  0000 C CNN
F 2 "" H 9150 4600 50  0001 C CNN
F 3 "" H 9150 4600 50  0001 C CNN
	1    9150 4600
	1    0    0    -1  
$EndComp
Wire Wire Line
	9150 4100 9150 4150
Wire Wire Line
	9150 4450 9150 4600
Wire Wire Line
	8750 3800 9150 3800
Wire Wire Line
	2500 1850 2500 1950
$Comp
L Transistor_FET:IRF540N Q1
U 1 1 61934D2A
P 2750 4700
F 0 "Q1" V 2954 4746 50  0000 L CNN
F 1 "IRF540N" V 3050 4550 50  0000 L CNN
F 2 "Package_TO_SOT_THT:TO-220-3_Vertical" H 3000 4625 50  0001 L CIN
F 3 "http://www.irf.com/product-info/datasheets/data/irf540n.pdf" H 2750 4700 50  0001 L CNN
	1    2750 4700
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4600 3750 4600 4100
Wire Wire Line
	2450 4600 2550 4600
Wire Wire Line
	2450 4100 2450 4600
Wire Wire Line
	2950 4600 3100 4600
Wire Wire Line
	4600 4900 4600 4100
Connection ~ 4600 4100
$Comp
L Device:R R12
U 1 1 61997E5D
P 3600 4900
F 0 "R12" H 3670 4946 50  0000 L CNN
F 1 "47k" H 3670 4855 50  0000 L CNN
F 2 "" V 3530 4900 50  0001 C CNN
F 3 "~" H 3600 4900 50  0001 C CNN
	1    3600 4900
	0    -1   -1   0   
$EndComp
Wire Wire Line
	2750 4900 3450 4900
Wire Wire Line
	3750 4900 4600 4900
$Comp
L Device:Jumper_NO_Small JP7
U 1 1 61A9CAD3
P 3900 4100
F 0 "JP7" H 3900 4285 50  0000 C CNN
F 1 "ammeter" H 3900 4194 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 3900 4100 50  0001 C CNN
F 3 "~" H 3900 4100 50  0001 C CNN
	1    3900 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	4000 4100 4600 4100
Wire Wire Line
	3350 4100 3800 4100
$EndSCHEMATC
