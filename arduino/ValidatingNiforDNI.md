### DNI Structure:

- A DNI consists of eight numeric digits, followed by a single alphabetical character.
- The numeric digits contain information about the individual's birthdate and place of birth.
- The alphabetical character serves as a verification letter.

### Calculation of the Verification Letter:

- The verification letter is determined based on the numeric digits of the DNI.
- The numeric digits are treated as a number, and the remainder of dividing this number by 23 is calculated.
- The resulting number corresponds to a specific letter in the sequence "TRWAGMYFPDXBNJZSQVHLCKE," which is used as the verification letter.

### Example:

- Let's say the numeric part of a DNI is 12345678. The remainder of dividing 12345678 by 23 is 4.
- In the sequence "TRWAGMYFPDXBNJZSQVHLCKE," the fourth letter is "G."
- Therefore, the complete DNI would be 12345678G.

### Validation:

- To validate a DNI, you can follow the same process in reverse.
- Take the numeric part of the DNI and calculate the verification letter.
- Compare the calculated verification letter with the actual one. If they match, the DNI is considered valid.

### Special Cases:

- Certain DNIs may have specific rules for particular numeric ranges or specific letters in the numeric part.

---

### This is a Code to Validate the DNI i have some problems that i would like to resolve in class about the code:

```c++
String checkNIF(const String &nif) {
    String cleanedNIF = nif;
    cleanedNIF.toUpperCase();
    cleanedNIF.replace("_", "");
    cleanedNIF.replace("\\W", "");
    cleanedNIF.replace("\\s", "");

    if (cleanedNIF.startsWith("^[0-9XYZ]") && cleanedNIF.length() == 9) {
        int num = cleanedNIF.substring(1, 8).toInt();
        num = (cleanedNIF[0] != 'Z' ? (cleanedNIF[0] != 'Y' ? 0 : 1) : 2) + num;

        if (cleanedNIF[8] == "TRWAGMYFPDXBNJZSQVHLCKE"[num % 23]) {
            return cleanedNIF.startsWith("^\\d") ? "DNI" : "NIE";
        }
    } else if (cleanedNIF.startsWith("^[ABCDEFGHJKLMNPQRSUVW]") && cleanedNIF.length() == 9) {
        int sum = 0;
        for (int i = 1; i < 8; ++i) {
            int num = (cleanedNIF[i] - '0') << (i % 2);
            sum += num / 10 + num % 10;
        }

        int c = (10 - sum) % 10;
        if (((cleanedNIF[0] == 'K' || cleanedNIF[0] == 'L' || cleanedNIF[0] == 'M' || cleanedNIF.substring(1, 3) == "00") && cleanedNIF[8] == "JABCDEFGHI"[c]) ||
            ((cleanedNIF[0] == 'A' || cleanedNIF[0] == 'B' || cleanedNIF[0] == 'E' || cleanedNIF[0] == 'H') && cleanedNIF[8] == c) ||
            ((cleanedNIF[0] == 'C' || cleanedNIF[0] == 'D' || cleanedNIF[0] == 'F' || cleanedNIF[0] == 'G' || cleanedNIF[0] == 'J' || cleanedNIF[0] == 'U' || cleanedNIF[0] == 'V') &&
             (cleanedNIF[8] == "JABCDEFGHI"[c] || cleanedNIF[8] == c))) {
            return ((cleanedNIF[0] == 'K' || cleanedNIF[0] == 'L' || cleanedNIF[0] == 'M') ? "ESP" : "CIF");
        }
    }
return "Invalid";
    
}

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Enter NIF/NIE/DNI:");

    // Read input from Serial Monitor
    while (Serial.available() == 0) {
        // Wait for input
    }

    // Read the input until a newline character is encountered
    String input = Serial.readStringUntil('\n');
    input.trim();

    // Validate the entered NIF/NIE/DNI
    String result = checkNIF(input);
    Serial.println(result);

    delay(1000); // Delay for readability
}
```

### Thanks of this code i found:
https://github.com/TORR3S/Check-NIF/blob/master/checkNIF.py

```python
import re
def checkNIF(nif):
    nif = re.sub('[_\W\s]+','',nif.upper())
    if re.search('^(\d|[XYZ])\d{7}[A-Z]$',nif):
        num = re.findall('\d+',nif)[0]
        num = int(('2' if nif[0]=='Z' else '1' if nif[0]=='Y' else '0')+num)
        if nif[8]=='TRWAGMYFPDXBNJZSQVHLCKE'[num%23]:
            return 'DNI' if re.search('^\d',nif) else 'NIE'
    elif re.search('^[ABCDEFGHJKLMNPQRSUVW]\d{7}[\dA-J]$',nif):
        sum = 0;
        for i in range(1,8):
            num = int(nif[i])<<i%2
            sum += num//10+num%10
        c = (10-sum)%10
        if(((nif[0] in 'KLMNPQRSW' or nif[1:3]=='00') and nif[8]=='JABCDEFGHI'[c]) or
            (nif[0] in 'ABEH' and nif[8]==str(c)) or
            (nif[0] in 'CDFGJUV' and (nif[8]=='JABCDEFGHI'[c] or nif[8]==str(c))) ):
            return 'ESP' if re.search('^[KLM]',nif) else 'CIF'
    return False
```
