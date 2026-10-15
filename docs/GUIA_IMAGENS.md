# Guia de imagens reais dos projetos Wokwi

Este documento orienta a criação de capturas **autênticas** dos circuitos documentados. Não use imagens geradas artificialmente como se fossem capturas de simulações.

## Como capturar

1. Abra no VS Code a pasta individual em `Projects/<nome>`.
2. Com a extensão Wokwi configurada, abra `diagram.json` na visualização do circuito.
3. Ajuste o zoom para mostrar todos os componentes e fios; confira se a placa e os pinos estão legíveis.
4. Capture a tela real e recorte somente a área do circuito, sem dados pessoais ou notificações.
5. Salve como PNG em `assets/wokwi/<nome>.png` (exemplo: `assets/wokwi/Projeto-4.png`).
6. Inclua a imagem no README individual usando `![Circuito real no Wokwi](../../assets/wokwi/Projeto-4.png)` (adaptando o nome).
7. Opcional: registre uma segunda captura da simulação em execução apenas depois de conferir seu funcionamento.

## Lista dos 14 circuitos

- [ ] `assets/wokwi/Projeto-0.png` — [diagrama](../Projects/Projeto-0/diagram.json)
- [ ] `assets/wokwi/Q-7.png` — [diagrama](../Projects/Q-7/diagram.json)
- [ ] `assets/wokwi/Projeto-3.png` — [diagrama](../Projects/Projeto-3/diagram.json)
- [ ] `assets/wokwi/Projeto-4.png` — [diagrama](../Projects/Projeto-4/diagram.json)
- [ ] `assets/wokwi/Q-4.png` — [diagrama](../Projects/Q-4/diagram.json)
- [ ] `assets/wokwi/Q-5.png` — [diagrama](../Projects/Q-5/diagram.json)
- [ ] `assets/wokwi/Pratica-1.png` — [diagrama](../Projects/Pratica-1/diagram.json)
- [ ] `assets/wokwi/Projeto-1A.png` — [diagrama](../Projects/Projeto-1A/diagram.json)
- [ ] `assets/wokwi/Projeto-1AB.png` — [diagrama](../Projects/Projeto-1AB/diagram.json)
- [ ] `assets/wokwi/Projeto-2.png` — [diagrama](../Projects/Projeto-2/diagram.json)
- [ ] `assets/wokwi/Projeto-2A.png` — [diagrama](../Projects/Projeto-2A/diagram.json)
- [ ] `assets/wokwi/Projeto-6E.png` — [diagrama](../Projects/Projeto-6E/diagram.json)
- [ ] `assets/wokwi/Projeto-6F.png` — [diagrama](../Projects/Projeto-6F/diagram.json)
- [ ] `assets/wokwi/Projeto-6.png` — [diagrama](../Projects/Projeto-6/diagram.json)

## Critérios de qualidade

- A imagem deve corresponder ao `diagram.json` existente na mesma versão do projeto.
- Não afirmar que o circuito foi testado apenas porque há uma captura do editor.
- Nunca mostrar credenciais ou arquivos `.env`.
- Evitar capturas ilegíveis; sugerido PNG com largura aproximada de 1200 a 1600 pixels.
- Se houver mudanças no diagrama, atualize a captura e registre o commit.

> **Status atual:** guia e lista de capturas planejadas; nenhuma imagem de circuito foi adicionada por este documento.
