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

/*
   [@bs.send] external postMessage: (webWorker, 'a) => unit = "postMessage";
 [@bs.set]
    external onMessage: (webWorker, MessageEvent.t => unit) => unit = "onmessage";

    [@bs.val] external postMessageFromWorker: 'a => unit = "postMessage";

    type window;

    [@bs.val] external self: window = "";

    [@bs.set]
    external setWorkerOnMessage: (window, MessageEvent.t => unit) => unit =
      "onmessage"; */