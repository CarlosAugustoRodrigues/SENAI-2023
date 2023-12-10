const result = document.getElementById("result")
var resultEx = document.createElement('div')

function ex01(){
    result.innerHTML = ""

    result.innerHTML = `<h2 style="font-size: 70px">HELLO WORLD!</h2>`
}

function ex02(){
    result.innerHTML = ""

    result.innerHTML = `<h2 style="font-size: 70px">VOCÊ CLICOU NO BOTÃO</h2>`
}

function ex03(){
    resultEx.innerHTML = ""
    result.innerHTML = `<h2>DIGITE SEU NOME</h2>`

    let input = document.createElement('input')
    result.appendChild(input)

    let btn = document.createElement('button')
    btn.innerHTML = "ENVIAR"
    btn.addEventListener('click', () => {
        let name = input.value
        window.alert(`Olá ${name}, é um prazer te conhecer!`)
        input.value = ""
    })
    result.appendChild(btn)

    resultEx.classList.add('resultEx')
    result.appendChild(resultEx)
}

function ex04() {
    resultEx.innerHTML = ""
    result.innerHTML = `<h2>DIGITE SEU NOME</h2>`

    let input = document.createElement('input')
    result.appendChild(input)

    let btn = document.createElement('button')
    btn.innerHTML = "ENVIAR"
    btn.addEventListener('click', () => {
        let name = input.value
        resultEx.innerHTML = `<span style="font-size: 40px">Olá ${name}, é um grande prazer te conhecer!<span>`
        input.value = ""
    })
    result.appendChild(btn)

    resultEx.classList.add('resultEx')
    result.appendChild(resultEx)
}

function ex05(){
    resultEx.innerHTML = ""
    result.innerHTML = `<h2>DIGITE UM NÚMERO INTEIRO E POSITIVO</h2>`

    let input = document.createElement('input')
    result.appendChild(input)

    let btn = document.createElement('button')
    btn.innerHTML = "ENVIAR"
    btn.addEventListener('click', () => {
        let number = Number(input.value)
        resultEx.innerHTML = `<span style="font-size: 30px">Número escolhido: ${number}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">O dobro de ${number} é ${number * 2}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">A metade de ${number} é ${number / 2}<span>`
        input.value = ""
    })
    result.appendChild(btn)

    resultEx.classList.add('resultEx')
    result.appendChild(resultEx)
}

function ex06(){
    resultEx.innerHTML = ""
    result.innerHTML = `<h2>DIGITE DOIS NÚMERO INTEIRO E POSITIVO PARA SOMAR</h2>`

    let input = document.createElement('input')
    result.appendChild(input)
    let input2 = document.createElement('input')
    result.appendChild(input2)

    let btn = document.createElement('button')
    btn.innerHTML = "ENVIAR"
    btn.addEventListener('click', () => {
        let number1 = Number(input.value)
        let number2 = Number(input2.value)
        resultEx.innerHTML = `<span style="font-size: 30px">${number1} + ${number2} = ${number1 + number2}<span>`
        input.value = ""
        input2.value = ""
    })
    result.appendChild(btn)

    resultEx.classList.add('resultEx')
    result.appendChild(resultEx)
}

function ex07(){
    resultEx.innerHTML = ""
    result.innerHTML = `<h2>DIGITE O NOME E AS NOTAS DO ALUNO(A)</h2>`

    let input = document.createElement('input')
    input.placeholder = "NOME"
    result.appendChild(input)
    
    let input2 = document.createElement('input')
    input2.placeholder = "NOTA 1"
    result.appendChild(input2)

    let input3 = document.createElement('input')
    input3.placeholder = "NOTA 2"
    result.appendChild(input3)

    let btn = document.createElement('button')
    btn.innerHTML = "ENVIAR"
    btn.addEventListener('click', () => {
        let name = input.value
        let nota1 = Number(input2.value)
        let nota2 = Number(input3.value)
        resultEx.innerHTML = `<span style="font-size: 30px">Aluno: ${name}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">Nota 1: ${nota1}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">Nota 2: ${nota2}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">Média: ${(nota1 + nota2) / 2}<span>`
        input.value = ""
        input2.value = ""
        input3.value = ""
    })
    result.appendChild(btn)

    resultEx.classList.add('resultEx')
    result.appendChild(resultEx)
}

function ex08(){
    resultEx.innerHTML = ""
    result.innerHTML = `<h2>DIGITE UM NÚMERO PARA SER ANALISADO</h2>`

    let input = document.createElement('input')
    result.appendChild(input)

    let btn = document.createElement('button')
    btn.innerHTML = "ENVIAR"
    btn.addEventListener('click', () => {
        let number = Number(input.value)
        resultEx.innerHTML = `<span style="font-size: 30px">Número em análise: ${number}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">O seu valor absoluto é: ${Math.abs(number)}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">A sua parte inteira é: ${Math.trunc(number)}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">O valor inteiro mais próximo é: ${Math.round(number)}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">A sua raiz quadrada é = ${Math.sqrt(number).toFixed(2)}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">A sua raiz cúbica é = ${Math.cbrt(number).toFixed(2)}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">O valor de ${number}² =  ${Math.pow(number, 2).toFixed(2)}<span>`
        resultEx.innerHTML += `<span style="font-size: 30px">O valor de ${number}³ = ${Math.pow(number, 3).toFixed(2)}<span>`
        input.value = ""
    })
    result.appendChild(btn)

    resultEx.classList.add('resultEx')
    result.appendChild(resultEx)
}

function excluir() {
    result.innerHTML = ""
    resultEx.innerHTML = ""
}