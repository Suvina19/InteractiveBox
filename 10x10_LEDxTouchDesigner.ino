#include <FastLED.h>

// Define the LED strip parameters.
#define LED_PIN 4
#define LED_COUNT 200

// Create an array for holding the colors (CRGB type for FastLED).
CRGB colors[LED_COUNT];

void setup()
{
  // Start up the serial port, for communication with the PC.
  Serial.begin(115200);
  Serial.println("Ready to receive colors.");

  // Initialize FastLED with the LED strip configuration.
  FastLED.addLeds<WS2812, LED_PIN, GRB>(colors, LED_COUNT);
}

void loop()
{
  // If any digit is received, we will go into integer parsing mode
  // until all three calls to parseInt return an integer or time out.
  if (Serial.available())
  {
    char c = Serial.peek();
    if (!(c >= '0' && c <= '9'))
    {
      Serial.read(); // Discard non-digit character
    }
    else
    {
      for (uint16_t i = 0; i < LED_COUNT; i++)
      {
        // Parse integers for red, green, and blue components.
        colors[i].red = Serial.parseInt();
        colors[i].green = Serial.parseInt();
        colors[i].blue = Serial.parseInt();
      }

      // Write to the LED strip.
      FastLED.show();

      Serial.print("Showing color: ");
      Serial.print(colors[0].red); // Assuming you want to print the first color
      Serial.print(",");
      Serial.print(colors[0].green);
      Serial.print(",");
      Serial.println(colors[0].blue);
    }
  }
}
