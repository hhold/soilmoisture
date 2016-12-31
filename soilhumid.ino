/**
  Soil Humiidity Testor using YL-38 and Arduino
                       By Hitesh Nair <hyperhitesh.hol.es/dev>
  After uploading program to Arduino(CTRL+U), open Serial Monitor(CTRL+SHIFT+M) to see the readings.
*/

  void setup()
  {
    Serial.begin(9600);
  }

  void loop()
  { 
    delay(2000); //delay period between readings
    int MoistureValue = analogRead(A0); //connect AO pin of sensor to A0 pin of Arduino
    Serial.println(MoistureValue);

    if(MoistureValue<200) //change these values to suit your requirements
    Serial.println("Moderate Moisture");

    else if(MoistureValue<400) //change these values to suit your requirements
    Serial.println("Optimum Moisture");

    else if(MoistureValue>400) //change these values to suit your requirements
    Serial.println("Overwatered");
  }

