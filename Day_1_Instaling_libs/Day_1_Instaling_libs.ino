#include <dht11.h> //include the library code:
dht11 DHT;
#define DHT11_PIN 7 //define the DHT11 as the digital prot 7

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int chk;
  chk = DHT.read(DHT11_PIN); //read data
  switch (chk) {
    case DHTLIB_OK:
      break;
    case DHTLIB_ERROR_CHECKSUM: // check and return errors 
      break;
    case DHTLIB_ERROR_TIMEOUT: //timeout and return errors
      break;
    default;
  }

}
