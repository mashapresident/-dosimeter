//
// Created by Maria Konovalova on 03.04.2025.
//

#ifndef DOSIMETER_20_H
#define DOSIMETER_20_H

class dosimeter_20{
    public:
      dosimeter_20(int pin);
      void begin();
      void calibate();
      void read_radiation();
    private:
      float SENS;
      int pin;
      int period;
};



#endif //DOSIMETER_20_H
