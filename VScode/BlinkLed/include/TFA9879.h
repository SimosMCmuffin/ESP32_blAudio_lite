#include <Arduino.h>

typedef struct TFA9879
{
    uint8_t I2Caddress;
    uint16_t deviceControl;
    uint16_t serialInterface1;
    uint16_t pcmIomInput1;
    uint16_t serialInterface2;
    uint16_t pcmIomInput2;
    uint16_t eqWord1[5];
    uint16_t eqWord2[5];
    uint16_t bypassControl;
    uint16_t DRC;
    uint16_t bassTreble;
    uint16_t HPfilter;
    uint16_t volumeControl;
    uint16_t otherControls;
    uint16_t status;
}TFA9879;


void TFA_init(TFA9879*);
void TFA_setAddress(TFA9879*, uint8_t);

uint8_t TFA_setVolume(TFA9879*, int);
uint8_t TFA_setBassTreble(TFA9879*, int, int);
uint8_t TFA_setBassTrebleCfrequency(TFA9879*, int, int);
uint8_t TFA_setDeviceControl(TFA9879*, int, int);
uint8_t TFA_setLRchannel(TFA9879*, int, int);
uint8_t TFA_setI2SsampleFreq(TFA9879*, int, int);

uint8_t TFA_parametricEQband(TFA9879*, int, float, int, float);
uint8_t TFA_setBypassEQ(TFA9879*, int);