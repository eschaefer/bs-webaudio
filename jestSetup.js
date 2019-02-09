class AudioContext {
  constructor() {
    this.OscillatorNode = {
      type: 'sine',
      frequency: 440
    };
  }

  createOscillator() {}
}

window.AudioContext = AudioContext;
