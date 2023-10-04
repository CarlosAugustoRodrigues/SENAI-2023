//Exercício 2
var tempo;

function calcularTempo() {
  let vel = Number(document.querySelector("#vel").value);
  let dis = Number(document.querySelector("#dis").value);

  tempo = dis / vel;

  document.querySelector("#text1").innerHTML = "Tempo Necessário";
  document.querySelector("#resultado1").innerHTML = `${tempo} ${"horas"}`;
}

//Exercício 3
