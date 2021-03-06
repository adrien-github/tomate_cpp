tomate
======

# Introduction #
Tomate is a garden planning and reporting tool for a kitchen garden, developped in C++ with qt4.

# Features #
- Log crops with date, location, specie, variety and notes
- Show timeline of actions for each plot
- Show space view of the garden at any date
- Keep notes for each plant
- Planning

# Screenshots #
![Tomate time view](/screenshots/tomate_timeview.png "time view")
![Tomate space view](/screenshots/tomate_spaceview.png "space view")

# Installation #
Install dependencies for compilation: libqt4-dev, libboost-date-time-dev and libboost-test-dev 


    git clone http://github.com/MickaelG/tomate_cpp
    cd tomate_cpp
    cmake -G 'Unix Makefiles'
    make tomate_gui
    ./tomate_gui

You can also download packages for version 0.1 here:
http://software.opensuse.org/download.html?project=home%3Aclaudex&package=tomate

# Quick start #
- Add plots in the "Plots" tab. Each plot is subdivided in subplots, and crops will take place in the subplots. You can create only one subplot in a plot if needed.
- Add plants in the "Plants" tab. You can set a different color for each plant with the "color" button
- Add crops by right-clicking in the "Time view" tab.
- You can see the state of the garden at any date in the "Space view" tab. By default, this date is today. You can select an other date by clicking in the "months line" in the time view. The red line shows the date selected for space view.

# Mailing list #
Send any of your comment, bug or idea to tomate@librelist.com.
You can also subscribe to this list to be informed about new features and new versions.

# License #
Tomate is licensed under GPL.
