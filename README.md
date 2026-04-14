# The Shit Tracker 9000(tm)
**for legal purposes the (tm) is a joke.*

This is also known as ST9K.

## Installation
Installing this is very simple. Merely copy this repo and run build.sh as root.
```
git clone https://github.com/LukeIThought/Shit-Tracker-9000 st9k
```
then change directory to it and run...
```
chmod +x build.sh && doas ./build.sh # OR sudo
```
Very simple. Now its installed.

## Usage
Now, you can use it by moving into your home folder (at least that's what i recommend cause it writes the log file in the current working directory. Mostly thanks to me being an ametur in C), and running: 
```
st9k
```
That is it. Use it by truthfully plugging in the number of times you've had to shit today.

## Uninstallation
Very simply, run this oneliner as root: (so sudo users, just replace doas with sudo.)
```
doas rm /usr/local/bin/st9k && rm ~/st9k.log
```
Bazinga.

## Why this even exists
I'm just trying out making a simple C program. No AI was used in the making of this, and my search history is now filled with "How to do X in C"

I had fun doing this, so I mean that's what matters.

It is ~60 lines of C code, and it uses the stdio.h, stdlib.h and time.h libraries.

## Roadmap
- Piss
- Making it not write the log in your working dir
- Idk

## Closing Notes
This is free software, and is licensed under the GPLv3.
If you have any issues with it, please tell me at lukeithink@proton.me.
That's all.
