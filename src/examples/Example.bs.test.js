const { context } = require('./Example.bs.js');

test('creates WebAudio context', () => {
  expect(context).toHaveProperty('createOscillator');
});
