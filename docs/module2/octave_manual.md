GNU Oct ~~a-~~ Tableve of Contents 

8/27/26, 2:51 PM 

NETWORK THEORY LTD ~~-~~ PUBLISHING FREE SOFTWARE MANUALS 

# GNU Octave Manual Version 3 

A high-level interactive language for numerical computations 

Edition 3 for Octave version 3.0.2 

## August 2008 

John W. Eaton David Bateman Sgren Hauberg 



<!-- Start of picture text -->
GNU Octave Manual Version<br>3<br>Buy the book<br>here >>><br>support free documentation<br><!-- End of picture text -->

This manual documents how to run, install and port GNU Octave, as well as its new features and incompatibilities, and how to report bugs. It corresponds to GNU Octave version 3.0.2. 

- = <u>Preface</u> =» ~~Acknowledgements~~ 

   - =" <u>How You Can Contribute to Octave</u> <mark>#</mark> <u>Distribution</u> 

<mark>=»</mark> <u>1A Brief Introduction to Octave</u> 

- <mark>#</mark> ~~1.1 Running Octave~~ 

- # ~~1.2 Simple Examples~~ 

   - <mark>=»</mark> ~~1.2.1 Creating_a Matrix~~ # <u>1.2.2 Matrix Arithmetic</u> # ~~1.2.3 Solving Linear Equations~~ # ~~1.2.4 Integrating Differential Equations~~ # ~~1.2.5 Producing Graphical Output~~ 

   - <mark>=»</mark> ~~1.2.6 Editing What You Have Typed~~ <mark>=»</mark> ~~1.2.7 Help and Documentation~~ 

- # <u>1.3 Conventions</u> 

   - =» <u>1.3.1 Fonts</u> <mark>#</mark> <u>1.3.2 Evaluation Notation</u> # ~~1.3.3 Printing _Notation~~ » ~~1.3.4 Error Messages~~ # ~~1.3.5 Format of Descriptions~~ # ~~1.3.5.1 A Sample Function Description~~ # ~~1.3.5.2 A Sample Command Description~~ <mark>#</mark> ~~1.3.5.3 A Sample Variable Description~~ 

https://book.huihoo.com/gnu ~~-~~ octave ~~-~~ manual-version ~~-3~~ /index.html 

1/9 

GNU Oct ~~a-~~ Tableve of Contents 

8/27/26, 2:51 PM 

<mark>=»</mark> ~~2 Getting Started~~ 

   - # ~~2.1 Invoking Octave from the Command Line~~ 

      - <mark>=»</mark> ~~2.1.1 Command Line Options~~ <mark>»</mark> ~~2.1.2 Startup Files~~ 

   - # ~~2.2 Quitting Octave~~ 

   - <mark>=»</mark> ~~2.3 Commands for Getting_Help~~ <mark>=»</mark> ~~2.4 Command Line Editing~~ <mark>=»</mark> ~~2.5 How Octave Reports Errors~~ » ~~2.6 Executable Octave Programs~~ <mark>=»</mark> ~~2.7 Comments in Octave Programs~~ 

- <mark>=»</mark> ~~3 Data Types~~ 

   - <mark>#</mark> ~~3.1 Built-in Data Types~~ <mark>=»</mark> ~~3.1.1 Numeric Objects~~ # ~~3.1.2 Missing Data~~ <mark>#</mark> ~~3.1.3 String Objects~~ » ~~3.1.4 Data Structure Objects~~ =» ~~3.1.5 Cell Array Objects~~ 

   - <mark>=»</mark> ~~3.2 Object Sizes~~ 

- <mark>=»</mark> ~~4 Numeric Data Types~~ 

   - <mark>=»</mark> <u>4.1 Matrices</u> 

   - <mark>=»</mark> ~~4.1.1 Empty Matrices~~ 

   - <mark>»</mark> ~~4.2 Ranges~~ <mark>=»</mark> ~~4.3 Integer Data Types~~ 

      - <mark>#</mark> ~~4.3.1 Integer Arithmetic~~ 

   - = ~~4.4 Bit Manipulations~~ 

   - » ~~4.5 Logical Values~~ 

   - <mark>=»</mark> ~~4.6 Predicates for Numeric Objects~~ 

- » ~~5 Strings~~ 

   - » ~~5.1 Creating _Strings~~ # ~~5.2 Comparing Strings~~ # ~~5.3 Manipulating Strings~~ 

   - =» ~~5.4 String Conversions~~ <mark>=»</mark> <u>5.5 Character Class Functions</u> 

<mark>="</mark> <u>6 Data Containers</u> <mark>="</mark> <u>6.1 Data Structures</u> 

   - » ~~6.1.1 Structure Arrays~~ 

   - » ~~6.1.2 Creating Structures~~ <mark>®</mark> ~~6.1.3 Manipulating Structures~~ <mark>=»</mark> ~~6.1.4 Processing Data in Structures~~ 

- =" ~~6.2 Cell Arrays~~ # ~~6.2.1 Creating_Cell Array~~ 

https://book.huihoo.com/gnu ~~-~~ octave ~~-~~ manual-version ~~-3~~ /index.html 

2/9 

GNU Oct ~~a-~~ Tableve of Contents 

8/27/26, 2:51 PM 

<mark>=</mark> ~~6.2.2 Indexing _Cell Arrays~~ 

   - <mark>#</mark> ~~6.2.3 Cell Arrays of Strings~~ <mark>="</mark> ~~6.2.4 Processing Data in Cell Arrays~~ 

- <mark>=</mark> ~~6.3 Comma Separated Lists~~ 

= <u>7 Variables</u> 

- <mark>#</mark> <u>7.1 Global Variables</u> 

- <mark>=</mark> <u>7.2 Persistent Variables</u> 

- <mark>=</mark> <u>7.3 Status of Variables</u> 

- # ~~7.4 Summary of Built-in Variables~~ 

- <mark>#</mark> <u>7.5 Defaults from the Environment</u> 

#### <mark>»</mark> ~~Expressions8~~ 

   - <mark>="</mark> ~~8.1 Index Expressions~~ 

   - <mark>=</mark> ~~8.2 Calling Functions~~ =» ~~8.2.1 Call by Value~~ 

      - <mark>®</mark> <u>8.2.2 Recursion</u> 

   - » ~~8.3 Arithmetic Operators~~ 

   - = ~~8.4 Comparison Operators~~ 

   - <mark>#</mark> ~~8.5 Boolean Expressions~~ 

   - <mark>#</mark> ~~8.5.1 Element-by-element Boolean Operators~~ <mark>#</mark> ~~8.5.2 Short-circuit Boolean Operators~~ 

   - <mark>#</mark> ~~8.6 Assignment Expressions~~ 

   - <mark>=»</mark> ~~8.7 Increment Operators~~ 

   - <mark>="</mark> ~~8.8 Operator Precedence~~ 

- <mark>=</mark> <u>9 Evaluation</u> 

   - # ~~9.1 Calling_a Function by its Name~~ 

   - = <u>9.2 Evaluation in a Different Context</u> 

- <mark>#</mark> <u>10 Statements</u> 

   - # <u>10.1 The if Statement</u> 

   - #® <u>10.2 The switch Statement</u> 

      - # ~~10.2.1 Notes for the C programmer~~ 

   - # <u>10.3 The while Statement</u> 

   - <mark>#</mark> <u>10.4 The do</u> ~~<u>-</u>~~ <u>until Statement</u> 

   - <mark>#</mark> <u>10.5 The for Statement</u> 

   - # ~~10.5.1 Looping Over Structure Elements~~ 

   - =» <u>10.6 The break Statement</u> 

   - =» <u>10.7 The continue Statement</u> 

   - # ~~10.8 The unwind protect Statement~~ <mark>»</mark> ~~10.9 The try Statement~~ 

   - # <u>10.10 Continuation Lines</u> 

- =» ~~11 Functions and Script Files~~ =# ~~11.1 Defining_Functions~~ 

https://book.huihoo.com/gnu ~~-~~ octave ~~-~~ manual-version ~~-3~~ /index.html 

3/9 

GNU Oct ~~a-~~ Tableve of Contents 

8/27/26, 2:51 PM 

# ~~11.2 Multiple Return Values~~ 

# ~~11.3 Variable-length Argument Lists~~ <mark>#</mark> ~~11.4 Variable-length Return Lists~~ <mark>#</mark> ~~11.5 Returning From a Function~~ =» ~~11.6 Default Arguments~~ <mark>#</mark> <u>11.7 Function Files</u> <mark>#</mark> ~~11.7.1 Manipulating the load path~~ <mark>=#</mark> <u>11.7.2 Subfunctions</u> <mark>#</mark> ~~11.7.3 Overloading_and Autoloading~~ <mark>=#</mark> ~~11.7.4 Function Locking,~~ <mark>=»</mark> ~~11.8 Script Files~~ <mark>#</mark> ~~11.9 Function Handles, Inline Functions, and Anonymous Functions~~ <mark>#</mark> <u>11.9.1 Function Handles</u> # ~~11.9.2 Anonymous Functions~~ <mark>#</mark> <u>11.9.3 Inline Functions</u> =» <u>11.10 Commands</u> 

   - # ~~11.11 Organization of Functions Distributed with Octave Errors and Warnings~~ <mark>#</mark> ~~12.1 Handling Errors~~ <mark>#</mark> ~~12.1.1 Raising _Errors~~ <mark>#</mark> ~~12.1.2 Catching _Errors~~ 

   - <mark>#</mark> ~~12.2 Handling Warnings~~ <mark>#</mark> ~~12.2.1 Issuing Warnings~~ <mark>#</mark> ~~12.2.2 Enabling and Disabling Warnings~~ 

- <mark>=»</mark> ~~12 Errors and Warnings~~ 

# ~~13 Debugging~~ # ~~13.1 Entering Debug Mode~~ <mark>#</mark> ~~13.2 Breakpoints~~ # ~~13.3 Debug Mode~~ 

# ~~14 Input and Output~~ 

# ~~14.1 Basic Input and Output~~ #® ~~14.1.1 Terminal Output~~ # ~~14.1.1.1 Paging Screen Output~~ <mark>#</mark> ~~14.1.2 Terminal Input~~ <mark>#</mark> ~~14.1.3 Simple File I/O~~ <mark>#</mark> ~~14.1.3.1 Saving Data on Unexpected Exits~~ =» ~~14.1.4 Rational Approximations~~ =» ~~14.2 C-Style I/O Functions~~ <mark>#®</mark> ~~14.2.1 Opening_and Closing_Files~~ <mark>#®</mark> ~~14.2.2 Simple Output~~ #® ~~14.2.3 Line-Oriented Input~~ # ~~14.2.4 Formatted Output~~ 

https://book.huihoo.com/gnu ~~-~~ octave ~~-~~ manual-version ~~-3~~ /index.html 

4/9 

GNU Oct ~~a-~~ Tableve of Contents 

8/27/26, 2:51 PM 

- <mark>#</mark> ~~14.2.5 Output Conversion for Matrices~~ 

- <mark>#</mark> ~~14.2.6 Output Conversion Syntax~~ 

- <mark>#</mark> ~~14.2.7 Table of Output Conversions~~ 

- <mark>#</mark> ~~14.2.8 Integer Conversions~~ 

- <mark>#</mark> ~~14.2.9 Floating-Point Conversions~~ 

- <mark>=»</mark> ~~14.2.10 Other Output Conversions~~ <mark>#</mark> ~~14.2.11 Formatted Input~~ 

- <mark>#</mark> ~~14.2.12 Input Conversion Syntax~~ <mark>#</mark> ~~14.2.13 Table of Input Conversions~~ 

- <mark>=»</mark> ~~14.2.14 Numeric Input Conversions~~ <mark>#®</mark> ~~14.2.15 String Input Conversions~~ <mark>#</mark> ~~14.2.16 Binary I/O~~ 

- <mark>#</mark> ~~14.2.17 Temporary Files~~ 

- # <u>14.2.18 End of File and Errors</u> 

- <mark>#</mark> ~~14.2.19 File Positionin~~ g 

= ~~15 Plotting~~ 

   - =" ~~15.1 Plotting Basics~~ 

      - <mark>=»</mark> <u>15.1.1 Two</u> ~~<u>-D</u>~~ <u>imensional Plots</u> <mark>=»</mark> ~~15.1.2 Three-Dimensional Plotting~~ <mark>=»</mark> <u>15.1.3 Plot Annotations</u> <mark>=»</mark> ~~15.1.4 Multiple Plots on One Page~~ <mark>=»</mark> ~~15.1.5 Multiple Plot Windows~~ <mark>#</mark> ~~15.1.6 Printing Plots~~ <mark>#</mark> ~~15.1.7 Test Plotting Functions~~ 

   - # ~~15.2 Advanced Plotting,~~ 

      - #® ~~15.2.1 Graphics Objects~~ <mark>#</mark> ~~15.2.2 Graphics Object Properties~~ 

         - # ~~15.2.2.1 Root Figure Properties~~ =» ~~15.2.2.2 Figure Properties~~ » ~~15.2.2.3 Axes Properties~~ =» ~~15.2.2.4 Line Properties~~ =» ~~15.2.2.5 Text Properties~~ <mark>=»</mark> ~~15.2.2.6 Image Properties~~ <mark>=»</mark> ~~15.2.2.7 Patch Properties~~ <mark>=»</mark> ~~15.2.2.8 Surface Properties~~ 

      - # ~~15.2.3 Managing Default Properties~~ 

      - =» <u>15.2.4 Colors</u> <mark>#</mark> ~~15.2.5 Line Styles~~ 

      - <mark>#</mark> ~~15.2.6 Marker Styles~~ #® ~~15.2.7 Interaction with gnuplot~~ 

- =# ~~16 Matrix Manipulation~~ 

https://book.huihoo.com/gnu ~~-~~ octave ~~-~~ manual-version ~~-3~~ /index.html 

5/9 

GNU Oct ~~a-~~ Tableve of Contents 

8/27/26, 2:51 PM 

=" ~~16.1 Finding Elements and Checking_Conditions~~ 

   - # ~~16.2 Rearranging Matrices~~ <mark>#</mark> ~~16.3 Applying_a Function to an Array~~ <mark>=»</mark> ~~16.4 Special Utility Matrices~~ # <u>16.5 Random Matrices</u> <mark>=»</mark> <u>16.6 Famous Matrices</u> 

- <mark>=</mark> <u>17 Arithmetic</u> 

   - <mark>#</mark> ~~17.1 Utility Functions~~ 

   - # ~~17.2 Complex Arithmetic~~ <mark>®</mark> ~~17.3 Trigonometry~~ <mark>=»</mark> <u>17.4 Sums and Products</u> <mark>=»</mark> ~~17.5 Special Functions~~ <mark>="</mark> <u>17.6 Coordinate Transformations</u> # <u>17.7 Mathematical Constants</u> 

- <mark>=»</mark> ~~18 Linear Algebra~~ 

   - =" ~~18.1 Techniques used for Linear Algebra~~ =# <u>18.2 Basic Matrix Functions</u> <mark>#</mark> <u>18.3 Matrix Factorizations</u> <mark>="</mark> <u>18.4 Functions of a Matrix</u> 

- <mark>=»</mark> ~~19 Nonlinear Equations~~ <mark>=»</mark> ~~20 Sparse Matrices~~ 

   - <mark>»</mark> <u>20.1 Basics</u> <mark>#</mark> ~~20.1.1 Storageof Sparse Matrices~~ 

      - <mark>=»</mark> ~~20.1.2 Creating Sparse Matrices~~ # ~~20.1.3 Sparse Matrix Properties~~ 

      - # ~~20.1.4 Sparse Matrix Types~~ <mark>#</mark> ~~20.1.5 Graphical Representations of Sparse Matrices~~ 

      - # ~~20.1.6 Basic Operators and Functions on Sparse Matrices~~ # ~~20.1.6.1 Sparse Functions~~ # ~~20.1.6.2 The Return Types of Operators and Functions~~ # <u>20.1.6.3 Mathematical Considerations</u> 

      - » ~~20.1.7 Reordering~~ 

   - <mark>#</mark> ~~20.2 Linear Algebra on Sparse Matrices~~ 

   - <mark>=</mark> ~~20.3 Iterative Techniques applied to sparse matrices~~ 

   - <mark>=</mark> ~~20.4 Real Life Example of the use of Sparse Matrices~~ 

- =» ~~21 Numerical Integration~~ 

   - =» <u>21.1 Functions of One Variable</u> <mark>#®</mark> ~~21.2 Orthogonal Collocation~~ <mark>#®</mark> ~~21.3 Functions of Multiple Variables~~ 

- =» ~~22 Differential Equations~~ # ~~22.1 Ordinary Differential Equations~~ 

https://book.huihoo.com/gnu ~~-~~ octave ~~-~~ manual-version ~~-3~~ /index.html 

6/9 

GNU Oct ~~a-~~ Tableve of Contents 

8/27/26, 2:51 PM 

= ~~22.2 Differential-Algebraic Equations~~ 

- <mark>#</mark> ~~23 Optimization~~ 

- <mark>#</mark> ~~23.1 Linear Programming~~ <mark>#</mark> ~~23.2 Quadratic Programming,~~ # ~~23.3 Nonlinear Programming~~ <mark>=»</mark> ~~23.4 Linear Least Squares~~ 

- <mark>=</mark> <u>24 Statistics</u> <mark>=»</mark> ~~24.1 Descriptive Statistics~~ = <u>24.2 Basic Statistical Functions</u> <mark>#</mark> <u>24.3 Statistical Plots</u> <mark>=»</mark> <u>24.4 Tests</u> <mark>=»</mark> <u>24.5 Models</u> <mark>=»</mark> <u>24.6 Distributions</u> # <u>24.7 Random Number Generation</u> 

- <mark>#</mark> <u>25 Sets</u> » ~~25.1 Set Operations~~ 

- # ~~Polynomial26 Manipulations~~ 

   - <mark>#</mark> ~~26.1 Evaluating Polynomials~~ 

   - <mark>=»</mark> ~~26.2 Finding Roots~~ <mark>=»</mark> ~~26.3 Products of Polynomials~~ <mark>=»</mark> ~~26.4 Derivatives and Integrals~~ 

   - <mark>#</mark> ~~26.5 Polynomial Interpolation~~ <mark>="</mark> <u>26.6 Miscellaneous Functions</u> 

- <mark>=</mark> ~~27 Interpolation~~ 

   - # ~~27.1 One-dimensional Interpolation~~ # ~~27.2 Multi-dimensional Interpolation~~ 

- <mark>=»</mark> ~~28 Geometry~~ # ~~28.1 Delaunay Triangulation~~ 

      - # ~~28.1.1 Plotting the Triangulation~~ 

      - # ~~28.1.2 Identifying_points in Triangulation~~ 

   - # ~~28.2 Voronoi Diagrams~~ 

   - # <u>28.3 Convex Hull</u> 

   - <mark>#</mark> ~~28.4 Interpolation on Scattered Data~~ 

- <mark>=»</mark> ~~29 Signal Processing~~ 

   - <mark>=»</mark> <u>29.1 Fast Fourier Transforms</u> =» ~~29.2 Filters and Windowing_ Functions~~ 

- =» ~~30 Image Processing~~ 

   - <mark>#</mark> ~~30.1 Loading and Saving Images~~ <mark>#</mark> ~~30.2 Displaying Images~~ 

   - =» ~~30.3 Representing Images~~ = ~~30.4 Plottingon top of Images~~ 

https://book.huihoo.com/gnu ~~-~~ octave ~~-~~ manual-version ~~-3~~ /index.html 

7/9 

GNU Oct ~~a-~~ Tableve of Contents 

8/27/26, 2:51 PM 

# <u>30.5 Color Conversion</u> 

## <mark>»</mark> ~~31 Audio Processing~~ 

- <mark>#</mark> <u>31.1 Audio Conversion Functions</u> <mark>#</mark> ~~31.2 Loading_and Saving _Audio Files~~ 

- = ~~System32 Utilities~~ 

   - <mark>#</mark> ~~32.1 Timing Utilities~~ 

   - <mark>=</mark> ~~32.2 Filesystem Utilities~~ <mark>#</mark> ~~32.3 File Archiving Utilities~~ 

   - = ~~32.4 Networking Utilities~~ 

   - <mark>#</mark> ~~32.5 Controlling Subprocesses~~ 

   - <mark>=»</mark> ~~32.6 Process, Group, and User IDs~~ 

   - <mark>#</mark> <u>32.7 Environment Variables</u> <mark>=»</mark> ~~32.8 Current Working Directory~~ = <u>32.9 Password Database Functions</u> 

   - <mark>=»</mark> ~~32.10 Group Database Functions~~ 

   - =» ~~32.11 System Information~~ = ~~32.12 Hashing Functions~~ 

- <mark>=»</mark> ~~33 Packages~~ 

   - <mark>#</mark> ~~33.1 Installing and Removing Packages~~ 

   - <mark>#</mark> ~~33.2 Using Packages~~ 

   - <mark>#</mark> ~~33.3 Administrating_Packages~~ 

   - <mark>=»</mark> ~~33.4 Creating Packages~~ 

      - <mark>=»</mark> <u>33.4.1 The DESCRIPTION File</u> 

      - <mark>=</mark> <u>33.4.2 The INDEX file</u> 

      - # <u>33.4.3 PKG ADD and PKG DEL directives</u> 

### # ~~A Command Line Editing~~ 

      - <mark>#</mark> <u>33.4.4 Cursor Motion</u> 

      - = ~~33.4.5 Killing and Yanking~~ 

      - # ~~33.4.6 Commands For Changing Text~~ 

      - # ~~33.4.7 Letting Readline Type For You~~ 

      - # ~~33.4.8 Commands For Manipulating The History~~ 

      - # ~~33.4.9 Customizing readline~~ 

      - <mark>»</mark> ~~33.4.10 Customizing the Prompt~~ #® ~~33.4.11 Diary and Echo Commands~~ 

- = <u>B Test and Demo Functions</u> 

   - # <u>33.5 Test Functions</u> 

   - # <u>33.6 Demonstration Functions</u> 

- =" ~~TipsC~~<sup>~~andStandards~~</sup> 

   - # ~~33.7 Writing Clean Octave Programs~~ # ~~33.8 Tips for Making Code Run Faster.~~ # ~~33.9 Tips on Writing Comments~~ 

https://book.huihoo.com/gnu ~~-~~ octave ~~-~~ manual-version ~~-3~~ /index.html 

8/9 

GNU Oct ~~a-~~ Tableve of Contents 

8/27/26, 2:51 PM 

# <u>33.10 Conventional Headers for Octave Functions</u> 

   - # ~~33.11 Tips for Documentation Strings~~ 

- <mark>=»</mark> <u>D Known Causes of Trouble</u> 

   - <mark>#</mark> ~~D.1 Actual Bugs We Haven't Fixed Yet~~ « ~~D.2 Reporting Bugs~~ <mark>»</mark> ~~D.3 Have You Found a Bug?~~ <mark>=»</mark> ~~D.4 Where to Report Bugs~~ <mark>=</mark> ~~D.5 How to Report Bugs~~ # ~~D.6 Sending Patches for Octave~~ <mark>=»</mark> ~~D.7 How To Get Help with Octave~~ 

- <mark>#</mark> ~~E Installing Octave~~ 

   - <mark>#</mark> <u>E.1 Installation Problems</u> 

- <mark>=»</mark> ~~F Emacs Octave Support~~ # ~~F.1 InstallingEOS~~ <mark>=»</mark> ~~F.2 Using Octave Mode~~ = ~~F.3 Running Octave From Within Emacs~~ =» ~~F.4 Using the Emacs Info Reader for Octave~~ 

- <mark>="</mark> <u>G GNU GENERAL PUBLIC LICENSE</u> <mark>="</mark> ~~Books from the publisher~~ <mark>=</mark> ~~Index~~ 

Copyright (C) 1996, 1997, 1999, 2000, 2001, 2002, 2005, 2006, 2007 John W. Eaton. 

Permission is granted to make and distribute verbatim copies of this manual provided the copyright notice and this permission notice are preserved on all copies. 

Permission is granted to copy and distribute modified versions of this manual under the conditions for verbatim copying, provided that the entire resulting derived work is distributed under the terms of a permission notice identical to this one. 

Permission is granted to copy and distribute translations of this manual into another language, under the above conditions for modified versions. 

~~ISBN~~ . ~~See the print~~ GNU Octave Manual Version 3 <u>095461206X edition.</u> 

Network Theory Limited, United Kingdom Email: sales@network-theory.co.uk Web: www.network-theory.co.uk Buying our books supports the development of free software and documentation! 

https://book.huihoo.com/gnu ~~-~~ octave ~~-~~ manual-version ~~-3~~ /index.html 

9/9 

