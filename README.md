**FINAL PROJECT: INTERACTIVE ART INSTALLATION**

**A Mysterious Box that Comes Alive with Your Movement**

_Team Members: Suvina and Het_

**Introduction**
For our final physical computing project we wanted to implement computer vision 
that we were taught in the Logic of Interaction class and combine that with LED lights.


**Phase1: Concept Ideation**
**Take a break and interact**

In a busy city like New York where people are always moving and have places to be we wanted 
to create an art installation which is dark and blank at first but starts creating colourful 
body patterns on the screen when humans start interacting with it.

You’re walking through a bustling city, lost in your own thoughts. Suddenly, you catch a glimpse 
of a dark, unassuming box in the corner. As you approach, a curious thing happens. The box lights up, 
transforming into a vibrant canvas of color that mimics your every move. This is the magic of our 
interactive art installation, a project that brings together technology and creativity to create a 
unique and captivating experience.

**Interaction**
As users approach the LED box, the camera will detect their presence, initiating a dynamic transformation 
of the LED lights.

The computer vision system, powered by Touchdesigner, captures the gestures of the users’ body and translates 
them into visual expressions of their emotions on the LED box.

**Components used**
• 200 Addressable LED strip
• Arduino
• Webcam
• Translucent Acrylic sheet
• Chipboard
• Copper tape

**Phase 2: Ideate and Learn**

Building this interactive artwork was a journey of exploration and learning. We started small, prototyping our 
concept with a humble 10x10 grid of LEDs and experimenting with software like Touchdesigner and P5. We faced 
challenges along the way, from figuring out how to capture human movement accurately to removing unwanted background noise. 
But with each obstacle, we learned and grew, pushing the boundaries of our technical skills and creative vision.

We first made a 10x10 grid for prototyping and figuring out the interaction. We also made a grid to get the pixelated effect.

Next, we tried using preloaded Arduino programs to check if the LED’s were working fine.

**Code 1: Colour testing**
Once we confirmed that the grid worked we began experimenting with Touchdesigner and P5 to choose the best option. 
Since Het and I were both new to Touchdesigner we kept watching tutorials and tried to follow them to understand how 
lighting works.

Using Posenet we were able to track the finger and control the LED which was mapped to the grid on P5.

















