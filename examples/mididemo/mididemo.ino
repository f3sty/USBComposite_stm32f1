#include <USBMIDI.h>

const uint8_t notes[] = {60, 62, 64, 65, 67, 69, 71, 72, 61, 63, 66, 68, 70};
const int numNotes = sizeof(notes)/sizeof(*notes);

void setup() {
    MidiUSB.begin();
    delay(1000);
}

void loop() {
  for (int i=0;i<numNotes;i++) {
    MidiUSB.sendNoteOn(0, notes[i], 127);
    delay(200);
    MidiUSB.sendNoteOff(0, notes[i], 127);
  }
}

