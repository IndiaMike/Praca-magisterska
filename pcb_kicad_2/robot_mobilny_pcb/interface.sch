EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 4
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
L Device:LED D202
U 1 1 617723D4
P 2600 1950
F 0 "D202" H 2593 1695 50  0000 C CNN
F 1 "LED_G" H 2593 1786 50  0000 C CNN
F 2 "LED_THT:LED_D5.0mm" H 2600 1950 50  0001 C CNN
F 3 "~" H 2600 1950 50  0001 C CNN
	1    2600 1950
	-1   0    0    1   
$EndComp
$Comp
L Device:LED D203
U 1 1 61772A27
P 2600 2400
F 0 "D203" H 2593 2145 50  0000 C CNN
F 1 "LED_G" H 2593 2236 50  0000 C CNN
F 2 "LED_THT:LED_D5.0mm" H 2600 2400 50  0001 C CNN
F 3 "~" H 2600 2400 50  0001 C CNN
	1    2600 2400
	-1   0    0    1   
$EndComp
$Comp
L Device:LED D204
U 1 1 61773566
P 2600 2850
F 0 "D204" H 2593 2595 50  0000 C CNN
F 1 "LED_Y" H 2593 2686 50  0000 C CNN
F 2 "LED_THT:LED_D5.0mm" H 2600 2850 50  0001 C CNN
F 3 "~" H 2600 2850 50  0001 C CNN
	1    2600 2850
	-1   0    0    1   
$EndComp
$Comp
L Device:R R201
U 1 1 61773BF9
P 2150 1500
F 0 "R201" V 1943 1500 50  0000 C CNN
F 1 "330" V 2034 1500 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2080 1500 50  0001 C CNN
F 3 "~" H 2150 1500 50  0001 C CNN
	1    2150 1500
	0    1    1    0   
$EndComp
$Comp
L Device:R R204
U 1 1 61774702
P 2150 1950
F 0 "R204" V 1943 1950 50  0000 C CNN
F 1 "330" V 2034 1950 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2080 1950 50  0001 C CNN
F 3 "~" H 2150 1950 50  0001 C CNN
	1    2150 1950
	0    1    1    0   
$EndComp
$Comp
L Device:R R205
U 1 1 617749A4
P 2150 2400
F 0 "R205" V 1943 2400 50  0000 C CNN
F 1 "330" V 2034 2400 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2080 2400 50  0001 C CNN
F 3 "~" H 2150 2400 50  0001 C CNN
	1    2150 2400
	0    1    1    0   
$EndComp
$Comp
L Device:R R206
U 1 1 61774CCB
P 2150 2850
F 0 "R206" V 1943 2850 50  0000 C CNN
F 1 "330" V 2034 2850 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2080 2850 50  0001 C CNN
F 3 "~" H 2150 2850 50  0001 C CNN
	1    2150 2850
	0    1    1    0   
$EndComp
Wire Wire Line
	2300 1500 2450 1500
Wire Wire Line
	2300 1950 2450 1950
Wire Wire Line
	2300 2400 2450 2400
Wire Wire Line
	2300 2850 2450 2850
Wire Wire Line
	2000 1500 2000 1950
Wire Wire Line
	2000 2400 2000 1950
Connection ~ 2000 1950
Wire Wire Line
	2000 2850 2000 2400
Connection ~ 2000 2400
$Comp
L power:+3.3V #PWR0203
U 1 1 6177600C
P 1600 2400
F 0 "#PWR0203" H 1600 2250 50  0001 C CNN
F 1 "+3.3V" H 1615 2573 50  0000 C CNN
F 2 "" H 1600 2400 50  0001 C CNN
F 3 "" H 1600 2400 50  0001 C CNN
	1    1600 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	1600 2400 2000 2400
Text GLabel 3000 1500 2    50   Input ~ 0
LED1
Text GLabel 3000 1950 2    50   Input ~ 0
LED2
Text GLabel 3000 2400 2    50   Input ~ 0
LED3
Text GLabel 3000 2850 2    50   Input ~ 0
LED4
Wire Wire Line
	2750 1500 3000 1500
Wire Wire Line
	2750 1950 3000 1950
Wire Wire Line
	2750 2400 3000 2400
Wire Wire Line
	2750 2850 3000 2850
$Comp
L Switch:SW_Push_Dual_x2 SW201
U 1 1 6177803B
P 5350 1900
F 0 "SW201" H 5650 2150 50  0000 C CNN
F 1 "Button_1" H 5700 2050 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H9.5mm" H 5350 2100 50  0001 C CNN
F 3 "~" H 5350 2100 50  0001 C CNN
	1    5350 1900
	1    0    0    -1  
$EndComp
$Comp
L Device:R R203
U 1 1 61779C00
P 4850 1650
F 0 "R203" H 4920 1696 50  0000 L CNN
F 1 "4k7" H 4920 1605 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 4780 1650 50  0001 C CNN
F 3 "~" H 4850 1650 50  0001 C CNN
	1    4850 1650
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0202
U 1 1 6177B1CB
P 4850 1400
F 0 "#PWR0202" H 4850 1250 50  0001 C CNN
F 1 "+3.3V" H 4865 1573 50  0000 C CNN
F 2 "" H 4850 1400 50  0001 C CNN
F 3 "" H 4850 1400 50  0001 C CNN
	1    4850 1400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4850 1400 4850 1500
Wire Wire Line
	4700 1900 4850 1900
Wire Wire Line
	4850 1800 4850 1900
$Comp
L Device:C C201
U 1 1 6177C94D
P 4850 2150
F 0 "C201" H 5100 2100 50  0000 C CNN
F 1 "100nF" H 5100 2200 50  0000 C CNN
F 2 "Capacitor_THT:C_Disc_D5.0mm_W2.5mm_P2.50mm" H 4888 2000 50  0001 C CNN
F 3 "~" H 4850 2150 50  0001 C CNN
	1    4850 2150
	-1   0    0    1   
$EndComp
Text GLabel 4700 1900 0    50   Input ~ 0
BUTTON_1
$Comp
L power:GND #PWR0204
U 1 1 6177E65E
P 4850 2400
F 0 "#PWR0204" H 4850 2150 50  0001 C CNN
F 1 "GND" V 4855 2272 50  0000 R CNN
F 2 "" H 4850 2400 50  0001 C CNN
F 3 "" H 4850 2400 50  0001 C CNN
	1    4850 2400
	1    0    0    -1  
$EndComp
$Comp
L Device:Buzzer BZ201
U 1 1 61784492
P 7600 1650
F 0 "BZ201" H 7752 1679 50  0000 L CNN
F 1 "Buzzer" H 7752 1588 50  0000 L CNN
F 2 "Buzzer_Beeper:Buzzer_12x9.5RM7.6" V 7575 1750 50  0001 C CNN
F 3 "~" V 7575 1750 50  0001 C CNN
	1    7600 1650
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0201
U 1 1 618AE479
P 6950 1350
F 0 "#PWR0201" H 6950 1200 50  0001 C CNN
F 1 "+3.3V" H 6965 1523 50  0000 C CNN
F 2 "" H 6950 1350 50  0001 C CNN
F 3 "" H 6950 1350 50  0001 C CNN
	1    6950 1350
	1    0    0    -1  
$EndComp
Wire Wire Line
	6950 1350 6950 1550
Wire Wire Line
	7400 1550 7500 1550
Text GLabel 7300 1750 0    50   Input ~ 0
BUZZER
Wire Wire Line
	7300 1750 7500 1750
$Comp
L Device:R R202
U 1 1 618B52DF
P 7250 1550
F 0 "R202" V 7457 1550 50  0000 C CNN
F 1 "330" V 7366 1550 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 7180 1550 50  0001 C CNN
F 3 "~" H 7250 1550 50  0001 C CNN
	1    7250 1550
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6950 1550 7100 1550
Wire Notes Line
	6650 1100 6650 2000
Wire Notes Line
	6650 2000 8150 2000
Wire Notes Line
	8150 2000 8150 1100
Wire Notes Line
	8150 1100 6650 1100
Wire Notes Line
	1450 1100 1450 3700
Wire Notes Line
	1450 3700 3400 3700
Wire Notes Line
	3400 3700 3400 1100
Wire Notes Line
	3400 1100 1450 1100
$Comp
L Device:LED D201
U 1 1 61771269
P 2600 1500
F 0 "D201" H 2593 1245 50  0000 C CNN
F 1 "LED_G" H 2593 1336 50  0000 C CNN
F 2 "LED_THT:LED_D5.0mm" H 2600 1500 50  0001 C CNN
F 3 "~" H 2600 1500 50  0001 C CNN
	1    2600 1500
	-1   0    0    1   
$EndComp
Connection ~ 4850 1900
Wire Wire Line
	4850 1900 4850 2000
Wire Wire Line
	4850 2300 4850 2400
$Comp
L power:GND #PWR0205
U 1 1 618E5535
P 5550 2400
F 0 "#PWR0205" H 5550 2150 50  0001 C CNN
F 1 "GND" V 5555 2272 50  0000 R CNN
F 2 "" H 5550 2400 50  0001 C CNN
F 3 "" H 5550 2400 50  0001 C CNN
	1    5550 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	5550 1900 5550 2400
Text GLabel 4700 3850 0    50   Input ~ 0
BUTTON_2
Text GLabel 4700 5800 0    50   Input ~ 0
BUTTON_3
$Comp
L Switch:SW_Push_Dual_x2 SW202
U 1 1 618EB4A2
P 5400 3850
F 0 "SW202" H 5400 4135 50  0000 C CNN
F 1 "Button_2" H 5550 4050 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H9.5mm" H 5400 4050 50  0001 C CNN
F 3 "~" H 5400 4050 50  0001 C CNN
	1    5400 3850
	1    0    0    -1  
$EndComp
$Comp
L Device:R R207
U 1 1 618EB4AE
P 4850 3600
F 0 "R207" H 4920 3646 50  0000 L CNN
F 1 "4k7" H 4920 3555 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 4780 3600 50  0001 C CNN
F 3 "~" H 4850 3600 50  0001 C CNN
	1    4850 3600
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0206
U 1 1 618EB4B4
P 4850 3350
F 0 "#PWR0206" H 4850 3200 50  0001 C CNN
F 1 "+3.3V" H 4865 3523 50  0000 C CNN
F 2 "" H 4850 3350 50  0001 C CNN
F 3 "" H 4850 3350 50  0001 C CNN
	1    4850 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	4850 3350 4850 3450
Wire Wire Line
	4700 3850 4850 3850
Wire Wire Line
	4850 3750 4850 3850
$Comp
L Device:C C202
U 1 1 618EB4BD
P 4850 4100
F 0 "C202" H 5100 4050 50  0000 C CNN
F 1 "100nF" H 5100 4150 50  0000 C CNN
F 2 "Capacitor_THT:C_Disc_D5.0mm_W2.5mm_P2.50mm" H 4888 3950 50  0001 C CNN
F 3 "~" H 4850 4100 50  0001 C CNN
	1    4850 4100
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR0207
U 1 1 618EB4C3
P 4850 4350
F 0 "#PWR0207" H 4850 4100 50  0001 C CNN
F 1 "GND" V 4855 4222 50  0000 R CNN
F 2 "" H 4850 4350 50  0001 C CNN
F 3 "" H 4850 4350 50  0001 C CNN
	1    4850 4350
	1    0    0    -1  
$EndComp
Connection ~ 4850 3850
Wire Wire Line
	4850 3850 4850 3950
Wire Wire Line
	4850 4250 4850 4350
$Comp
L power:GND #PWR0208
U 1 1 618EB4CD
P 5600 4350
F 0 "#PWR0208" H 5600 4100 50  0001 C CNN
F 1 "GND" V 5605 4222 50  0000 R CNN
F 2 "" H 5600 4350 50  0001 C CNN
F 3 "" H 5600 4350 50  0001 C CNN
	1    5600 4350
	1    0    0    -1  
$EndComp
Wire Wire Line
	5600 3850 5600 4350
$Comp
L Switch:SW_Push_Dual_x2 SW203
U 1 1 618EF7CF
P 5400 5800
F 0 "SW203" H 5400 6085 50  0000 C CNN
F 1 "Button_3" H 5550 6000 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H9.5mm" H 5400 6000 50  0001 C CNN
F 3 "~" H 5400 6000 50  0001 C CNN
	1    5400 5800
	1    0    0    -1  
$EndComp
$Comp
L Device:R R208
U 1 1 618EF7DB
P 4850 5550
F 0 "R208" H 4920 5596 50  0000 L CNN
F 1 "4k7" H 4920 5505 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 4780 5550 50  0001 C CNN
F 3 "~" H 4850 5550 50  0001 C CNN
	1    4850 5550
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0209
U 1 1 618EF7E1
P 4850 5300
F 0 "#PWR0209" H 4850 5150 50  0001 C CNN
F 1 "+3.3V" H 4865 5473 50  0000 C CNN
F 2 "" H 4850 5300 50  0001 C CNN
F 3 "" H 4850 5300 50  0001 C CNN
	1    4850 5300
	1    0    0    -1  
$EndComp
Wire Wire Line
	4850 5300 4850 5400
Wire Wire Line
	4700 5800 4850 5800
Wire Wire Line
	4850 5700 4850 5800
$Comp
L Device:C C203
U 1 1 618EF7EA
P 4850 6050
F 0 "C203" H 5100 6000 50  0000 C CNN
F 1 "100nF" H 5100 6100 50  0000 C CNN
F 2 "Capacitor_THT:C_Disc_D5.0mm_W2.5mm_P2.50mm" H 4888 5900 50  0001 C CNN
F 3 "~" H 4850 6050 50  0001 C CNN
	1    4850 6050
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR0210
U 1 1 618EF7F0
P 4850 6300
F 0 "#PWR0210" H 4850 6050 50  0001 C CNN
F 1 "GND" V 4855 6172 50  0000 R CNN
F 2 "" H 4850 6300 50  0001 C CNN
F 3 "" H 4850 6300 50  0001 C CNN
	1    4850 6300
	1    0    0    -1  
$EndComp
Connection ~ 4850 5800
Wire Wire Line
	4850 5800 4850 5900
Wire Wire Line
	4850 6200 4850 6300
$Comp
L power:GND #PWR0211
U 1 1 618EF7FA
P 5600 6300
F 0 "#PWR0211" H 5600 6050 50  0001 C CNN
F 1 "GND" V 5605 6172 50  0000 R CNN
F 2 "" H 5600 6300 50  0001 C CNN
F 3 "" H 5600 6300 50  0001 C CNN
	1    5600 6300
	1    0    0    -1  
$EndComp
Wire Wire Line
	5600 5800 5600 6300
Wire Notes Line
	3950 6800 6150 6800
Wire Notes Line
	6150 6800 6150 1100
Wire Notes Line
	6150 1100 3950 1100
Wire Notes Line
	3950 1100 3950 6800
Text Notes 6650 1150 0    50   ~ 0
BUZZER with generator\n\n
Text Notes 3950 1050 0    50   ~ 0
Buttons\n
Text Notes 1450 1050 0    50   ~ 0
LEDs\n
Wire Wire Line
	4850 3850 5200 3850
Wire Wire Line
	4850 5800 5200 5800
Wire Wire Line
	4850 1900 5150 1900
$EndSCHEMATC
