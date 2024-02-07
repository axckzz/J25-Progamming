int eggs = 0;
int toasts = 0;
bool oil = false;
double avocado = 0;
int dough = 0;
double tuna = 0;
int onions = 0;
bool salt = false;

void cookToasts()
{
  if (eggs >= 2 &&
      toasts >= 2 &&
      avocado >= 0.5 && oil)
  {
    Serial.println("\n\nWe are cooking toasts");
    delay(1000);
    Serial.println("cooking...");
    delay(1000);
    Serial.println("cooking...");
    delay(1000);
    Serial.println("cooking...");
    delay(1000);
    Serial.println("Here you have toasts with fried eggs and avocado!");
    Serial.println("\n\n");
    eggs = eggs - 2;
    toasts = toasts - 2;
    avocado = avocado - 0.5;
  }
  else
  {
    Serial.println("\n\n");
    Serial.println("We can't cook this because we need:");
    delay(1000);

    if (eggs < 2)
    {
      Serial.println("- Eggs");
      delay(1000);
    }
    if (toasts < 2)
    {
      Serial.println("- Toasts");
      delay(1000);
    }
    if (avocado < 0.5)
    {
      Serial.println("- Avocado");
      delay(1000);
    }
    if (!oil)
    {
      Serial.println("- Oil");
      delay(1000);
    }
    Serial.println("To buy an ingredient, write its name (eggs/toasts/avocado/oil)");
    Serial.println("\n\n");
  }
}


void decide2(String input) {
  Serial.println("We are deciding");
  if (input == "cook") {
    cookToasts();
  }
  if (input == "eggs") {
    eggs++;
  }
  if (input == "toasts") {
    toasts++;
  }
  if (input == "avocado") {
    avocado++;
  }
  if (input == "onions") {
    onions++;
  }
}
