# Arduino Playground Based on PlatformIO

## Arduino UNO R3

[Spec] (https://www.arduino.cc/en/Main/ArduinoBoardUno)
[Board Pin Mapping] (http://www.gammon.com.au/uno)

## initial setup

### setup pyenv

    $> brew update  # update brew database
    $> brew install pyenv
    $> brew install pyenv-virtualenv

### Install PlatformIO in a virtual env

    $> pyenv virtualenv 2.7.11 arduino #platformio runs on python 2.x
    $> git clone git@github.com:xiaotian/arduino.git
    $> cd arduino
    $> pyenv local arduino
    # .. cd back in
    $> pip install platformio
    $> pio # test the command.

### Start a new project

    $> mkdir <dir>
    $> pio init -b uno -d <dir>
    


