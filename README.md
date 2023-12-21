**FINAL PROJECT: INTERACTIVE ART INSTALLATION**

**A Mysterious Box that Comes Alive with Your Movement**

_Team Members: Suvina and Het_

![IMG_2772 copy](https://github.com/Suvina19/InteractiveBox/assets/144509711/63d9843a-941d-4a61-b3f8-a487628dff57)



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

**Phase 3: Prototype**
We decided to use Touchdesigner instead of Posenet since it gave us more flexibility to experiment with the effects. We started by getting the real life replication in our 10x10 LED grid using Touchdesigner and the built in camera in our laptop.

We were able to get the LED’s to replicate the real life input but we couldn’t see the human outline clearly due to background disturbance.

**Phase 4: Iterate**
We watched a few more tutorials and research we were able to figure out how to remove the background in Touchdesigner. We were then able to get some blobs in our LED grid.

**Phase 5: Fabrication**
Once our code was ready and the test was successful we started our fabrication for the final output.
We wanted to make a bigger grid hence, we decided to use 200 LED’s this time with a 20x10 grid.

We also wanted to create a seamless box so Het and I both took a laser cutting workshop and got certified to use the laser cutter.

We used Makercase to build our box for laser cutter.

Once we got all the pieces ready we started assembling the box and soldering our LED strips.

Once the box was ready we tested all the LED’s to debug any faulty wiring or soldering issues.

The LED’s worked perfectly. We then tried using our Touchdesigner file and tried using the webcam.

The webcam was a bit unstable and the signals were a bit slow. Our instructors told us later that we this could have been solved using Arduino mega which would have sent the signal faster.

**Final set up and testing**
We were excited to present our idea and began by setting up our installation at the school.

**Final presentation**

**P.S.** We couldn’t have done it without the amazing support of our instructors, Viola, Daniel, Bruno, and Carrie. Thank you for believing in our crazy idea and helping us bring it to life!


**Takeaways:**
This was a very ambitious project that we wanted to do with very little knowledge about the softwares and it was pretty difficult to figure out how this would work out but I’m glad we didn’t give up and finished this project.

This project was more than just building a cool gadget. It was about creating a connection between people and technology, a space where anyone could become an artist, leaving their mark on the canvas of light. We saw smiles, laughs, and even a few gasps of wonder as people interacted with our creation. It was a reminder that even in the cold concrete jungle, there’s room for magic and wonder.

**The Future:** This is just the beginning. We hope to expand our concept, creating a larger-scale installation with even more vibrant colors and dynamic animations. We envision a world where walls come alive with the stories of those who pass by, where technology becomes a bridge between us, not a barrier.














