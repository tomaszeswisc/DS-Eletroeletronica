# Projeto-2 — Medição com sensor ultrassônico

**Projeto educacional com Arduino Uno, Wokwi e PlatformIO.**

## Objetivo

Exemplo com HC-SR04 e Arduino Uno para estudar tempo de propagação e medição de distância.

## Arquivos

- [Circuito Wokwi](diagram.json) — componentes e ligações declaradas.
- [Código C++](src/main.cpp) — comportamento programado.
- [Configuração PlatformIO](platformio.ini) — parâmetros de compilação.

## Componentes no diagrama

Consulte o arquivo `diagram.json` para identificar pinos e conexões. O diagrama é a referência visual do circuito; confira a correspondência com `src/main.cpp`.

## Ligações ou parâmetros no código

`TRIG = 11; ECHO = 10; Serial = 9600`

## Roteiro de estudo

1. Abra o projeto no VS Code com PlatformIO e extensão Wokwi.
2. Examine `diagram.json` e compare seus componentes com o código.
3. Compile o projeto e, quando o ambiente estiver configurado, execute a simulação.
4. Confira as leituras no Monitor Serial; componentes adicionais no diagrama não significam que todos sejam acionados no código.
5. Registre diferenças entre o resultado observado e o comportamento esperado.

> **Estado de validação:** documentação baseada nos arquivos presentes no GitHub. Compilação, simulação e teste em placa física ainda não foram confirmados.

[← Catálogo completo](../../README.md)
