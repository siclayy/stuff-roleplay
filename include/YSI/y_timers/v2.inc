/**--------------------------------------------------------------------------**\
					  ====================================
					   y_timers - Run timers efficiently. 
					  ====================================
Description:
	Sets up repeating timers without requiring any SetTimers and arranges them
	so that they will be very unlikely to meet (at least for a long time) using
	scheduling algorithms to get timers with the same period to be offset.  Also
	fixes arrays and strings in timers so they can be passed properly.
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
	
	The Original Code is the YSI timers include.
	
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
	2.0
Changelog:
	29/04/11:
		Added version 2 of the code with more advanced options.
	21/03/11:
		Added debug printing to timer functions.  Uses "P:C" in compiling.
	26/10/10:
		Officially added simple calling.
		Added "delay" functions.
	12/10/10:
		Rewrote for YSI 1.0 using y_scripting.
	11/08/07:
		Removed millions of defines to reduce pre-processing.
		Added pickups.
	03/08/07:
		First version.
</remarks>
\**--------------------------------------------------------------------------**/

// These are the tag-type definitions for the various possible parameter types.
// Array-like definitions.
#define @Yf:@Yg:@Yh:#%0#%1|||%3[%4]|||%5,%6;%8>%9||| @Ye:@Yw:#%0#%1|||%3[%4]|||%5,%6;%9|||

#define @Ye:@Yw:#%0#%1|||%2string:%3[%4]|||%5,%6;%9||| @Yf:@Yg:@Yh:#%0d#%1,_Timer_S(%3)|||%5|||%6;1>%9,@Yv&%3&|||

// This one has an extra parameter because arrays must always be followed by
// their length.
#define @Yw:#%0#%1|||%3[%4]|||%5,%6,%7;%9||| @Yf:@Yg:@Yh:#%0d#%1,_Timer_A(%3,%5)|||%5|||%6,%7;1>%9,@Yv&%3&|||

// Tag-like definitions.
#define @Yg:@Yh:#%0#%1|||%2:%3|||%5,%6;%8>%9||| @Yf:@Yg:@Yh:#%0d#%1,%2:%3|||%5|||%6;%8>%9,%2:%3|||

// Others.
#define @Yh:#%0#%1|||%3|||%5,%6;%8>%9||| @Yf:@Yg:@Yh:#%0d#%1,%3|||%5|||%6;%8>%9,%3|||

// Main entry point for defer type determination.
#define _YT@CR:%0,%1)%8>%2||| @Yf:@Yg:@Yh:#i#,@Yx:J@|||%0|||%1;%8>%2|||

// Define for "defer" with timer, parameters and main function.
#define YSI_timer%0[%1]%3(%2) stock%0_yT@(%2)return _Timer_C(O@(#%0@_yT,(I@==-1)?(%1):I@,J@,_YT@CR:%2,,)0>%0|||%0|||(%2)

// Expand additional parameters out to three functions after processing.
//#define @Yx:%0||||||;%1,%2|||%4||| %0),1);@Yu:%1@_yT(%2);public @Yu:%1@_yT(%2){%4(%2);}%4
#define @Yx:%0||||||;%8>%1,%2|||%4||| %0),%8);@Yj:%1@_yT(__r,%2);public @Yj:%1@_yT(__r,%2){%4(%2);}%4

// Can't believe I never thought of this before!  If only there was a way to
// make it less generic than "id".
#define id#,@Yx:J@,||||||;%8>%1,%2|||%4||| ),0);%1@_yT();public%1@_yT(){%4();}%4

// Remove excess "_Timer_G" and "_Timer_B".
#define @Yj:%0(                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             