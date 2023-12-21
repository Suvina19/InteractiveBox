# **FINAL PROJECT: INTERACTIVE ART INSTALLATION**

## **A Mysterious Box that Comes Alive with Your Movement**

_Team Members: Suvina and Het_

![IMG_2772 copy](https://github.com/Suvina19/InteractiveBox/assets/144509711/63d9843a-941d-4a61-b3f8-a487628dff57)


**Introduction**
For our final physical computing project we wanted to implement computer vision 
that we were taught in the Logic of Interaction class and combine that with LED lights.

# **Phase1: Concept Ideation**
## **Take a break and interact**

<img width="669" alt="Screenshot 2023-12-21 at 12 47 11" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/0a4adace-f74d-45b5-8ede-616d42e05d91">

In a busy city like New York where people are always moving and have places to be we wanted 
to create an art installation which is dark and blank at first but starts creating colourful 
body patterns on the screen when humans start interacting with it.

You’re walking through a bustling city, lost in your own thoughts. Suddenly, you catch a glimpse 
of a dark, unassuming box in the corner. As you approach, a curious thing happens. The box lights up, 
transforming into a vibrant canvas of color that mimics your every move. This is the magic of our 
interactive art installation, a project that brings together technology and creativity to create a 
unique and captivating experience.

# **Interaction**
As users approach the LED box, the camera will detect their presence, initiating a dynamic transformation 
of the LED lights.

The computer vision system, powered by Touchdesigner, captures the gestures of the users’ body and translates 
them into visual expressions of their emotions on the LED box.

# **Components used**
• 200 Addressable LED strip
• Arduino
• Webcam
• Translucent Acrylic sheet
• Chipboard
• Copper tape

# **Phase 2: Ideate and Learn**

Building this interactive artwork was a journey of exploration and learning. We started small, prototyping our 
concept with a humble 10x10 grid of LEDs and experimenting with software like Touchdesigner and P5. We faced 
challenges along the way, from figuring out how to capture human movement accurately to removing unwanted background noise. 
But with each obstacle, we learned and grew, pushing the boundaries of our technical skills and creative vision.

We first made a 10x10 grid for prototyping and figuring out the interaction. We also made a grid to get the pixelated effect.

<img width="674" alt="Screenshot 2023-12-21 at 12 48 01" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/94c0f93f-fe08-42e4-9395-4d9147cf6390">

Next, we tried using preloaded Arduino programs to check if the LED’s were working fine.

<img width="674" alt="Screenshot 2023-12-21 at 12 48 12" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/8c43aa93-92e6-4102-84b4-aaaeeb463d72">

# **Code 1: Colour testing**


https://github.com/Suvina19/InteractiveBox/assets/144509711/528e587e-967e-48b5-9613-2874f89a632f


Once we confirmed that the grid worked we began experimenting with Touchdesigner and P5 to choose the best option. 
Since Het and I were both new to Touchdesigner we kept watching tutorials and tried to follow them to understand how 
lighting works.

https://github.com/Suvina19/InteractiveBox/assets/144509711/fd1e6626-0d47-4c21-9aa6-e396379ebad6

Using Posenet we were able to track the finger and control the LED which was mapped to the grid on P5.

https://github.com/Suvina19/InteractiveBox/assets/144509711/f989fe30-bb67-4024-9a64-000486429e83

# **Phase 3: Prototype**
We decided to use Touchdesigner instead of Posenet since it gave us more flexibility to experiment with the effects. We started by getting the real life replication in our 10x10 LED grid using Touchdesigner and the built in camera in our laptop.

[https://youtu.be/sSBMkTw-Cx4](https://www.youtube.com/watch?v=sSBMkTw-Cx4)

We were able to get the LED’s to replicate the real life input but we couldn’t see the human outline clearly due to background disturbance.

# **Tutorial links:**

https://youtu.be/ZplOrM6G6JI

https://youtu.be/HIn2IBBhxXk

<img width="1511" alt="Screenshot 2023-12-21 at 13 08 46" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/1eb4109b-d275-40b1-aee2-83cc8a8071e2">

# **Phase 4: Iterate**
We watched a few more tutorials and research we were able to figure out how to remove the background in Touchdesigner. We were then able to get some blobs in our LED grid.


https://youtu.be/anY0m9hU1h0



<img width="1511" alt="Screenshot 2023-12-21 at 13 09 27" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/a342954e-bccc-410f-b463-235c067f8570">


# **Phase 5: Fabrication**
Once our code was ready and the test was successful we started our fabrication for the final output.
We wanted to make a bigger grid hence, we decided to use 200 LED’s this time with a 20x10 grid.

<img width="1511" alt="Screenshot 2023-12-21 at 13 09 43" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/f35198ee-070e-4cc0-b44a-4f2a77e3bc6e">

We also wanted to create a seamless box so Het and I both took a laser cutting workshop and got certified to use the laser cutter.

https://youtu.be/i72IUQjC_NM



<img width="1511" alt="Screenshot 2023-12-21 at 13 11 10" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/47f84de2-94a1-46f6-b2dd-6b1448bfafd2">


We used Makercase to build our box for laser cutter.

<img width="674" alt="Screenshot 2023-12-21 at 12 56 34" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/9230c2ac-e42f-4494-b749-5720a36d9cc2">

Once we got all the pieces ready we started assembling the box and soldering our LED strips.
<img width="1511" alt="Screenshot 2023-12-21 at 13 09 51" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/16f3fa0a-5239-4dd8-9428-6f5513c91eea">

<img width="1511" alt="Screenshot 2023-12-21 at 13 09 57" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/09e31ecc-a5cd-49e9-9acd-4e2dcc5efad0">

Once the box was ready we tested all the LED’s to debug any faulty wiring or soldering issues.

https://youtu.be/PD0Yvufbgww



<img width="1511" alt="Screenshot 2023-12-21 at 13 10 54" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/ca8b377f-a5d1-453c-b66e-e65d26168640">


The LED’s worked perfectly. We then tried using our Touchdesigner file and tried using the webcam.

The webcam was a bit unstable and the signals were a bit slow. Our instructors told us later that we this could have been solved using Arduino mega which would have sent the signal faster.

https://youtu.be/YZS9Pcs9LUE

![IMG_2690](https://github.com/Suvina19/InteractiveBox/assets/144509711/37d9f904-e511-48b3-a881-64a69c6271b3)


![IMG_2692](https://github.com/Suvina19/InteractiveBox/assets/144509711/646e3dd7-4112-4e66-abde-0457119797cc)


# **Final set up and testing**
We were excited to present our idea and began by setting up our installation at the school.


https://youtu.be/Be35pdBzwTU

<img width="1511" alt="Screenshot 2023-12-21 at 13 11 31" src="https://github.com/Suvina19/InteractiveBox/assets/144509711/0e08928d-b9c6-4108-8d1e-fd03d5daa48e">



![IMG_2740](https://github.com/Suvina19/InteractiveBox/assets/144509711/49780e33-d599-4903-8581-252d1ddfd108)

![IMG_2742](https://github.com/Suvina19/InteractiveBox/assets/144509711/dcfea4b2-37b9-4e70-a2b1-ebdc85c592b8)


# **Final presentation**
https://youtu.be/i_caO7eg0E4


![IMG_2789 jpeg copy](https://github.com/Suvina19/InteractiveBox/assets/144509711/488cb06c-e4bb-4e46-b0b4-d69cb09b45c4)

![IMG_2792 copy](https://github.com/Suvina19/InteractiveBox/assets/144509711/389bd30b-d70a-4a44-ab72-d4954d97c919)


**P.S.** We couldn’t have done it without the amazing support of our instructors, Viola, Daniel, Bruno, and Carrie. Thank you for believing in our crazy idea and helping us bring it to life!



# **Takeaways:**
This was a very ambitious project that we wanted to do with very little knowledge about the softwares and it was pretty difficult to figure out how this would work out but I’m glad we didn’t give up and finished this project.

This project was more than just building a cool gadget. It was about creating a connection between people and technology, a space where anyone could become an artist, leaving their mark on the canvas of light. We saw smiles, laughs, and even a few gasps of wonder as people interacted with our creation. It was a reminder that even in the cold concrete jungle, there’s room for magic and wonder.

**The Future:** This is just the beginning. We hope to expand our concept, creating a larger-scale installation with even more vibrant colors and dynamic animations. We envision a world where walls come alive with the stories of those who pass by, where technology becomes a bridge between us, not a barrier.














