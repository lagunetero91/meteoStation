
uint8_t getHumTem (){
   dht11Err = dht11.read(hum, temp);
   if(dht11Err == 0)    // Si devuelve 0 es que ha leido bien
       {
         #if defined (_DEBUG_DHT)
           Serial.print("Temperatura: ");
           Serial.print(temp);
           Serial.print(" Humedad: ");
           Serial.print(hum);
           Serial.println();
         #endif
         return 0;
       }
    else
       {
          #if defined (_DEBUG_DHT)
            Serial.println();
            Serial.print("Error Num :");
            Serial.print(dht11Err);
            Serial.println();
           #endif
           return dht11Err;
       }
}

