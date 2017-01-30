uint8_t initPresionSensor(){
  bmpErr = bmp.begin();
  if(bmpErr == 0){
    #if defined (_DEBUG_BMP)
      Serial.println("BMP180 Iniciado");
    #endif
    return 0;
  }else{
    #if defined (_DEBUG_BMP)
      Serial.print("Fallo a iniciar. Código de error: ");
      Serial.println(bmpErr);
    #endif
    return bmpErr;
  } 
}

uint8_t readBmp(){
  bmpErr = bmp.startTemperature();  // Iniciamos la lectura de la temperatura
  if(bmpErr !=0){
    delay(bmpErr);
    bmpErr = bmp.getTemperature(temperature);
    if(bmpErr != 0){
      bmpErr = bmp.startPressure(3);
    }
  }
}

