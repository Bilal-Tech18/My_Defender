# My Defender
My Defender is a tower defense game developed in C using the CSFML library. This project was created in collaboration with one other contributor.

![wallpaper_menu](https://github.com/user-attachments/assets/35e3951b-404a-462e-b075-a0473320718f)

## Contributors

- [Bilal-Tech18](https://github.com/Bilal-Tech18)
- [nellyyng](https://github.com/nellyyng)

## Features

- Multiple tower types with unique abilities
- Animated sprites for enemies and towers
- Dynamic menu system
- Enemy waves with increasing difficulty
- Gameplay mechanics including tower placement, upgrades, and attacks
- Intuitive user interface with button interactions
- Customizable visual and gameplay elements

## Requirements

The following libraries must be installed to compile and run this project:

- **CSFML** (Graphics, Window, System, Audio)

### Installing CSFML on Ubuntu or Debian:

```sudo apt install libcsfml-dev```


### Compilation and Execution

To compile the project, run the following command in the root directory:

```make```

### Running the Game

After compilation, you can run the game with:

```./my_defender```


### Project Structure

The project is organized into several modules to ensure readability and maintainability:

    sources/main.c: Entry point of the game
    sources/menu/: Handles menu navigation and UI
    sources/towers/: Contains tower logic (placement, upgrades, and attacks)
    sources/enemies/: Manages enemy types and behaviors
    sources/utils/: Utility functions (sprite creation, positioning, scaling, etc.)
    sources/animations/: Manages sprite animations
    sources/gameplay/: Core gameplay mechanics and conditions
    sources/destroy_all.c: Resource cleanup and memory management

Gameplay

In My Defender, players must strategically place towers to defend their territory from waves of enemies. Towers can be upgraded for better performance, and players must adapt their strategies as the game becomes progressively harder.
