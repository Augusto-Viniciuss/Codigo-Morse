#include <IRremote.h>

#define RECEPTOR 2
#define BUZZER 11
#define LDR A0
#define LED 12

IRrecv irrecv(RECEPTOR);
decode_results sinal;

void setup() {
  irrecv.enableIRIn();
  
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int luminosidade = analogRead(LDR);
  
  if (irrecv.decode(&sinal)){
    if (sinal.value == 16580863) {
    	letra_A(luminosidade);
    } else if (sinal.value == 16613503) {
        letra_B(luminosidade);
    } else if (sinal.value == 16597183) {
        letra_C(luminosidade);
    } else if (sinal.value == 16589023) {
        letra_D(luminosidade);
    } else if (sinal.value == 16621663) {
        letra_E(luminosidade);
    } else if (sinal.value == 16605343) {
        letra_F(luminosidade);
    } else if (sinal.value == 16584943) {
        letra_G(luminosidade);
    } else if (sinal.value == 16617583) {
        letra_H(luminosidade);
    } else if (sinal.value == 16601263) {
        letra_I(luminosidade);
    } else if (sinal.value == 16593103) {
        letra_J(luminosidade);
    } else if (sinal.value == 16625743) {
        letra_K(luminosidade);
    } else if (sinal.value == 16609423) {
        letra_L(luminosidade);
    } else if (sinal.value == 16582903) {
        letra_M(luminosidade);
    } else if (sinal.value == 16615543) {
        letra_N(luminosidade);
    } else if (sinal.value == 16599223) {
        letra_O(luminosidade);
    } else if (sinal.value == 16591063) {
        letra_P(luminosidade);
    } else if (sinal.value == 16623703) {
        letra_Q(luminosidade);
    } else if (sinal.value == 16607383) {
        letra_R(luminosidade);
    } else if (sinal.value == 16586983) {
        letra_S(luminosidade);
    } else if (sinal.value == 16619623) {
        letra_T(luminosidade);
    } else if (sinal.value == 16603303) {
        letra_U(luminosidade);
    }

    irrecv.resume();
  } 
}

void letra_A (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_B (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_C (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_D (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_E (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_F (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_G (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_H (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_I (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_J (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_K (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_L (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_M (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_N (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_O (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_P (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_Q (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_R (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_S (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_T (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}

void letra_U (int luminosidade) {
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(BUZZER, HIGH);
    if(luminosidade < 900) {
        digitalWrite(LED, HIGH);
    }
    delay(1500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);
    delay(1000);
}
