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
  - GiftWrapColor: String       //El color del envoltorio

//Inherits -> es el término que hemos hablado hoy en clase y lo he puesto en el trabajo. Significa que por ejemplo clase A es B -> es decir, todo lo de perfume se hereda a Perfume (Daily use) y asi con los otros que tengo.
  
  
