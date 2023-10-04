// var nome = document.getElementById("nome");
// var resultado = document.getElementById("resultado");

// function buscarElemento() {
//   // let nome = document.getElementById("nome");

//   resultado.innerHTML = nome.value;
// }

var resultado;

function operacao() {
  let a = Number(document.querySelector("#a").value);
  let b = Number(document.querySelector("#b").value);
  let c = Number(document.querySelector("#c").value);

  resultado = (a + b) / c;

  document.getElementById("resultado").innerHTML = resultado.toFixed(2);
}
