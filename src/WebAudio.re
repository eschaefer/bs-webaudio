module AudioContext = {
  module OscillatorNode = {
    type t = {.};
  };

  type t;
  [@bs.new] external create: unit => Js.t(t) = "AudioContext";

  [@bs.send]
  external createOscillator: Js.t(t) => Js.t(OscillatorNode.t) =
    "createOscillator";
};