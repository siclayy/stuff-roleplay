/**--------------------------------------------------------------------------**\
					===========================
					Y Sever Includes - INI Core
					===========================
Description:
	Defines a symbol differently every time it is included.
Legal:
	Version: MPL 1.1
	
	The contents of this file are subject to the Mozilla Public License Version 
	1.1 (the "License"); you may not use this file except in compliance with 
	the License. You may obtain a copy of the License at 
	http://www.mozilla.org/MPL/
	
	Software distributed under the License is distributed on an "AS IS" basis,
	WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
	for the specific language governing rights and limitations under the
	License.
	
	The Original Code is the YSI unique symbol include.
	
	The Initial Developer of the Original Code is Alex "Y_Less" Cole.
	Portions created by the Initial Developer are Copyright (C) 2011
	the Initial Developer. All Rights Reserved.
	
	Contributors:
		ZeeX, koolk, JoeBullet/Google63, g_aSlice/Slice
	
	Thanks:
		JoeBullet/Google63 - Handy arbitrary ASM jump code using SCTRL.
		ZeeX - Very productive conversations.
		koolk - IsPlayerinAreaEx code.
		TheAlpha - Danish translation.
		breadfish - German translation.
		Fireburn - Dutch translation.
		yom - French translation.
		50p - Polish translation.
		Zamaroht - Spanish translation.
		Dracoblue, sintax, mabako, Xtreme, other coders - Producing other modes
			for me to strive to better.
		Pixels^ - Running XScripters where the idea was born.
		Matite - Pestering me to release it and using it.
	
	Very special thanks to:
		Thiadmer - PAWN, whose limits continue to amaze me!
		Kye/Kalcor - SA:MP.
		SA:MP Team past, present and future - SA:MP.
	
Version:
	1.0
Changelog:
	01/05/11:
		First version.
</remarks>
\**--------------------------------------------------------------------------**/

#undef _inc_y_unique

#if defined UNIQUE_SYMBOL
	#if UNIQUE_SYMBOL == 0
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (1)
		#define UNIQUE_FUNCTION<%0...%1> %01%1
		#endinput
	#elseif UNIQUE_SYMBOL == 1
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (2)
		#define UNIQUE_FUNCTION<%0...%1> %02%1
		#endinput
	#elseif UNIQUE_SYMBOL == 2
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (3)
		#define UNIQUE_FUNCTION<%0...%1> %03%1
		#endinput
	#elseif UNIQUE_SYMBOL == 3
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (4)
		#define UNIQUE_FUNCTION<%0...%1> %04%1
		#endinput
	#elseif UNIQUE_SYMBOL == 4
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (5)
		#define UNIQUE_FUNCTION<%0...%1> %05%1
		#endinput
	#elseif UNIQUE_SYMBOL == 5
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (6)
		#define UNIQUE_FUNCTION<%0...%1> %06%1
		#endinput
	#elseif UNIQUE_SYMBOL == 6
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (7)
		#define UNIQUE_FUNCTION<%0...%1> %07%1
		#endinput
	#elseif UNIQUE_SYMBOL == 7
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (8)
		#define UNIQUE_FUNCTION<%0...%1> %08%1
		#endinput
	#elseif UNIQUE_SYMBOL == 8
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (9)
		#define UNIQUE_FUNCTION<%0...%1> %09%1
		#endinput
	#elseif UNIQUE_SYMBOL == 9
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (10)
		#define UNIQUE_FUNCTION<%0...%1> %010%1
		#endinput
	#elseif UNIQUE_SYMBOL == 10
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (11)
		#define UNIQUE_FUNCTION<%0...%1> %011%1
		#endinput
	#elseif UNIQUE_SYMBOL == 11
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (12)
		#define UNIQUE_FUNCTION<%0...%1> %012%1
		#endinput
	#elseif UNIQUE_SYMBOL == 12
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (13)
		#define UNIQUE_FUNCTION<%0...%1> %013%1
		#endinput
	#elseif UNIQUE_SYMBOL == 13
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (14)
		#define UNIQUE_FUNCTION<%0...%1> %014%1
		#endinput
	#elseif UNIQUE_SYMBOL == 14
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (15)
		#define UNIQUE_FUNCTION<%0...%1> %015%1
		#endinput
	#elseif UNIQUE_SYMBOL == 15
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (16)
		#define UNIQUE_FUNCTION<%0...%1> %016%1
		#endinput
	#elseif UNIQUE_SYMBOL == 16
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (17)
		#define UNIQUE_FUNCTION<%0...%1> %017%1
		#endinput
	#elseif UNIQUE_SYMBOL == 17
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (18)
		#define UNIQUE_FUNCTION<%0...%1> %018%1
		#endinput
	#elseif UNIQUE_SYMBOL == 18
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (19)
		#define UNIQUE_FUNCTION<%0...%1> %019%1
		#endinput
	#elseif UNIQUE_SYMBOL == 19
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (20)
		#define UNIQUE_FUNCTION<%0...%1> %020%1
		#endinput
	#elseif UNIQUE_SYMBOL == 20
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (21)
		#define UNIQUE_FUNCTION<%0...%1> %021%1
		#endinput
	#elseif UNIQUE_SYMBOL == 21
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (22)
		#define UNIQUE_FUNCTION<%0...%1> %022%1
		#endinput
	#elseif UNIQUE_SYMBOL == 22
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (23)
		#define UNIQUE_FUNCTION<%0...%1> %023%1
		#endinput
	#elseif UNIQUE_SYMBOL == 23
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (24)
		#define UNIQUE_FUNCTION<%0...%1> %024%1
		#endinput
	#elseif UNIQUE_SYMBOL == 24
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (25)
		#define UNIQUE_FUNCTION<%0...%1> %025%1
		#endinput
	#elseif UNIQUE_SYMBOL == 25
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (26)
		#define UNIQUE_FUNCTION<%0...%1> %026%1
		#endinput
	#elseif UNIQUE_SYMBOL == 26
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (27)
		#define UNIQUE_FUNCTION<%0...%1> %027%1
		#endinput
	#elseif UNIQUE_SYMBOL == 27
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (28)
		#define UNIQUE_FUNCTION<%0...%1> %028%1
		#endinput
	#elseif UNIQUE_SYMBOL == 28
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (29)
		#define UNIQUE_FUNCTION<%0...%1> %029%1
		#endinput
	#elseif UNIQUE_SYMBOL == 29
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (30)
		#define UNIQUE_FUNCTION<%0...%1> %030%1
		#endinput
	#elseif UNIQUE_SYMBOL == 30
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (31)
		#define UNIQUE_FUNCTION<%0...%1> %031%1
		#endinput
	#elseif UNIQUE_SYMBOL == 31
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (32)
		#define UNIQUE_FUNCTION<%0...%1> %032%1
		#endinput
	#elseif UNIQUE_SYMBOL == 32
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (33)
		#define UNIQUE_FUNCTION<%0...%1> %033%1
		#endinput
	#elseif UNIQUE_SYMBOL == 33
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (34)
		#define UNIQUE_FUNCTION<%0...%1> %034%1
		#endinput
	#elseif UNIQUE_SYMBOL == 34
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (35)
		#define UNIQUE_FUNCTION<%0...%1> %035%1
		#endinput
	#elseif UNIQUE_SYMBOL == 35
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (36)
		#define UNIQUE_FUNCTION<%0...%1> %036%1
		#endinput
	#elseif UNIQUE_SYMBOL == 36
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (37)
		#define UNIQUE_FUNCTION<%0...%1> %037%1
		#endinput
	#elseif UNIQUE_SYMBOL == 37
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (38)
		#define UNIQUE_FUNCTION<%0...%1> %038%1
		#endinput
	#elseif UNIQUE_SYMBOL == 38
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (39)
		#define UNIQUE_FUNCTION<%0...%1> %039%1
		#endinput
	#elseif UNIQUE_SYMBOL == 39
		#undef                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 NCTION
		#define UNIQUE_SYMBOL (91)
		#define UNIQUE_FUNCTION<%0...%1> %091%1
		#endinput
	#elseif UNIQUE_SYMBOL == 91
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (92)
		#define UNIQUE_FUNCTION<%0...%1> %092%1
		#endinput
	#elseif UNIQUE_SYMBOL == 92
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (93)
		#define UNIQUE_FUNCTION<%0...%1> %093%1
		#endinput
	#elseif UNIQUE_SYMBOL == 93
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (94)
		#define UNIQUE_FUNCTION<%0...%1> %094%1
		#endinput
	#elseif UNIQUE_SYMBOL == 94
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (95)
		#define UNIQUE_FUNCTION<%0...%1> %095%1
		#endinput
	#elseif UNIQUE_SYMBOL == 95
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (96)
		#define UNIQUE_FUNCTION<%0...%1> %096%1
		#endinput
	#elseif UNIQUE_SYMBOL == 96
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (97)
		#define UNIQUE_FUNCTION<%0...%1> %097%1
		#endinput
	#elseif UNIQUE_SYMBOL == 97
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (98)
		#define UNIQUE_FUNCTION<%0...%1> %098%1
		#endinput
	#elseif UNIQUE_SYMBOL == 98
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (99)
		#define UNIQUE_FUNCTION<%0...%1> %099%1
		#endinput
	#elseif UNIQUE_SYMBOL == 99
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (100)
		#define UNIQUE_FUNCTION<%0...%1> %0100%1
		#endinput
	#elseif UNIQUE_SYMBOL == 100
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (101)
		#define UNIQUE_FUNCTION<%0...%1> %0101%1
		#endinput
	#elseif UNIQUE_SYMBOL == 101
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (102)
		#define UNIQUE_FUNCTION<%0...%1> %0102%1
		#endinput
	#elseif UNIQUE_SYMBOL == 102
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (103)
		#define UNIQUE_FUNCTION<%0...%1> %0103%1
		#endinput
	#elseif UNIQUE_SYMBOL == 103
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (104)
		#define UNIQUE_FUNCTION<%0...%1> %0104%1
		#endinput
	#elseif UNIQUE_SYMBOL == 104
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (105)
		#define UNIQUE_FUNCTION<%0...%1> %0105%1
		#endinput
	#elseif UNIQUE_SYMBOL == 105
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (106)
		#define UNIQUE_FUNCTION<%0...%1> %0106%1
		#endinput
	#elseif UNIQUE_SYMBOL == 106
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (107)
		#define UNIQUE_FUNCTION<%0...%1> %0107%1
		#endinput
	#elseif UNIQUE_SYMBOL == 107
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (108)
		#define UNIQUE_FUNCTION<%0...%1> %0108%1
		#endinput
	#elseif UNIQUE_SYMBOL == 108
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (109)
		#define UNIQUE_FUNCTION<%0...%1> %0109%1
		#endinput
	#elseif UNIQUE_SYMBOL == 109
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (110)
		#define UNIQUE_FUNCTION<%0...%1> %0110%1
		#endinput
	#elseif UNIQUE_SYMBOL == 110
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (111)
		#define UNIQUE_FUNCTION<%0...%1> %0111%1
		#endinput
	#elseif UNIQUE_SYMBOL == 111
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (112)
		#define UNIQUE_FUNCTION<%0...%1> %0112%1
		#endinput
	#elseif UNIQUE_SYMBOL == 112
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (113)
		#define UNIQUE_FUNCTION<%0...%1> %0113%1
		#endinput
	#elseif UNIQUE_SYMBOL == 113
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (114)
		#define UNIQUE_FUNCTION<%0...%1> %0114%1
		#endinput
	#elseif UNIQUE_SYMBOL == 114
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (115)
		#define UNIQUE_FUNCTION<%0...%1> %0115%1
		#endinput
	#elseif UNIQUE_SYMBOL == 115
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (116)
		#define U                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                1> %0141%1
		#endinput
	#elseif UNIQUE_SYMBOL == 141
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (142)
		#define UNIQUE_FUNCTION<%0...%1> %0142%1
		#endinput
	#elseif UNIQUE_SYMBOL == 142
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (143)
		#define UNIQUE_FUNCTION<%0...%1> %0143%1
		#endinput
	#elseif UNIQUE_SYMBOL == 143
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (144)
		#define UNIQUE_FUNCTION<%0...%1> %0144%1
		#endinput
	#elseif UNIQUE_SYMBOL == 144
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (145)
		#define UNIQUE_FUNCTION<%0...%1> %0145%1
		#endinput
	#elseif UNIQUE_SYMBOL == 145
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (146)
		#define UNIQUE_FUNCTION<%0...%1> %0146%1
		#endinput
	#elseif UNIQUE_SYMBOL == 146
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (147)
		#define UNIQUE_FUNCTION<%0...%1> %0147%1
		#endinput
	#elseif UNIQUE_SYMBOL == 147
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (148)
		#define UNIQUE_FUNCTION<%0...%1> %0148%1
		#endinput
	#elseif UNIQUE_SYMBOL == 148
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (149)
		#define UNIQUE_FUNCTION<%0...%1> %0149%1
		#endinput
	#elseif UNIQUE_SYMBOL == 149
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (150)
		#define UNIQUE_FUNCTION<%0...%1> %0150%1
		#endinput
	#elseif UNIQUE_SYMBOL == 150
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (151)
		#define UNIQUE_FUNCTION<%0...%1> %0151%1
		#endinput
	#elseif UNIQUE_SYMBOL == 151
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (152)
		#define UNIQUE_FUNCTION<%0...%1> %0152%1
		#endinput
	#elseif UNIQUE_SYMBOL == 152
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (153)
		#define UNIQUE_FUNCTION<%0...%1> %0153%1
		#endinput
	#elseif UNIQUE_SYMBOL == 153
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (154)
		#define UNIQUE_FUNCTION<%0...%1> %0154%1
		#endinput
	#elseif UNIQUE_SYMBOL == 154
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (155)
		#define UNIQUE_FUNCTION<%0...%1> %0155%1
		#endinput
	#elseif UNIQUE_SYMBOL == 155
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (156)
		#define UNIQUE_FUNCTION<%0...%1> %0156%1
		#endinput
	#elseif UNIQUE_SYMBOL == 156
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (157)
		#define UNIQUE_FUNCTION<%0...%1> %0157%1
		#endinput
	#elseif UNIQUE_SYMBOL == 157
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (158)
		#define UNIQUE_FUNCTION<%0...%1> %0158%1
		#endinput
	#elseif UNIQUE_SYMBOL == 158
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (159)
		#define UNIQUE_FUNCTION<%0...%1> %0159%1
		#endinput
	#elseif UNIQUE_SYMBOL == 159
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (160)
		#define UNIQUE_FUNCTION<%0...%1> %0160%1
		#endinput
	#elseif UNIQUE_SYMBOL == 160
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (161)
		#define UNIQUE_FUNCTION<%0...%1> %0161%1
		#endinput
	#elseif UNIQUE_SYMBOL == 161
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (162)
		#define UNIQUE_FUNCTION<%0...%1> %0162%1
		#endinput
	#elseif UNIQUE_SYMBOL == 162
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (163)
		#define UNIQUE_FUNCTION<%0...%1> %0163%1
		#endinput
	#elseif UNIQUE_SYMBOL == 163
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (164)
		#define UNIQUE_FUNCTION<%0...%1> %0164%1
		#endinput
	#elseif UNIQUE_SYMBOL == 164
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (165)
		#define UNIQUE_FUNCTION<%0...%1> %0165%1
		#endinput
	#elseif UNIQUE_SYMBOL == 165
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (166)
		#define UNIQUE_FUNCTION<%0...%1> %0166%1
		#endinput
	#elseif UNIQUE_SYMBOL == 166
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (167)
		#define UNIQUE_FUNCTION<%0...%1> %0167%1
		#endinput
	#elseif UNIQUE_SYMBOL == 167
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (168)
		#define UNIQUE_FUNCTION<%0...%1> %0168%1
		#endinput
	#elseif UNIQUE_SYMBOL == 168
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (169)
		#define UNIQUE_FUNCTION<%0...%1> %0169%1
		#endinput
	#elseif UNIQUE_SYMBOL == 169
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (170)
		#define UNIQUE_FUNCTION<%0...%1> %0170%1
		#endinput
	#elseif UNIQUE_SYMBOL == 170
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (171)
		#define UNIQUE_FUNCTION<%0...%1> %0171%1
		#endinput
	#elseif UNIQUE_SYMBOL == 171
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (172)
		#define UNIQUE_FUNCTION<%0...%1> %0172%1
		#endinput
	#elseif UNIQUE_SYMBOL == 172
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (173)
		#define UNIQUE_FUNCTION<%0...%1> %0173%1
		#endinput
	#elseif UNIQUE_SYMBOL == 173
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (174)
		#define UNIQUE_FUNCTION<%0...%1> %0174%1
		#endinput
	#elseif UNIQUE_SYMBOL == 174
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (175)
		#define UNIQUE_FUNCTION<%0...%1> %0175%1
		#endinput
	#elseif UNIQUE_SYMBOL == 175
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (176)
		#define UNIQUE_FUNCTION<%0...%1> %0176%1
		#endinput
	#elseif UNIQUE_SYMBOL == 176
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (177)
		#define UNIQUE_FUNCTION<%0...%1> %0177%1
		#endinput
	#elseif UNIQUE_SYMBOL == 177
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (178)
		#define UNIQUE_FUNCTION<%0...%1> %0178%1
		#endinput
	#elseif UNIQUE_SYMBOL == 178
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (179)
		#define UNIQUE_FUNCTION<%0...%1> %0179%1
		#endinput
	#elseif UNIQUE_SYMBOL == 179
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (180)
		#define UNIQUE_FUNCTION<%0...%1> %0180%1
		#endinput
	#elseif UNIQUE_SYMBOL == 180
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (181)
		#define UNIQUE_FUNCTION<%0...%1> %0181%1
		#endinput
	#elseif UNIQUE_SYMBOL == 181
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (182)
		#define UNIQUE_FUNCTION<%0...%1> %0182%1
		#endinput
	#elseif UNIQUE_SYMBOL == 182
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (183)
		#define UNIQUE_FUNCTION<%0...%1> %0183%1
		#endinput
	#elseif UNIQUE_SYMBOL == 183
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (184)
		#define UNIQUE_FUNCTION<%0...%1> %0184%1
		#endinput
	#elseif UNIQUE_SYMBOL == 184
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (185)
		#define UNIQUE_FUNCTION<%0...%1> %0185%1
		#endinput
	#elseif UNIQUE_SYMBOL == 185
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (186)
		#define UNIQUE_FUNCTION<%0...%1> %0186%1
		#endinput
	#elseif UNIQUE_SYMBOL == 186
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (187)
		#define UNIQUE_FUNCTION<%0...%1> %0187%1
		#endinput
	#elseif UNIQUE_SYMBOL == 187
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (188)
		#define UNIQUE_FUNCTION<%0...%1> %0188%1
		#endinput
	#elseif UNIQUE_SYMBOL == 188
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (189)
		#define UNIQUE_FUNCTION<%0...%1> %0189%1
		#endinput
	#elseif UNIQUE_SYMBOL == 189
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (190)
		#define UNIQUE_FUNCTION<%0...%1> %0190%1
		#endinput
	#elseif UNIQUE_SYMBOL == 190
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (191)
		#define UNIQUE_FUNCTION<%0...%1> %0191%1
		#endinput
	#elseif UNIQUE_SYMBOL == 191
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (192)
		#define UNIQUE_FUNCTION<%0...%1> %0192%1
		#endinput
	#elseif UNIQUE_SYMBOL == 192
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (193)
		#define UNIQUE_FUNCTION<%0...%1> %0193%1
		#endinput
	#elseif UNIQUE_SYMBOL == 193
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (194)
		#define UNIQUE_FUNCTION<%0...%1> %0194%1
		#endinput
	#elseif UNIQUE_SYMBOL == 194
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (195)
		#define UNIQUE_FUNCTION<%0...%1> %0195%1
		#endinput
	#elseif UNIQUE_SYMBOL == 195
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (196)
		#define UNIQUE_FUNCTION<%0...%1> %0196%1
		#endinput
	#elseif UNIQUE_SYMBOL == 196
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (197)
		#define UNIQUE_FUNCTION<%0...%1> %0197%1
		#endinput
	#elseif UNIQUE_SYMBOL == 197
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (198)
		#define UNIQUE_FUNCTION<%0...%1> %0198%1
		#endinput
	#elseif UNIQUE_SYMBOL == 198
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (199)
		#define UNIQUE_FUNCTION<%0...%1> %0199%1
		#endinput
	#elseif UNIQUE_SYMBOL == 199
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (200)
		#define UNIQUE_FUNCTION<%0...%1> %0200%1
		#endinput
	#elseif UNIQUE_SYMBOL == 200
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (201)
		#define UNIQUE_FUNCTION<%0...%1> %0201%1
		#endinput
	#elseif UNIQUE_SYMBOL == 201
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (202)
		#define UNIQUE_FUNCTION<%0...%1> %0202%1
		#endinput
	#elseif UNIQUE_SYMBOL == 202
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (203)
		#define UNIQUE_FUNCTION<%0...%1> %0203%1
		#endinput
	#elseif UNIQUE_SYMBOL == 203
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (204)
		#define UNIQUE_FUNCTION<%0...%1> %0204%1
		#endinput
	#elseif UNIQUE_SYMBOL == 204
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (205)
		#define UNIQUE_FUNCTION<%0...%1> %0205%1
		#endinput
	#elseif UNIQUE_SYMBOL == 205
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (206)
		#define UNIQUE_FUNCTION<%0...%1> %0206%1
		#endinput
	#elseif UNIQUE_SYMBOL == 206
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (207)
		#define UNIQUE_FUNCTION<%0...%1> %0207%1
		#endinput
	#elseif UNIQUE_SYMBOL == 207
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (208)
		#define UNIQUE_FUNCTION<%0...%1> %0208%1
		#endinput
	#elseif UNIQUE_SYMBOL == 208
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (209)
		#define UNIQUE_FUNCTION<%0...%1> %0209%1
		#endinput
	#elseif UNIQUE_SYMBOL == 209
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (210)
		#define UNIQUE_FUNCTION<%0...%1> %0210%1
		#endinput
	#elseif UNIQUE_SYMBOL == 210
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (211)
		#define UNIQUE_FUNCTION<%0...%1> %0211%1
		#endinput
	#elseif UNIQUE_SYMBOL == 211
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (212)
		#define UNIQUE_FUNCTION<%0...%1> %0212%1
		#endinput
	#elseif UNIQUE_SYMBOL == 212
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (213)
		#define UNIQUE_FUNCTION<%0...%1> %0213%1
		#endinput
	#elseif UNIQUE_SYMBOL == 213
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (214)
		#define UNIQUE_FUNCTION<%0...%1> %0214%1
		#endinput
	#elseif UNIQUE_SYMBOL == 214
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (215)
		#define UNIQUE_FUNCTION<%0...%1> %0215%1
		#endinput
	#elseif UNIQUE_SYMBOL == 215
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (216)
		#define UNIQUE_FUNCTION<%0...%1> %0216%1
		#endinput
	#elseif UNIQUE_SYMBOL == 216
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (217)
		#define UNIQUE_FUNCTION<%0...%1> %0217%1
		#endinput
	#elseif UNIQUE_SYMBOL == 217
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (218)
		#define UNIQUE_FUNCTION<%0...%1> %0218%1
		#endinput
	#elseif UNIQUE_SYMBOL == 218
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (219)
		#define UNIQUE_FUNCTION<%0...%1> %0219%1
		#endinput
	#elseif UNIQUE_SYMBOL == 219
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (220)
		#define UNIQUE_FUNCTION<%0...%1> %0220%1
		#endinput
	#elseif UNIQUE_SYMBOL == 220
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (221)
		#define UNIQUE_FUNCTION<%0...%1> %0221%1
		#endinput
	#elseif UNIQUE_SYMBOL == 221
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (222)
		#define UNIQUE_FUNCTION<%0...%1> %0222%1
		#endinput
	#elseif UNIQUE_SYMBOL == 222
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (223)
		#define UNIQUE_FUNCTION<%0...%1> %0223%1
		#endinput
	#elseif UNIQUE_SYMBOL == 223
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (224)
		#define UNIQUE_FUNCTION<%0...%1> %0224%1
		#endinput
	#elseif UNIQUE_SYMBOL == 224
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (225)
		#define UNIQUE_FUNCTION<%0...%1> %0225%1
		#endinput
	#elseif UNIQUE_SYMBOL == 225
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (226)
		#define UNIQUE_FUNCTION<%0...%1> %0226%1
		#endinput
	#elseif UNIQUE_SYMBOL == 226
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (227)
		#define UNIQUE_FUNCTION<%0...%1> %0227%1
		#endinput
	#elseif UNIQUE_SYMBOL == 227
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (228)
		#define UNIQUE_FUNCTION<%0...%1> %0228%1
		#endinput
	#elseif UNIQUE_SYMBOL == 228
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (229)
		#define UNIQUE_FUNCTION<%0...%1> %0229%1
		#endinput
	#elseif UNIQUE_SYMBOL == 229
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (230)
		#define UNIQUE_FUNCTION<%0...%1> %0230%1
		#endinput
	#elseif UNIQUE_SYMBOL == 230
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (231)
		#define UNIQUE_FUNCTION<%0...%1> %0231%1
		#endinput
	#elseif UNIQUE_SYMBOL == 231
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (232)
		#define UNIQUE_FUNCTION<%0...%1> %0232%1
		#endinput
	#elseif UNIQUE_SYMBOL == 232
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (233)
		#define UNIQUE_FUNCTION<%0...%1> %0233%1
		#endinput
	#elseif UNIQUE_SYMBOL == 233
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (234)
		#define UNIQUE_FUNCTION<%0...%1> %0234%1
		#endinput
	#elseif UNIQUE_SYMBOL == 234
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (235)
		#define UNIQUE_FUNCTION<%0...%1> %0235%1
		#endinput
	#elseif UNIQUE_SYMBOL == 235
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (236)
		#define UNIQUE_FUNCTION<%0...%1> %0236%1
		#endinput
	#elseif UNIQUE_SYMBOL == 236
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (237)
		#define UNIQUE_FUNCTION<%0...%1> %0237%1
		#endinput
	#elseif UNIQUE_SYMBOL == 237
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (238)
		#define UNIQUE_FUNCTION<%0...%1> %0238%1
		#endinput
	#elseif UNIQUE_SYMBOL == 238
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (239)
		#define UNIQUE_FUNCTION<%0...%1> %0239%1
		#endinput
	#elseif UNIQUE_SYMBOL == 239
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (240)
		#define UNIQUE_FUNCTION<%0...%1> %0240%1
		#endinput
	#elseif UNIQUE_SYMBOL == 240
		#undef UNIQUE_SYMBOL
		#undef UNIQUE_FUNCTION
		#define UNIQUE_SYMBOL (241)
		#define UNIQUE_FUNCTION<%0...%1> %0241%1
		#endinput
	#elseif UNIQUE_SYMBOL == 241
		#undef UNIQUE_SYMBOL
		#undef                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                