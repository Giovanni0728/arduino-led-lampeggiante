# 🔴 Arduino LED Lampeggiante

## 📌 Descrizione

Secondo progetto realizzato con **Arduino Mega 2560 R3**.

Il progetto consiste nel controllare un LED esterno collegato al pin digitale **D13**, facendolo lampeggiare continuamente attraverso la programmazione Arduino.

Il LED rimane acceso per 1 secondo e spento per 1 secondo, ripetendo il ciclo continuamente.

---

## 🎯 Obiettivo

Realizzare un semplice circuito elettronico in grado di far lampeggiare automaticamente un LED utilizzando Arduino.

---

## 🧰 Componenti

- Arduino Mega 2560 R3
- 1 LED
- 1 resistenza da 220 Ω
- Breadboard
- Jumper wires

---

## 🔌 Collegamento

Il collegamento utilizzato è:

```text
Arduino D13
    │
    │
  220 Ω
    │
    │
   LED
    │
    │
   GND

Il pin D13 controlla l'accensione e lo spegnimento del LED.

💻 Codice

Il programma utilizzato è contenuto nel file led_lampeggiante.ino.

const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);

  digitalWrite(LED, LOW);
  delay(1000);
}
⚙️ Funzionamento

Il programma esegue continuamente queste operazioni:

Comando	Funzione
HIGH	Accende il LED
delay(1000)	Attende 1 secondo
LOW	Spegne il LED
delay(1000)	Attende 1 secondo

Dopo lo spegnimento il programma torna all'inizio del loop() e ricomincia.

🧠 Concetti utilizzati
Output digitale
Pin digitali Arduino
Funzione digitalWrite()
Funzione delay()
Ciclo loop()
Resistenza per limitazione della corrente
Controllo di un componente elettronico
📸 Foto del progetto

La foto del circuito verrà aggiunta qui.

🚀 Possibili sviluppi

Il progetto può essere modificato per:

cambiare la velocità del lampeggio
utilizzare tempi diversi di accensione e spegnimento
controllare più LED
utilizzare un pulsante
realizzare sequenze luminose
👨‍💻 Autore

Giovanni Galofaro

Elettronica • Arduino • Programmazione • Progettazione
