class Triangulo {
  constructor(lado1, lado2, lado3) {
    this.a = lado1;
    this.b = lado2;
    this.c = lado3;
  }
  tipo() {
    if (this.a == this.b && this.b == this.c && this.c == this.a) {
      return "Equilátero";
    } else if (this.a != this.b && this.b != this.c && this.c != this.a) {
      return "Escaleno";
    } else {
      return "Isósceles";
    }
  }
  showHTML() {
    let str = `<label>Lado1:</label><label>${this.a}</label>`;
    str += `<label>Lado2:</label><label>${this.b}</label>`;
    str += `<label>Lado3:</label><label>${this.c}</label>`;
    str += `<label>Tipo:</label><label>${this.tipo()}</label>`;
    return str;
  }
}

const lista = [];
lista.push(new Triangulo(10, 10, 10));
lista.push(new Triangulo(10, 10, 20));
lista.push(new Triangulo(10, 20, 30));
lista.push(new Triangulo(20, 20, 20));
lista.push(new Triangulo(30, 20, 20));
lista.push(new Triangulo(40, 30, 20));

console.table(lista);

const main = document.getElementById("triangulos");
lista.forEach((tri) => {
  const div = document.createElement("div");
  div.innerHTML = tri.showHTML();
  main.appendChild(div);
});
