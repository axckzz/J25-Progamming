Perfume
  - Name: String
  - Brand: String
  - Fragrance: String
  - Volume: Double
  - ManufactureDate: String
  - Quality: String

1. Perfume //Daily Use
  - Inherits from Perfume
  - Purpose: String
  - DailyOccasion: String
  - LastApplied: String
  - BottleColor: String

2. Perfume //Formal Event
  - Inherits from Perfume
  - Dress Code: String
  - DurationEstimate: String     //Estimación de cuanto dura en la piel.
  - FormalOccasion: String
  - ElegantBottle: Boolean
    

3. Perfume //Special Gift
  - Inherits from Perfume
  - addresseeName: String
  - addresseeLocation: String
  - PersonalizedMessage: String
  - GiftWrapColor: String      //el color del envoltorio

