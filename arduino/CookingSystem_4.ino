int eggs = 0;
int toasts = 0;
bool oil = false;
double avocado = 0;
int dough = 0;
double tuna = 0;
int onions = 0;
bool salt = false;

void setup()
{
  Serial.begin(9600);
  Serial.println("What would you want to cook, toasts with fried eggs and avocado or tuna omelette?");
  delay(1000);
  Serial.println("If you want toasts with fried eggs and avocado, type 'cook toasts with fried eggs and avocado'.");
  delay(1000);
  Serial.println("If you want a tuna omelette, type 'cook tuna omelette'.");
  delay(1000);
  Serial.println("\nTo see the ingredients you have, type 'inventory'.");
}

void loop()
{
  String input = Serial.readString();
  if (input != "")
  {
    input.trim();
    decide(input);
  }
}

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

void cookTunaOmelette()
{
  if (eggs >= 3 &&
      tuna >= 0.5 &&
      onions >= 1 && salt)
  {
    Serial.println("\n\nWe are cooking tuna omelette");
    delay(1000);
    Serial.println("cooking...");
    delay(1000);
    Serial.println("cooking...");
    delay(1000);
    Serial.println("cooking...");
    delay(1000);
    Serial.println("Here you have your tuna omelette!");
    Serial.println("\n\n");
    eggs = eggs - 3;
    tuna = tuna - 0.5;
    onions = onions - 1;
    salt = false;
  }
  else
  {
    Serial.println("\n\n");
    Serial.println("We can't cook this because we need:");
    delay(1000);

    if (eggs < 3)
    {
      Serial.println("- Eggs");
      delay(1000);
    }
    if (tuna < 0.5)
    {
      Serial.println("- Tuna");
      delay(1000);
    }
    if (onions < 1)
    {
      Serial.println("- Onions");
      delay(1000);
    }
    if (!salt)
    {
      Serial.println("- Salt");
      delay(1000);
    }
    Serial.println("To buy an ingredient, write its name (eggs/tuna/onions/salt)");
    Serial.println("\n\n");
  }
}

void decide(String input)
{
  if (input == "cook toasts with fried eggs and avocado")
  {
    cookToasts();
  }

  if (input == "cook tuna omelette")
  {
    cookTunaOmelette();
  }

  if (input == "inventory")
  {
    inventory();
  }

  if (input == "toasts")
  {
    toasts = toasts + 4;
    Serial.println("+4 Toasts");
  }

  if (input == "avocado")
  {
    avocado++;
    Serial.println("+1 Avocado");
  }

  if (input == "eggs")
  {
    eggs = eggs + 2;
    Serial.println("+2 Eggs");
  }

  if (input == "oil")
  {
    oil = true;
    Serial.println("+ Oil");
  }

  if (input == "tuna")
  {
    tuna = tuna + 0.5;
    Serial.println("+0.5 Tuna");
  }

  if (input == "onions")
  {
    onions++;
    Serial.println("+1 Onions");
  }

  if (input == "salt")
  {
    salt = true;
    Serial.println("+ Salt");
  }
}

void inventory()
{
  Serial.println("\nThese are the ingredients we have at the moment:");
  delay(1000);
  Serial.print("- ");
  Serial.print(eggs);
  Serial.println(" egg(s)");
  Serial.print("- ");
  Serial.print(toasts);
  Serial.println(" toast(s)");
  Serial.print("- ");
  Serial.print(avocado);
  Serial.println(" avocado(s)");
  Serial.print("- ");
  Serial.print(oil ? "oil" : "We don't have oil");
  Serial.println();
  Serial.print("- ");
  Serial.print(tuna);
  Serial.println(" tuna(s)");
  Serial.print("- ");
  Serial.print(onions);
  Serial.println(" onion(s)");
  Serial.print("- ");
  Serial.print(salt ? "salt" : "We don't have salt");
  Serial.println("\nTo buy an ingredient, write its name (eggs/toasts/avocado/oil/tuna/onions/salt)");
}
