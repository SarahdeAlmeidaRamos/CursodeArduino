// Define os pinos do display de 7 segmentos
int segments[7] = {4, 5, 7, 8, 9, 3, 2};

// Função para ativar os segmentos necessários para exibir um dígito
void displayDigit(int digit) {
    // Defina os padrões dos segmentos para os dígitos de 1 a 9
    int patterns[10][7] = {
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 0, 0}, // 7
        {1, 1, 1, 1, 1, 1, 1}, // 8
        {1, 1, 1, 1, 0, 1, 1}  // 9
    };

    // Ativa os pinos de acordo com o padrão do dígito
    for (int i = 0; i < 7; i++) {
        digitalWrite(segments[i], patterns[digit][i]);
    }
}

void setup() {
    // Configura os pinos dos segmentos como saídas
    for (int i = 0; i < 7; i++) {
        pinMode(segments[i], OUTPUT);
    }
}

void loop() {
    // Contagem de 1 a 9
    for (int i = 1; i <= 9; i++) {
        displayDigit(i);
        delay(1000); // Aguarda 1 segundo antes de mostrar o próximo número
    }
}
