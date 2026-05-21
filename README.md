# MD — Matemática Discreta

![C](https://img.shields.io/badge/Linguagem-C-blue)

Repositório com exercícios e programas desenvolvidos na disciplina de **Matemática Discreta** do curso de Engenharia de Software da **Universidade Católica de Brasília (UCB)**.

## Estrutura

```
MD/
├── fatorial/        # Cálculo de fatorial em C
│   ├── main.c
│   └── Makefile.win
└── semaforos/       # Simulação de semáforo com cores ANSI
    └── semaforos.c
```

## Programas

### Fatorial
Calcula o fatorial de um número inteiro entre 0 e 6, utilizando o tipo `long long` para armazenar o resultado.

```bash
gcc -o fatorial fatorial/main.c
./fatorial
```

### Semáforo
Simulação interativa de um semáforo no terminal com cores ANSI (vermelho, amarelo e verde). Compatível com Windows e Linux/Mac.

```bash
gcc -o semaforo semaforos/semaforos.c
./semaforo
```

---

📚 Disciplina cursada na UCB — 2025
