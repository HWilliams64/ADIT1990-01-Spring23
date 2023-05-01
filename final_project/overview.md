# 👻 The Ghost Project 

<img src="https://em-content.zobj.net/source/noto-emoji-animations/344/ghost_1f47b.gif"  width="300">

## Description

You will work in groups of 1-3 individuals to create autonomous applications
that play the popular word game Ghost against each other. 

If you're unfamiliar with Ghost, don't worry, I'll explain the rules. Ghost is a
game where two players take turns saying letters. The goal of the game is to
avoid completing a word. Each player adds one letter to the word on their turn,
and the player who completes a word loses the round. The word must be a valid
word in the English language, and it must be able to be spelled by adding one
letter to the previous player's word. 

For example, let's say the minimum word length is 4 letters, Player 1 starts
with the letter `"T"`. Player 2 then adds an `"H"`, making the word fragment `"TH"`.
Player 1 then adds an "E", making the word `"THE"` (Remember the minimum word
length is 4 letters, the game is not over). Player 2 could add a "Y", but that
would complete the word `"THEY"`, which would cause them to lose because they
spelled a word. Player 2 could add a `"Q"`, but that would create the word
fragment `"THEQ"` which does not have the possibility to create a future English
word, which would cause Player 2 to lose too. So instead, they might add an `"R"`,
making the word fragment `"THER"`. Play continues this way until one player
completes a word, at which point they lose the round. 

In your project, you will be creating programs that can play Ghost autonomously.
Your programs will take turns adding letters to the word, and will use an
algorithm to decide which letter to add next. You can use any algorithm you
like, but it should be able to make intelligent decisions about which letter to
add based on the current state of the game.

Your programs will play against each other, and we will see which program is the
best at playing Ghost.

## Technical Overview

Your Ghost playing application will be interacting with two other entities: the
opponent application and the referee application, which is written by the
professor.

Your application must focus on reading and writing to a shared game file that
will keep track of the current word fragment and the letters played in the game.
When it is your application's turn to play, it will read the shared game file
`game_file.ghost` and a dictionary file `dictionary.txt`, both files are the
located in the application's working directory below is an example of how you'd
read the shared game file:

```c++
// Open the file in read mode
ifstream file("game_file.ghost");

// Read the contents of the shared game file
string contents;
getline(file, contents);
```

The shared game file will start with a line that specifies the minimum word
length. All subsequent lines in the file will contain a single letter each
player has played in the prior rounds.

For example:

```yaml
4
A
P
P
L
```


In this example, the current word fragment is "APPL", and it is now Player 1's
turn.

Your application's thought process should be as follows:

1. Read the shared game file and recreate the current word fragment from the
   file, using the letters played by both teams. You should review the
   assignments from Week 4 and Week 8 for help with this step. 

2. Look for a word in the dictionary that starts with this word fragment but
   does not cause you to lose. You should review the assignments from Week 6 and
   Week 12 for help with this step. 

3. Once you have found a suitable letter to play, write the letter you'd like to
   play to the shared game file. You should review the assignment from Week 8
   for help with this step. 

The moment your application writes to the file, it should exit with an exit code
of 0. The next time it's your application's turn to play, the referee
application will start your application automatically. In between each round,
the referee application will make sure no team has written invalid data to the
shared file, ensure that the current word fragment has the possibility of
spelling a word, and ensure that a word has not been spelled yet.

## Conditions to win

<img src="https://thumbs.gfycat.com/IllThunderousGharial-size_restricted.gif"
width="400">

Below are the situations when your application will win:

1) Your opponent creates a word

2) Your opponent creates a word fragment that has no chance of becoming a word 

3) Your opponent takes more than 30 seconds to complete their turn

4) Your opponent writes text to the shared file that does not conform to the
   game Text Format Guidelines 

5) Your opponent's program crashes (exits with a non-zero exit code)

6) Your opponent does not submit a program

Tip: If you are the first player you can only spell words that are odd in length
thus you can only lose when you spell words that are odd but you can win when
your opponent spells words that are even length. Accordingly, if you are the
first player you should only care about spelling even length words. You can tell
if you are the first player by the length of the word fragment when it is your
turn...  

## How do I start the game?:

<img src="https://media.tenor.com/vYRvdaXe2QwAAAAC/its-time-to-play-niana-guerrero.gif"
width="300">

1. Download the Referee application to your workspace from my [google
   drive](https://drive.google.com/file/d/1ZRht6fth8cs3sk24OXgRFSgqW7QlmO7H/view?usp=share_link)
   (if google give you errors download from [Canvas](https://bostoncollege.instructure.com/files/72133888/download?download_frd=1)).
   
2. Compile your application with the following command:
   
    ```sh
    g++-11 -fmodules-ts -g -std=c++20 path/to/your/app-file.cpp -o team-name
    ```
    This command is a compilation command for a C++ application that uses C++20
    language features and modules. Here's a breakdown of what each part of the
    command does: 

    - `g++-11`: This specifies the version of the g++ compiler to use. In this
      case, it's version 11. 

    - `-fmodules-ts`: This flag tells the compiler to enable support for C++20
      modules, which are a new way of organizing and encapsulating C++ code. 

    - `-g`: This flag tells the compiler to include debugging information in the
      executable file. This information can be useful for debugging the
      application later on.

    - `-std=c++20`: This flag specifies that the code should be compiled using
      the C++20 standard. 

    - `path/to/your/app-file.cpp`: This specifies the path to the main .cpp file
      for the application. This file should contain the main function, which is
      the entry point for the application.

    - -o `team-name`: This specifies the name of the output executable file. In
      this case, the executable will be named after the team that wrote the
      application.
    
    Overall, this command compiles the main .cpp file, using the g++ compiler
    with support for C++20 modules. The resulting executable file will be named
    after the team that wrote the application and will include debugging
    information.  

    If your application contains multiples files use the following command:

    ```sh
    g++-11 -fmodules-ts -g -std=c++20 path/to/your/app-directory/*cpp -o team-name
    ```
    
    - `path/to/your/app-directory/*cpp`: This tells the compiler to compile all
      the .cpp files in the current directory. This assumes that all the source
      code for the application is contained in .cpp files. 

3. Test your application. To ensure your application is working correctly you can play against the referee. Use the following
    command to start the game:

    ```sh
    path/to/referee --player_1 path/to/your/app-executable
    ```

    The path `path/to/your/app-executable` is the location of the output file
    created when you compiled your application in step 1. Console output and
    game results will be displayed in the system's console. 

    The referee file is found in this same directory as this markdown file.

4. To play against another person you may do the following:

    ```sh
     path/to/referee --player_1 path/to/your/app-executable-1 --player_2 path/to/your/app-executable-2
    ```

    Console output and game results will be displayed in the system's console.

*Tip:* To get the file path to any file just right click on the file in the file
explore in left side view of your workspace. In the option menu click `copy
path`.

## Submitting

Submit your application compiled executable file. The executable will be run on
the course's Grader Than Workspace (Linux Ubuntu Focal 20.04). This means you
cannot compile your application using Windows or Mac and expect it to work
during the competition. It's safest to compile on a Grader Than Workspace. 


## Rubric

50% is based on if you pass an assignment that opens and runs. Late submissions
will not be accepted. 

40% is based on your application’s programmatic performance. This means your
application will be graded on how stable your code is and if it effectively
plays the game. Simply submitting an application that selects random letters
will not count. It needs to make a logical decision when selecting a letter.  

10% is based on the results of your application. In other words, how well your
application performs versus the opponent applications. 

Generally, if you pass something in and it works, you shouldn't get lower than a
B-

## Questions?

Email me, I'd be happy to help 😊

---

## Additional Tips:

### Exit Codes

In C++, an exit code is a numeric value that a program returns to the operating
system when it terminates. The exit code is used to indicate the status of the
program's execution, with a value of 0 usually indicating successful
termination, and non-zero values indicating errors or other exceptional
conditions. 

Here's an example of a C++ program that returns an exit code of 0:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
```

In this example, the program prints the message "Hello, world!" to the console
and returns an exit code of 0 to the operating system, indicating that it has
terminated successfully. 

Here's another example that returns a non-zero exit code:

```cpp
#include <iostream>

int main() {
    std::cerr << "Error: something went wrong!" << std::endl;
    return 1;
}
```

In this example, the program prints an error message to the standard error
stream (stderr) and returns an exit code of 1 to the operating system,
indicating that it has terminated with an error. 

Exit codes can be useful for troubleshooting and debugging purposes, as they can
help identify the cause of program failures or errors. For example, if a program
returns an exit code of 1, a programmer or system administrator may use this
information to diagnose the problem and take appropriate corrective action. 

### Command line arguments:

Your application's executable will be started like this:

```sh
path/to/your/app-executable /file/path/to/share-game-file.txt /file/path/to/dictionary.txt
```
In your application, you may access these command line arguments in your main function
like this:

```cpp
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    // argc is the number of arguments passed (including the program name)
    // argv is an array of pointers to the arguments

    // check that the user passed the correct number of arguments
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <shared_game_file_path> <dictionary_path>\n";
        return 1;
    }

    // get the file paths from the command line arguments
    std::string shared_game_file_path = argv[1];
    std::string dictionary_path = argv[2];

    // use the file paths in your application
    std::cout << "Shared game file path: " << shared_game_file_path << std::endl;
    std::cout << "Dictionary path: " << dictionary_path << std::endl;

    return 0;
}
```

This code defines a main function that takes two command line arguments:
shared_game_file_path and dictionary_path. The main function then prints out the
values of these arguments to the console. 
