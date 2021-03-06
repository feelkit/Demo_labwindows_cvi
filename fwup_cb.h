/*---------------------------------------------------------------------------

BSD 3-Clause License

Copyright (c) 2018, feelkit
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

* Neither the name of the copyright holder nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


---------------------------------------------------------------------------*/

#ifndef _FWUP_CB_H_
#define _FWUP_CB_H_


#ifdef __cplusplus
    extern "C" {
#endif
		
		typedef enum tBIO_SENSOR_STATE {
	
	BIO_NORMAL =0,
	BIO_BOOTL,
	BIO_LOSE	
}BIO_SENSOR_STATE;

int CVICALLBACK LoadBinFile (int panel, int control, int event, void *callbackData, int eventData1, int eventData2) ;
 void initFwupCb(unsigned char forSensor);


void * fwfile_malloc(void);



int CVICALLBACK sensorFWUpgradeCb (int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int CVICALLBACK mainOtaFWUpgradeCb (int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK sensorFWUPFromQueueCallback (CmtTSQHandle queueHandle, unsigned int event,int value, void *callbackData);
void CVICALLBACK otaFWUPFromQueueCallback (CmtTSQHandle queueHandle, unsigned int event,int value, void *callbackData);


#ifdef __cplusplus
    }
#endif


#endif
