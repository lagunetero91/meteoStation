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

