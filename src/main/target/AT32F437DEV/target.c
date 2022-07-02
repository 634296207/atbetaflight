/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include "platform.h"
#include "drivers/io.h"

 #include "drivers/dma.h"
 #include "drivers/timer.h"
 #include "drivers/timer_def.h"
// //DEF_TIM(tim, chan, pin, flags, out,dmaopt,upopt) dmaopt是 timer_def 中用第几个dma的设置
 const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
 	DEF_TIM(TMR1, CH1, PA8,  TIM_USE_ANY |TIM_USE_LED, 0,7,0), // PWM9 - OUT1
// 	DEF_TIM(TMR1, CH4, PA11, TIM_USE_MOTOR, 0,0,0), // PWM10 - OUT2
 	DEF_TIM(TMR4, CH1, PB6,  TIM_USE_MOTOR, 0,13,0), // PWM11 - OUT3
 	DEF_TIM(TMR4, CH2, PB7,  TIM_USE_MOTOR, 0,12,0), // PWM12 - OUT4
 	DEF_TIM(TMR4, CH3, PB8,  TIM_USE_MOTOR,  0,11,0), // PWM13 - OUT5
 	DEF_TIM(TMR4, CH4, PB9,  TIM_USE_MOTOR,  0,10,0), // PWM14 - OUT6

 };
