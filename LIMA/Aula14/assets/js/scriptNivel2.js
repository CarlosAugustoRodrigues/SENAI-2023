const result = document.getElementById("#result");
var resultEx = document.createElement("div");

function ex11() {
  resultEx.innerHTML = "";

  let btn = document.createElement("button");
  btn.innerHTML = "CALCULAR MÉDIA";
  btn.addEventListener("click", () => {
    let name = prompt("Nome do aluno(a):");
    let nota1 = prompt("Primeira nota:").replace(",", ".");
    let nota2 = prompt("Segunda nota:").replace(",", ".");
    nota1 = Number(nota1);
    nota2 = Number(nota2);
    let media = Number((nota1 + nota2) / 2).toFixed(2);

    let msg;
    if (media >= 6) {
      msg = "Meus parabéns!";
    } else {
      msg = "Estude um pouco mais!";
    }

    resultEx.innerHTML = `<span style="font-size: 30px">Aluno(a): ${name}<span><br>`;
    resultEx.innerHTML += `<span style="font-size: 30px">Nota 1: ${nota1}<span><br>`;
    resultEx.innerHTML += `<span style="font-size: 30px">Nota 2: ${nota2}<span><br>`;
    resultEx.innerHTML += `<span style="font-size: 30px">Média: ${media}<span><br>`;
    resultEx.innerHTML += `<span style="font-size: 30px">${msg}<span>`;
  });
  result.appendChild(btn);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);
}
