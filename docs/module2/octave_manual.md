GNU Octa-Tableve of Contents

NETWORK THEORY LTD-PUBLISHING FREE SOFTWARE MANUALS

# GNU Octave Manual Version 3

A high-level interactive language for numerical computations

Edition 3 for Octave version 3.0.2

## August 2008

John W. Eaton David Bateman Sgren Hauberg

> **[figure]**
> GNU Octave Manual Version
> 3
> Buy the book
> here >>>
> support free documentation

This manual documents how to run, install and port GNU Octave, as well as its new features and incompatibilities, and how to report bugs. It corresponds to GNU Octave version 3.0.2.

- Preface
- Acknowledgements

   - How You Can Contribute to Octave
   - Distribution

- 1A Brief Introduction to Octave

- 1.1 Running Octave

- 1.2 Simple Examples

   - 1.2.1 Creating_a Matrix
   - 1.2.2 Matrix Arithmetic
   - 1.2.3 Solving Linear Equations
   - 1.2.4 Integrating Differential Equations
   - 1.2.5 Producing Graphical Output

   - 1.2.6 Editing What You Have Typed
   - 1.2.7 Help and Documentation

- 1.3 Conventions

   - 1.3.1 Fonts
   - 1.3.2 Evaluation Notation
   - 1.3.3 Printing Notation
   - 1.3.4 Error Messages
   - 1.3.5 Format of Descriptions
   - 1.3.5.1 A Sample Function Description
   - 1.3.5.2 A Sample Command Description
   - 1.3.5.3 A Sample Variable Description

https://book.huihoo.com/gnu-octave-manual-version-3/index.html

GNU Octa-Tableve of Contents

- 2 Getting Started

   - 2.1 Invoking Octave from the Command Line

      - 2.1.1 Command Line Options
      - 2.1.2 Startup Files

   - 2.2 Quitting Octave

   - 2.3 Commands for Getting_Help
   - 2.4 Command Line Editing
   - 2.5 How Octave Reports Errors
   - 2.6 Executable Octave Programs
   - 2.7 Comments in Octave Programs

- 3 Data Types

   - 3.1 Built-in Data Types
   - 3.1.1 Numeric Objects
   - 3.1.2 Missing Data
   - 3.1.3 String Objects
   - 3.1.4 Data Structure Objects
   - 3.1.5 Cell Array Objects

   - 3.2 Object Sizes

- 4 Numeric Data Types

   - 4.1 Matrices

   - 4.1.1 Empty Matrices

   - 4.2 Ranges
   - 4.3 Integer Data Types

      - 4.3.1 Integer Arithmetic

   - = 4.4 Bit Manipulations

   - 4.5 Logical Values

   - 4.6 Predicates for Numeric Objects

- 5 Strings

   - 5.1 Creating Strings
   - 5.2 Comparing Strings
   - 5.3 Manipulating Strings

   - 5.4 String Conversions
   - 5.5 Character Class Functions

=" 6 Data Containers =" 6.1 Data Structures

   - 6.1.1 Structure Arrays

   - 6.1.2 Creating Structures ® 6.1.3 Manipulating Structures
   - 6.1.4 Processing Data in Structures

- 6.2 Cell Arrays
- 6.2.1 Creating_Cell Array

https://book.huihoo.com/gnu-octave-manual-version-3/index.html

GNU Octa-Tableve of Contents

= 6.2.2 Indexing Cell Arrays

   - 6.2.3 Cell Arrays of Strings
   - 6.2.4 Processing Data in Cell Arrays

- = 6.3 Comma Separated Lists

= 7 Variables

- 7.1 Global Variables

- = 7.2 Persistent Variables

- = 7.3 Status of Variables

- 7.4 Summary of Built-in Variables

- 7.5 Defaults from the Environment

- Expressions8

   - 8.1 Index Expressions

   - 8.2 Calling Functions
   - 8.2.1 Call by Value

      - ® 8.2.2 Recursion

   - 8.3 Arithmetic Operators

   - = 8.4 Comparison Operators

   - 8.5 Boolean Expressions

   - 8.5.1 Element-by-element Boolean Operators
   - 8.5.2 Short-circuit Boolean Operators

   - 8.6 Assignment Expressions

   - 8.7 Increment Operators

   - 8.8 Operator Precedence

- = 9 Evaluation

   - 9.1 Calling_a Function by its Name

   - = 9.2 Evaluation in a Different Context

- 10 Statements

   - 10.1 The if Statement

   - #® 10.2 The switch Statement

      - 10.2.1 Notes for the C programmer

   - 10.3 The while Statement

   - 10.4 The do-until Statement

   - 10.5 The for Statement

   - 10.5.1 Looping Over Structure Elements

   - 10.6 The break Statement

   - 10.7 The continue Statement

   - 10.8 The unwind protect Statement
   - 10.9 The try Statement

   - 10.10 Continuation Lines

- 11 Functions and Script Files =# 11.1 Defining_Functions

https://book.huihoo.com/gnu-octave-manual-version-3/index.html

GNU Octa-Tableve of Contents

# 11.2 Multiple Return Values

- 11.3 Variable-length Argument Lists
- 11.4 Variable-length Return Lists
- 11.5 Returning From a Function
- 11.6 Default Arguments
- 11.7 Function Files
- 11.7.1 Manipulating the load path =# 11.7.2 Subfunctions
- 11.7.3 Overloading_and Autoloading =# 11.7.4 Function Locking,
- 11.8 Script Files
- 11.9 Function Handles, Inline Functions, and Anonymous Functions
- 11.9.1 Function Handles
- 11.9.2 Anonymous Functions
- 11.9.3 Inline Functions
- 11.10 Commands

   - 11.11 Organization of Functions Distributed with Octave Errors and Warnings
   - 12.1 Handling Errors
   - 12.1.1 Raising Errors
   - 12.1.2 Catching Errors

   - 12.2 Handling Warnings
   - 12.2.1 Issuing Warnings
   - 12.2.2 Enabling and Disabling Warnings

- 12 Errors and Warnings

# 13 Debugging # 13.1 Entering Debug Mode # 13.2 Breakpoints # 13.3 Debug Mode

# 14 Input and Output

- 14.1 Basic Input and Output #® 14.1.1 Terminal Output
- 14.1.1.1 Paging Screen Output
- 14.1.2 Terminal Input
- 14.1.3 Simple File I/O
- 14.1.3.1 Saving Data on Unexpected Exits
- 14.1.4 Rational Approximations
- 14.2 C-Style I/O Functions #® 14.2.1 Opening_and Closing_Files #® 14.2.2 Simple Output #® 14.2.3 Line-Oriented Input
- 14.2.4 Formatted Output

https://book.huihoo.com/gnu-octave-manual-version-3/index.html

GNU Octa-Tableve of Contents

- 14.2.5 Output Conversion for Matrices

- 14.2.6 Output Conversion Syntax

- 14.2.7 Table of Output Conversions

- 14.2.8 Integer Conversions

- 14.2.9 Floating-Point Conversions

- 14.2.10 Other Output Conversions
- 14.2.11 Formatted Input

- 14.2.12 Input Conversion Syntax
- 14.2.13 Table of Input Conversions

- 14.2.14 Numeric Input Conversions #® 14.2.15 String Input Conversions
- 14.2.16 Binary I/O

- 14.2.17 Temporary Files

- 14.2.18 End of File and Errors

- 14.2.19 File Positionin g

= 15 Plotting

   - 15.1 Plotting Basics

      - 15.1.1 Two-Dimensional Plots
      - 15.1.2 Three-Dimensional Plotting
      - 15.1.3 Plot Annotations
      - 15.1.4 Multiple Plots on One Page
      - 15.1.5 Multiple Plot Windows
      - 15.1.6 Printing Plots
      - 15.1.7 Test Plotting Functions

   - 15.2 Advanced Plotting,

      - ® 15.2.1 Graphics Objects
      - 15.2.2 Graphics Object Properties

         - 15.2.2.1 Root Figure Properties
         - 15.2.2.2 Figure Properties
         - 15.2.2.3 Axes Properties
         - 15.2.2.4 Line Properties
         - 15.2.2.5 Text Properties
         - 15.2.2.6 Image Properties
         - 15.2.2.7 Patch Properties
         - 15.2.2.8 Surface Properties

      - 15.2.3 Managing Default Properties

      - 15.2.4 Colors
      - 15.2.5 Line Styles

      - 15.2.6 Marker Styles #® 15.2.7 Interaction with gnuplot

- =# 16 Matrix Manipulation

https://book.huihoo.com/gnu-octave-manual-version-3/index.html

GNU Octa-Tableve of Contents

=" 16.1 Finding Elements and Checking_Conditions

   - 16.2 Rearranging Matrices
   - 16.3 Applying_a Function to an Array
   - 16.4 Special Utility Matrices
   - 16.5 Random Matrices
   - 16.6 Famous Matrices

- = 17 Arithmetic

   - 17.1 Utility Functions

   - 17.2 Complex Arithmetic ® 17.3 Trigonometry
   - 17.4 Sums and Products
   - 17.5 Special Functions
   - 17.6 Coordinate Transformations
   - 17.7 Mathematical Constants

- 18 Linear Algebra

   - 18.1 Techniques used for Linear Algebra =# 18.2 Basic Matrix Functions
   - 18.3 Matrix Factorizations
   - 18.4 Functions of a Matrix

- 19 Nonlinear Equations
- 20 Sparse Matrices

   - 20.1 Basics
   - 20.1.1 Storageof Sparse Matrices

      - 20.1.2 Creating Sparse Matrices
      - 20.1.3 Sparse Matrix Properties

      - 20.1.4 Sparse Matrix Types
      - 20.1.5 Graphical Representations of Sparse Matrices

      - 20.1.6 Basic Operators and Functions on Sparse Matrices
      - 20.1.6.1 Sparse Functions
      - 20.1.6.2 The Return Types of Operators and Functions
      - 20.1.6.3 Mathematical Considerations

      - 20.1.7 Reordering

   - 20.2 Linear Algebra on Sparse Matrices

   - = 20.3 Iterative Techniques applied to sparse matrices

   - = 20.4 Real Life Example of the use of Sparse Matrices

- 21 Numerical Integration

   - 21.1 Functions of One Variable #® 21.2 Orthogonal Collocation #® 21.3 Functions of Multiple Variables

- 22 Differential Equations
- 22.1 Ordinary Differential Equations

https://book.huihoo.com/gnu-octave-manual-version-3/index.html

GNU Octa-Tableve of Contents

= 22.2 Differential-Algebraic Equations

- 23 Optimization

- 23.1 Linear Programming
- 23.2 Quadratic Programming,
- 23.3 Nonlinear Programming
- 23.4 Linear Least Squares

- 24 Statistics
- 24.1 Descriptive Statistics = 24.2 Basic Statistical Functions
- 24.3 Statistical Plots
- 24.4 Tests
- 24.5 Models
- 24.6 Distributions
- 24.7 Random Number Generation

- 25 Sets
- 25.1 Set Operations

- Polynomial26 Manipulations

   - 26.1 Evaluating Polynomials

   - 26.2 Finding Roots
   - 26.3 Products of Polynomials
   - 26.4 Derivatives and Integrals

   - 26.5 Polynomial Interpolation
   - 26.6 Miscellaneous Functions

- = 27 Interpolation

   - 27.1 One-dimensional Interpolation
   - 27.2 Multi-dimensional Interpolation

- 28 Geometry
- 28.1 Delaunay Triangulation

      - 28.1.1 Plotting the Triangulation

      - 28.1.2 Identifying_points in Triangulation

   - 28.2 Voronoi Diagrams

   - 28.3 Convex Hull

   - 28.4 Interpolation on Scattered Data

- 29 Signal Processing

   - 29.1 Fast Fourier Transforms
   - 29.2 Filters and Windowing_ Functions

- 30 Image Processing

   - 30.1 Loading and Saving Images
   - 30.2 Displaying Images

   - 30.3 Representing Images = 30.4 Plottingon top of Images

https://book.huihoo.com/gnu-octave-manual-version-3/index.html

GNU Octa-Tableve of Contents

# 30.5 Color Conversion

- 31 Audio Processing

- 31.1 Audio Conversion Functions
- 31.2 Loading_and Saving Audio Files

- = System32 Utilities

   - 32.1 Timing Utilities

   - 32.2 Filesystem Utilities
   - 32.3 File Archiving Utilities

   - = 32.4 Networking Utilities

   - 32.5 Controlling Subprocesses

   - 32.6 Process, Group, and User IDs

   - 32.7 Environment Variables
   - 32.8 Current Working Directory = 32.9 Password Database Functions

   - 32.10 Group Database Functions

   - 32.11 System Information = 32.12 Hashing Functions

- 33 Packages

   - 33.1 Installing and Removing Packages

   - 33.2 Using Packages

   - 33.3 Administrating_Packages

   - 33.4 Creating Packages

      - 33.4.1 The DESCRIPTION File

      - = 33.4.2 The INDEX file

      - 33.4.3 PKG ADD and PKG DEL directives

### # A Command Line Editing

      - 33.4.4 Cursor Motion

      - = 33.4.5 Killing and Yanking

      - 33.4.6 Commands For Changing Text

      - 33.4.7 Letting Readline Type For You

      - 33.4.8 Commands For Manipulating The History

      - 33.4.9 Customizing readline

      - 33.4.10 Customizing the Prompt #® 33.4.11 Diary and Echo Commands

- = B Test and Demo Functions

   - 33.5 Test Functions

   - 33.6 Demonstration Functions

- TipsC<sup>andStandards</sup>

   - 33.7 Writing Clean Octave Programs
   - 33.8 Tips for Making Code Run Faster.
   - 33.9 Tips on Writing Comments

https://book.huihoo.com/gnu-octave-manual-version-3/index.html

GNU Octa-Tableve of Contents

# 33.10 Conventional Headers for Octave Functions

   - 33.11 Tips for Documentation Strings

- D Known Causes of Trouble

   - D.1 Actual Bugs We Haven't Fixed Yet « D.2 Reporting Bugs
   - D.3 Have You Found a Bug?
   - D.4 Where to Report Bugs = D.5 How to Report Bugs
   - D.6 Sending Patches for Octave
   - D.7 How To Get Help with Octave

- E Installing Octave

   - E.1 Installation Problems

- F Emacs Octave Support
- F.1 InstallingEOS
- F.2 Using Octave Mode = F.3 Running Octave From Within Emacs
- F.4 Using the Emacs Info Reader for Octave

- G GNU GENERAL PUBLIC LICENSE
- Books from the publisher = Index

Copyright (C) 1996, 1997, 1999, 2000, 2001, 2002, 2005, 2006, 2007 John W. Eaton.

Permission is granted to make and distribute verbatim copies of this manual provided the copyright notice and this permission notice are preserved on all copies.

Permission is granted to copy and distribute modified versions of this manual under the conditions for verbatim copying, provided that the entire resulting derived work is distributed under the terms of a permission notice identical to this one.

Permission is granted to copy and distribute translations of this manual into another language, under the above conditions for modified versions.

ISBN. See the print GNU Octave Manual Version 3 095461206X edition.

Network Theory Limited, United Kingdom Email: sales@network-theory.co.uk Web: www.network-theory.co.uk Buying our books supports the development of free software and documentation!

https://book.huihoo.com/gnu-octave-manual-version-3/index.html

---

## Reference — from the linked source

*Retrieved 2026-08-28 from [GNU Octave Manual Version 3](https://book.huihoo.com/gnu-octave-manual-version-3/index.html) (Eaton, Bateman & Hauberg; Edition 3, August 2008, for Octave 3.0.2). The OCR'd contents list above lost its hyperlinks; this section restores them and inlines the full text of the chapters used in this module.*

### Contents (complete, linked)

- [Preface](https://book.huihoo.com/gnu-octave-manual-version-3/octave_2.html)
  - [Acknowledgements](https://book.huihoo.com/gnu-octave-manual-version-3/octave_3.html)
  - [How You Can Contribute to Octave](https://book.huihoo.com/gnu-octave-manual-version-3/octave_4.html)
  - [Distribution](https://book.huihoo.com/gnu-octave-manual-version-3/octave_5.html)
- [1 A Brief Introduction to Octave](https://book.huihoo.com/gnu-octave-manual-version-3/octave_6.html)
  - [1.1 Running Octave](https://book.huihoo.com/gnu-octave-manual-version-3/octave_7.html)
  - [1.2 Simple Examples](https://book.huihoo.com/gnu-octave-manual-version-3/octave_8.html)
    - [1.2.1 Creating a Matrix](https://book.huihoo.com/gnu-octave-manual-version-3/octave_8.html)
    - [1.2.2 Matrix Arithmetic](https://book.huihoo.com/gnu-octave-manual-version-3/octave_8.html)
    - [1.2.3 Solving Linear Equations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_8.html)
    - [1.2.4 Integrating Differential Equations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_8.html)
    - [1.2.5 Producing Graphical Output](https://book.huihoo.com/gnu-octave-manual-version-3/octave_8.html)
    - [1.2.6 Editing What You Have Typed](https://book.huihoo.com/gnu-octave-manual-version-3/octave_8.html)
    - [1.2.7 Help and Documentation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_8.html)
  - [1.3 Conventions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_9.html)
    - [1.3.1 Fonts](https://book.huihoo.com/gnu-octave-manual-version-3/octave_10.html)
    - [1.3.2 Evaluation Notation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_11.html)
    - [1.3.3 Printing Notation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_12.html)
    - [1.3.4 Error Messages](https://book.huihoo.com/gnu-octave-manual-version-3/octave_13.html)
    - [1.3.5 Format of Descriptions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_14.html)
      - [1.3.5.1 A Sample Function Description](https://book.huihoo.com/gnu-octave-manual-version-3/octave_15.html)
      - [1.3.5.2 A Sample Command Description](https://book.huihoo.com/gnu-octave-manual-version-3/octave_16.html)
      - [1.3.5.3 A Sample Variable Description](https://book.huihoo.com/gnu-octave-manual-version-3/octave_17.html)
- [2 Getting Started](https://book.huihoo.com/gnu-octave-manual-version-3/octave_18.html)
  - [2.1 Invoking Octave from the Command Line](https://book.huihoo.com/gnu-octave-manual-version-3/octave_19.html)
    - [2.1.1 Command Line Options](https://book.huihoo.com/gnu-octave-manual-version-3/octave_20.html)
    - [2.1.2 Startup Files](https://book.huihoo.com/gnu-octave-manual-version-3/octave_21.html)
  - [2.2 Quitting Octave](https://book.huihoo.com/gnu-octave-manual-version-3/octave_22.html)
  - [2.3 Commands for Getting Help](https://book.huihoo.com/gnu-octave-manual-version-3/octave_23.html)
  - [2.4 Command Line Editing](https://book.huihoo.com/gnu-octave-manual-version-3/octave_24.html)
  - [2.5 How Octave Reports Errors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_25.html)
  - [2.6 Executable Octave Programs](https://book.huihoo.com/gnu-octave-manual-version-3/octave_26.html)
  - [2.7 Comments in Octave Programs](https://book.huihoo.com/gnu-octave-manual-version-3/octave_27.html)
- [3 Data Types](https://book.huihoo.com/gnu-octave-manual-version-3/octave_28.html)
  - [3.1 Built-in Data Types](https://book.huihoo.com/gnu-octave-manual-version-3/octave_29.html)
    - [3.1.1 Numeric Objects](https://book.huihoo.com/gnu-octave-manual-version-3/octave_30.html)
    - [3.1.2 Missing Data](https://book.huihoo.com/gnu-octave-manual-version-3/octave_31.html)
    - [3.1.3 String Objects](https://book.huihoo.com/gnu-octave-manual-version-3/octave_32.html)
    - [3.1.4 Data Structure Objects](https://book.huihoo.com/gnu-octave-manual-version-3/octave_33.html)
    - [3.1.5 Cell Array Objects](https://book.huihoo.com/gnu-octave-manual-version-3/octave_34.html)
  - [3.2 Object Sizes](https://book.huihoo.com/gnu-octave-manual-version-3/octave_35.html)
- [4 Numeric Data Types](https://book.huihoo.com/gnu-octave-manual-version-3/octave_36.html)
  - [4.1 Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_37.html)
    - [4.1.1 Empty Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_38.html)
  - [4.2 Ranges](https://book.huihoo.com/gnu-octave-manual-version-3/octave_39.html)
  - [4.3 Integer Data Types](https://book.huihoo.com/gnu-octave-manual-version-3/octave_40.html)
    - [4.3.1 Integer Arithmetic](https://book.huihoo.com/gnu-octave-manual-version-3/octave_41.html)
  - [4.4 Bit Manipulations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_42.html)
  - [4.5 Logical Values](https://book.huihoo.com/gnu-octave-manual-version-3/octave_43.html)
  - [4.6 Predicates for Numeric Objects](https://book.huihoo.com/gnu-octave-manual-version-3/octave_44.html)
- [5 Strings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_45.html)
  - [5.1 Creating Strings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_46.html)
  - [5.2 Comparing Strings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_47.html)
  - [5.3 Manipulating Strings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_48.html)
  - [5.4 String Conversions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_49.html)
  - [5.5 Character Class Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_50.html)
- [6 Data Containers](https://book.huihoo.com/gnu-octave-manual-version-3/octave_51.html)
  - [6.1 Data Structures](https://book.huihoo.com/gnu-octave-manual-version-3/octave_52.html)
    - [6.1.1 Structure Arrays](https://book.huihoo.com/gnu-octave-manual-version-3/octave_53.html)
    - [6.1.2 Creating Structures](https://book.huihoo.com/gnu-octave-manual-version-3/octave_54.html)
    - [6.1.3 Manipulating Structures](https://book.huihoo.com/gnu-octave-manual-version-3/octave_55.html)
    - [6.1.4 Processing Data in Structures](https://book.huihoo.com/gnu-octave-manual-version-3/octave_56.html)
  - [6.2 Cell Arrays](https://book.huihoo.com/gnu-octave-manual-version-3/octave_57.html)
    - [6.2.1 Creating Cell Array](https://book.huihoo.com/gnu-octave-manual-version-3/octave_58.html)
    - [6.2.2 Indexing Cell Arrays](https://book.huihoo.com/gnu-octave-manual-version-3/octave_59.html)
    - [6.2.3 Cell Arrays of Strings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_60.html)
    - [6.2.4 Processing Data in Cell Arrays](https://book.huihoo.com/gnu-octave-manual-version-3/octave_61.html)
  - [6.3 Comma Separated Lists](https://book.huihoo.com/gnu-octave-manual-version-3/octave_62.html)
- [7 Variables](https://book.huihoo.com/gnu-octave-manual-version-3/octave_63.html)
  - [7.1 Global Variables](https://book.huihoo.com/gnu-octave-manual-version-3/octave_64.html)
  - [7.2 Persistent Variables](https://book.huihoo.com/gnu-octave-manual-version-3/octave_65.html)
  - [7.3 Status of Variables](https://book.huihoo.com/gnu-octave-manual-version-3/octave_66.html)
  - [7.4 Summary of Built-in Variables](https://book.huihoo.com/gnu-octave-manual-version-3/octave_67.html)
  - [7.5 Defaults from the Environment](https://book.huihoo.com/gnu-octave-manual-version-3/octave_68.html)
- [8 Expressions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_69.html)
  - [8.1 Index Expressions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_70.html)
  - [8.2 Calling Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_71.html)
    - [8.2.1 Call by Value](https://book.huihoo.com/gnu-octave-manual-version-3/octave_72.html)
    - [8.2.2 Recursion](https://book.huihoo.com/gnu-octave-manual-version-3/octave_73.html)
  - [8.3 Arithmetic Operators](https://book.huihoo.com/gnu-octave-manual-version-3/octave_74.html)
  - [8.4 Comparison Operators](https://book.huihoo.com/gnu-octave-manual-version-3/octave_75.html)
  - [8.5 Boolean Expressions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_76.html)
    - [8.5.1 Element-by-element Boolean Operators](https://book.huihoo.com/gnu-octave-manual-version-3/octave_77.html)
    - [8.5.2 Short-circuit Boolean Operators](https://book.huihoo.com/gnu-octave-manual-version-3/octave_78.html)
  - [8.6 Assignment Expressions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_79.html)
  - [8.7 Increment Operators](https://book.huihoo.com/gnu-octave-manual-version-3/octave_80.html)
  - [8.8 Operator Precedence](https://book.huihoo.com/gnu-octave-manual-version-3/octave_81.html)
- [9 Evaluation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_82.html)
  - [9.1 Calling a Function by its Name](https://book.huihoo.com/gnu-octave-manual-version-3/octave_83.html)
  - [9.2 Evaluation in a Different Context](https://book.huihoo.com/gnu-octave-manual-version-3/octave_84.html)
- [10 Statements](https://book.huihoo.com/gnu-octave-manual-version-3/octave_85.html)
  - [10.1 The if Statement](https://book.huihoo.com/gnu-octave-manual-version-3/octave_86.html)
  - [10.2 The switch Statement](https://book.huihoo.com/gnu-octave-manual-version-3/octave_87.html)
    - [10.2.1 Notes for the C programmer](https://book.huihoo.com/gnu-octave-manual-version-3/octave_88.html)
  - [10.3 The while Statement](https://book.huihoo.com/gnu-octave-manual-version-3/octave_89.html)
  - [10.4 The do-until Statement](https://book.huihoo.com/gnu-octave-manual-version-3/octave_90.html)
  - [10.5 The for Statement](https://book.huihoo.com/gnu-octave-manual-version-3/octave_91.html)
    - [10.5.1 Looping Over Structure Elements](https://book.huihoo.com/gnu-octave-manual-version-3/octave_92.html)
  - [10.6 The break Statement](https://book.huihoo.com/gnu-octave-manual-version-3/octave_93.html)
  - [10.7 The continue Statement](https://book.huihoo.com/gnu-octave-manual-version-3/octave_94.html)
  - [10.8 The unwind_protect Statement](https://book.huihoo.com/gnu-octave-manual-version-3/octave_95.html)
  - [10.9 The try Statement](https://book.huihoo.com/gnu-octave-manual-version-3/octave_96.html)
  - [10.10 Continuation Lines](https://book.huihoo.com/gnu-octave-manual-version-3/octave_97.html)
- [11 Functions and Script Files](https://book.huihoo.com/gnu-octave-manual-version-3/octave_98.html)
  - [11.1 Defining Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_99.html)
  - [11.2 Multiple Return Values](https://book.huihoo.com/gnu-octave-manual-version-3/octave_100.html)
  - [11.3 Variable-length Argument Lists](https://book.huihoo.com/gnu-octave-manual-version-3/octave_101.html)
  - [11.4 Variable-length Return Lists](https://book.huihoo.com/gnu-octave-manual-version-3/octave_102.html)
  - [11.5 Returning From a Function](https://book.huihoo.com/gnu-octave-manual-version-3/octave_103.html)
  - [11.6 Default Arguments](https://book.huihoo.com/gnu-octave-manual-version-3/octave_104.html)
  - [11.7 Function Files](https://book.huihoo.com/gnu-octave-manual-version-3/octave_105.html)
    - [11.7.1 Manipulating the load path](https://book.huihoo.com/gnu-octave-manual-version-3/octave_106.html)
    - [11.7.2 Subfunctions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_107.html)
    - [11.7.3 Overloading and Autoloading](https://book.huihoo.com/gnu-octave-manual-version-3/octave_108.html)
    - [11.7.4 Function Locking](https://book.huihoo.com/gnu-octave-manual-version-3/octave_109.html)
  - [11.8 Script Files](https://book.huihoo.com/gnu-octave-manual-version-3/octave_110.html)
  - [11.9 Function Handles, Inline Functions, and Anonymous Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_111.html)
    - [11.9.1 Function Handles](https://book.huihoo.com/gnu-octave-manual-version-3/octave_112.html)
    - [11.9.2 Anonymous Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_113.html)
    - [11.9.3 Inline Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_114.html)
  - [11.10 Commands](https://book.huihoo.com/gnu-octave-manual-version-3/octave_115.html)
  - [11.11 Organization of Functions Distributed with Octave](https://book.huihoo.com/gnu-octave-manual-version-3/octave_116.html)
- [12 Errors and Warnings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_117.html)
  - [12.1 Handling Errors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_118.html)
    - [12.1.1 Raising Errors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_119.html)
    - [12.1.2 Catching Errors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_120.html)
  - [12.2 Handling Warnings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_121.html)
    - [12.2.1 Issuing Warnings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_122.html)
    - [12.2.2 Enabling and Disabling Warnings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_123.html)
- [13 Debugging](https://book.huihoo.com/gnu-octave-manual-version-3/octave_124.html)
  - [13.1 Entering Debug Mode](https://book.huihoo.com/gnu-octave-manual-version-3/octave_125.html)
  - [13.2 Breakpoints](https://book.huihoo.com/gnu-octave-manual-version-3/octave_126.html)
  - [13.3 Debug Mode](https://book.huihoo.com/gnu-octave-manual-version-3/octave_127.html)
- [14 Input and Output](https://book.huihoo.com/gnu-octave-manual-version-3/octave_128.html)
  - [14.1 Basic Input and Output](https://book.huihoo.com/gnu-octave-manual-version-3/octave_129.html)
    - [14.1.1 Terminal Output](https://book.huihoo.com/gnu-octave-manual-version-3/octave_130.html)
      - [14.1.1.1 Paging Screen Output](https://book.huihoo.com/gnu-octave-manual-version-3/octave_131.html)
    - [14.1.2 Terminal Input](https://book.huihoo.com/gnu-octave-manual-version-3/octave_132.html)
    - [14.1.3 Simple File I/O](https://book.huihoo.com/gnu-octave-manual-version-3/octave_133.html)
      - [14.1.3.1 Saving Data on Unexpected Exits](https://book.huihoo.com/gnu-octave-manual-version-3/octave_134.html)
    - [14.1.4 Rational Approximations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_135.html)
  - [14.2 C-Style I/O Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_136.html)
    - [14.2.1 Opening and Closing Files](https://book.huihoo.com/gnu-octave-manual-version-3/octave_137.html)
    - [14.2.2 Simple Output](https://book.huihoo.com/gnu-octave-manual-version-3/octave_138.html)
    - [14.2.3 Line-Oriented Input](https://book.huihoo.com/gnu-octave-manual-version-3/octave_139.html)
    - [14.2.4 Formatted Output](https://book.huihoo.com/gnu-octave-manual-version-3/octave_140.html)
    - [14.2.5 Output Conversion for Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_141.html)
    - [14.2.6 Output Conversion Syntax](https://book.huihoo.com/gnu-octave-manual-version-3/octave_142.html)
    - [14.2.7 Table of Output Conversions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_143.html)
    - [14.2.8 Integer Conversions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_144.html)
    - [14.2.9 Floating-Point Conversions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_145.html)
    - [14.2.10 Other Output Conversions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_146.html)
    - [14.2.11 Formatted Input](https://book.huihoo.com/gnu-octave-manual-version-3/octave_147.html)
    - [14.2.12 Input Conversion Syntax](https://book.huihoo.com/gnu-octave-manual-version-3/octave_148.html)
    - [14.2.13 Table of Input Conversions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_149.html)
    - [14.2.14 Numeric Input Conversions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_150.html)
    - [14.2.15 String Input Conversions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_151.html)
    - [14.2.16 Binary I/O](https://book.huihoo.com/gnu-octave-manual-version-3/octave_152.html)
    - [14.2.17 Temporary Files](https://book.huihoo.com/gnu-octave-manual-version-3/octave_153.html)
    - [14.2.18 End of File and Errors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_154.html)
    - [14.2.19 File Positioning](https://book.huihoo.com/gnu-octave-manual-version-3/octave_155.html)
- [15 Plotting](https://book.huihoo.com/gnu-octave-manual-version-3/octave_156.html)
  - [15.1 Plotting Basics](https://book.huihoo.com/gnu-octave-manual-version-3/octave_157.html)
    - [15.1.1 Two-Dimensional Plots](https://book.huihoo.com/gnu-octave-manual-version-3/octave_158.html)
    - [15.1.2 Three-Dimensional Plotting](https://book.huihoo.com/gnu-octave-manual-version-3/octave_159.html)
    - [15.1.3 Plot Annotations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_160.html)
    - [15.1.4 Multiple Plots on One Page](https://book.huihoo.com/gnu-octave-manual-version-3/octave_161.html)
    - [15.1.5 Multiple Plot Windows](https://book.huihoo.com/gnu-octave-manual-version-3/octave_162.html)
    - [15.1.6 Printing Plots](https://book.huihoo.com/gnu-octave-manual-version-3/octave_163.html)
    - [15.1.7 Test Plotting Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_164.html)
  - [15.2 Advanced Plotting](https://book.huihoo.com/gnu-octave-manual-version-3/octave_165.html)
    - [15.2.1 Graphics Objects](https://book.huihoo.com/gnu-octave-manual-version-3/octave_166.html)
    - [15.2.2 Graphics Object Properties](https://book.huihoo.com/gnu-octave-manual-version-3/octave_167.html)
      - [15.2.2.1 Root Figure Properties](https://book.huihoo.com/gnu-octave-manual-version-3/octave_168.html)
      - [15.2.2.2 Figure Properties](https://book.huihoo.com/gnu-octave-manual-version-3/octave_169.html)
      - [15.2.2.3 Axes Properties](https://book.huihoo.com/gnu-octave-manual-version-3/octave_170.html)
      - [15.2.2.4 Line Properties](https://book.huihoo.com/gnu-octave-manual-version-3/octave_171.html)
      - [15.2.2.5 Text Properties](https://book.huihoo.com/gnu-octave-manual-version-3/octave_172.html)
      - [15.2.2.6 Image Properties](https://book.huihoo.com/gnu-octave-manual-version-3/octave_173.html)
      - [15.2.2.7 Patch Properties](https://book.huihoo.com/gnu-octave-manual-version-3/octave_174.html)
      - [15.2.2.8 Surface Properties](https://book.huihoo.com/gnu-octave-manual-version-3/octave_175.html)
    - [15.2.3 Managing Default Properties](https://book.huihoo.com/gnu-octave-manual-version-3/octave_176.html)
    - [15.2.4 Colors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_177.html)
    - [15.2.5 Line Styles](https://book.huihoo.com/gnu-octave-manual-version-3/octave_178.html)
    - [15.2.6 Marker Styles](https://book.huihoo.com/gnu-octave-manual-version-3/octave_179.html)
    - [15.2.7 Interaction with gnuplot](https://book.huihoo.com/gnu-octave-manual-version-3/octave_180.html)
- [16 Matrix Manipulation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_181.html)
  - [16.1 Finding Elements and Checking Conditions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_182.html)
  - [16.2 Rearranging Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_183.html)
  - [16.3 Applying a Function to an Array](https://book.huihoo.com/gnu-octave-manual-version-3/octave_184.html)
  - [16.4 Special Utility Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_185.html)
  - [16.5 Random Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_186.html)
  - [16.6 Famous Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_187.html)
- [17 Arithmetic](https://book.huihoo.com/gnu-octave-manual-version-3/octave_188.html)
  - [17.1 Utility Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_189.html)
  - [17.2 Complex Arithmetic](https://book.huihoo.com/gnu-octave-manual-version-3/octave_190.html)
  - [17.3 Trigonometry](https://book.huihoo.com/gnu-octave-manual-version-3/octave_191.html)
  - [17.4 Sums and Products](https://book.huihoo.com/gnu-octave-manual-version-3/octave_192.html)
  - [17.5 Special Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_193.html)
  - [17.6 Coordinate Transformations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_194.html)
  - [17.7 Mathematical Constants](https://book.huihoo.com/gnu-octave-manual-version-3/octave_195.html)
- [18 Linear Algebra](https://book.huihoo.com/gnu-octave-manual-version-3/octave_196.html)
  - [18.1 Techniques used for Linear Algebra](https://book.huihoo.com/gnu-octave-manual-version-3/octave_197.html)
  - [18.2 Basic Matrix Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_198.html)
  - [18.3 Matrix Factorizations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_199.html)
  - [18.4 Functions of a Matrix](https://book.huihoo.com/gnu-octave-manual-version-3/octave_200.html)
- [19 Nonlinear Equations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_201.html)
- [20 Sparse Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_202.html)
  - [20.1 Basics](https://book.huihoo.com/gnu-octave-manual-version-3/octave_203.html)
    - [20.1.1 Storage of Sparse Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_204.html)
    - [20.1.2 Creating Sparse Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_205.html)
    - [20.1.3 Sparse Matrix Properties](https://book.huihoo.com/gnu-octave-manual-version-3/octave_206.html)
    - [20.1.4 Sparse Matrix Types](https://book.huihoo.com/gnu-octave-manual-version-3/octave_207.html)
    - [20.1.5 Graphical Representations of Sparse Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_208.html)
    - [20.1.6 Basic Operators and Functions on Sparse Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_209.html)
      - [20.1.6.1 Sparse Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_210.html)
      - [20.1.6.2 The Return Types of Operators and Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_211.html)
      - [20.1.6.3 Mathematical Considerations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_212.html)
    - [20.1.7 Reordering](https://book.huihoo.com/gnu-octave-manual-version-3/octave_213.html)
  - [20.2 Linear Algebra on Sparse Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_214.html)
  - [20.3 Iterative Techniques applied to sparse matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_215.html)
  - [20.4 Real Life Example of the use of Sparse Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_216.html)
- [21 Numerical Integration](https://book.huihoo.com/gnu-octave-manual-version-3/octave_217.html)
  - [21.1 Functions of One Variable](https://book.huihoo.com/gnu-octave-manual-version-3/octave_218.html)
  - [21.2 Orthogonal Collocation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_219.html)
  - [21.3 Functions of Multiple Variables](https://book.huihoo.com/gnu-octave-manual-version-3/octave_220.html)
- [22 Differential Equations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_221.html)
  - [22.1 Ordinary Differential Equations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_222.html)
  - [22.2 Differential-Algebraic Equations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_223.html)
- [23 Optimization](https://book.huihoo.com/gnu-octave-manual-version-3/octave_224.html)
  - [23.1 Linear Programming](https://book.huihoo.com/gnu-octave-manual-version-3/octave_225.html)
  - [23.2 Quadratic Programming](https://book.huihoo.com/gnu-octave-manual-version-3/octave_226.html)
  - [23.3 Nonlinear Programming](https://book.huihoo.com/gnu-octave-manual-version-3/octave_227.html)
  - [23.4 Linear Least Squares](https://book.huihoo.com/gnu-octave-manual-version-3/octave_228.html)
- [24 Statistics](https://book.huihoo.com/gnu-octave-manual-version-3/octave_229.html)
  - [24.1 Descriptive Statistics](https://book.huihoo.com/gnu-octave-manual-version-3/octave_230.html)
  - [24.2 Basic Statistical Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_231.html)
  - [24.3 Statistical Plots](https://book.huihoo.com/gnu-octave-manual-version-3/octave_232.html)
  - [24.4 Tests](https://book.huihoo.com/gnu-octave-manual-version-3/octave_233.html)
  - [24.5 Models](https://book.huihoo.com/gnu-octave-manual-version-3/octave_234.html)
  - [24.6 Distributions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_235.html)
  - [24.7 Random Number Generation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_236.html)
- [25 Sets](https://book.huihoo.com/gnu-octave-manual-version-3/octave_237.html)
  - [25.1 Set Operations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_238.html)
- [26 Polynomial Manipulations](https://book.huihoo.com/gnu-octave-manual-version-3/octave_239.html)
  - [26.1 Evaluating Polynomials](https://book.huihoo.com/gnu-octave-manual-version-3/octave_240.html)
  - [26.2 Finding Roots](https://book.huihoo.com/gnu-octave-manual-version-3/octave_241.html)
  - [26.3 Products of Polynomials](https://book.huihoo.com/gnu-octave-manual-version-3/octave_242.html)
  - [26.4 Derivatives and Integrals](https://book.huihoo.com/gnu-octave-manual-version-3/octave_243.html)
  - [26.5 Polynomial Interpolation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_244.html)
  - [26.6 Miscellaneous Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_245.html)
- [27 Interpolation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_246.html)
  - [27.1 One-dimensional Interpolation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_247.html)
  - [27.2 Multi-dimensional Interpolation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_248.html)
- [28 Geometry](https://book.huihoo.com/gnu-octave-manual-version-3/octave_249.html)
  - [28.1 Delaunay Triangulation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_250.html)
    - [28.1.1 Plotting the Triangulation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_251.html)
    - [28.1.2 Identifying points in Triangulation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_252.html)
  - [28.2 Voronoi Diagrams](https://book.huihoo.com/gnu-octave-manual-version-3/octave_253.html)
  - [28.3 Convex Hull](https://book.huihoo.com/gnu-octave-manual-version-3/octave_254.html)
  - [28.4 Interpolation on Scattered Data](https://book.huihoo.com/gnu-octave-manual-version-3/octave_255.html)
- [29 Signal Processing](https://book.huihoo.com/gnu-octave-manual-version-3/octave_256.html)
  - [29.1 Fast Fourier Transforms](https://book.huihoo.com/gnu-octave-manual-version-3/octave_256.html)
  - [29.2 Filters and Windowing Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_256.html)
- [30 Image Processing](https://book.huihoo.com/gnu-octave-manual-version-3/octave_257.html)
  - [30.1 Loading and Saving Images](https://book.huihoo.com/gnu-octave-manual-version-3/octave_258.html)
  - [30.2 Displaying Images](https://book.huihoo.com/gnu-octave-manual-version-3/octave_259.html)
  - [30.3 Representing Images](https://book.huihoo.com/gnu-octave-manual-version-3/octave_260.html)
  - [30.4 Plotting on top of Images](https://book.huihoo.com/gnu-octave-manual-version-3/octave_261.html)
  - [30.5 Color Conversion](https://book.huihoo.com/gnu-octave-manual-version-3/octave_262.html)
- [31 Audio Processing](https://book.huihoo.com/gnu-octave-manual-version-3/octave_263.html)
  - [31.1 Audio Conversion Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_263.html)
  - [31.2 Loading and Saving Audio Files](https://book.huihoo.com/gnu-octave-manual-version-3/octave_263.html)
- [32 System Utilities](https://book.huihoo.com/gnu-octave-manual-version-3/octave_264.html)
  - [32.1 Timing Utilities](https://book.huihoo.com/gnu-octave-manual-version-3/octave_265.html)
  - [32.2 Filesystem Utilities](https://book.huihoo.com/gnu-octave-manual-version-3/octave_266.html)
  - [32.3 File Archiving Utilities](https://book.huihoo.com/gnu-octave-manual-version-3/octave_267.html)
  - [32.4 Networking Utilities](https://book.huihoo.com/gnu-octave-manual-version-3/octave_268.html)
  - [32.5 Controlling Subprocesses](https://book.huihoo.com/gnu-octave-manual-version-3/octave_269.html)
  - [32.6 Process, Group, and User IDs](https://book.huihoo.com/gnu-octave-manual-version-3/octave_270.html)
  - [32.7 Environment Variables](https://book.huihoo.com/gnu-octave-manual-version-3/octave_271.html)
  - [32.8 Current Working Directory](https://book.huihoo.com/gnu-octave-manual-version-3/octave_272.html)
  - [32.9 Password Database Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_273.html)
  - [32.10 Group Database Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_274.html)
  - [32.11 System Information](https://book.huihoo.com/gnu-octave-manual-version-3/octave_275.html)
  - [32.12 Hashing Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_276.html)
- [33 Packages](https://book.huihoo.com/gnu-octave-manual-version-3/octave_277.html)
  - [33.1 Installing and Removing Packages](https://book.huihoo.com/gnu-octave-manual-version-3/octave_278.html)
  - [33.2 Using Packages](https://book.huihoo.com/gnu-octave-manual-version-3/octave_279.html)
  - [33.3 Administrating Packages](https://book.huihoo.com/gnu-octave-manual-version-3/octave_280.html)
  - [33.4 Creating Packages](https://book.huihoo.com/gnu-octave-manual-version-3/octave_281.html)
    - [33.4.1 The DESCRIPTION File](https://book.huihoo.com/gnu-octave-manual-version-3/octave_282.html)
    - [33.4.2 The INDEX file](https://book.huihoo.com/gnu-octave-manual-version-3/octave_283.html)
    - [33.4.3 PKG_ADD and PKG_DEL directives](https://book.huihoo.com/gnu-octave-manual-version-3/octave_284.html)
- [A Command Line Editing](https://book.huihoo.com/gnu-octave-manual-version-3/octave_285.html)
    - [33.4.4 Cursor Motion](https://book.huihoo.com/gnu-octave-manual-version-3/octave_286.html)
    - [33.4.5 Killing and Yanking](https://book.huihoo.com/gnu-octave-manual-version-3/octave_287.html)
    - [33.4.6 Commands For Changing Text](https://book.huihoo.com/gnu-octave-manual-version-3/octave_288.html)
    - [33.4.7 Letting Readline Type For You](https://book.huihoo.com/gnu-octave-manual-version-3/octave_289.html)
    - [33.4.8 Commands For Manipulating The History](https://book.huihoo.com/gnu-octave-manual-version-3/octave_290.html)
    - [33.4.9 Customizing readline](https://book.huihoo.com/gnu-octave-manual-version-3/octave_291.html)
    - [33.4.10 Customizing the Prompt](https://book.huihoo.com/gnu-octave-manual-version-3/octave_292.html)
    - [33.4.11 Diary and Echo Commands](https://book.huihoo.com/gnu-octave-manual-version-3/octave_293.html)
- [B Test and Demo Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_294.html)
  - [33.5 Test Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_295.html)
  - [33.6 Demonstration Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_296.html)
- [C Tips and Standards](https://book.huihoo.com/gnu-octave-manual-version-3/octave_297.html)
  - [33.7 Writing Clean Octave Programs](https://book.huihoo.com/gnu-octave-manual-version-3/octave_298.html)
  - [33.8 Tips for Making Code Run Faster.](https://book.huihoo.com/gnu-octave-manual-version-3/octave_299.html)
  - [33.9 Tips on Writing Comments](https://book.huihoo.com/gnu-octave-manual-version-3/octave_300.html)
  - [33.10 Conventional Headers for Octave Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_301.html)
  - [33.11 Tips for Documentation Strings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_302.html)
- [D Known Causes of Trouble](https://book.huihoo.com/gnu-octave-manual-version-3/octave_303.html)
  - [D.1 Actual Bugs We Haven't Fixed Yet](https://book.huihoo.com/gnu-octave-manual-version-3/octave_304.html)
  - [D.2 Reporting Bugs](https://book.huihoo.com/gnu-octave-manual-version-3/octave_305.html)
  - [D.3 Have You Found a Bug?](https://book.huihoo.com/gnu-octave-manual-version-3/octave_306.html)
  - [D.4 Where to Report Bugs](https://book.huihoo.com/gnu-octave-manual-version-3/octave_307.html)
  - [D.5 How to Report Bugs](https://book.huihoo.com/gnu-octave-manual-version-3/octave_308.html)
  - [D.6 Sending Patches for Octave](https://book.huihoo.com/gnu-octave-manual-version-3/octave_309.html)
  - [D.7 How To Get Help with Octave](https://book.huihoo.com/gnu-octave-manual-version-3/octave_310.html)
- [E Installing Octave](https://book.huihoo.com/gnu-octave-manual-version-3/octave_311.html)
  - [E.1 Installation Problems](https://book.huihoo.com/gnu-octave-manual-version-3/octave_312.html)
- [F Emacs Octave Support](https://book.huihoo.com/gnu-octave-manual-version-3/octave_313.html)
  - [F.1 Installing EOS](https://book.huihoo.com/gnu-octave-manual-version-3/octave_314.html)
  - [F.2 Using Octave Mode](https://book.huihoo.com/gnu-octave-manual-version-3/octave_315.html)
  - [F.3 Running Octave From Within Emacs](https://book.huihoo.com/gnu-octave-manual-version-3/octave_316.html)
  - [F.4 Using the Emacs Info Reader for Octave](https://book.huihoo.com/gnu-octave-manual-version-3/octave_317.html)
- [G GNU GENERAL PUBLIC LICENSE](https://book.huihoo.com/gnu-octave-manual-version-3/octave_318.html)
- [Books from the publisher](https://book.huihoo.com/gnu-octave-manual-version-3/octave_319.html)
- [Index](https://book.huihoo.com/gnu-octave-manual-version-3/octave_320.html)


---

## Full text — selected chapters

*Chapters 2, 4, 10, 11, 15, 16, 18. The remaining chapters are reachable from the linked contents above.*

### 2 Getting Started

This chapter explains some of Octave's basic features, including how to
start an Octave session, get help at the command prompt, edit the
command line, and write Octave programs that can be executed as commands
from your shell.

#### 2.1 Invoking Octave from the Command Line

Normally, Octave is used interactively by running the program
`‘octave’` without any arguments. Once started, Octave reads
commands from the terminal until you tell it to exit.

You can also specify the name of a file on the command line, and Octave
will read and execute the commands from the named file and then exit
when it is finished.

You can further control how Octave starts by using the command-line
options described in the next section, and Octave itself can remind you
of the options available. Type `‘octave --help’` to display all
available options and briefly describe their use (`‘octave -h’` is a
shorter equivalent).

##### 2.1.1 Command Line Options

Here is a complete list of all the command line options that Octave
accepts.

`--debug`

`-d`

Enter parser debugging mode. Using this option will cause Octave's
parser to print a lot of information about the commands it reads, and is
probably only useful if you are actually trying to debug the parser.

`--echo-commands`

`-x`

Echo commands as they are executed.

`--eval code`

Evaluate *code* and exit when done unless `--persist` is also
specified.

`--exec-path path`

Specify the path to search for programs to run. The value of *path*
specified on the command line will override any value of
`OCTAVE_EXEC_PATH` found in the environment, but not any commands
in the system or user startup files that set the built-in variable
`EXEC_PATH`.

`--help`

`-h`

`-?`

Print short help message and exit.

`--image-path path`

Specify the path to search for images. The value of *path*
specified on the command line will set the value of
`IMAGE_PATH` found in the environment.

`--info-file filename`

Specify the name of the info file to use. The value of *filename*
specified on the command line will override any value of
`OCTAVE_INFO_FILE` found in the environment, but not any commands
in the system or user startup files that use the `info_file`
function.

`--info-program program`

Specify the name of the info program to use. The value of *program*
specified on the command line will override any value of
`OCTAVE_INFO_PROGRAM` found in the environment, but not any
commands in the system or user startup files that use the
`info_program` function.

`--interactive`

`-i`

Force interactive behavior. This can be useful for running Octave via a
remote shell command or inside an Emacs shell buffer. For another way
to run Octave within Emacs, see appendix F [Emacs Octave Support](https://book.huihoo.com/gnu-octave-manual-version-3/octave_313.html).

`--no-history`

`-H`

Disable command-line history.

`--no-init-file`

Don't read the `‘~/.octaverc’` or `‘.octaverc’` files.

`--no-line-editing`

Disable command-line editing.

`--no-site-file`

Don't read the site-wide `‘octaverc’` file.

`--norc`

`-f`

Don't read any of the system or user initialization files at startup.
This is equivalent to using both of the options `--no-init-file`
and `--no-site-file`.

`--path path`

`-p path`

Specify the path to search for function files. The value of *path*
specified on the command line will override any value of
`OCTAVE_PATH` found in the environment, but not any commands in the
system or user startup files that set the internal load path through one
of the path functions.

`--persist`

Go to interactive mode after `--eval` or reading from a file
named on the command line.

`--silent`

`--quiet`

`-q`

Don't print the usual greeting and version message at startup.

`--traditional`

`--braindead`

For compatibility with Matlab, set initial values for
user-preferences to the following values

```octave
PS1                     = ">> "
PS2                     = ""
beep_on_error           = true
crash_dumps_octave_core = false
default_save_options    = "-mat-binary"
fixed_point_format      = true
history_timestamp_format_string
                        = "%%-- %D %I:%M %p --%%"
page_screen_output      = false
print_empty_dimensions  = false
```

and disable the following warnings

```octave
Octave:fopen-file-in-path
Octave:function-name-clash
Octave:load-file-in-path
```

`--verbose`

`-V`

Turn on verbose output.

`--version`

`-v`

Print the program version number and exit.

`file`

Execute commands from *file*. Exit when done unless
`--persist` is also specified.

Octave also includes several built-in variables that contain information
about the command line, including the number of arguments and all of the
options.

**Built-in Function:** `argv ()`

Return the command line arguments passed to Octave. For example,
if you invoked Octave using the command

```octave
octave --no-line-editing --silent
```

`argv` would return a cell array of strings with the elements
`--no-line-editing` and `--silent`.

If you write an executable Octave script, `argv` will return the
list of arguments passed to the script. See section 2.6 [Executable Octave Programs](https://book.huihoo.com/gnu-octave-manual-version-3/octave_26.html),
for an example of how to create an executable Octave script.

**Built-in Function:** `program_name ()`

Return the last component of the value returned by
`program_invocation_name`.

See also program_invocation_name

**Built-in Function:** `program_invocation_name ()`

Return the name that was typed at the shell prompt to run Octave.

If executing a script from the command line (e.g. `octave foo.m`)
or using an executable Octave script, the program name is set to the
name of the script. See section 2.6 [Executable Octave Programs](https://book.huihoo.com/gnu-octave-manual-version-3/octave_26.html), for an example of
how to create an executable Octave script.

See also program_name

Here is an example of using these functions to reproduce Octave's
command line.

```octave
printf ("%s", program_name ());
arg_list = argv ();
for i = 1:nargin
  printf (" %s", arg_list{i});
endfor
printf ("\n");
```

See section 8.1 [Index Expressions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_70.html), for an explanation of how to properly index
arrays of strings and substrings in Octave, and See section 11.1 [Defining Functions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_99.html),
for information about the variable `nargin`.

##### 2.1.2 Startup Files

When Octave starts, it looks for commands to execute from the files in
the following list. These files may contain any valid Octave commands,
including function definitions.

`octave-home /share/octave/site/m/startup/octaverc`

Where *octave-home* is the directory in which all of Octave is
installed (the default is `‘/usr/local’`). This file is
provided so that changes to the default Octave environment can be made
globally for all users at your site for all versions of Octave you have
installed. Some care should be taken when making changes to this file,
since all users of Octave at your site will be affected.

`octave-home /share/octave/ version /m/startup/octaverc`

Where *octave-home* is the directory in which all of Octave is
installed (the default is `‘/usr/local’`), and *version*
is the version number of Octave. This file is provided so that changes
to the default Octave environment can be made globally for all users for
a particular version of Octave. Some care should be taken when making
changes to this file, since all users of Octave at your site will be
affected.

`~/.octaverc`

This file is normally used to make personal changes to the default
Octave environment.

`.octaverc`

This file can be used to make changes to the default Octave environment
for a particular project. Octave searches for this file in the current
directory after it reads `‘~/.octaverc’`. Any use of the `cd`
command in the `‘~/.octaverc’` file will affect the directory that
Octave searches for the file `‘.octaverc’`.

If you start Octave in your home directory, commands from the file
`‘~/.octaverc’` will only be executed once.

A message will be displayed as each of the startup files is read if you
invoke Octave with the `--verbose` option but without the
`--silent` option.

#### 2.2 Quitting Octave

**Built-in Function:** `exit (status)`

**Built-in Function:** `quit (status)`

Exit the current Octave session. If the optional integer value
*status* is supplied, pass that value to the operating system as the
Octave's exit status. The default value is zero.

**Built-in Function:** `atexit (fcn)`

Register a function to be called when Octave exits. For example,

```octave
function bye_bye ()
  disp ("Bye bye");
endfunction
atexit ("bye_bye");
```

will print the message "Bye bye" when Octave exits.

**Built-in Function:** `atexit (fcn, flag)`

Register or unregister a function to be called when Octave exits,
depending on *flag*. If *flag* is true, the function is
registered, if *flag* is false, it is unregistered. For example,
after registering the function `bye_bye` as above,

```octave
atexit ("bye_bye", false);
```

will remove the function from the list and Octave will not call
the function `bye_by` when it exits.

Note that `atexit` only removes the first occurrence of a function
from the list, so if a function was placed in the list multiple
times with `atexit`, it must also be removed from the list
multiple times.

#### 2.3 Commands for Getting Help

The entire text of this manual is available from the Octave prompt
via the command `doc`. In addition, the documentation for
individual user-written functions and variables is also available via
the `help` command. This section describes the commands used for
reading the manual and the documentation strings for user-supplied
functions and variables. See section 11.7 [Function Files](https://book.huihoo.com/gnu-octave-manual-version-3/octave_105.html), for more information
about how to document the functions you write.

**Command:** `help name`

Display the help text for *name*.
If invoked without any arguments, `help` prints a list
of all the available operators and functions.

For example, the command `help help` prints a short message
describing the `help` command.

The help command can give you information about operators, but not the
comma and semicolons that are used as command separators. To get help
for those, you must type `help comma` or `help semicolon`.

See also doc, which, lookfor

**Command:** `doc function_name`

Display documentation for the function *function_name*
directly from an on-line version of
the printed manual, using the GNU Info browser. If invoked without
any arguments, the manual is shown from the beginning.

For example, the command `doc rand` starts the GNU Info browser
at this node in the on-line version of the manual.

Once the GNU Info browser is running, help for using it is available
using the command `C-h`.

See also help

**Command:** `lookfor str`

**Command:** `lookfor -all str`

**Function:** `[fun, helpstring] = lookfor (str)`

**Function:** `[fun, helpstring] = lookfor ('-all', str)`

Search for the string *str* in all of the functions found in the
function search path. By default `lookfor` searches for *str*
in the first sentence of the help string of each function found. The entire
help string of each function found in the path can be searched if
the '-all' argument is supplied. All searches are case insensitive.

Called with no output arguments, `lookfor` prints the list of matching
functions to the terminal. Otherwise the output arguments *fun* and
*helpstring* define the matching functions and the first sentence of
each of their help strings.

Note that the ability of `lookfor` to correctly identify the first
sentence of the help of the functions is dependent on the format of the
functions help. All of the functions in Octave itself will correctly
find the first sentence, but the same cannot be guaranteed for other
functions. Therefore the use of the '-all' argument might be necessary
to find related functions that are not part of Octave.

See also help, which

The following function can be used to change which programs are used
for displaying the documentation, and where the documentation can be
found.

**Built-in Function:** `val = info_file ()`

**Built-in Function:** `old_val = info_file (new_val)`

Query or set the internal variable that specifies the name of the
Octave info file. The default value is
`"*octave-home*/info/octave.info"`, in
which *octave-home* is the directory where all of Octave is installed.

See also info_program, doc, help, makeinfo_program

**Built-in Function:** `val = info_program ()`

**Built-in Function:** `old_val = info_program (new_val)`

Query or set the internal variable that specifies the name of the
info program to run. The default value is
`"*octave-home*/libexec/octave/*version*/exec/*arch*/info"`
in which *octave-home* is the directory where all of Octave is
installed, *version* is the Octave version number, and *arch*
is the system type (for example, `i686-pc-linux-gnu`). The
default initial value may be overridden by the environment variable
`OCTAVE_INFO_PROGRAM`, or the command line argument
`--info-program NAME`.

See also info_file, doc, help, makeinfo_program

**Built-in Function:** `val = makeinfo_program ()`

**Built-in Function:** `old_val = makeinfo_program (new_val)`

Query or set the internal variable that specifies the name of the
makeinfo program that Octave runs to format help text containing
Texinfo markup commands. The default initial value is `"makeinfo"`.

See also info_file, info_program, doc, help

**Built-in Function:** `val = suppress_verbose_help_message ()`

**Built-in Function:** `old_val = suppress_verbose_help_message (new_val)`

Query or set the internal variable that controls whether Octave
will add additional help information to the end of the output from
the `help` command and usage messages for built-in commands.

#### 2.4 Command Line Editing

Octave uses the standard GNU readline library to provide an extensive set of
command-line editing and history features. These are describe in
appendix A [Command Line Editing](https://book.huihoo.com/gnu-octave-manual-version-3/octave_285.html).

#### 2.5 How Octave Reports Errors

Octave reports two kinds of errors for invalid programs.

A *parse error* occurs if Octave cannot understand something you
have typed. For example, if you misspell a keyword,

```octave
octave:13> functon y = f (x) y = x^2; endfunction
```

Octave will respond immediately with a message like this:

```octave
parse error:

  functon y = f (x) y = x^2; endfunction
          ^
```

For most parse errors, Octave uses a caret (`‘^’`) to mark the point
on the line where it was unable to make sense of your input. In this
case, Octave generated an error message because the keyword
`function` was misspelled. Instead of seeing `‘function f’`,
Octave saw two consecutive variable names, which is invalid in this
context. It marked the error at `y` because the first name by
itself was accepted as valid input.

Another class of error message occurs at evaluation time. These
errors are called *run-time errors*, or sometimes
*evaluation errors* because they occur when your program is being
*run*, or *evaluated*. For example, if after correcting the
mistake in the previous function definition, you type

```octave
octave:13> f ()
```

Octave will respond with

```octave
error: `x' undefined near line 1 column 24
error: evaluating expression near line 1, column 24
error: evaluating assignment expression near line 1, column 22
error: called from `f'
```

This error message has several parts, and gives you quite a bit of
information to help you locate the source of the error. The messages
are generated from the point of the innermost error, and provide a
traceback of enclosing expressions and function calls.

In the example above, the first line indicates that a variable named
`‘x’` was found to be undefined near line 1 and column 24 of some
function or expression. For errors occurring within functions, lines
are counted from the beginning of the file containing the function
definition. For errors occurring at the top level, the line number
indicates the input line number, which is usually displayed in the
prompt string.

The second and third lines in the example indicate that the error
occurred within an assignment expression, and the last line of the error
message indicates that the error occurred within the function `f`.
If the function `f` had been called from another function, for
example, `g`, the list of errors would have ended with one more
line:

```octave
error: called from `g'
```

These lists of function calls usually make it fairly easy to trace the
path your program took before the error occurred, and to correct the
error before trying again.

#### 2.6 Executable Octave Programs

Once you have learned Octave, you may want to write self-contained
Octave scripts, using the `‘#!’` script mechanism. You can do this
on GNU systems and on many Unix systems ([1](https://book.huihoo.com/gnu-octave-manual-version-3/octave_foot.html#FOOT1)).

Self-contained Octave scripts are useful when you want to write a
program which users can invoke without knowing that the program is
written in the Octave language.

For example, you could create a text file named `‘hello’`, containing
the following lines:

```octave
#! octave-interpreter-name -qf
# a sample Octave program
printf ("Hello, world!\n");
```

(where *octave-interpreter-name* should be replaced with the full
file name for your Octave binary). Note that this will only work if
`‘#!’` appears at the very beginning of the file. After making this
file executable
(with the `chmod` command), you can simply type:

```octave
hello
```

at the shell, and the system will arrange to run Octave as if you had
typed:

```octave
octave hello
```

The line beginning with `‘#!’` lists the full file name of an
interpreter to be run, and an optional initial command line argument to
pass to that interpreter. The operating system then runs the
interpreter with the given argument and the full argument list of the
executed program. The first argument in the list is the full file name
of the Octave program. The rest of the argument list will either be
options to Octave, or data files, or both. The `‘-qf’` option is
usually specified in stand-alone Octave programs to prevent them from
printing the normal startup message, and to keep them from behaving
differently depending on the contents of a particular user's
`‘~/.octaverc’` file. See section 2.1 [Invoking Octave from the Command Line](https://book.huihoo.com/gnu-octave-manual-version-3/octave_19.html).

Note that some operating systems may place a limit on the number of
characters that are recognized after `‘#!’`. Also, the various
shells/systems parse differently the arguments appearing in a `‘#!’`
line. The majority of them group together all the arguments in a string
and pass it to the interpreter as a single argument. In this case, the
following script:

```octave
#! octave-interpreter-name -q -f # comment
```

is equivalent to type at the command line:

```octave
octave "-q -f # comment"
```

which would obviously produce an error message. Unfortunately, it is
impossible for Octave to know whether it has been called from the command
line or from a `‘#!’` script, so some care is needed when using the
`‘#!’` mechanism.

Note that when Octave is started from an executable script, the built-in
function `argv` returns a cell array containing the command line
arguments passed to an executable Octave script, not the arguments
passed to the Octave interpreter on the `‘#!’` line of the script.
For example, the following program will reproduce the command line that
is used to execute script, not `‘-qf’`.

```octave
#! /bin/octave -qf
printf ("%s", program_name ());
arg_list = argv ();
for i = 1:nargin
  printf (" %s", arg_list{i});
endfor
printf ("\n");
```

#### 2.7 Comments in Octave Programs

A *comment* is some text that is included in a program for the sake
of human readers, and that is not really part of the program. Comments
can explain what the program does, and how it works. Nearly all
programming languages have provisions for comments, because programs are
typically hard to understand without them.

In the Octave language, a comment starts with either the sharp sign
character, `‘#’`, or the percent symbol `‘%’` and continues to the
end of the line. The Octave interpreter ignores the rest of a
line following a sharp sign or percent symbol. For example, we could
have put the following into the function `f`:

```octave
function xdot = f (x, t)

# usage: f (x, t)
#
# This function defines the right hand
# side functions for a set of nonlinear
# differential equations.

  r = 0.25;
  ...
endfunction
```

The `help` command (see section 2.3 [Commands for Getting Help](https://book.huihoo.com/gnu-octave-manual-version-3/octave_23.html)) is able to find the first
block of comments in a function (even those that are composed directly
on the command line). This means that users of Octave can use the same
commands to get help for built-in functions, and for functions that you
have defined. For example, after defining the function `f` above,
the command `help f` produces the output

```octave
 usage: f (x, t)

 This function defines the right hand
 side functions for a set of nonlinear
 differential equations.
```

Although it is possible to put comment lines into keyboard-composed
throw-away Octave programs, it usually isn't very useful, because the
purpose of a comment is to help you or another person understand the
program at a later time.

### 4 Numeric Data Types

A *numeric constant* may be a scalar, a vector, or a matrix, and it
may contain complex values.

The simplest form of a numeric constant, a scalar, is a single number
that can be an integer, a decimal fraction, a number in scientific
(exponential) notation, or a complex number. Note that by default numeric
constants are represented within Octave in double-precision floating
point format (complex constants are stored as pairs of double-precision
floating point values). It is however possible to represent real
integers as described in section 4.3 [Integer Data Types](https://book.huihoo.com/gnu-octave-manual-version-3/octave_40.html). Here are some examples
of real-valued numeric constants, which all have the same value:

```octave
105
1.05e+2
1050e-1
```

To specify complex constants, you can write an expression of the form

```octave
3 + 4i
3.0 + 4.0i
0.3e1 + 40e-1i
```

all of which are equivalent. The letter `‘i’` in the previous example
stands for the pure imaginary constant, defined as

`sqrt (-1)`.

For Octave to recognize a value as the imaginary part of a complex
constant, a space must not appear between the number and the `‘i’`.
If it does, Octave will print an error message, like this:

```octave
octave:13> 3 + 4 i

parse error:

  3 + 4 i
        ^
```

You may also use `‘j’`, `‘I’`, or `‘J’` in place of the
`‘i’` above. All four forms are equivalent.

**Built-in Function:** `double (x)`

Convert *x* to double precision type.

**Function File:** `single (val)`

Convert the numeric value *val* to single precision.

**Note**: this function currently returns its argument in double precision. Support for a single-precision numeric data type will be added in future versions of Octave.

**Built-in Function:** `complex (val)`

**Built-in Function:** `complex (re, im)`

Convert *x* to a complex value.

#### 4.1 Matrices

It is easy to define a matrix of values in Octave. The size of the
matrix is determined automatically, so it is not necessary to explicitly
state the dimensions. The expression

```octave
a = [1, 2; 3, 4]
```

results in the matrix

```octave
        /      \
        | 1  2 |
  a  =  |      |
        | 3  4 |
        \      /
```

Elements of a matrix may be arbitrary expressions, provided that the
dimensions all make sense when combining the various pieces. For
example, given the above matrix, the expression

```octave
[ a, a ]
```

produces the matrix

```octave
ans =

  1  2  1  2
  3  4  3  4
```

but the expression

```octave
[ a, 1 ]
```

produces the error

```octave
error: number of rows must match near line 13, column 6
```

(assuming that this expression was entered as the first thing on line
13, of course).

Inside the square brackets that delimit a matrix expression, Octave
looks at the surrounding context to determine whether spaces and newline
characters should be converted into element and row separators, or
simply ignored, so an expression like

```octave
a = [ 1 2
      3 4 ]
```

will work. However, some possible sources of confusion remain. For
example, in the expression

```octave
[ 1 - 1 ]
```

the `‘-’` is treated as a binary operator and the result is the
scalar 0, but in the expression

```octave
[ 1 -1 ]
```

the `‘-’` is treated as a unary operator and the result is the
vector `[ 1, -1 ]`. Similarly, the expression

```octave
[ sin (pi) ]
```

will be parsed as

```octave
[ sin, (pi) ]
```

and will result in an error since the `sin` function will be
called with no arguments. To get around this, you must omit the space
between `sin` and the opening parenthesis, or enclose the
expression in a set of parentheses:

```octave
[ (sin (pi)) ]
```

Whitespace surrounding the single quote character (`‘'’`, used as a
transpose operator and for delimiting character strings) can also cause
confusion. Given `a = 1`, the expression

```octave
[ 1 a' ]
```

results in the single quote character being treated as a
transpose operator and the result is the vector `[ 1, 1 ]`, but the
expression

```octave
[ 1 a ' ]
```

produces the error message

```octave
error: unterminated string constant
```

because not doing so would cause trouble when parsing the valid expression

```octave
[ a 'foo' ]
```

For clarity, it is probably best to always use commas and semicolons to
separate matrix elements and rows.

When you type a matrix or the name of a variable whose value is a
matrix, Octave responds by printing the matrix in with neatly aligned
rows and columns. If the rows of the matrix are too large to fit on the
screen, Octave splits the matrix and displays a header before each
section to indicate which columns are being displayed. You can use the
following variables to control the format of the output.

**Built-in Function:** `val = output_max_field_width ()`

**Built-in Function:** `old_val = output_max_field_width (new_val)`

Query or set the internal variable that specifies the maximum width
of a numeric output field.

See also format, output_precision

**Built-in Function:** `val = output_precision ()`

**Built-in Function:** `old_val = output_precision (new_val)`

Query or set the internal variable that specifies the minimum number of
significant figures to display for numeric output.

See also format, output_max_field_width

It is possible to achieve a wide range of output styles by using
different values of `output_precision` and
`output_max_field_width`. Reasonable combinations can be set using
the `format` function. See section 14.1 [Basic Input and Output](https://book.huihoo.com/gnu-octave-manual-version-3/octave_129.html).

**Built-in Function:** `val = split_long_rows ()`

**Built-in Function:** `old_val = split_long_rows (new_val)`

Query or set the internal variable that controls whether rows of a matrix
may be split when displayed to a terminal window. If the rows are split,
Octave will display the matrix in a series of smaller pieces, each of
which can fit within the limits of your terminal width and each set of
rows is labeled so that you can easily see which columns are currently
being displayed. For example:

```octave
octave:13> rand (2,10)
ans =

 Columns 1 through 6:

  0.75883  0.93290  0.40064  0.43818  0.94958  0.16467
  0.75697  0.51942  0.40031  0.61784  0.92309  0.40201

 Columns 7 through 10:

  0.90174  0.11854  0.72313  0.73326
  0.44672  0.94303  0.56564  0.82150
```

Octave automatically switches to scientific notation when values become
very large or very small. This guarantees that you will see several
significant figures for every value in a matrix. If you would prefer to
see all values in a matrix printed in a fixed point format, you can set
the built-in variable `fixed_point_format` to a nonzero value. But
doing so is not recommended, because it can produce output that can
easily be misinterpreted.

**Built-in Function:** `val = fixed_point_format ()`

**Built-in Function:** `old_val = fixed_point_format (new_val)`

Query or set the internal variable that controls whether Octave will
use a scaled format to print matrix values such that the largest
element may be written with a single leading digit with the scaling
factor is printed on the first line of output. For example,

```octave
octave:1> logspace (1, 7, 5)'
ans =

  1.0e+07  *

  0.00000
  0.00003
  0.00100
  0.03162
  1.00000
```

Notice that first value appears to be zero when it is actually 1. For
this reason, you should be careful when setting
`fixed_point_format` to a nonzero value.

##### 4.1.1 Empty Matrices

A matrix may have one or both dimensions zero, and operations on empty
matrices are handled as described by Carl de Boor in An Empty
Exercise, SIGNUM, Volume 25, pages 2--6, 1990 and C. N. Nett and W. M.
Haddad, in A System-Theoretic Appropriate Realization of the Empty
Matrix Concept, IEEE Transactions on Automatic Control, Volume 38,
Number 5, May 1993.

Briefly, given a scalar *s*, an *m* by
*n* matrix `M(mxn)`, and an *m* by *n* empty matrix
`[](mxn)` (with either one or both dimensions equal to zero), the
following are true:

```octave
s * [](mxn) = [](mxn) * s = [](mxn)

    [](mxn) + [](mxn) = [](mxn)

    [](0xm) *  M(mxn) = [](0xn)

     M(mxn) * [](nx0) = [](mx0)

    [](mx0) * [](0xn) =  0(mxn)
```

By default, dimensions of the empty matrix are printed along with the
empty matrix symbol, `‘[]’`. The built-in variable
`print_empty_dimensions` controls this behavior.

**Built-in Function:** `val = print_empty_dimensions ()`

**Built-in Function:** `old_val = print_empty_dimensions (new_val)`

Query or set the internal variable that controls whether the
dimensions of empty matrices are printed along with the empty matrix
symbol, `‘[]’`. For example, the expression

```octave
zeros (3, 0)
```

will print

```octave
ans = [](3x0)
```

Empty matrices may also be used in assignment statements as a convenient
way to delete rows or columns of matrices.
See section 8.6 [Assignment Expressions](https://book.huihoo.com/gnu-octave-manual-version-3/octave_79.html).

When Octave parses a matrix expression, it examines the elements of the
list to determine whether they are all constants. If they are, it
replaces the list with a single matrix constant.

#### 4.2 Ranges

A *range* is a convenient way to write a row vector with evenly
spaced elements. A range expression is defined by the value of the first
element in the range, an optional value for the increment between
elements, and a maximum value which the elements of the range will not
exceed. The base, increment, and limit are separated by colons (the
`‘:’` character) and may contain any arithmetic expressions and
function calls. If the increment is omitted, it is assumed to be 1.
For example, the range

```octave
1 : 5
```

defines the set of values `‘[ 1, 2, 3, 4, 5 ]’`, and the range

```octave
1 : 3 : 5
```

defines the set of values `‘[ 1, 4 ]’`.

Although a range constant specifies a row vector, Octave does *not*
convert range constants to vectors unless it is necessary to do so.
This allows you to write a constant like `‘1 : 10000’` without using
80,000 bytes of storage on a typical 32-bit workstation.

Note that the upper (or lower, if the increment is negative) bound on
the range is not always included in the set of values, and that ranges
defined by floating point values can produce surprising results because
Octave uses floating point arithmetic to compute the values in the
range. If it is important to include the endpoints of a range and the
number of elements is known, you should use the `linspace` function
instead (see section 16.4 [Special Utility Matrices](https://book.huihoo.com/gnu-octave-manual-version-3/octave_185.html)).

When Octave parses a range expression, it examines the elements of the
expression to determine whether they are all constants. If they are, it
replaces the range expression with a single range constant.

#### 4.3 Integer Data Types

Octave supports integer matrices as an alternative to using double
precision. It is possible to use both signed and unsigned integers
represented by 8, 16, 32, or 64 bits. It should be noted that most
computations require floating point data, meaning that integers will
often change type when involved in numeric computations. For this
reason integers are most often used to store data, and not for
calculations.

In general most integer matrices are created by casting
existing matrices to integers. The following example shows how to cast
a matrix into 32 bit integers.

```octave
float = rand (2, 2)
     => float = 0.37569   0.92982
                0.11962   0.50876
integer = int32 (float)
     => integer = 0  1
                  0  1
```

As can be seen, floating point values are rounded to the nearest integer
when converted.

**Built-in Function:** `isinteger (x)`

Return true if *x* is an integer object (int8, uint8, int16, etc.).
Note that `isinteger (14)` is false because numeric constants in expressions
are double precision floating point values.

See also isreal, isnumeric, class, isa

**Built-in Function:** `int8 (x)`

Convert *x* to 8-bit integer type.

**Built-in Function:** `uint8 (x)`

Convert *x* to unsigned 8-bit integer type.

**Built-in Function:** `int16 (x)`

Convert *x* to 16-bit integer type.

**Built-in Function:** `uint16 (x)`

Convert *x* to unsigned 16-bit integer type.

**Built-in Function:** `int32 (x)`

Convert *x* to 32-bit integer type.

**Built-in Function:** `uint32 (x)`

Convert *x* to unsigned 32-bit integer type.

**Built-in Function:** `int64 (x)`

Convert *x* to 64-bit integer type.

**Built-in Function:** `uint64 (x)`

Convert *x* to unsigned 64-bit integer type.

**Built-in Function:** `intmax (type)`

Return the largest integer that can be represented in an integer type.
The variable *type* can be

`int8`

signed 8-bit integer.

`int16`

signed 16-bit integer.

`int32`

signed 32-bit integer.

`int64`

signed 64-bit integer.

`uint8`

unsigned 8-bit integer.

`uint16`

unsigned 16-bit integer.

`uint32`

unsigned 32-bit integer.

`uint64`

unsigned 64-bit integer.

The default for *type* is `uint32`.

See also intmin, bitmax

**Built-in Function:** `intmin (type)`

Return the smallest integer that can be represented in an integer type.
The variable *type* can be

`int8`

signed 8-bit integer.

`int16`

signed 16-bit integer.

`int32`

signed 32-bit integer.

`int64`

signed 64-bit integer.

`uint8`

unsigned 8-bit integer.

`uint16`

unsigned 16-bit integer.

`uint32`

unsigned 32-bit integer.

`uint64`

unsigned 64-bit integer.

The default for *type* is `uint32`.

See also intmax, bitmax

##### 4.3.1 Integer Arithmetic

Octave supports some integer operations such as addition and multiplication. The operators `+`, `-`, `.*`, and `./`
work on integers of the same type. So, it is possible to add two 32 bit
integers, but not to add a 32 bit integer and a 16 bit integer.

The arithmetic operations on integers are performed by casting the
integer values to double precision values, performing the operation, and
then re-casting the values back to the original integer type. As the
double precision type of Octave is only capable of representing integers
with up to 53 bits of precision, it is not possible to perform
arithmetic with 64 bit integer types.

When doing integer arithmetic one should consider the possibility of
underflow and overflow. This happens when the result of the computation
can't be represented using the chosen integer type. As an example it is
not possible to represent the result of 10 - 20 when using
unsigned integers. Octave makes sure that the result of integer
computations is the integer that is closest to the true result. So, the
result of 10 - 20 when using unsigned integers is zero.

When doing integer division Octave will round the result to the nearest
integer. This is different from most programming languages, where the
result is often floored to the nearest integer. So, the result of
`int32(5)./int32(8)` is `1`.

#### 4.4 Bit Manipulations

Octave provides a number of functions for the manipulation of numeric
values on a bit by bit basis. The basic functions to set and obtain the
values of individual bits are `bitset` and `bitget`.

**Function File:** `x = bitset (a, n)`

**Function File:** `x = bitset (a, n, v)`

Set or reset bit(s) *n* of unsigned integers in *a*.
*v* = 0 resets and *v* = 1 sets the bits.
The lowest significant bit is: *n* = 1

```octave
dec2bin (bitset (10, 1))
=> 1011
```

See also bitand, bitor, bitxor, bitget, bitcmp, bitshift, bitmax

**Function File:** `X = bitget (a, n)`

Return the status of bit(s) *n* of unsigned integers in *a*
the lowest significant bit is *n* = 1.

```octave
bitget (100, 8:-1:1)
=> 0  1  1  0  0  1  0  0
```

See also bitand, bitor, bitxor, bitset, bitcmp, bitshift, bitmax

The arguments to all of Octave's bitwise operations can be scalar or
arrays, except for `bitcmp`, whose *k* argument must a
scalar. In the case where more than one argument is an array, then all
arguments must have the same shape, and the bitwise operator is applied
to each of the elements of the argument individually. If at least one
argument is a scalar and one an array, then the scalar argument is
duplicated. Therefore

```octave
bitget (100, 8:-1:1)
```

is the same as

```octave
bitget (100 * ones (1, 8), 8:-1:1)
```

It should be noted that all values passed to the bit manipulation
functions of Octave are treated as integers. Therefore, even though the
example for `bitset` above passes the floating point value
`10`, it is treated as the bits `[1, 0, 1, 0]` rather than the
bits of the native floating point format representation of `10`.

As the maximum value that can be represented by a number is important
for bit manipulation, particularly when forming masks, Octave supplies
the function `bitmax`.

**Built-in Function:** `bitmax ()`

Return the largest integer that can be represented as a floating point
value. On IEEE-754 compatible systems, `bitmax` is `2^53 - 1`.

This is the double precision version of the functions `intmax`,
previously discussed.

Octave also includes the basic bitwise `and', 'or' and 'exclusive or'
operators.

**Built-in Function:** `bitand (x, y)`

Return the bitwise AND of nonnegative integers.
*x*, *y* must be in the range [0,bitmax]

See also bitor, bitxor, bitset, bitget, bitcmp, bitshift, bitmax

**Built-in Function:** `bitor (x, y)`

Return the bitwise OR of nonnegative integers.
*x*, *y* must be in the range [0,bitmax]

See also bitor, bitxor, bitset, bitget, bitcmp, bitshift, bitmax

**Built-in Function:** `bitxor (x, y)`

Return the bitwise XOR of nonnegative integers.
*x*, *y* must be in the range [0,bitmax]

See also bitand, bitor, bitset, bitget, bitcmp, bitshift, bitmax

The bitwise `not' operator is a unary operator that performs a logical
negation of each of the bits of the value. For this to make sense, the
mask against which the value is negated must be defined. Octave's
bitwise `not' operator is `bitcmp`.

**Function File:** `bitcmp (a, k)`

Return the *k*-bit complement of integers in *a*. If
*k* is omitted `k = log2 (bitmax) + 1` is assumed.

```octave
bitcmp(7,4)
=> 8
dec2bin(11)
=> 1011
dec2bin(bitcmp(11, 6))
=> 110100
```

See also bitand, bitor, bitxor, bitset, bitget, bitcmp, bitshift, bitmax

Octave also includes the ability to left-shift and right-shift values bitwise.

**Built-in Function:** `bitshift (a, k)`

**Built-in Function:** `bitshift (a, k, n)`

Return a *k* bit shift of *n*-digit unsigned
integers in *a*. A positive *k* leads to a left shift.
A negative value to a right shift. If *n* is omitted it defaults
to log2(bitmax)+1.
*n* must be in the range [1,log2(bitmax)+1] usually [1,33]

```octave
bitshift (eye (3), 1)
=>
2 0 0
0 2 0
0 0 2

bitshift (10, [-2, -1, 0, 1, 2])
=> 2   5  10  20  40
```

See also bitand, bitor, bitxor, bitset, bitget, bitcmp, bitmax

Bits that are shifted out of either end of the value are lost. Octave
also uses arithmetic shifts, where the sign bit of the value is kept
during a right shift. For example

```octave
bitshift (-10, -1)
=> -5
bitshift (int8 (-1), -1)
=> -1
```

Note that `bitshift (int8 (-1), -1)` is `-1` since the bit
representation of `-1` in the `int8` data type is `[1, 1, 1, 1, 1, 1, 1, 1]`.

#### 4.5 Logical Values

Octave has built-in support for logical values, i.e. variables that
are either `true` or `false`. When comparing two variables,
the result will be a logical value whose value depends on whether or
not the comparison is true.

The basic logical operations are `&`, `|`, and `!`,
which correspond to “Logical And”, “Logical Or”, and “Logical
Negation”. These operations all follow the usual rules of logic.

It is also possible to use logical values as part of standard numerical
calculations. In this case `true` is converted to `1`, and
`false` to 0, both represented using double precision floating
point numbers. So, the result of `true*22 - false/6` is `22`.

Logical values can also be used to index matrices and cell arrays.
When indexing with a logical array the result will be a vector containing
the values corresponding to `true` parts of the logical array.
The following example illustrates this.

```octave
data = [ 1, 2; 3, 4 ];
idx = (data <= 2);
data(idx)
     => ans = [ 1; 4 ]
```

Instead of creating the `idx` array it is possible to replace
`data(idx)` with `data( data <= 2 )` in the above code.

Logical values can also be constructed by
casting numeric objects to logical values, or by using the `true`
or `false` functions.

**Function File:** `logical (arg)`

Convert *arg* to a logical value. For example,

```octave
logical ([-1, 0, 1])
```

is equivalent to

```octave
[-1, 0, 1] != 0
```

**Built-in Function:** `true (x)`

**Built-in Function:** `true (n, m)`

**Built-in Function:** `true (n, m, k, ...)`

Return a matrix or N-dimensional array whose elements are all logical 1.
The arguments are handled the same as the arguments for `eye`.

**Built-in Function:** `false (x)`

**Built-in Function:** `false (n, m)`

**Built-in Function:** `false (n, m, k, ...)`

Return a matrix or N-dimensional array whose elements are all logical 0.
The arguments are handled the same as the arguments for `eye`.

#### 4.6 Predicates for Numeric Objects

Since the type of a variable may change during the execution of a
program, it can be necessary to do type checking at run-time. Doing this
also allows you to change the behaviour of a function depending on the
type of the input. As an example, this naive implementation of `abs`
returns the absolute value of the input if it is a real number, and the
magnitude of the input if it is a complex number.

```octave
function a = abs (x)
  if (isreal (x))
    a = sign (x) .* x;
  elseif (iscomplex (x))
    a = sqrt (real(x).^2 + imag(x).^2);
  endif
endfunction
```

The following functions are available for determining the type of a
variable.

**Built-in Function:** `isnumeric (x)`

Return nonzero if *x* is a numeric object.

**Built-in Function:** `isreal (x)`

Return true if *x* is a real-valued numeric object.

**Built-in Function:** `iscomplex (x)`

Return true if *x* is a complex-valued numeric object.

**Built-in Function:** `ismatrix (a)`

Return 1 if *a* is a matrix. Otherwise, return 0.

**Function File:** `isvector (a)`

Return 1 if *a* is a vector. Otherwise, return 0.

See also size, rows, columns, length, isscalar, ismatrix

**Function File:** `isscalar (a)`

Return 1 if *a* is a scalar. Otherwise, return 0.

See also size, rows, columns, length, isscalar, ismatrix

**Function File:** `issquare (x)`

If *x* is a square matrix, then return the dimension of *x*.
Otherwise, return 0.

See also size, rows, columns, length, ismatrix, isscalar, isvector

**Function File:** `issymmetric (x, tol)`

If *x* is symmetric within the tolerance specified by *tol*,
then return the dimension of *x*. Otherwise, return 0. If
*tol* is omitted, use a tolerance equal to the machine precision.
Matrix *x* is considered symmetric if
`norm (*x* - *x*.', inf) / norm (*x*, inf) < *tol*`.

See also size, rows, columns, length, ishermitian, ismatrix, isscalar,
issquare, isvector

**Function File:** `isdefinite (x, tol)`

Return 1 if *x* is symmetric positive definite within the
tolerance specified by *tol* or 0 if *x* is symmetric
positive semidefinite. Otherwise, return -1. If *tol*
is omitted, use a tolerance equal to 100 times the machine precision.

See also issymmetric

**Built-in Function:** `islogical (x)`

Return true if *x* is a logical object.

**Function File:** `isprime (n)`

Return true if *n* is a prime number, false otherwise.

Something like the following is much faster if you need to test a lot
of small numbers:

```octave
t = ismember (n, primes (max (n (:))));
```

If max(n) is very large, then you should be using special purpose
factorization code.

See also primes, factor, gcd, lcm

### 10 Statements

Statements may be a simple constant expression or a complicated list of
nested loops and conditional statements.

*Control statements* such as `if`, `while`, and so on
control the flow of execution in Octave programs. All the control
statements start with special keywords such as `if` and
`while`, to distinguish them from simple expressions.
Many control statements contain other statements; for example, the
`if` statement contains another statement which may or may not be
executed.

Each control statement has a corresponding *end* statement that
marks the end of the control statement. For example, the
keyword `endif` marks the end of an `if` statement, and
`endwhile` marks the end of a `while` statement. You can use
the keyword `end` anywhere a more specific end keyword is expected,
but using the more specific keywords is preferred because if you use
them, Octave is able to provide better diagnostics for mismatched or
missing end tokens.

The list of statements contained between keywords like `if` or
`while` and the corresponding end statement is called the
*body* of a control statement.

#### 10.1 The `if` Statement

The `if` statement is Octave's decision-making statement. There
are three basic forms of an `if` statement. In its simplest form,
it looks like this:

```octave
if (condition)
  then-body
endif
```

*condition* is an expression that controls what the rest of the
statement will do. The *then-body* is executed only if
*condition* is true.

The condition in an `if` statement is considered true if its value
is non-zero, and false if its value is zero. If the value of the
conditional expression in an `if` statement is a vector or a
matrix, it is considered true only if it is non-empty and *all*
of the elements are non-zero.

The second form of an if statement looks like this:

```octave
if (condition)
  then-body
else
  else-body
endif
```

If *condition* is true, *then-body* is executed; otherwise,
*else-body* is executed.

Here is an example:

```octave
if (rem (x, 2) == 0)
  printf ("x is even\n");
else
  printf ("x is odd\n");
endif
```

In this example, if the expression `rem (x, 2) == 0` is true (that
is, the value of `x` is divisible by 2), then the first
`printf` statement is evaluated, otherwise the second `printf`
statement is evaluated.

The third and most general form of the `if` statement allows
multiple decisions to be combined in a single statement. It looks like
this:

```octave
if (condition)
  then-body
elseif (condition)
  elseif-body
else
  else-body
endif
```

Any number of `elseif` clauses may appear. Each condition is
tested in turn, and if one is found to be true, its corresponding
*body* is executed. If none of the conditions are true and the
`else` clause is present, its body is executed. Only one
`else` clause may appear, and it must be the last part of the
statement.

In the following example, if the first condition is true (that is, the
value of `x` is divisible by 2), then the first `printf`
statement is executed. If it is false, then the second condition is
tested, and if it is true (that is, the value of `x` is divisible
by 3), then the second `printf` statement is executed. Otherwise,
the third `printf` statement is performed.

```octave
if (rem (x, 2) == 0)
  printf ("x is even\n");
elseif (rem (x, 3) == 0)
  printf ("x is odd and divisible by 3\n");
else
  printf ("x is odd\n");
endif
```

Note that the `elseif` keyword must not be spelled `else if`,
as is allowed in Fortran. If it is, the space between the `else`
and `if` will tell Octave to treat this as a new `if`
statement within another `if` statement's `else` clause. For
example, if you write

```octave
if (c1)
  body-1
else if (c2)
  body-2
endif
```

Octave will expect additional input to complete the first `if`
statement. If you are using Octave interactively, it will continue to
prompt you for additional input. If Octave is reading this input from a
file, it may complain about missing or mismatched `end` statements,
or, if you have not used the more specific `end` statements
(`endif`, `endfor`, etc.), it may simply produce incorrect
results, without producing any warning messages.

It is much easier to see the error if we rewrite the statements above
like this,

```octave
if (c1)
  body-1
else
  if (c2)
    body-2
  endif
```

using the indentation to show how Octave groups the statements.
See section 11 [Functions and Script Files](https://book.huihoo.com/gnu-octave-manual-version-3/octave_98.html).

#### 10.2 The `switch` Statement

It is very common to take different actions depending on the value of
one variable. This is possible using the `if` statement in the
following way

```octave
if (X == 1)
  do_something ();
elseif (X == 2)
  do_something_else ();
else
  do_something_completely_different ();
endif
```

This kind of code can however be very cumbersome to both write and
maintain. To overcome this problem Octave supports the `switch`
statement. Using this statement, the above example becomes

```octave
switch (X)
  case 1
    do_something ();
  case 2
    do_something_else ();
  otherwise
    do_something_completely_different ();
endswitch
```

This code makes the repetitive structure of the problem more explicit,
making the code easier to read, and hence maintain. Also, if the
variable `X` should change its name, only one line would need
changing compared to one line per case when `if` statements are
used.

The general form of the `switch` statement is

```octave
switch expression
  case label
    command_list
  case label
    command_list
  ...

  otherwise
    command_list
endswitch
```

where *label* can be any expression. However, duplicate
*label* values are not detected, and only the *command_list*
corresponding to the first match will be executed. For the
`switch` statement to be meaningful at least one
`case *label* *command_list*` clause must be present,
while the `otherwise *command_list*` clause is optional.

If *label* is a cell array the corresponding *command_list*
is executed if *any* of the elements of the cell array match
*expression*. As an example, the following program will print
`‘Variable is either 6 or 7’`.

```octave
A = 7;
switch A
  case { 6, 7 }
    printf ("variable is either 6 or 7\n");
  otherwise
    printf ("variable is neither 6 nor 7\n");
endswitch
```

As with all other specific `end` keywords, `endswitch` may be
replaced by `end`, but you can get better diagnostics if you use
the specific forms.

One advantage of using the `switch` statement compared to using
`if` statements is that the *label*s can be strings. If an
`if` statement is used it is *not* possible to write

```octave
if (X == "a string") # This is NOT valid
```

since a character-to-character comparison between `X` and the
string will be made instead of evaluating if the strings are equal.
This special-case is handled by the `switch` statement, and it
is possible to write programs that look like this

```octave
switch (X)
  case "a string"
    do_something
  ...
endswitch
```

##### 10.2.1 Notes for the C programmer

The `switch` statement is also available in the widely used C
programming language. There are, however, some differences
between the statement in Octave and C

- Cases are exclusive, so they don't `fall through' as do the cases
in the `switch` statement of the C language.
- The *command_list* elements are not optional. Making the list
optional would have meant requiring a separator between the label and
the command list. Otherwise, things like 

```octave
switch (foo)
  case (1) -2
  ...
```

 would produce surprising results, as would 

```octave
switch (foo)
  case (1)
  case (2)
    doit ();
  ...
```

 particularly for C programmers. If `doit()` should be executed if
*foo* is either `1` or `2`, the above code should be
written with a cell array like this 

```octave
switch (foo)
  case { 1, 2 }
    doit ();
  ...
```

#### 10.3 The `while` Statement

In programming, a *loop* means a part of a program that is (or at least can
be) executed two or more times in succession.

The `while` statement is the simplest looping statement in Octave.
It repeatedly executes a statement as long as a condition is true. As
with the condition in an `if` statement, the condition in a
`while` statement is considered true if its value is non-zero, and
false if its value is zero. If the value of the conditional expression
in a `while` statement is a vector or a matrix, it is considered
true only if it is non-empty and *all* of the elements are non-zero.

Octave's `while` statement looks like this:

```octave
while (condition)
  body
endwhile
```

Here *body* is a statement or list of statements that we call the
*body* of the loop, and *condition* is an expression that
controls how long the loop keeps running.

The first thing the `while` statement does is test *condition*.
If *condition* is true, it executes the statement *body*. After
*body* has been executed, *condition* is tested again, and if it
is still true, *body* is executed again. This process repeats until
*condition* is no longer true. If *condition* is initially
false, the body of the loop is never executed.

This example creates a variable `fib` that contains the first ten
elements of the Fibonacci sequence.

```octave
fib = ones (1, 10);
i = 3;
while (i <= 10)
  fib (i) = fib (i-1) + fib (i-2);
  i++;
endwhile
```

Here the body of the loop contains two statements.

The loop works like this: first, the value of `i` is set to 3.
Then, the `while` tests whether `i` is less than or equal to
10. This is the case when `i` equals 3, so the value of the
`i`-th element of `fib` is set to the sum of the previous two
values in the sequence. Then the `i++` increments the value of
`i` and the loop repeats. The loop terminates when `i`
reaches 11.

A newline is not required between the condition and the
body; but using one makes the program clearer unless the body is very
simple.

#### 10.4 The `do-until` Statement

The `do-until` statement is similar to the `while` statement,
except that it repeatedly executes a statement until a condition becomes
true, and the test of the condition is at the end of the loop, so the
body of the loop is always executed at least once. As with the
condition in an `if` statement, the condition in a `do-until`
statement is considered true if its value is non-zero, and false if its
value is zero. If the value of the conditional expression in a
`do-until` statement is a vector or a matrix, it is considered
true only if it is non-empty and *all* of the elements are non-zero.

Octave's `do-until` statement looks like this:

```octave
do
  body
until (condition)
```

Here *body* is a statement or list of statements that we call the
*body* of the loop, and *condition* is an expression that
controls how long the loop keeps running.

This example creates a variable `fib` that contains the first ten
elements of the Fibonacci sequence.

```octave
fib = ones (1, 10);
i = 2;
do
  i++;
  fib (i) = fib (i-1) + fib (i-2);
until (i == 10)
```

A newline is not required between the `do` keyword and the
body; but using one makes the program clearer unless the body is very
simple.

#### 10.5 The `for` Statement

The `for` statement makes it more convenient to count iterations of a
loop. The general form of the `for` statement looks like this:

```octave
for var = expression
  body
endfor
```

where *body* stands for any statement or list of statements,
*expression* is any valid expression, and *var* may take several
forms. Usually it is a simple variable name or an indexed variable. If
the value of *expression* is a structure, *var* may also be a
vector with two elements. See section 10.5.1 [Looping Over Structure Elements](https://book.huihoo.com/gnu-octave-manual-version-3/octave_92.html), below.

The assignment expression in the `for` statement works a bit
differently than Octave's normal assignment statement. Instead of
assigning the complete result of the expression, it assigns each column
of the expression to *var* in turn. If *expression* is a range,
a row vector, or a scalar, the value of *var* will be a scalar each
time the loop body is executed. If *var* is a column vector or a
matrix, *var* will be a column vector each time the loop body is
executed.

The following example shows another way to create a vector containing
the first ten elements of the Fibonacci sequence, this time using the
`for` statement:

```octave
fib = ones (1, 10);
for i = 3:10
  fib (i) = fib (i-1) + fib (i-2);
endfor
```

This code works by first evaluating the expression `3:10`, to
produce a range of values from 3 to 10 inclusive. Then the variable
`i` is assigned the first element of the range and the body of the
loop is executed once. When the end of the loop body is reached, the
next value in the range is assigned to the variable `i`, and the
loop body is executed again. This process continues until there are no
more elements to assign.

Within Octave is it also possible to iterate over matrices or cell arrays
using the `for` statement. For example consider

```octave
disp("Loop over a matrix")
for i = [1,3;2,4]
  i
endfor
disp("Loop over a cell array")
for i = {1,"two";"three",4}
  i
endfor
```

In this case the variable `i` takes on the value of the columns of
the matrix or cell matrix. So the first loop iterates twice, producing
two column vectors `[1;2]`, followed by `[3;4]`, and likewise
for the loop over the cell array. This can be extended to loops over
multidimensional arrays. For example

```octave
a = [1,3;2,4]; b = cat(3, a, 2*a);
for i = c
  i
endfor
```

In the above case, the multidimensional matrix *c* is reshaped to a
two dimensional matrix as `reshape (c, rows(c), prod(size(c)(2:end)))` and then the same behavior as a loop over a two
dimensional matrix is produced.

Although it is possible to rewrite all `for` loops as `while`
loops, the Octave language has both statements because often a
`for` loop is both less work to type and more natural to think of.
Counting the number of iterations is very common in loops and it can be
easier to think of this counting as part of looping rather than as
something to do inside the loop.

##### 10.5.1 Looping Over Structure Elements

A special form of the `for` statement allows you to loop over all
the elements of a structure:

```octave
for [ val, key ] = expression
  body
endfor
```

In this form of the `for` statement, the value of *expression*
must be a structure. If it is, *key* and *val* are set to the
name of the element and the corresponding value in turn, until there are
no more elements. For example,

```octave
x.a = 1
x.b = [1, 2; 3, 4]
x.c = "string"
for [val, key] = x
  key
  val
endfor

     -| key = a
     -| val = 1
     -| key = b
     -| val =
     -|
     -|   1  2
     -|   3  4
     -|
     -| key = c
     -| val = string
```

The elements are not accessed in any particular order. If you need to
cycle through the list in a particular way, you will have to use the
function `fieldnames` and sort the list yourself.

The *key* variable may also be omitted. If it is, the brackets are
also optional. This is useful for cycling through the values of all the
structure elements when the names of the elements do not need to be
known.

#### 10.6 The `break` Statement

The `break` statement jumps out of the innermost `for` or
`while` loop that encloses it. The `break` statement may only
be used within the body of a loop. The following example finds the
smallest divisor of a given integer, and also identifies prime numbers:

```octave
num = 103;
div = 2;
while (div*div <= num)
  if (rem (num, div) == 0)
    break;
  endif
  div++;
endwhile
if (rem (num, div) == 0)
  printf ("Smallest divisor of %d is %d\n", num, div)
else
  printf ("%d is prime\n", num);
endif
```

When the remainder is zero in the first `while` statement, Octave
immediately *breaks out* of the loop. This means that Octave
proceeds immediately to the statement following the loop and continues
processing. (This is very different from the `exit` statement
which stops the entire Octave program.)

Here is another program equivalent to the previous one. It illustrates
how the *condition* of a `while` statement could just as well
be replaced with a `break` inside an `if`:

```octave
num = 103;
div = 2;
while (1)
  if (rem (num, div) == 0)
    printf ("Smallest divisor of %d is %d\n", num, div);
    break;
  endif
  div++;
  if (div*div > num)
    printf ("%d is prime\n", num);
    break;
  endif
endwhile
```

#### 10.7 The `continue` Statement

The `continue` statement, like `break`, is used only inside
`for` or `while` loops. It skips over the rest of the loop
body, causing the next cycle around the loop to begin immediately.
Contrast this with `break`, which jumps out of the loop altogether.
Here is an example:

```octave
# print elements of a vector of random
# integers that are even.

# first, create a row vector of 10 random
# integers with values between 0 and 100:

vec = round (rand (1, 10) * 100);

# print what we're interested in:

for x = vec
  if (rem (x, 2) != 0)
    continue;
  endif
  printf ("%d\n", x);
endfor
```

If one of the elements of *vec* is an odd number, this example skips
the print statement for that element, and continues back to the first
statement in the loop.

This is not a practical example of the `continue` statement, but it
should give you a clear understanding of how it works. Normally, one
would probably write the loop like this:

```octave
for x = vec
  if (rem (x, 2) == 0)
    printf ("%d\n", x);
  endif
endfor
```

#### 10.8 The `unwind_protect` Statement

Octave supports a limited form of exception handling modelled after the
unwind-protect form of Lisp.

The general form of an `unwind_protect` block looks like this:

```octave
unwind_protect
  body
unwind_protect_cleanup
  cleanup
end_unwind_protect
```

where *body* and *cleanup* are both optional and may contain any
Octave expressions or commands. The statements in *cleanup* are
guaranteed to be executed regardless of how control exits *body*.

This is useful to protect temporary changes to global variables from
possible errors. For example, the following code will always restore
the original value of the global variable `frobnosticate`
even if an error occurs while performing the indexing operation.

```octave
save_frobnosticate = frobnosticate;
unwind_protect
  frobnosticate = true;
  ...
unwind_protect_cleanup
  frobnosticate = save_frobnosticate;
end_unwind_protect
```

Without `unwind_protect`, the value of *frobnosticate*
would not be restored if an error occurs while performing the indexing
operation because evaluation would stop at the point of the error and
the statement to restore the value would not be executed.

#### 10.9 The `try` Statement

In addition to unwind_protect, Octave supports another limited form of
exception handling.

The general form of a `try` block looks like this:

```octave
try
  body
catch
  cleanup
end_try_catch
```

where *body* and *cleanup* are both optional and may contain any
Octave expressions or commands. The statements in *cleanup* are
only executed if an error occurs in *body*.

No warnings or error messages are printed while *body* is
executing. If an error does occur during the execution of *body*,
*cleanup* can use the function `lasterr` to access the text
of the message that would have been printed. This is the same
as `eval (*try*, *catch*)` but it is more efficient since
the commands do not need to be parsed each time the *try* and
*catch* statements are evaluated. See section 12 [Errors and Warnings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_117.html), for more
information about the `lasterr` function.

#### 10.10 Continuation Lines

In the Octave language, most statements end with a newline character and
you must tell Octave to ignore the newline character in order to
continue a statement from one line to the next. Lines that end with the
characters `...` or `\` are joined with the following line
before they are divided into tokens by Octave's parser. For example,
the lines

```octave
x = long_variable_name ...
    + longer_variable_name \
    - 42
```

form a single statement. The backslash character on the second line
above is interpreted as a continuation character, *not* as a division
operator.

For continuation lines that do not occur inside string constants,
whitespace and comments may appear between the continuation marker and
the newline character. For example, the statement

```octave
x = long_variable_name ...     # comment one
    + longer_variable_name \   # comment two
    - 42                       # last comment
```

is equivalent to the one shown above. Inside string constants, the
continuation marker must appear at the end of the line just before the
newline character.

Input that occurs inside parentheses can be continued to the next line
without having to use a continuation marker. For example, it is
possible to write statements like

```octave
if (fine_dining_destination == on_a_boat
    || fine_dining_destination == on_a_train)
  seuss (i, will, not, eat, them, sam, i, am, i,
         will, not, eat, green, eggs, and, ham);
endif
```

without having to add to the clutter with continuation markers.

### 11 Functions and Script Files

Complicated Octave programs can often be simplified by defining
functions. Functions can be defined directly on the command line during
interactive Octave sessions, or in external files, and can be called just
like built-in functions.

#### 11.1 Defining Functions

In its simplest form, the definition of a function named *name*
looks like this:

```octave
function name
  body
endfunction
```

A valid function name is like a valid variable name: a sequence of
letters, digits and underscores, not starting with a digit. Functions
share the same pool of names as variables.

The function *body* consists of Octave statements. It is the
most important part of the definition, because it says what the function
should actually *do*.

For example, here is a function that, when executed, will ring the bell
on your terminal (assuming that it is possible to do so):

```octave
function wakeup
  printf ("\a");
endfunction
```

The `printf` statement (see section 14 [Input and Output](https://book.huihoo.com/gnu-octave-manual-version-3/octave_128.html)) simply tells
Octave to print the string `"\a"`. The special character `‘\a’`
stands for the alert character (ASCII 7). See section 5 [Strings](https://book.huihoo.com/gnu-octave-manual-version-3/octave_45.html).

Once this function is defined, you can ask Octave to evaluate it by
typing the name of the function.

Normally, you will want to pass some information to the functions you
define. The syntax for passing parameters to a function in Octave is

```octave
function name (arg-list)
  body
endfunction
```

where *arg-list* is a comma-separated list of the function's
arguments. When the function is called, the argument names are used to
hold the argument values given in the call. The list of arguments may
be empty, in which case this form is equivalent to the one shown above. Variables used in the body of a function are local to the
function, as are variables named in *arg-list*.([5](https://book.huihoo.com/gnu-octave-manual-version-3/octave_foot.html#FOOT5))

To print a message along with ringing the bell, you might modify the
`wakeup` to look like this:

```octave
function wakeup (message)
  printf ("\a%s\n", message);
endfunction
```

Calling this function using a statement like this

```octave
wakeup ("Rise and shine!");
```

will cause Octave to ring your terminal's bell and print the message
`‘Rise and shine!’`, followed by a newline character (the `‘\n’`
in the first argument to the `printf` statement).

In most cases, you will also want to get some information back from the
functions you define. Here is the syntax for writing a function that
returns a single value:

```octave
function ret-var = name (arg-list)
  body
endfunction
```

The symbol *ret-var* is the name of the variable that will hold the
value to be returned by the function. This variable is local to the function and must be defined
before the end of the function body in order for the function to return
a value.

For example, here is a function that computes the average of the
elements of a vector:

```octave
function retval = avg (v)
  retval = sum (v) / length (v);
endfunction
```

If we had written `avg` like this instead,

```octave
function retval = avg (v)
  if (isvector (v))
    retval = sum (v) / length (v);
  endif
endfunction
```

and then called the function with a matrix instead of a vector as the
argument, Octave would have printed an error message like this:

```octave
error: `retval' undefined near line 1 column 10
error: evaluating index expression near line 7, column 1
```

because the body of the `if` statement was never executed, and
`retval` was never defined. To prevent obscure errors like this,
it is a good idea to always make sure that the return variables will
always have values, and to produce meaningful error messages when
problems are encountered. For example, `avg` could have been
written like this:

```octave
function retval = avg (v)
  retval = 0;
  if (isvector (v))
    retval = sum (v) / length (v);
  else
    error ("avg: expecting vector argument");
  endif
endfunction
```

There is still one additional problem with this function. What if it is
called without an argument? Without additional error checking, Octave
will probably print an error message that won't really help you track
down the source of the error. To allow you to catch errors like this,
Octave provides each function with an automatic variable called
`nargin`. Each time a function is called, `nargin` is
automatically initialized to the number of arguments that have actually
been passed to the function. For example, we might rewrite the
`avg` function like this:

```octave
function retval = avg (v)
  retval = 0;
  if (nargin != 1)
    usage ("avg (vector)");
  endif
  if (isvector (v))
    retval = sum (v) / length (v);
  else
    error ("avg: expecting vector argument");
  endif
endfunction
```

Although Octave does not automatically report an error if you call a
function with more arguments than expected, doing so probably indicates
that something is wrong. Octave also does not automatically report an
error if a function is called with too few arguments, but any attempt to
use a variable that has not been given a value will result in an error.
To avoid such problems and to provide useful messages, we check for both
possibilities and issue our own error message.

**Built-in Function:** `nargin ()`

**Built-in Function:** `nargin (fcn_name)`

Within a function, return the number of arguments passed to the function.
At the top level, return the number of command line arguments passed to
Octave. If called with the optional argument *fcn_name*, return the
maximum number of arguments the named function can accept, or -1 if the
function accepts a variable number of arguments.

See also nargout, varargin, varargout

**Function File:** `inputname (n)`

Return the text defining *n*-th input to the function.

**Built-in Function:** `val = silent_functions ()`

**Built-in Function:** `old_val = silent_functions (new_val)`

Query or set the internal variable that controls whether internal
output from a function is suppressed. If this option is disabled,
Octave will display the results produced by evaluating expressions
within a function body that are not terminated with a semicolon.

#### 11.2 Multiple Return Values

Unlike many other computer languages, Octave allows you to define
functions that return more than one value. The syntax for defining
functions that return multiple values is

```octave
function [ret-list] = name (arg-list)
  body
endfunction
```

where *name*, *arg-list*, and *body* have the same meaning
as before, and *ret-list* is a comma-separated list of variable
names that will hold the values returned from the function. The list of
return values must have at least one element. If *ret-list* has
only one element, this form of the `function` statement is
equivalent to the form described in the previous section.

Here is an example of a function that returns two values, the maximum
element of a vector and the index of its first occurrence in the vector.

```octave
function [max, idx] = vmax (v)
  idx = 1;
  max = v (idx);
  for i = 2:length (v)
    if (v (i) > max)
      max = v (i);
      idx = i;
    endif
  endfor
endfunction
```

In this particular case, the two values could have been returned as
elements of a single array, but that is not always possible or
convenient. The values to be returned may not have compatible
dimensions, and it is often desirable to give the individual return
values distinct names.

In addition to setting `nargin` each time a function is called,
Octave also automatically initializes `nargout` to the number of
values that are expected to be returned. This allows you to write
functions that behave differently depending on the number of values that
the user of the function has requested. The implicit assignment to the
built-in variable `ans` does not figure in the count of output
arguments, so the value of `nargout` may be zero.

The `svd` and `lu` functions are examples of built-in
functions that behave differently depending on the value of
`nargout`.

It is possible to write functions that only set some return values. For
example, calling the function

```octave
function [x, y, z] = f ()
  x = 1;
  z = 2;
endfunction
```

as

```octave
[a, b, c] = f ()
```

produces:

```octave
a = 1

b = [](0x0)

c = 2
```

along with a warning.

**Built-in Function:** `nargout ()`

**Built-in Function:** `nargout (fcn_name)`

Within a function, return the number of values the caller expects to
receive. If called with the optional argument *fcn_name*, return the
maximum number of values the named function can produce, or -1 if the
function can produce a variable number of values.

For example,

```octave
f ()
```

will cause `nargout` to return 0 inside the function `f` and

```octave
[s, t] = f ()
```

will cause `nargout` to return 2 inside the function
`f`.

At the top level, `nargout` is undefined.

See also nargin, varargin, varargout

**Function File:** `nargchk (nargin_min, nargin_max, n)`

If *n* is in the range *nargin_min* through *nargin_max*
inclusive, return the empty matrix. Otherwise, return a message
indicating whether *n* is too large or too small.

This is useful for checking to see that the number of arguments supplied
to a function is within an acceptable range.

#### 11.3 Variable-length Argument Lists

Sometimes the number of input arguments is not known when the function
is defined. As an example think of a function that returns the smallest
of all its input arguments. For example,

```octave
a = smallest (1, 2, 3);
b = smallest (1, 2, 3, 4);
```

In this example both `a` and `b` would be 1. One way to write
the `smallest` function is

```octave
function val = smallest (arg1, arg2, arg3, arg4, arg5)
  body
endfunction
```

and then use the value of `nargin` to determine which of the input
arguments should be considered. The problem with this approach is
that it can only handle a limited number of input arguments.

Octave supports the `varargin` keyword for handling a variable
number of input arguments. Using `varargin` the function
looks like this

```octave
function val = smallest (varargin)
  body
endfunction
```

In the function body the input arguments can be accessed through the
variable `varargin`. This variable is a cell array containing
all the input arguments. See section 6.2 [Cell Arrays](https://book.huihoo.com/gnu-octave-manual-version-3/octave_57.html), for details on working
with cell arrays. The `smallest` function can now be defined
like this

```octave
function val = smallest (varargin)
  val = min ([varargin{:}]);
endfunction
```

This implementation handles any number of input arguments, but it's also
a very simple solution to the problem.

A slightly more complex example of `varargin` is a function
`print_arguments` that prints all input arguments. Such a function
can be defined like this

```octave
function print_arguments (varargin)
  for i = 1:length (varargin)
    printf ("Input argument %d: ", i);
    disp (varargin{i});
  endfor
endfunction
```

This function produces output like this

```octave
print_arguments (1, "two", 3);
     -| Input argument 1:  1
     -| Input argument 2: two
     -| Input argument 3:  3
```

**Function File:** `[reg, prop] = parseparams (params)`

Return in *reg* the cell elements of *param* up to the first
string element and in *prop* all remaining elements beginning
with the first string element. For example

```octave
[reg, prop] = parseparams ({1, 2, "linewidth", 10})
reg =
{
  [1,1] = 1
  [1,2] = 2
}
prop =
{
  [1,1] = linewidth
  [1,2] = 10
}
```

The parseparams function may be used to separate 'regular'
arguments and additional arguments given as property/value pairs of
the *varargin* cell array.

See also varargin

#### 11.4 Variable-length Return Lists

It is possible to return a variable number of output arguments from a
function using a syntax that's similar to the one used with the
`varargin` keyword. To let a function return a variable number of
output arguments the `varargout` keyword is used. As with
`varargin`, `varargout` is a cell array that will contain the
requested output arguments.

As an example the following function sets the first output argument to
1, the second to 2, and so on.

```octave
function varargout = one_to_n ()
  for i = 1:nargout
    varargout{i} = i;
  endfor
endfunction
```

When called this function returns values like this

```octave
[a, b, c] = one_to_n ()
     => a =  1
     => b =  2
     => c =  3
```

**Function File:** `[r1, r2, ..., rn] = deal (a)`

**Function File:** `[r1, r2, ..., rn] = deal (a1, a2, ..., an)`

Copy the input parameters into the corresponding output parameters.
If only one input parameter is supplied, its value is copied to each
of the outputs.

For example,

```octave
[a, b, c] = deal (x, y, z);
```

is equivalent to

```octave
a = x;
b = y;
c = z;
```

and

```octave
[a, b, c] = deal (x);
```

is equivalent to

```octave
a = b = c = x;
```

#### 11.5 Returning From a Function

The body of a user-defined function can contain a `return` statement.
This statement returns control to the rest of the Octave program. It
looks like this:

```octave
return
```

Unlike the `return` statement in C, Octave's `return`
statement cannot be used to return a value from a function. Instead,
you must assign values to the list of return variables that are part of
the `function` statement. The `return` statement simply makes
it easier to exit a function from a deeply nested loop or conditional
statement.

Here is an example of a function that checks to see if any elements of a
vector are nonzero.

```octave
function retval = any_nonzero (v)
  retval = 0;
  for i = 1:length (v)
    if (v (i) != 0)
      retval = 1;
      return;
    endif
  endfor
  printf ("no nonzero elements found\n");
endfunction
```

Note that this function could not have been written using the
`break` statement to exit the loop once a nonzero value is found
without adding extra logic to avoid printing the message if the vector
does contain a nonzero element.

**Keyword:** `return`

When Octave encounters the keyword `return` inside a function or
script, it returns control to the caller immediately. At the top level,
the return statement is ignored. A `return` statement is assumed
at the end of every function definition.

#### 11.6 Default Arguments

Since Octave supports variable number of input arguments, it is very useful
to assign default values to some input arguments. When an input argument
is declared in the argument list it is possible to assign a default
value to the argument like this

```octave
function name (arg1 = val1, ...)
  body
endfunction
```

If no value is assigned to *arg1* by the user, it will have the
value *val1*.

As an example, the following function implements a variant of the classic
“Hello, World” program.

```octave
function hello (who = "World")
  printf ("Hello, %s!\n", who);
endfunction
```

When called without an input argument the function prints the following

```octave
hello ();
     -| Hello, World!
```

and when it's called with an input argument it prints the following

```octave
hello ("Beautiful World of Free Software");
     -| Hello, Beautiful World of Free Software!
```

Sometimes it is useful to explicitly tell Octave to use the default value
of an input argument. This can be done writing a `‘:’` as the value
of the input argument when calling the function.

```octave
hello (:);
     -| Hello, World!
```

#### 11.7 Function Files

Except for simple one-shot programs, it is not practical to have to
define all the functions you need each time you need them. Instead, you
will normally want to save them in a file so that you can easily edit
them, and save them for use at a later time.

Octave does not require you to load function definitions from files
before using them. You simply need to put the function definitions in a
place where Octave can find them.

When Octave encounters an identifier that is undefined, it first looks
for variables or functions that are already compiled and currently
listed in its symbol table. If it fails to find a definition there, it
searches a list of directories (the *path*) for files ending in
`‘.m’` that have the same base name as the undefined
identifier.([6](https://book.huihoo.com/gnu-octave-manual-version-3/octave_foot.html#FOOT6)) Once Octave finds a file with a name that matches,
the contents of the file are read. If it defines a *single*
function, it is compiled and executed. See section 11.8 [Script Files](https://book.huihoo.com/gnu-octave-manual-version-3/octave_110.html), for more
information about how you can define more than one function in a single
file.

When Octave defines a function from a function file, it saves the full
name of the file it read and the time stamp on the file. If the time
stamp on the file changes, Octave may reload the file. When Octave is
running interactively, time stamp checking normally happens at most once
each time Octave prints the prompt. Searching for new function
definitions also occurs if the current working directory changes.

Checking the time stamp allows you to edit the definition of a function
while Octave is running, and automatically use the new function
definition without having to restart your Octave session.

To avoid degrading performance unnecessarily by checking the time stamps
on functions that are not likely to change, Octave assumes that function
files in the directory tree
`‘*octave-home*/share/octave/*version*/m’`
will not change, so it doesn't have to check their time stamps every time the
functions defined in those files are used. This is normally a very good
assumption and provides a significant improvement in performance for the
function files that are distributed with Octave.

If you know that your own function files will not change while you are
running Octave, you can improve performance by calling
`ignore_function_time_stamp ("all")`, so that Octave will
ignore the time stamps for all function files. Passing
`"system"` to this function resets the default behavior.

**Built-in Function:** `mfilename ()`

**Built-in Function:** `mfilename ("fullpath")`

**Built-in Function:** `mfilename ("fullpathext")`

Return the name of the currently executing file. At the top-level,
return the empty string. Given the argument `"fullpath"`,
include the directory part of the file name, but not the extension.
Given the argument `"fullpathext"`, include the directory part
of the file name and the extension.

**Built-in Function:** `val = ignore_function_time_stamp ()`

**Built-in Function:** `old_val = ignore_function_time_stamp (new_val)`

Query or set the internal variable that controls whether Octave checks
the time stamp on files each time it looks up functions defined in
function files. If the internal variable is set to `"system"`,
Octave will not automatically recompile function files in subdirectories of
`‘*octave-home*/lib/*version*’` if they have changed since
they were last compiled, but will recompile other function files in the
search path if they change. If set to `"all"`, Octave will not
recompile any function files unless their definitions are removed with
`clear`. If set to "none", Octave will always check time stamps
on files to determine whether functions defined in function files
need to be recompiled.

##### 11.7.1 Manipulating the load path

When a function is called, Octave searches a list of directories for
a file that contains the function declaration. This list of directories
is known as the load path. By default the load path contains
a list of directories distributed with Octave plus the current
working directory. To see your current load path call the `path`
function without any input or output arguments.

It is possible to add or remove directories to or from the load path
using `addpath` and `rmpath`. As an example, the following
code adds `‘~/Octave’` to the load path.

```octave
addpath("~/Octave")
```

After this the directory `‘~/Octave’` will be searched for functions.

**Built-in Function:** `addpath (dir1, ...)`

**Built-in Function:** `addpath (dir1, ..., option)`

Add *dir1*, ... to the current function search path. If
*option* is `‘"-begin"’` or 0 (the default), prepend the
directory name to the current path. If *option* is `‘"-end"’`
or 1, append the directory name to the current path.
Directories added to the path must exist.

See also path, rmpath, genpath, pathdef, savepath, pathsep

**Built-in Function:** `genpath (dir)`

Return a path constructed from *dir* and all its subdirectories.

**Built-in Function:** `rmpath (dir1, ...)`

Remove *dir1*, ... from the current function search path.

See also path, addpath, genpath, pathdef, savepath, pathsep

**Function File:** `savepath (file)`

Save the current function search path to *file*. If *file*
is omitted, `‘~/.octaverc’` is used. If successful,
`savepath` returns 0.

See also path, addpath, rmpath, genpath, pathdef, pathsep

**Built-in Function:** `path (...)`

Modify or display Octave's load path.

If *nargin* and *nargout* are zero, display the elements of
Octave's load path in an easy to read format.

If *nargin* is zero and nargout is greater than zero, return the
current load path.

If *nargin* is greater than zero, concatenate the arguments,
separating them with `pathsep()`. Set the internal search path
to the result and return it.

No checks are made for duplicate elements.

See also addpath, rmpath, genpath, pathdef, savepath, pathsep

**Built-in Function:** `val = pathdef ()`

Return the default list of directories in which to search for function
files.

See also path, addpath, rmpath, genpath, savepath, pathsep

**Built-in Function:** `pathsep ()`

Return the system-dependent character used to separate directories in
a path.

See also filesep, dir, ls

**Built-in Function:** `rehash ()`

Reinitialize Octave's load path directory cache.

**Built-in Function:** `file_in_loadpath (file)`

**Built-in Function:** `file_in_loadpath (file, "all")`

Return the absolute name of *file* if it can be found in
the list of directories specified by `path`.
If no file is found, return an empty matrix.

If the first argument is a cell array of strings, search each
directory of the loadpath for element of the cell array and return
the first that matches.

If the second optional argument `"all"` is supplied, return
a cell array containing the list of all files that have the same
name in the path. If no files are found, return an empty cell array.

See also file_in_path, path

##### 11.7.2 Subfunctions

A function file may contain secondary functions called
*subfunctions*. These secondary functions are only visible to the
other functions in the same function file. For example, a file
`‘f.m’` containing

```octave
function f ()
  printf ("in f, calling g\n");
  g ()
endfunction
function g ()
  printf ("in g, calling h\n");
  h ()
endfunction
function h ()
  printf ("in h\n")
endfunction
```

defines a main function `f` and two subfunctions. The
subfunctions `g` and `h` may only be called from the main
function `f` or from the other subfunctions, but not from outside
the file `‘f.m’`.

##### 11.7.3 Overloading and Autoloading

The `dispatch` function can be used to alias one function name to
another. It can be used to alias all calls to a particular function name
to another function, or the alias can be limited to only a particular
variable type. Consider the example

```octave
function y = spsin (x)
  printf ("Calling spsin\n");
  fflush(stdout);
  y = spfun ("sin", x);
endfunction

dispatch ("sin", "spsin", "sparse matrix");
y0 = sin(eye(3));
y1 = sin(speye(3));
```

which aliases the user-defined function `spsin` to `sin`, but only for real sparse
matrices. Note that the builtin `sin` already correctly treats
sparse matrices and so this example is only illustrative.

**Loadable Function:** `dispatch (f, r, type)`

Replace the function *f* with a dispatch so that function *r*
is called when *f* is called with the first argument of the named
*type*. If the type is *any* then call *r* if no other type
matches. The original function *f* is accessible using
`builtin (*f*, ...)`.

If *r* is omitted, clear dispatch function associated with *type*.

If both *r* and *type* are omitted, list dispatch functions
for *f*.

See also builtin

**Loadable Function:** `[...] builtin (f, ...)`

Call the base function *f* even if *f* is overloaded to
some other function for the given type signature.

See also dispatch

A single dynamically linked file might define several
functions. However, as Octave searches for functions based on the
functions filename, Octave needs a manner in which to find each of the
functions in the dynamically linked file. On operating systems that
support symbolic links, it is possible to create a symbolic link to the
original file for each of the functions which it contains.

However, there is at least one well known operating system that doesn't
support symbolic links. Making copies of the original file for each of
the functions is undesirable as it increases the
amount of disk space used by Octave. Instead Octave supplies the
`autoload` function, that permits the user to define in which
file a certain function will be found.

**Built-in Function:** `autoload (function, file)`

Define *function* to autoload from *file*.

The second argument, *file*, should be an absolute file name or
a file name in the same directory as the function or script from which
the autoload command was run. *file* should not depend on the
Octave load path.

Normally, calls to `autoload` appear in PKG_ADD script files that
are evaluated when a directory is added to the Octave's load path. To
avoid having to hardcode directory names in *file*, if *file*
is in the same directory as the PKG_ADD script then

```octave
autoload ("foo", "bar.oct");
```

will load the function `foo` from the file `bar.oct`. The above
when `bar.oct` is not in the same directory or uses like

```octave
autoload ("foo", file_in_loadpath ("bar.oct"))
```

are strongly discouraged, as their behavior might be unpredictable.

With no arguments, return a structure containing the current autoload map.

See also PKG_ADD

##### 11.7.4 Function Locking

It is sometime desirable to lock a function into memory with the
`mlock` function. This is typically used for dynamically linked
functions in Oct-files or mex-files that contain some initialization,
and it is desirable that calling `clear` does not remove this
initialization.

As an example,

```octave
mlock ("my_function");
```

prevents `my_function` from being removed from memory, even if
`clear` is called. It is possible to determine if a function is
locked into memory with the `mislocked`, and to unlock a function
with `munlock`, which the following illustrates.

```octave
mlock ("my_function");
mislocked ("my_function")
=> ans = 1
munlock ("my_function");
mislocked ("my_function")
=> ans = 0
```

A common use of `mlock` is to prevent persistent variables from
being removed from memory, as the following example shows:

```octave
function count_calls()
  persistent calls = 0;
  printf ("'count_calls' has been called %d times\n",
          ++calls);
endfunction
mlock ("count_calls");

count_calls ();
-| 'count_calls' has been called 1 times

clear count_calls
count_calls ();
-| 'count_calls' has been called 2 times
```

It is, however, often inconvenient to lock a function from the prompt,
so it is also possible to lock a function from within its body. This
is simply done by calling `mlock` from within the function.

```octave
function count_calls ()
  mlock ();
  persistent calls = 0;
  printf ("'count_calls' has been called %d times\n",
          ++calls);
endfunction
```

`mlock` might equally be used to prevent changes to a function from having
effect in Octave, though a similar effect can be had with the
`ignore_function_time_stamp` function.

**Built-in Function:** `mlock (name)`

Lock the named function into memory. If no function is named
then lock in the current function.

See also munlock, mislocked, persistent

**Built-in Function:** `munlock (fcn)`

Unlock the named function. If no function is named
then unlock the current function.

See also mlock, mislocked, persistent

**Built-in Function:** `mislocked (fcn)`

Return true if the named function is locked. If no function is named
then return true if the current function is locked.

See also mlock, munlock, persistent

#### 11.8 Script Files

A script file is a file containing (almost) any sequence of Octave
commands. It is read and evaluated just as if you had typed each
command at the Octave prompt, and provides a convenient way to perform a
sequence of commands that do not logically belong inside a function.

Unlike a function file, a script file must *not* begin with the
keyword `function`. If it does, Octave will assume that it is a
function file, and that it defines a single function that should be
evaluated as soon as it is defined.

A script file also differs from a function file in that the variables
named in a script file are not local variables, but are in the same
scope as the other variables that are visible on the command line.

Even though a script file may not begin with the `function`
keyword, it is possible to define more than one function in a single
script file and load (but not execute) all of them at once. To do
this, the first token in the file (ignoring comments and other white
space) must be something other than `function`. If you have no
other statements to evaluate, you can use a statement that has no
effect, like this:

```octave
# Prevent Octave from thinking that this
# is a function file:

1;

# Define function one:

function one ()
  ...
```

To have Octave read and compile these functions into an internal form,
you need to make sure that the file is in Octave's load path
(accessible through the `path` function), then simply type the
base name of the file that contains the commands. (Octave uses the
same rules to search for script files as it does to search for
function files.)

If the first token in a file (ignoring comments) is `function`,
Octave will compile the function and try to execute it, printing a
message warning about any non-whitespace characters that appear after
the function definition.

Note that Octave does not try to look up the definition of any identifier
until it needs to evaluate it. This means that Octave will compile the
following statements if they appear in a script file, or are typed at
the command line,

```octave
# not a function file:
1;
function foo ()
  do_something ();
endfunction
function do_something ()
  do_something_else ();
endfunction
```

even though the function `do_something` is not defined before it is
referenced in the function `foo`. This is not an error because
Octave does not need to resolve all symbols that are referenced by a
function until the function is actually evaluated.

Since Octave doesn't look for definitions until they are needed, the
following code will always print `‘bar = 3’` whether it is typed
directly on the command line, read from a script file, or is part of a
function body, even if there is a function or script file called
`‘bar.m’` in Octave's path.

```octave
eval ("bar = 3");
bar
```

Code like this appearing within a function body could fool Octave if
definitions were resolved as the function was being compiled. It would
be virtually impossible to make Octave clever enough to evaluate this
code in a consistent fashion. The parser would have to be able to
perform the call to `eval` at compile time, and that would be
impossible unless all the references in the string to be evaluated could
also be resolved, and requiring that would be too restrictive (the
string might come from user input, or depend on things that are not
known until the function is evaluated).

Although Octave normally executes commands from script files that have
the name `‘*file*.m’`, you can use the function `source` to
execute commands from any file.

**Built-in Function:** `source (file)`

Parse and execute the contents of *file*. This is equivalent to
executing commands from a script file, but without requiring the file to
be named `‘*file*.m’`.

#### 11.9 Function Handles, Inline Functions, and Anonymous Functions

It can be very convenient store a function in a variable so that it
can be passed to a different function. For example, a function that
performs numerical minimisation needs access to the function that
should be minimised.

##### 11.9.1 Function Handles

A function handle is a pointer to another function and is defined with
the syntax

```octave
@function-name
```

For example

```octave
f = @sin;
```

Creates a function handle called `f` that refers to the
function `sin`.

Function handles are used to call other functions indirectly, or to pass
a function as an argument to another function like `quad` or
`fsolve`. For example

```octave
f = @sin;
quad (f, 0, pi)
    => 2
```

You may use `feval` to call a function using function handle, or
simply write the name of the function handle followed by an argument
list. If there are no arguments, you must use an empty argument list
`‘()’`. For example

```octave
f = @sin;
feval (f, pi/4)
    => 0.70711
f (pi/4)
    => 0.70711
```

**Built-in Function:** `functions (fcn_handle)`

Return a struct containing information about the function handle
*fcn_handle*.

**Built-in Function:** `func2str (fcn_handle)`

Return a string containing the name of the function referenced by
the function handle *fcn_handle*.

**Built-in Function:** `str2func (fcn_name)`

Return a function handle constructed from the string *fcn_name*.

##### 11.9.2 Anonymous Functions

Anonymous functions are defined using the syntax

```octave
@(argument-list) expression
```

Any variables that are not found in the argument list are inherited from
the enclosing scope. Anonymous functions are useful for creating simple
unnamed functions from expressions or for wrapping calls to other
functions to adapt them for use by functions like `quad`. For
example,

```octave
f = @(x) x.^2;
quad (f, 0, 10)
    => 333.33
```

creates a simple unnamed function from the expression `x.^2` and
passes it to `quad`,

```octave
quad (@(x) sin (x), 0, pi)
    => 2
```

wraps another function, and

```octave
a = 1;
b = 2;
quad (@(x) betainc (x, a, b), 0, 0.4)
    => 0.13867
```

adapts a function with several parameters to the form required by
`quad`. In this example, the values of *a* and *b* that
are passed to `betainc` are inherited from the current
environment.

##### 11.9.3 Inline Functions

An inline function is created from a string containing the function
body using the `inline` function. The following code defines the
function f(x) = x^2 + 2.

```octave
f = inline("x^2 + 2");
```

After this it is possible to evaluate f at any x by
writing `f(x)`.

**Built-in Function:** `inline (str)`

**Built-in Function:** `inline (str, arg1, ...)`

**Built-in Function:** `inline (str, n)`

Create an inline function from the character string *str*.
If called with a single argument, the arguments of the generated
function are extracted from the function itself. The generated
function arguments will then be in alphabetical order. It should
be noted that i, and j are ignored as arguments due to the
ambiguity between their use as a variable or their use as an inbuilt
constant. All arguments followed by a parenthesis are considered
to be functions.

If the second and subsequent arguments are character strings,
they are the names of the arguments of the function.

If the second argument is an integer *n*, the arguments are
`"x"`, `"P1"`, ..., `"P*N*"`.

See also argnames, formula, vectorize

**Built-in Function:** `argnames (fun)`

Return a cell array of character strings containing the names of
the arguments of the inline function *fun*.

See also inline, formula, vectorize

**Built-in Function:** `formula (fun)`

Return a character string representing the inline function *fun*.
Note that `char (*fun*)` is equivalent to
`formula (*fun*)`.

See also argnames, inline, vectorize

**Built-in Function:** `vectorize (fun)`

Create a vectorized version of the inline function *fun*
by replacing all occurrences of `*`, `/`, etc., with
`.*`, `./`, etc.

#### 11.10 Commands

Commands are a special class of functions that only accept string
input arguments. A command can be called as an ordinary function, but
it can also be called without the parentheses like the following example
shows

```octave
my_command hello world
```

which is the same as

```octave
my_command("hello", "world")
```

The general form of a command call is

```octave
name arg1 arg2 ...
```

which translates directly to

```octave
name ("arg1", "arg2", ...)
```

A function can be used as a command if it accepts string input arguments.
To do this, the function must be marked as a command, which can be done
with the `mark_as_command` command like this

```octave
mark_as_command name
```

where `name` is the function to be marked as a command.

One difficulty of commands occurs when one of the string input arguments
are stored in a variable. Since Octave can't tell the difference between
a variable name, and an ordinary string, it is not possible to pass a
variable as input to a command. In such a situation a command must be
called as a function.

**Built-in Function:** `mark_as_command (name)`

Enter *name* into the list of commands.

See also unmark_command, iscommand

**Built-in Function:** `unmark_command (name)`

Remove *name* from the list of commands.

See also mark_as_command, iscommand

**Built-in Function:** `iscommand (name)`

Return true if *name* is a command style function. If *name*
is omitted, return a list of identifiers which are marked as commands with
`mark_as_command`.

See also mark_as_command, unmark_command

**Built-in Function:** `mark_as_rawcommand (name)`

Enter *name* into the list of raw input commands and to the list of
command style functions.
Raw input commands are like normal command style functions, but they
receive their input unprocessed (i.e. strings still contain the quotes
and escapes they had when input). However, comments and continuations
are handled as usual, you cannot pass a token starting with a comment
character ('#' or '%') to your function, and the last token cannot be
a continuation token ('\' or '...').

See also unmark_rawcommand, israwcommand, iscommand, mark_as_command

**Built-in Function:** `unmark_rawcommand (name)`

Remove *name* from the list of raw input commands.
Note that this does not remove *name* from the list of command style
functions.

See also mark_as_rawcommand, israwcommand, iscommand, unmark_command

**Built-in Function:** `israwcommand (name)`

Return true if *name* is a raw input command function.
If *name* is omitted, return a list of identifiers which are marked as
raw input commands with mark_as_rawcommand.

See also mark_as_rawcommand, unmark_rawcommand

#### 11.11 Organization of Functions Distributed with Octave

Many of the standard functions provided in Octave are distributed as function files.
They are loosely organized by topic, in subdirectories of
`‘*octave-home*/lib/octave/*version*/m’`, to make it easier
to find them.

The following is a list of all the function file subdirectories, and the
types of functions you will find there.

`‘audio’`

Functions for playing and recording sounds.

`‘control’`

Functions for design and simulation of automatic control systems.

`‘elfun’`

Elementary functions.

`‘finance’`

Functions for computing interest payments, investment values, and rates
of return.

`‘general’`

Miscellaneous matrix manipulations, like `flipud`, `rot90`,
and `triu`, as well as other basic functions, like
`ismatrix`, `nargchk`, etc.

`‘image’`

Image processing tools. These functions require the X Window System.

`‘io’`

Input-output functions.

`‘linear-algebra’`

Functions for linear algebra.

`‘miscellaneous’`

Functions that don't really belong anywhere else.

`‘optimization’`

Minimization of functions.

`‘path’`

Functions to manage the directory path Octave uses to find functions.

`‘pkg’`

Install external packages of functions in Octave.

`‘plot’`

Functions for displaying and printing two- and three-dimensional graphs.

`‘polynomial’`

Functions for manipulating polynomials.

`‘set’`

Functions for creating and manipulating sets of unique values.

`‘signal’`

Functions for signal processing applications.

`‘sparse’`

Functions for handling sparse matrices.

`‘specfun’`

Special functions.

`‘special-matrix’`

Functions that create special matrix forms.

`‘startup’`

Octave's system-wide startup file.

`‘statistics’`

Statistical functions.

`‘strings’`

Miscellaneous string-handling functions.

`‘testfun’`

Perform unit tests on other functions.

`‘time’`

Functions related to time keeping.

### 15 Plotting

#### 15.1 Plotting Basics

Octave makes it easy to create many different types of two- and
three-dimensional plots using a few high-level functions.

If you need finer control over graphics, see section 15.2 [Advanced Plotting](https://book.huihoo.com/gnu-octave-manual-version-3/octave_165.html).

##### 15.1.1 Two-Dimensional Plots

The `plot` function allows you to create simple x-y plots with
linear axes. For example,

```octave
x = -10:0.1:10;
plot (x, sin (x));
```

displays a sine wave shown in [Figure 15-1](https://book.huihoo.com/gnu-octave-manual-version-3/octave_158.html). On most systems, this
command will open a separate plot window to display the graph.

*[figure]*

Figure 15-1: Simple Two-Dimensional Plot.

The function `fplot` also generates two-dimensional plots with
linear axes using a function name and limits for the range of the
x-coordinate instead of the x and y data. For example,

```octave
fplot (@sin, [-10, 10], 201);
```

produces a plot that is equivalent to the one above, but also includes a
legend displaying the name of the plotted function.

**Function File:** `plot (y)`

**Function File:** `plot (x, y)`

**Function File:** `plot (x, y, property, value, ...)`

**Function File:** `plot (x, y, fmt)`

**Function File:** `plot (h, ...)`

Produces two-dimensional plots. Many different combinations of
arguments are possible. The simplest form is

```octave
plot (y)
```

where the argument is taken as the set of *y* coordinates and the
*x* coordinates are taken to be the indices of the elements,
starting with 1.

To save a plot, in one of several image formats such as PostScript
or PNG, use the `print` command.

If more than one argument is given, they are interpreted as

```octave
plot (y, property, value, ...)
```

or

```octave
plot (x, y, property, value, ...)
```

or

```octave
plot (x, y, fmt, ...)
```

and so on. Any number of argument sets may appear. The *x* and
*y* values are interpreted as follows:

- If a single data argument is supplied, it is taken as the set of *y*
coordinates and the *x* coordinates are taken to be the indices of
the elements, starting with 1.
- If the *x* is a vector and *y* is a matrix, then
the columns (or rows) of *y* are plotted versus *x*.
(using whichever combination matches, with columns tried first.)
- If the *x* is a matrix and *y* is a vector,
*y* is plotted versus the columns (or rows) of *x*.
(using whichever combination matches, with columns tried first.)
- If both arguments are vectors, the elements of *y* are plotted versus
the elements of *x*.
- If both arguments are matrices, the columns of *y* are plotted
versus the columns of *x*. In this case, both matrices must have
the same number of rows and columns and no attempt is made to transpose
the arguments to make the number of rows match. If both arguments are scalars, a single point is plotted.

Multiple property-value pairs may be specified, but they must appear
in pairs. These arguments are applied to the lines drawn by
`plot`.

If the *fmt* argument is supplied, it is interpreted as
follows. If *fmt* is missing, the default gnuplot line style
is assumed.

`‘-’`

Set lines plot style (default).

`‘.’`

Set dots plot style.

`‘^’`

Set impulses plot style.

`‘L’`

Set steps plot style.

`‘ n ’`

Interpreted as the plot color if *n* is an integer in the range 1 to
6.

`‘ nm ’`

If *nm* is a two digit integer and *m* is an integer in the
range 1 to 6, *m* is interpreted as the point style. This is only
valid in combination with the `@` or `-@` specifiers.

`‘ c ’`

If *c* is one of `"k"` (black), `"r"` (red), `"g"`
(green), `"b"` (blue), `"m"` (magenta), `"c"` (cyan),
or `"w"` (white), it is interpreted as the line plot color.

`‘";title;"’`

Here `"title"` is the label for the key.

`‘+’`

`‘*’`

`‘o’`

`‘x’`

Used in combination with the points or linespoints styles, set the point
style.

The *fmt* argument may also be used to assign key titles.
To do so, include the desired title between semi-colons after the
formatting sequence described above, e.g. "+3;Key Title;"
Note that the last semi-colon is required and will generate an error if
it is left out.

Here are some plot examples:

```octave
plot (x, y, "@12", x, y2, x, y3, "4", x, y4, "+")
```

This command will plot `y` with points of type 2 (displayed as
`‘+’`) and color 1 (red), `y2` with lines, `y3` with lines of
color 4 (magenta) and `y4` with points displayed as `‘+’`.

```octave
plot (b, "*", "markersize", 3)
```

This command will plot the data in the variable `b`,
with points displayed as `‘*’` with a marker size of 3.

```octave
t = 0:0.1:6.3;
plot (t, cos(t), "-;cos(t);", t, sin(t), "+3;sin(t);");
```

This will plot the cosine and sine functions and label them accordingly
in the key.

If the first argument is an axis handle, then plot into these axes,
rather than the current axis handle returned by `gca`.

See also semilogx, semilogy, loglog, polar, mesh, contour, bar,
stairs, errorbar, xlabel, ylabel, title, print

**Function File:** `fplot (fn, limits)`

**Function File:** `fplot (fn, limits, tol)`

**Function File:** `fplot (fn, limits, n)`

**Function File:** `fplot (..., fmt)`

Plot a function *fn*, within the defined limits. *fn*
an be either a string, a function handle or an inline function.
The limits of the plot are given by *limits* of the form
`[*xlo*, *xhi*]` or `[*xlo*, *xhi*, *ylo*, *yhi*]`. *tol* is the default tolerance to use for the
plot, and if *tol* is an integer it is assumed that it defines the
number points to use in the plot. The *fmt* argument is passed
to the plot command.

```octave
fplot ("cos", [0, 2*pi])
fplot ("[cos(x), sin(x)]", [0, 2*pi])
```

See also plot

The functions `semilogx`, `semilogy`, and `loglog` are
similar to the `plot` function, but produce plots in which one or
both of the axes use log scales.

**Function File:** `semilogx (args)`

Produce a two-dimensional plot using a log scale for the *x*
axis. See the description of `plot` for a description of the
arguments that `semilogx` will accept.

See also plot, semilogy, loglog

**Function File:** `semilogy (args)`

Produce a two-dimensional plot using a log scale for the *y*
axis. See the description of `plot` for a description of the
arguments that `semilogy` will accept.

See also plot, semilogx, loglog

**Function File:** `loglog (args)`

Produce a two-dimensional plot using log scales for both axes. See
the description of `plot` for a description of the arguments
that `loglog` will accept.

See also plot, semilogx, semilogy

The functions `bar`, `barh`, `stairs`, and `stem`
are useful for displaying discrete data. For example,

```octave
hist (randn (10000, 1), 30);
```

produces the histogram of 10,000 normally distributed random numbers
shown in [Figure 15-2](https://book.huihoo.com/gnu-octave-manual-version-3/octave_158.html).

*[figure]*

Figure 15-2: Histogram.

**Function File:** `bar (x, y)`

**Function File:** `bar (y)`

**Function File:** `bar (x, y, w)`

**Function File:** `bar (x, y, w, style)`

**Function File:** `h = bar (..., prop, val)`

**Function File:** `bar (h, ...)`

Produce a bar graph from two vectors of x-y data.

If only one argument is given, it is taken as a vector of y-values
and the x coordinates are taken to be the indices of the elements.

The default width of 0.8 for the bars can be changed using *w*.

If *y* is a matrix, then each column of *y* is taken to be a
separate bar graph plotted on the same graph. By default the columns
are plotted side-by-side. This behavior can be changed by the *style*
argument, which can take the values `"grouped"` (the default),
or `"stacked"`.

The optional return value *h* provides a handle to the patch object.
Whereas the option input handle *h* allows an axis handle to be passed.
Properties of the patch graphics object can be changed using
*prop*, *val* pairs.

See also barh, plot

**Function File:** `barh (x, y)`

**Function File:** `barh (y)`

**Function File:** `barh (x, y, w)`

**Function File:** `barh (x, y, w, style)`

**Function File:** `h = barh (..., prop, val)`

**Function File:** `barh (h, ...)`

Produce a horizontal bar graph from two vectors of x-y data.

If only one argument is given, it is taken as a vector of y-values
and the x coordinates are taken to be the indices of the elements.

The default width of 0.8 for the bars can be changed using *w*.

If *y* is a matrix, then each column of *y* is taken to be a
separate bar graph plotted on the same graph. By default the columns
are plotted side-by-side. This behavior can be changed by the *style*
argument, which can take the values `"grouped"` (the default),
or `"stacked"`.

The optional return value *h* provides a handle to the patch object.
Whereas the option input handle *h* allows an axis handle to be passed.
Properties of the patch graphics object can be changed using
*prop*, *val* pairs.

See also bar, plot

**Function File:** `hist (y, x, norm)`

Produce histogram counts or plots.

With one vector input argument, plot a histogram of the values with
10 bins. The range of the histogram bins is determined by the range
of the data.

Given a second scalar argument, use that as the number of bins.

Given a second vector argument, use that as the centers of the bins,
with the width of the bins determined from the adjacent values in
the vector.

If third argument is provided, the histogram is normalised such that
the sum of the bars is equal to *norm*.

Extreme values are lumped in the first and last bins.

With two output arguments, produce the values *nn* and *xx* such
that `bar (*xx*, *nn*)` will plot the histogram.

See also bar

**Function File:** `stairs (x, y)`

Produce a stairstep plot. The arguments may be vectors or matrices.

If only one argument is given, it is taken as a vector of y-values
and the x coordinates are taken to be the indices of the elements.

If two output arguments are specified, the data are generated but
not plotted. For example,

```octave
stairs (x, y);
```

and

```octave
[xs, ys] = stairs (x, y);
plot (xs, ys);
```

are equivalent.

See also plot, semilogx, semilogy, loglog, polar, mesh, contour,
bar, xlabel, ylabel, title

**Function File:** `h = stem (x, y, linespec)`

Plot a stem graph and return the handles of the line and marker
objects used to draw the stems. The default color is `"r"`
(red). The default line style is `"-"` and the default marker is
`"o"`.

For example,

```octave
x = 1:10;
stem (x);
```

plots 10 stems with heights from 1 to 10;

```octave
x = 1:10;
y = ones (1, length (x))*2.*x;
stem (x, y);
```

plots 10 stems with heights from 2 to 20;

```octave
x = 1:10;
y = ones (size (x))*2.*x;
h = stem (x, y, "b");
```

plots 10 bars with heights from 2 to 20
(the color is blue, and *h* is a 2-by-10 array of handles in
which the first row holds the line handles and
the second row holds the marker handles);

```octave
x = 1:10;
y = ones (size (x))*2.*x;
h = stem (x, y, "-.k");
```

plots 10 stems with heights from 2 to 20
(the color is black, line style is `"-."`, and *h* is a 2-by-10
array of handles in which the first row holds the line handles and
the second row holds the marker handles);

```octave
x = 1:10;
y = ones (size (x))*2.*x;
h = stem (x, y, "-.k.");
```

plots 10 stems with heights from 2 to 20
(the color is black, line style is `"-."` and the marker style
is `"."`, and *h* is a 2-by-10 array of handles in which the
first row holds the line handles and the second row holds the marker
handles);

```octave
x = 1:10;
y = ones (size (x))*2.*x;
h = stem (x, y, "fill");
```

plots 10 stems with heights from 2 to 20
(the color is rgb-triple defined, the line style is `"-"`,
the marker style is `"o"`, and *h* is a 2-by-10 array of
handles in which the first row holds the line handles and the second
row holds the marker handles).

Color definitions with rgb-triples are not valid!

See also bar, barh, plot

The `contour` and `contourc` functions produce two-dimensional
contour plots from three dimensional data.

**Function File:** `contour (z)`

**Function File:** `contour (z, vn)`

**Function File:** `contour (x, y, z)`

**Function File:** `contour (x, y, z, vn)`

**Function File:** `contour (..., style)`

**Function File:** `contour (h, ...)`

**Function File:** `[c, h] = contour (...)`

Plot level curves (contour lines) of the matrix *z*, using the
contour matrix *c* computed by `contourc` from the same
arguments; see the latter for their interpretation. The set of
contour levels, *c*, is only returned if requested. For example:

```octave
x = 0:2;
y = x;
z = x' * y;
contour (x, y, z, 2:3)
```

The style to use for the plot can be defined with a line style *style*
in a similar manner to the line styles used with the `plot` command.
Any markers defined by *style* are ignored.

The optional input and output argument *h* allows an axis handle to
be passed to `contour` and the handles to the contour objects to be
returned.

See also contourc, patch, plot

**Function File:** `[c, lev] = contourc (x, y, z, vn)`

Compute isolines (contour lines) of the matrix *z*.
Parameters *x*, *y* and *vn* are optional.

The return value *lev* is a vector of the contour levels.
The return value *c* is a 2 by *n* matrix containing the
contour lines in the following format

```octave
c = [lev1, x1, x2, ..., levn, x1, x2, ...
     len1, y1, y2, ..., lenn, y1, y2, ...]
```

in which contour line *n* has a level (height) of *levn* and
length of *lenn*.

If *x* and *y* are omitted they are taken as the row/column
index of *z*. *vn* is either a scalar denoting the number of lines
to compute or a vector containing the values of the lines. If only one
value is wanted, set `*vn* = [val, val]`;
If *vn* is omitted it defaults to 10.

For example,

```octave
x = 0:2;
y = x;
z = x' * y;
contourc (x, y, z, 2:3)
=>   2.0000   2.0000   1.0000   3.0000   1.5000   2.0000
     2.0000   1.0000   2.0000   2.0000   2.0000   1.5000
```

See also contour

The `errorbar`, `semilogxerr`, `semilogyerr`, and
`loglogerr` functions produce plots with error bar markers. For
example,

```octave
x = 0:0.1:10;
y = sin (x);
yp =  0.1 .* randn (size (x));
ym = -0.1 .* randn (size (x));
errorbar (x, sin (x), ym, yp);
```

produces the figure shown in [Figure 15-3](https://book.huihoo.com/gnu-octave-manual-version-3/octave_158.html).

*[figure]*

Figure 15-3: Errorbar plot.

**Function File:** `errorbar (args)`

This function produces two-dimensional plots with errorbars. Many
different combinations of arguments are possible. The simplest form is

```octave
errorbar (y, ey)
```

where the first argument is taken as the set of *y* coordinates
and the second argument *ey* is taken as the errors of the
*y* values. *x* coordinates are taken to be the indices
of the elements, starting with 1.

If more than two arguments are given, they are interpreted as

```octave
errorbar (x, y, ..., fmt, ...)
```

where after *x* and *y* there can be up to four error
parameters such as *ey*, *ex*, *ly*, *uy* etc.,
depending on the plot type. Any number of argument sets may appear,
as long as they are separated with a format string *fmt*.

If *y* is a matrix, *x* and error parameters must also be matrices
having same dimensions. The columns of *y* are plotted versus the
corresponding columns of *x* and errorbars are drawn from
the corresponding columns of error parameters.

If *fmt* is missing, yerrorbars ("~") plot style is assumed.

If the *fmt* argument is supplied, it is interpreted as in
normal plots. In addition the following plot styles are supported by
errorbar:

`‘~’`

Set yerrorbars plot style (default).

`‘>’`

Set xerrorbars plot style.

`‘~>’`

Set xyerrorbars plot style.

`‘#’`

Set boxes plot style.

`‘#~’`

Set boxerrorbars plot style.

`‘#~>’`

Set boxxyerrorbars plot style.

Examples:

```octave
errorbar (x, y, ex, ">")
```

produces an xerrorbar plot of *y* versus *x* with *x*
errorbars drawn from *x*-*ex* to *x*+*ex*.

```octave
errorbar (x, y1, ey, "~",
x, y2, ly, uy)
```

produces yerrorbar plots with *y1* and *y2* versus *x*.
Errorbars for *y1* are drawn from *y1*-*ey* to
*y1*+*ey*, errorbars for *y2* from *y2*-*ly* to
*y2*+*uy*.

```octave
errorbar (x, y, lx, ux,
ly, uy, "~>")
```

produces an xyerrorbar plot of *y* versus *x* in which
*x* errorbars are drawn from *x*-*lx* to *x*+*ux*
and *y* errorbars from *y*-*ly* to *y*+*uy*.

See also semilogxerr, semilogyerr, loglogerr

**Function File:** `semilogxerr (args)`

Produce two-dimensional plots on a semilogarithm axis with errorbars.
Many different combinations of arguments are possible. The most used
form is

```octave
semilogxerr (x, y, ey, fmt)
```

which produces a semi-logarithm plot of *y* versus *x*
with errors in the *y*-scale defined by *ey* and the plot
format defined by *fmt*. See errorbar for available formats and
additional information.

See also errorbar, loglogerr semilogyerr

**Function File:** `semilogyerr (args)`

Produce two-dimensional plots on a semilogarithm axis with errorbars.
Many different combinations of arguments are possible. The most used
form is

```octave
semilogyerr (x, y, ey, fmt)
```

which produces a semi-logarithm plot of *y* versus *x*
with errors in the *y*-scale defined by *ey* and the plot
format defined by *fmt*. See errorbar for available formats and
additional information.

See also errorbar, loglogerr semilogxerr

**Function File:** `loglogerr (args)`

Produce two-dimensional plots on double logarithm axis with
errorbars. Many different combinations of arguments are possible.
The most used form is

```octave
loglogerr (x, y, ey, fmt)
```

which produces a double logarithm plot of *y* versus *x*
with errors in the *y*-scale defined by *ey* and the plot
format defined by *fmt*. See errorbar for available formats and
additional information.

See also errorbar, semilogxerr, semilogyerr

Finally, the `polar` function allows you to easily plot data in
polar coordinates. However, the display coordinates remain rectangular
and linear. For example,

```octave
polar (0:0.1:10*pi, 0:0.1:10*pi);
```

produces the spiral plot shown in [Figure 15-4](https://book.huihoo.com/gnu-octave-manual-version-3/octave_158.html).

*[figure]*

Figure 15-4: Polar plot.

**Function File:** `polar (theta, rho, fmt)`

Make a two-dimensional plot given the polar coordinates *theta* and
*rho*.

The optional third argument specifies the line type.

See also plot

**Function File:** `pie (y)`

**Function File:** `pie (y, explode)`

**Function File:** `pie (..., labels)`

**Function File:** `pie (h, ...);`

**Function File:** `h = pie (...);`

Produce a pie chart.

Called with a single vector argument, produces a pie chart of the
elements in *x*, with the size of the slice determined by percentage
size of the values of *x*.

The variable *explode* is a vector of the same length as *x* that
if non zero 'explodes' the slice from the pie chart.

If given *labels* is a cell array of strings of the same length as
*x*, giving the labels of each of the slices of the pie chart.

The optional return value *h* provides a handle to the patch object.

See also bar, stem

**Function File:** `quiver (u, v)`

**Function File:** `quiver (x, y, u, v)`

**Function File:** `quiver (..., s)`

**Function File:** `quiver (..., style)`

**Function File:** `quiver (..., 'filled')`

**Function File:** `quiver (h, ...)`

**Function File:** `h = quiver (...)`

Plot the `(*u*, *v*)` components of a vector field in
an `(*x*, *y*)` meshgrid. If the grid is uniform, you can
specify *x* and *y* as vectors.

If *x* and *y* are undefined they are assumed to be
`(1:*m*, 1:*n*)` where `[*m*, *n*] = size(*u*)`.

The variable *s* is a scalar defining a scaling factor to use for
the arrows of the field relative to the mesh spacing. A value of 0
disables all scaling. The default value is 1.

The style to use for the plot can be defined with a line style *style*
in a similar manner to the line styles used with the `plot` command.
If a marker is specified then markers at the grid points of the vectors are
printed rather than arrows. If the argument 'filled' is given then the
markers as filled.

The optional return value *h* provides a list of handles to the
parts of the vector field (body, arrow and marker).

```octave
[x, y] = meshgrid (1:2:20);
quiver (x, y, sin (2*pi*x/10), sin (2*pi*y/10));
```

See also plot

**Function File:** `pcolor (x, y, c)`

**Function File:** `pcolor (c)`

Density plot for given matrices *x*, and *y* from `meshgrid` and
a matrix *c* corresponding to the *x* and *y* coordinates of
the mesh. If *x* and *y* are vectors, then a typical vertex
is (*x*(j), *y*(i), *c*(i,j)). Thus, columns of *c*
correspond to different *x* values and rows of *c* correspond
to different *y* values.

See also meshgrid, contour

**Function File:** `area (x, y)`

**Function File:** `area (x, y, lvl)`

**Function File:** `area (..., prop, val, ...)`

**Function File:** `area (y, ...)`

**Function File:** `area (h, ...)`

**Function File:** `h = area (...)`

Area plot of cumulative sum of the columns of *y*. This shows the
contributions of a value to a sum, and is functionally similar to
`plot (*x*, cumsum (*y*, 2))`, except that the area under
the curve is shaded.

If the *x* argument is omitted it is assumed to be given by
`1 : rows (*y*)`. A value *lvl* can be defined that determines
where the base level of the shading under the curve should be defined.

Additional arguments to the `area` function are passed to the
`patch`. The optional return value *h* provides a handle to
the list of patch objects.

See also plot, patch

The axis function may be used to change the axis limits of an existing
plot.

**Function File:** `axis (limits)`

Set axis limits for plots.

The argument *limits* should be a 2, 4, or 6 element vector. The
first and second elements specify the lower and upper limits for the x
axis. The third and fourth specify the limits for the y axis, and the
fifth and sixth specify the limits for the z axis.

Without any arguments, `axis` turns autoscaling on.

With one output argument, `x=axis` returns the current axes

The vector argument specifying limits is optional, and additional
string arguments may be used to specify various axis properties. For
example,

```octave
axis ([1, 2, 3, 4], "square");
```

forces a square aspect ratio, and

```octave
axis ("labely", "tic");
```

turns tic marks on for all axes and tic mark labels on for the y-axis
only.

The following options control the aspect ratio of the axes.

`"square"`

Force a square aspect ratio.

`"equal"`

Force x distance to equal y-distance.

`"normal"`

Restore the balance.

The following options control the way axis limits are interpreted.

`"auto"`

Set the specified axes to have nice limits around the data
or all if no axes are specified.

`"manual"`

Fix the current axes limits.

`"tight"`

Fix axes to the limits of the data (not implemented).

The option `"image"` is equivalent to `"tight"` and
`"equal"`.

The following options affect the appearance of tic marks.

`"on"`

Turn tic marks and labels on for all axes.

`"off"`

Turn tic marks off for all axes.

`"tic[xyz]"`

Turn tic marks on for all axes, or turn them on for the
specified axes and off for the remainder.

`"label[xyz]"`

Turn tic labels on for all axes, or turn them on for the
specified axes and off for the remainder.

`"nolabel"`

Turn tic labels off for all axes.

Note, if there are no tic marks for an axis, there can be no labels.

The following options affect the direction of increasing values on
the axes.

`"ij"`

Reverse y-axis, so lower values are nearer the top.

`"xy"`

Restore y-axis, so higher values are nearer the top.

If an axes handle is passed as the first argument, then operate on
this axes rather than the current axes.

Similarly the axis limits of the colormap can be changed with the caxis
function.

**Function File:** `caxis (limits)`

**Function File:** `caxis (h, ...)`

Set color axis limits for plots.

The argument *limits* should be a 2 element vector specifying the
lower and upper limits to assign to the first and last value in the
colormap. Values outside this range are clamped to the first and last
colormap entries.

If *limits* is 'auto', then automatic colormap scaling is applied,
whereas if *limits* is 'manual' the colormap scaling is set to manual.

Called without any arguments to current color axis limits are returned.

If an axes handle is passed as the first argument, then operate on
this axes rather than the current axes.

##### 15.1.2 Three-Dimensional Plotting

The function `mesh` produces mesh surface plots. For example,

```octave
tx = ty = linspace (-8, 8, 41)';
[xx, yy] = meshgrid (tx, ty);
r = sqrt (xx .^ 2 + yy .^ 2) + eps;
tz = sin (r) ./ r;
mesh (tx, ty, tz);
```

produces the familiar “sombrero” plot shown in [Figure 15-5](https://book.huihoo.com/gnu-octave-manual-version-3/octave_159.html). Note
the use of the function `meshgrid` to create matrices of X and Y
coordinates to use for plotting the Z data. The `ndgrid` function
is similar to `meshgrid`, but works for N-dimensional matrices.

*[figure]*

Figure 15-5: Mesh plot.

The `meshc` function is similar to `mesh`, but also produces a
plot of contours for the surface.

The `plot3` function displays arbitrary three-dimensional data,
without requiring it to form a surface. For example

```octave
t = 0:0.1:10*pi;
r = linspace (0, 1, numel (t));
z = linspace (0, 1, numel (t));
plot3 (r.*sin(t), r.*cos(t), z);
```

displays the spiral in three dimensions shown in [Figure 15-6](https://book.huihoo.com/gnu-octave-manual-version-3/octave_159.html).

*[figure]*

Figure 15-6: Three dimensional spiral.

Finally, the `view` function changes the viewpoint for
three-dimensional plots.

**Function File:** `mesh (x, y, z)`

Plot a mesh given matrices *x*, and *y* from `meshgrid` and
a matrix *z* corresponding to the *x* and *y* coordinates of
the mesh. If *x* and *y* are vectors, then a typical vertex
is (*x*(j), *y*(i), *z*(i,j)). Thus, columns of *z*
correspond to different *x* values and rows of *z* correspond
to different *y* values.

See also meshgrid, contour

**Function File:** `meshc (x, y, z)`

Plot a mesh and contour given matrices *x*, and *y* from
`meshgrid` and a matrix *z* corresponding to the *x* and
*y* coordinates of the mesh. If *x* and *y* are vectors,
then a typical vertex is (*x*(j), *y*(i), *z*(i,j)). Thus,
columns of *z* correspond to different *x* values and rows of
*z* correspond to different *y* values.

See also meshgrid, mesh, contour

**Function File:** `hidden (mode)`

**Function File:** `hidden ()`

Manipulation the mesh hidden line removal. Called with no argument
the hidden line removal is toggled. The argument *mode* can be either
'on' or 'off' and the set of the hidden line removal is set accordingly.

See also mesh, meshc, surf

**Function File:** `surf (x, y, z)`

Plot a surface given matrices *x*, and *y* from `meshgrid` and
a matrix *z* corresponding to the *x* and *y* coordinates of
the mesh. If *x* and *y* are vectors, then a typical vertex
is (*x*(j), *y*(i), *z*(i,j)). Thus, columns of *z*
correspond to different *x* values and rows of *z* correspond
to different *y* values.

See also mesh, surface

**Function File:** `surfc (x, y, z)`

Plot a surface and contour given matrices *x*, and *y* from
`meshgrid` and a matrix *z* corresponding to the *x* and
*y* coordinates of the mesh. If *x* and *y* are vectors,
then a typical vertex is (*x*(j), *y*(i), *z*(i,j)). Thus,
columns of *z* correspond to different *x* values and rows of
*z* correspond to different *y* values.

See also meshgrid, surf, contour

**Function File:** `[xx, yy, zz] = meshgrid (x, y, z)`

**Function File:** `[xx, yy] = meshgrid (x, y)`

**Function File:** `[xx, yy] = meshgrid (x)`

Given vectors of *x* and *y* and *z* coordinates, and
returning 3 arguments, return three dimensional arrays corresponding
to the *x*, *y*, and *z* coordinates of a mesh. When
returning only 2 arguments, return matrices corresponding to the
*x* and *y* coordinates of a mesh. The rows of *xx* are
copies of *x*, and the columns of *yy* are copies of *y*.
If *y* is omitted, then it is assumed to be the same as *x*,
and *z* is assumed the same as *y*.

See also mesh, contour

**Function File:** `[y1, y2, ..., y n] = ndgrid (x1, x2, ..., x n)`

**Function File:** `[y1, y2, ..., y n] = ndgrid (x)`

Given n vectors *x1*, ... *x*n, `ndgrid` returns
n arrays of dimension n. The elements of the i-th output argument
contains the elements of the vector *x*i repeated over all
dimensions different from the i-th dimension. Calling ndgrid with
only one input argument *x* is equivalent of calling ndgrid with
all n input arguments equal to *x*:

[*y1*, *y2*, ..., *y*n] = ndgrid (*x*, ..., *x*)

See also meshgrid

**Function File:** `plot3 (args)`

Produce three-dimensional plots. Many different combinations of
arguments are possible. The simplest form is

```octave
plot3 (x, y, z)
```

in which the arguments are taken to be the vertices of the points to
be plotted in three dimensions. If all arguments are vectors of the
same length, then a single continuous line is drawn. If all arguments
are matrices, then each column of the matrices is treated as a
separate line. No attempt is made to transpose the arguments to make
the number of rows match.

If only two arguments are given, as

```octave
plot3 (x, c)
```

the real and imaginary parts of the second argument are used
as the *y* and *z* coordinates, respectively.

If only one argument is given, as

```octave
plot3 (c)
```

the real and imaginary parts of the argument are used as the *y*
and *z* values, and they are plotted versus their index.

Arguments may also be given in groups of three as

```octave
plot3 (x1, y1, z1, x2, y2, z2, ...)
```

in which each set of three arguments is treated as a separate line or
set of lines in three dimensions.

To plot multiple one- or two-argument groups, separate each group
with an empty format string, as

```octave
plot3 (x1, c1, "", c2, "", ...)
```

An example of the use of `plot3` is

```octave
   z = [0:0.05:5];
   plot3 (cos(2*pi*z), sin(2*pi*z), z, ";helix;");
   plot3 (z, exp(2i*pi*z), ";complex sinusoid;");
```

See also plot

**Function File:** `view (azimuth, elevation)`

**Function File:** `view (dims)`

**Function File:** `[azimuth, elevation] = view ()`

Set or get the viewpoint for the current axes.

**Function File:** `shading (type)`

**Function File:** `shading (ax, ...)`

Set the shading of surface or patch graphic objects. Valid arguments
for *type* are `"flat"`, `"interp"`, or
`"faceted"`. If *ax* is given the shading is applied to
axis *ax* instead of the current axis.

##### 15.1.3 Plot Annotations

You can add titles, axis labels, legends, and arbitrary text to an
existing plot. For example,

```octave
x = -10:0.1:10;
plot (x, sin (x));
title ("sin(x) for x = -10:0.1:10");
xlabel ("x");
ylabel ("sin (x)");
text (pi, 0.7, "arbitrary text");
legend ("sin (x)");
```

The functions `grid` and `box` may also be used to add grid
and border lines to the plot. By default, the grid is off and the
border lines are on.

**Function File:** `title (title)`

Create a title object and return a handle to it.

**Function File:** `legend (st1, st2, ...)`

**Function File:** `legend (st1, st2, ..., "location", pos)`

**Function File:** `legend (matstr)`

**Function File:** `legend (matstr, "location", pos)`

**Function File:** `legend (cell)`

**Function File:** `legend (cell, "location", pos)`

**Function File:** `legend (' func ')`

Display a legend for the current axes using the specified strings
as labels. Legend entries may be specified as individual character
string arguments, a character array, or a cell array of character
strings. Legend works on line graphs, bar graphs, etc. A plot must
exist before legend is called.

The optional parameter *pos* specifies the location of the legend
as follows:

Some specific functions are directly available using *func*:

`"show"`

Show legends from the plot

`"hide"`

`"off"`

Hide legends from the plot

`"boxon"`

Draw a box around legends

`"boxoff"`

Withdraw the box around legends

`"left"`

Text is to the left of the keys

`"right"`

Text is to the right of the keys

**Function File:** `h = text (x, y, label)`

**Function File:** `h = text (x, y, z, label)`

**Function File:** `h = text (x, y, label, p1, v1, ...)`

**Function File:** `h = text (x, y, z, label, p1, v1, ...)`

Create a text object with text *label* at position *x*,
*y*, *z* on the current axes. Property-value pairs following
*label* may be used to specify the appearance of the text.

**Function File:** `xlabel (string)`

**Function File:** `ylabel (string)`

**Function File:** `zlabel (string)`

**Function File:** `xlabel (h, string)`

Specify x, y, and z axis labels for the current figure. If *h* is
specified then label the axis defined by *h*.

See also plot, semilogx, semilogy, loglog, polar, mesh, contour,
bar, stairs, ylabel, title

**Function File:** `box (arg)`

**Function File:** `box (h, ...)`

Control the display of a border around the plot.
The argument may be either `"on"` or `"off"`. If it is
omitted, the current box state is toggled.

See also grid

**Function File:** `grid (arg)`

**Function File:** `grid ("minor", arg2)`

Force the display of a grid on the plot.
The argument may be either `"on"` or `"off"`. If it is
omitted, the current grid state is toggled.

If *arg* is `"minor"` then the minor grid is toggled. When
using a minor grid a second argument *arg2* is allowed, which can
be either `"on"` or `"off"` to explicitly set the state of
the minor grid.

See also plot

##### 15.1.4 Multiple Plots on One Page

Octave can display more than one plot in a single figure. The simplest
way to do this is to use the `subplot` function to divide the plot
area into a series of subplot windows that are indexed by an integer.
For example,

```octave
subplot (2, 1, 1)
fplot (@sin, [-10, 10]);
subplot (2, 1, 2)
fplot (@cos, [-10, 10]);
```

creates a figure with two separate axes, one displaying a sine wave and
the other a cosine wave. The first call to subplot divides the figure
into two plotting areas (two rows and one column) and makes the first plot
area active. The grid of plot areas created by `subplot` is
numbered in column-major order (top to bottom, left to right).

**Function File:** `subplot (rows, cols, index)`

**Function File:** `subplot (rcn)`

Set up a plot grid with *cols* by *rows* subwindows and plot
in location given by *index*.

If only one argument is supplied, then it must be a three digit value
specifying the location in digits 1 (rows) and 2 (columns) and the plot
index in digit 3.

The plot index runs row-wise. First all the columns in a row are filled
and then the next row is filled.

For example, a plot with 2 by 3 grid will have plot indices running as
follows:

```octave
+-----+-----+-----+
|  1  |  2  |  3  |
+-----+-----+-----+
|  4  |  5  |  6  |
+-----+-----+-----+
```

See also plot

##### 15.1.5 Multiple Plot Windows

You can open multiple plot windows using the `figure` function.
For example

```octave
figure (1);
fplot (@sin, [-10, 10]);
figure (2);
fplot (@cos, [-10, 10]);
```

creates two figures, with the first displaying a sine wave and
the second a cosine wave. Figure numbers must be positive integers.

**Function File:** `figure (n)`

**Function File:** `figure (n, property, value, ...)`

Set the current plot window to plot window *n*. If no arguments are
specified, the next available window number is chosen.

Multiple property-value pairs may be specified for the figure, but they
must appear in pairs.

##### 15.1.6 Printing Plots

The `print` command allows you to save plots in a variety of
formats. For example,

```octave
print -deps foo.eps
```

writes the current figure to an encapsulated PostScript file called
`‘foo.eps’`.

**Function File:** `print (filename, options)`

Print a graph, or save it to a file

*filename* defines the file name of the output file. If no
filename is specified, output is sent to the printer.

*options*:

`-P printer`

Set the *printer* name to which the graph is sent if no
*filename* is specified.

`-color`

`-mono`

Monochrome or colour lines.

`-solid`

`-dashed`

Solid or dashed lines.

`-portrait`

`-landscape`

Plot orientation, as returned by "orient".

`-d device`

Output device, where *device* is one of:

`ps`

`ps2`

`psc`

`psc2`

Postscript (level 1 and 2, mono and color)

`eps`

`eps2`

`epsc`

`epsc2`

Encapsulated postscript (level 1 and 2, mono and color)

`tex`

`epslatex`

`epslatexstandalone`

`pstex`

`pslatex`

Generate a LaTeX (or TeX) file for labels, and eps/ps for
graphics. The file produced by `epslatexstandalone` can be
processed directly by LaTeX. The other formats are intended to
be included in a LaTeX (or TeX) document. The `tex` device
is the same as the `epslatex` device.

`ill`

`aifm`

Adobe Illustrator

`cdr`

`corel`

CorelDraw

`dxf`

AutoCAD

`emf`

Microsoft Enhanced Metafile

`fig`

XFig. If this format is selected the additional options
`-textspecial` or `-textnormal` can be used to control
whether the special flag should be set for the text in the figure
(default is `-textnormal`).

`hpgl`

HP plotter language

`mf`

Metafont

`png`

Portable network graphics

`jpg`

`jpeg`

JPEG image

`gif`

GIF image

`pbm`

PBMplus

`svg`

Scalable vector graphics

`pdf`

Portable document format

Other devices are supported by "convert" from ImageMagick. Type
system("convert") to see what formats are available.

If the device is omitted, it is inferred from the file extension,
or if there is no filename it is sent to the printer as postscript.

`-S xsize, ysize`

Plot size in pixels for PNG and SVG. If using the command form of
the print function, you must quote the *xsize*,*ysize*
option. For example, by writing `"-S640,480"`.

`-F fontname`

`-F fontname : size`

`-F: size`

*fontname* set the postscript font (for use with postscript,
aifm, corel and fig). By default, 'Helvetica' is set for PS/Aifm,
and 'SwitzerlandLight' for Corel. It can also be 'Times-Roman'.
*size* is given in points. *fontname* is ignored for the
fig device.

The filename and options can be given in any order.

**Function File:** `orient (orientation)`

Set the default print orientation. Valid values for
*orientation* include `"landscape"` and `"portrait"`.
If called with no arguments, return the default print orientation.

##### 15.1.7 Test Plotting Functions

The functions `sombrero` and `peaks` provide a way to check
that plotting is working. Typing either `sombrero` or `peaks`
at the Octave prompt should display a three dimensional plot.

**Function File:** `sombrero (n)`

Produce the familiar three-dimensional sombrero plot using *n*
grid lines. If *n* is omitted, a value of 41 is assumed.

The function plotted is

```octave
z = sin (sqrt (x^2 + y^2)) / (sqrt (x^2 + y^2))
```

See also surf, meshgrid, mesh

**Function File:** `peaks ()`

**Function File:** `peaks (n)`

**Function File:** `peaks (x, y)`

**Function File:** `z = peaks (...)`

**Function File:** `[x, y, z] = peaks (...)`

Generate a function with lots of local maxima and minima. The function
has the form

```octave
f(x,y) = 3*(1-x)^2*exp(-x^2 - (y+1)^2) ...
         - 10*(x/5 - x^3 - y^5)*exp(-x^2-y^2) ...
         - 1/3*exp(-(x+1)^2 - y^2)
```

Called without a return argument, `peaks` plots the surface of the
above function using `mesh`. If *n* is a scalar, the `peaks`
returns the values of the above function on a *n*-by-*n* mesh over
the range `[-3,3]`. The default value for *n* is 49.

If *n* is a vector, then it represents the *x* and *y* values
of the grid on which to calculate the above function. The *x* and
*y* values can be specified separately.

See also surf, mesh, meshgrid

#### 15.2 Advanced Plotting

##### 15.2.1 Graphics Objects

Plots in Octave are constructed from the following *graphics objects*. Each graphics object has a set of properties that define its
appearance and may also contain links to other graphics objects.
Graphics objects are only referenced by a numeric index, or *handle*.

`root figure`

The parent of all figure objects. The index for the root figure is
defined to be 0.

`figure`

A figure window.

`axes`

An set of axes. This object is a child of a figure object and may be a
parent of line, text, image, patch, or surface objects.

`line`

A line in two or three dimensions.

`text`

Text annotations.

`image`

A bitmap image.

`patch`

A filled polygon, currently limited to two dimensions.

`surface`

A three-dimensional surface.

To determine whether an object is a graphics object index or a figure
index, use the functions `ishandle` and `isfigure`.

**Built-in Function:** `ishandle (h)`

Return true if *h* is a graphics handle and false otherwise.

**Function File:** `isfigure (h)`

Return true if *h* is a graphics handle that contains a figure
object and false otherwise.

The function `gcf` returns an index to the current figure object,
or creates one if none exists. Similarly, `gca` returns the
current axes object, or creates one (and its parent figure object) if
none exists.

**Function File:** `gcf ()`

Return the current figure handle. If a figure does not exist, create
one and return its handle. The handle may then be used to examine or
set properties of the figure. For example,

```octave
fplot (@sin, [-10, 10]);
fig = gcf ();
set (fig, "visible", "off");
```

plots a sine wave, finds the handle of the current figure, and then
makes that figure invisible. Setting the visible property of the
figure to `"on"` will cause it to be displayed again.

See also get, set

**Function File:** `gca ()`

Return a handle to the current axis object. If no axis object
exists, create one and return its handle. The handle may then be
used to examine or set properties of the axes. For example,

```octave
ax = gca ();
set (ax, "position", [0.5, 0.5, 0.5, 0.5]);
```

creates an empty axes object, then changes its location and size in
the figure window.

See also get, set

The `get` and `set` functions may be used to examine and set
properties for graphics objects. For example,

```octave
get (0)
    => ans =
       {
         type = root figure
         currentfigure = [](0x0)
         children = [](0x0)
         visible = on
       }
```

returns a structure containing all the properties of the root figure.
As with all functions in Octave, the structure is returned by value, so
modifying it will not modify the internal root figure plot object. To
do that, you must use the `set` function. Also, note that in this
case, the `currentfigure` property is empty, which indicates that
there is no current figure window.

The `get` function may also be used to find the value of a single
property. For example,

```octave
get (gca (), "xlim")
    => [ 0 1 ]
```

returns the range of the x-axis for the current axes object in the
current figure.

To set graphics object properties, use the set function. For example,

```octave
set (gca (), "xlim", [-10, 10]);
```

sets the range of the x-axis for the current axes object in the current
figure to `‘[-10, 10]’`. Additionally, calling set with a graphics
object index as the only argument returns a structure containing the
default values for all the properties for the given object type. For
example,

```octave
set (gca ())
```

returns a structure containing the default property values for axes
objects.

**Built-in Function:** `get (h, p)`

Return the named property *p* from the graphics handle *h*.
If *p* is omitted, return the complete property list for *h*.
If *h* is a vector, return a cell array including the property
values or lists respectively.

**Built-in Function:** `set (h, p, v, ...)`

Set the named property value or vector *p* to the value *v*
for the graphics handle *h*.

**Function File:** `parent = ancestor (h, type)`

**Function File:** `parent = ancestor (h, type, 'toplevel')`

Return the first ancestor of handle object *h* whose type matches
*type*, where *type* is a character string. If *type* is a
cell array of strings, return the first parent whose type matches
any of the given type strings.

If the handle object *h* is of type *type*, return *h*.

If `"toplevel"` is given as a 3rd argument, return the highest
parent in the object hierarchy that matches the condition, instead
of the first (nearest) one.

See also get, set

You can create axes, line, and patch objects directly using the
`axes`, `line`, and `patch` functions. These objects
become children of the current axes object.

**Function File:** `axes ()`

**Function File:** `axes (property, value, ...)`

**Function File:** `axes (h)`

Create an axes object and return a handle to it.

**Function File:** `line ()`

**Function File:** `line (x, y)`

**Function File:** `line (x, y, z)`

**Function File:** `line (x, y, z, property, value, ...)`

Create line object from *x* and *y* and insert in current
axes object. Return a handle (or vector of handles) to the line
objects created.

Multiple property-value pairs may be specified for the line, but they
must appear in pairs.

**Function File:** `patch ()`

**Function File:** `patch (x, y, c)`

**Function File:** `patch (x, y, c, opts)`

**Function File:** `patch ('Faces', f, 'Vertices', v, ...)`

**Function File:** `patch (..., prop, val)`

**Function File:** `patch (h, ...)`

**Function File:** `h = patch (...)`

Create patch object from *x* and *y* with color *c* and
insert in the current axes object. Return handle to patch object.

For a uniform colored patch, *c* can be given as an RGB vector,
scalar value referring to the current colormap, or string value (for
example, "r" or "red").

**Function File:** `surface (x, y, z, c)`

**Function File:** `surface (x, y, z)`

**Function File:** `surface (z, c)`

**Function File:** `surface (z)`

**Function File:** `surface (..., prop, val)`

**Function File:** `surface (h, ...)`

**Function File:** `h = surface (...)`

Plot a surface graphic object given matrices *x*, and *y* from
`meshgrid` and a matrix *z* corresponding to the *x* and
*y* coordinates of the surface. If *x* and *y* are vectors,
then a typical vertex is (*x*(j), *y*(i), *z*(i,j)). Thus,
columns of *z* correspond to different *x* values and rows of
*z* correspond to different *y* values. If *x* and *y*
are missing, they are constructed from size of the matrix *z*.

Any additional properties passed are assigned to the surface.

See also surf, mesh, patch, line

By default, Octave refreshes the plot window when a prompt is printed,
or when waiting for input. To force an update at other times, call the
`drawnow` function.

**Function File:** `drawnow ()`

Update and display the current graphics.

Octave automatically calls drawnow just before printing a prompt,
when `sleep` or `pause` is called, or while waiting for
command-line input.

Normally, high-level plot functions like `plot` or `mesh` call
`newplot` to initialize the state of the current axes so that the
next plot is drawn in a blank window with default property settings. To
have two plots superimposed over one another, call the `hold`
function. For example,

```octave
hold ("on");
x = -10:0.1:10;
plot (x, sin (x));
plot (x, cos (x));
hold ("off");
```

displays sine and cosine waves on the same axes. If the hold state is
off, consecutive plotting commands like this will only display the last
plot.

**Function File:** `newplot ()`

Prepare graphics engine to produce a new plot. This function should
be called at the beginning of all high-level plotting functions.

**Function File:** `hold args`

Tell Octave to `hold' the current data on the plot when executing
subsequent plotting commands. This allows you to execute a series of
plot commands and have all the lines end up on the same figure. The
default is for each new plot command to clear the plot device first.
For example, the command

```octave
hold on
```

turns the hold state on. An argument of `"off"` turns the hold
state off, and `hold` with no arguments toggles the current hold
state.

**Function File:** `ishold`

Return true if the next line will be added to the current plot, or
false if the plot device will be cleared before drawing the next line.

To clear the current figure, call the `clf` function. To bring it
to the top of the window stack, call the `shg` function. To delete
a graphics object, call `delete` on its index. To close the
figure window, call the `close` function.

**Function File:** `clf ()`

Clear the current figure.

See also close, delete

**Function File:** `shg`

Show the graph window. Currently, this is the same as executing
`drawnow`.

See also drawnow, figure

**Function File:** `delete (file)`

**Function File:** `delete (h)`

Delete the named file or figure handle.

**Command:** `close`

**Command:** `close (n)`

**Command:** `close all`

**Command:** `close all hidden`

Close figure window(s) by calling the function specified by the
`"closerequestfcn"` property for each figure. By default, the
function `closereq` is used.

See also closereq

**Function File:** `closereq ()`

Close the current figure and delete all graphics objects associated
with it.

See also close, delete

##### 15.2.2 Graphics Object Properties

###### 15.2.2.1 Root Figure Properties

`currentfigure`

Index to graphics object for the current figure.

###### 15.2.2.2 Figure Properties

`nextplot`

May be one of

`"new"`

`"add"`

`"replace"`

`"replacechildren"`

`closerequestfcn`

Handle of function to call when a figure is closed.

`currentaxes`

Index to graphics object of current axes.

`colormap`

An N-by-3 matrix containing the color map for the current axes.

`visible`

Either `"on"` or `"off"` to toggle display of the figure.

`paperorientation`

Indicates the orientation for printing. Either `"landscape"` or
`"portrait"`.

###### 15.2.2.3 Axes Properties

`position`

A four-element vector specifying the coordinates of the lower left
corner and width and height of the plot, in normalized units. For
example, `[0.2, 0.3, 0.4, 0.5]` sets the lower left corner of the
axes at (0.2, 0.3) and the width and height to be 0.4 and 0.5
respectively.

`title`

Index of text object for the axes title.

`box`

Either `"on"` or `"off"` to toggle display of the box around
the axes.

`key`

Either `"on"` or `"off"` to toggle display of the legend.
Note that this property is not compatible with Matlab and may be
removed in a future version of Octave.

`keybox`

Either `"on"` or `"off"` to toggle display of a box around the
legend. Note that this property is not compatible with Matlab and
may be removed in a future version of Octave.

`keypos`

An integer from 1 to 4 specifying the position of the legend. 1
indicates upper right corner, 2 indicates upper left, 3 indicates lower
left, and 4 indicates lower right. Note that this property is not
compatible with Matlab and may be removed in a future version of
Octave.

`dataaspectratio`

A two-element vector specifying the relative height and width of the
data displayed in the axes. Setting `dataaspectratio` to `‘1, 2]’` causes the length of one unit as displayed on the y axis to be the
same as the length of 2 units on the x axis. Setting
`dataaspectratio` also forces the `dataaspectratiomode`
property to be set to `"manual"`.

`dataaspectratiomode`

Either `"manual"` or `"auto"`.

`xlim`

`ylim`

`zlim`

`clim`

Two-element vectors defining the limits for the x, y, and z axes and the
Setting one of these properties also forces the corresponding mode
property to be set to `"manual"`.

`xlimmode`

`ylimmode`

`zlimmode`

`climmode`

Either `"manual"` or `"auto"`.

`xlabel`

`ylabel`

`zlabel`

Indices to text objects for the axes labels.

`xgrid`

`ygrid`

`zgrid`

Either `"on"` or `"off"` to toggle display of grid lines.

`xminorgrid`

`yminorgrid`

`zminorgrid`

Either `"on"` or `"off"` to toggle display of minor grid lines.

`xtick`

`ytick`

`ztick`

Setting one of these properties also forces the corresponding mode
property to be set to `"manual"`.

`xtickmode`

`ytickmode`

`ztickmode`

Either `"manual"` or `"auto"`.

`xticklabel`

`yticklabel`

`zticklabel`

Setting one of these properties also forces the corresponding mode
property to be set to `"manual"`.

`xticklabelmode`

`yticklabelmode`

`zticklabelmode`

Either `"manual"` or `"auto"`.

`xscale`

`yscale`

`zscale`

Either `"linear"` or `"log"`.

`xdir`

`ydir`

`zdir`

Either `"forward"` or `"reverse"`.

`xaxislocation`

`yaxislocation`

Either `"top"` or `"bottom"` for the x axis and `"left"`
or `"right"` for the y axis.

`view`

A three element vector specifying the view point for three-dimensional plots.

`visible`

Either `"on"` or `"off"` to toggle display of the axes.

`nextplot`

May be one of

`"new"`

`"add"`

`"replace"`

`"replacechildren"`

`outerposition`

A four-element vector specifying the coordinates of the lower left
corner and width and height of the plot, in normalized units. For
example, `[0.2, 0.3, 0.4, 0.5]` sets the lower left corner of the
axes at (0.2, 0.3) and the width and height to be 0.4 and 0.5
respectively.

###### 15.2.2.4 Line Properties

`xdata`

`ydata`

`zdata`

`ldata`

`udata`

`xldata`

`xudata`

The data to be plotted. The `ldata` and `udata` elements are
for errorbars in the y direction, and the `xldata` and `xudata`
elements are for errorbars in the x direction.

`color`

The RGB color of the line, or a color name. See section 15.2.4 [Colors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_177.html).

`linestyle`

`linewidth`

See section 15.2.5 [Line Styles](https://book.huihoo.com/gnu-octave-manual-version-3/octave_178.html).

`marker`

`markeredgecolor`

`markerfacecolor`

`markersize`

See section 15.2.6 [Marker Styles](https://book.huihoo.com/gnu-octave-manual-version-3/octave_179.html).

`keylabel`

The text of the legend entry corresponding to this line. Note that this
property is not compatible with Matlab and may be removed in a
future version of Octave.

###### 15.2.2.5 Text Properties

`string`

The character string contained by the text object.

`units`

May be `"normalized"` or `"graph"`.

`position`

The coordinates of the text object.

`rotation`

The angle of rotation for the displayed text, measured in degrees.

`horizontalalignment`

May be `"left"`, `"center"`, or `"right"`.

`color`

The color of the text. See section 15.2.4 [Colors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_177.html).

`fontname`

The font used for the text.

`fontsize`

The size of the font, in points to use.

`fontangle`

Flag whether the font is italic or normal. Valid values are 'normal',
'italic' and 'oblique'.

`fontweight`

Flag whether the font is bold, etc. Valid values are 'normal', 'bold',
'demi' or 'light'.

`interpreter`

Determines how the text is rendered. Valid values are 'none', 'tex' or
'latex'.

All text objects, including titles, labels, legends, and text, include
the property 'interpreter', this property determines the manner in which
special control sequences in the text are rendered. If the interpreter
is set to 'none', then no rendering occurs. At this point the 'latex'
option is not implemented and so the 'latex' interpreter also does not
interpret the text.

The 'tex' option implements a subset of TeX functionality in the
rendering of the text. This allows the insertion of special characters
such as Greek or mathematical symbols within the text. The special
characters are also inserted with a code starting with the back-slash
(\) character, as in the table [Table 15-7](https://book.huihoo.com/gnu-octave-manual-version-3/octave_172.html#Table-7).

In addition, the formatting of the text can be changed within the string
with the codes

These are be used in conjunction with the { and } characters to limit
the change in the font to part of the string. For example

```octave
xlabel ('{\bf H} = a {\bf V}')
```

where the character 'a' will not appear in a bold font. Note that to
avoid having Octave interpret the backslash characters in the strings,
the strings should be in single quotes.

It is also possible to change the fontname and size within the text

Finally, the superscript and subscripting can be controlled with the '^'
and '_' characters. If the '^' or '_' is followed by a { character,
then all of the block surrounded by the { } pair is super- or
sub-scripted. Without the { } pair, only the character immediately
following the '^' or '_' is super- or sub-scripted.

Table 15-7: Available special characters in TeX mode

A complete example showing the capabilities of the extended text is

```octave
x = 0:0.01:3;
plot(x,erf(x));
hold on;
plot(x,x,"r");
axis([0, 3, 0, 1]);
text(0.65, 0.6175, strcat('\leftarrow x = {2/\surd\pi',
' {\fontsize{16}\int_{\fontsize{8}0}^{\fontsize{8}x}}',
' e^{-t^2} dt} = 0.6175'))
```

###### 15.2.2.6 Image Properties

`cdata`

The data for the image. Each pixel of the image corresponds to an
element of `cdata`. The value of an element of `cdata`
specifies the row-index into the colormap of the axes object containing
the image. The color value found in the color map for the given index
determines the color of the pixel.

`xdata`

`ydata`

Two-element vectors specifying the range of the x- and y- coordinates for
the image.

###### 15.2.2.7 Patch Properties

`cdata`

`xdata`

`ydata`

`zdata`

Data defining the patch object.

`facecolor`

The fill color of the patch. See section 15.2.4 [Colors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_177.html).

`facealpha`

A number in the range [0, 1] indicating the transparency of the patch.

`edgecolor`

The color of the line defining the patch. See section 15.2.4 [Colors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_177.html).

`linestyle`

`linewidth`

See section 15.2.5 [Line Styles](https://book.huihoo.com/gnu-octave-manual-version-3/octave_178.html).

`marker`

`markeredgecolor`

`markerfacecolor`

`markersize`

See section 15.2.6 [Marker Styles](https://book.huihoo.com/gnu-octave-manual-version-3/octave_179.html).

###### 15.2.2.8 Surface Properties

`xdata`

`ydata`

`zdata`

The data determining the surface. The `xdata` and `ydata`
elements are vectors and `zdata` must be a matrix.

`keylabel`

The text of the legend entry corresponding to this surface. Note that
this property is not compatible with Matlab and may be removed in a
future version of Octave.

##### 15.2.3 Managing Default Properties

Object properties have two classes of default values, *factory defaults* (the initial values) and *user-defined defaults*, which
may override the factory defaults.

Although default values may be set for any object, they are set in
parent objects and apply to child objects. For example,

```octave
set (0, "defaultlinecolor", "green");
```

sets the default line color for all objects. The rule for constructing
the property name to set a default value is

```octave
default + object-type + property-name
```

This rule can lead to some strange looking names, for example
`defaultlinelinewidth"` specifies the default `linewidth`
property for `line` objects.

The example above used the root figure object, 0, so the default
property value will apply to all line objects. However, default values
are hierarchical, so defaults set in a figure objects override those
set in the root figure object. Likewise, defaults set in axes objects
override those set in figure or root figure objects. For example,

```octave
subplot (2, 1, 1);
set (0, "defaultlinecolor", "red");
set (1, "defaultlinecolor", "green");
set (gca (), "defaultlinecolor", "blue");
line (1:10, rand (1, 10));
subplot (2, 1, 2);
line (1:10, rand (1, 10));
figure (2)
line (1:10, rand (1, 10));
```

produces two figures. The line in first subplot window of the first
figure is blue because it inherits its color from its parent axes
object. The line in the second subplot window of the first figure is
green because it inherits its color from its parent figure object. The
line in the second figure window is red because it inherits its color
from the global root figure parent object.

To remove a user-defined default setting, set the default property to
the value `"remove"`. For example,

```octave
set (gca (), "defaultlinecolor", "remove");
```

removes the user-defined default line color setting from the current axes
object.

Getting the `"default"` property of an object returns a list of
user-defined defaults set for the object. For example,

```octave
get (gca (), "default");
```

returns a list of user-defined default values for the current axes
object.

Factory default values are stored in the root figure object. The
command

```octave
get (0, "factory");
```

returns a list of factory defaults.

##### 15.2.4 Colors

Colors may be specified as RGB triplets with values ranging from zero to
one, or by name. Recognized color names include `"blue"`,
`"black"`, `"cyan"`, `"green"`, `"magenta"`,
`"red"`, `"white"`, and `"yellow"`.

##### 15.2.5 Line Styles

Line styles are specified by the following properties:

`linestyle`

May be one of

`"-"`

Solid lines.

`"--"`

Dashed lines.

`":"`

Points.

`"-."`

A dash-dot line.

`linewidth`

A number specifying the width of the line. The default is 1. A value
of 2 is twice as wide as the default, etc.

##### 15.2.6 Marker Styles

Marker styles are specified by the following properties:

`marker`

A character indicating a plot marker to be place at each data point, or
`"none"`, meaning no markers should be displayed.

`markeredgecolor`

The color of the edge around the marker, or `"auto"`, meaning that
the edge color is the same as the face color. See section 15.2.4 [Colors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_177.html).

`markerfacecolor`

The color of the marker, or `"none"` to indicate that the marker
should not be filled. See section 15.2.4 [Colors](https://book.huihoo.com/gnu-octave-manual-version-3/octave_177.html).

`markersize`

A number specifying the size of the marker. The default is 1. A value
of 2 is twice as large as the default, etc.

##### 15.2.7 Interaction with `gnuplot`

**Loadable Function:** `val = gnuplot_binary ()`

**Loadable Function:** `old_val = gnuplot_binary (new_val)`

Query or set the name of the program invoked by the plot command.
The default value `"gnuplot"`. See appendix E [Installing Octave](https://book.huihoo.com/gnu-octave-manual-version-3/octave_311.html).

**Loadable Function:** `val = gnuplot_use_title_option ()`

**Loadable Function:** `old_val = gnuplot_use_title_option (new_val)`

If enabled, append `‘-title "Figure NN"’` to the gnuplot command.
By default, this feature is enabled if the `DISPLAY` environment
variable is set when Octave starts.

**This function is obsolete and will be removed from a future version of Octave.**

### 16 Matrix Manipulation

There are a number of functions available for checking to see if the
elements of a matrix meet some condition, and for rearranging the
elements of a matrix. For example, Octave can easily tell you if all
the elements of a matrix are finite, or are less than some specified
value. Octave can also rotate the elements, extract the upper- or
lower-triangular parts, or sort the columns of a matrix.

#### 16.1 Finding Elements and Checking Conditions

The functions `any` and `all` are useful for determining
whether any or all of the elements of a matrix satisfy some condition.
The `find` function is also useful in determining which elements of
a matrix meet a specified condition.

**Built-in Function:** `any (x, dim)`

For a vector argument, return 1 if any element of the vector is
nonzero.

For a matrix argument, return a row vector of ones and
zeros with each element indicating whether any of the elements of the
corresponding column of the matrix are nonzero. For example,

```octave
any (eye (2, 4))
     => [ 1, 1, 0, 0 ]
```

If the optional argument *dim* is supplied, work along dimension
*dim*. For example,

```octave
any (eye (2, 4), 2)
     => [ 1; 1 ]
```

**Built-in Function:** `all (x, dim)`

The function `all` behaves like the function `any`, except
that it returns true only if all the elements of a vector, or all the
elements along dimension *dim* of a matrix, are nonzero.

Since the comparison operators (see section 8.4 [Comparison Operators](https://book.huihoo.com/gnu-octave-manual-version-3/octave_75.html)) return matrices
of ones and zeros, it is easy to test a matrix for many things, not just
whether the elements are nonzero. For example,

```octave
all (all (rand (5) < 0.9))
     => 0
```

tests a random 5 by 5 matrix to see if all of its elements are less
than 0.9.

Note that in conditional contexts (like the test clause of `if` and
`while` statements) Octave treats the test as if you had typed
`all (all (condition))`.

**Mapping Function:** `xor (x, y)`

Return the `exclusive or' of the entries of *x* and *y*.
For boolean expressions *x* and *y*,
`xor (*x*, *y*)` is true if and only if *x* or *y*
is true, but not if both *x* and *y* are true.

**Function File:** `is_duplicate_entry (x)`

Return non-zero if any entries in *x* are duplicates of one
another.

**Function File:** `diff (x, k, dim)`

If *x* is a vector of length *n*, `diff (*x*)` is the
vector of first differences

*x*(2) - *x*(1), ..., *x*(n) - *x*(n-1).

If *x* is a matrix, `diff (*x*)` is the matrix of column
differences along the first non-singleton dimension.

The second argument is optional. If supplied, `diff (*x*, *k*)`, where *k* is a nonnegative integer, returns the
*k*-th differences. It is possible that *k* is larger than
then first non-singleton dimension of the matrix. In this case,
`diff` continues to take the differences along the next
non-singleton dimension.

The dimension along which to take the difference can be explicitly
stated with the optional variable *dim*. In this case the
*k*-th order differences are calculated along this dimension.
In the case where *k* exceeds `size (*x*, *dim*)`
then an empty matrix is returned.

**Mapping Function:** `isinf (x)`

Return 1 for elements of *x* that are infinite and zero
otherwise. For example,

```octave
isinf ([13, Inf, NA, NaN])
     => [ 0, 1, 0, 0 ]
```

**Mapping Function:** `isnan (x)`

Return 1 for elements of *x* that are NaN values and zero
otherwise. NA values are also considered NaN values. For example,

```octave
isnan ([13, Inf, NA, NaN])
     => [ 0, 0, 1, 1 ]
```

**Mapping Function:** `finite (x)`

Return 1 for elements of *x* that are finite values and zero
otherwise. For example,

```octave
finite ([13, Inf, NA, NaN])
     => [ 1, 0, 0, 0 ]
```

**Loadable Function:** `find (x)`

**Loadable Function:** `find (x, n)`

**Loadable Function:** `find (x, n, direction)`

Return a vector of indices of nonzero elements of a matrix, as a row if
*x* is a row or as a column otherwise. To obtain a single index for
each matrix element, Octave pretends that the columns of a matrix form one
long vector (like Fortran arrays are stored). For example,

```octave
find (eye (2))
     => [ 1; 4 ]
```

If two outputs are requested, `find` returns the row and column
indices of nonzero elements of a matrix. For example,

```octave
[i, j] = find (2 * eye (2))
     => i = [ 1; 2 ]
     => j = [ 1; 2 ]
```

If three outputs are requested, `find` also returns a vector
containing the nonzero values. For example,

```octave
[i, j, v] = find (3 * eye (2))
     => i = [ 1; 2 ]
     => j = [ 1; 2 ]
     => v = [ 3; 3 ]
```

If two inputs are given, *n* indicates the number of elements to
find from the beginning of the matrix or vector.

If three inputs are given, *direction* should be one of "first" or
"last" indicating that it should start counting found elements from the
first or last element.

**Function File:** `[err, y1, ...] = common_size (x1, ...)`

Determine if all input arguments are either scalar or of common
size. If so, *err* is zero, and *yi* is a matrix of the
common size with all entries equal to *xi* if this is a scalar or
*xi* otherwise. If the inputs cannot be brought to a common size,
errorcode is 1, and *yi* is *xi*. For example,

```octave
[errorcode, a, b] = common_size ([1 2; 3 4], 5)
=> errorcode = 0
=> a = [ 1, 2; 3, 4 ]
=> b = [ 5, 5; 5, 5 ]
```

This is useful for implementing functions where arguments can either
be scalars or of common size.

#### 16.2 Rearranging Matrices

**Function File:** `fliplr (x)`

Return a copy of *x* with the order of the columns reversed. For
example,

```octave
fliplr ([1, 2; 3, 4])
=>  2  1
    4  3
```

Note that `fliplr` only work with 2-D arrays. To flip N-d arrays
use `flipdim` instead.

See also flipud, flipdim, rot90, rotdim

**Function File:** `flipud (x)`

Return a copy of *x* with the order of the rows reversed. For
example,

```octave
flipud ([1, 2; 3, 4])
=>  3  4
    1  2
```

Due to the difficulty of defining which axis about which to flip the
matrix `flipud` only work with 2-d arrays. To flip N-d arrays
use `flipdim` instead.

See also fliplr, flipdim, rot90, rotdim

**Function File:** `flipdim (x, dim)`

Return a copy of *x* flipped about the dimension *dim*.
For example

```octave
flipdim ([1, 2; 3, 4], 2)
=>  2  1
    4  3
```

See also fliplr, flipud, rot90, rotdim

**Function File:** `rot90 (x, n)`

Return a copy of *x* with the elements rotated counterclockwise in
90-degree increments. The second argument is optional, and specifies
how many 90-degree rotations are to be applied (the default value is 1).
Negative values of *n* rotate the matrix in a clockwise direction.
For example,

```octave
rot90 ([1, 2; 3, 4], -1)
=>  3  1
    4  2
```

rotates the given matrix clockwise by 90 degrees. The following are all
equivalent statements:

```octave
rot90 ([1, 2; 3, 4], -1)
rot90 ([1, 2; 3, 4], 3)
rot90 ([1, 2; 3, 4], 7)
```

Due to the difficulty of defining an axis about which to rotate the
matrix `rot90` only work with 2-D arrays. To rotate N-d arrays
use `rotdim` instead.

See also rotdim, flipud, fliplr, flipdim

**Function File:** `rotdim (x, n, plane)`

Return a copy of *x* with the elements rotated counterclockwise in
90-degree increments. The second argument is optional, and specifies
how many 90-degree rotations are to be applied (the default value is 1).
The third argument is also optional and defines the plane of the
rotation. As such *plane* is a two element vector containing two
different valid dimensions of the matrix. If *plane* is not given
Then the first two non-singleton dimensions are used.

Negative values of *n* rotate the matrix in a clockwise direction.
For example,

```octave
rotdim ([1, 2; 3, 4], -1, [1, 2])
=>  3  1
    4  2
```

rotates the given matrix clockwise by 90 degrees. The following are all
equivalent statements:

```octave
rotdim ([1, 2; 3, 4], -1, [1, 2])
rotdim ([1, 2; 3, 4], 3, [1, 2])
rotdim ([1, 2; 3, 4], 7, [1, 2])
```

See also rot90, flipud, fliplr, flipdim

**Built-in Function:** `cat (dim, array1, array2, ..., arrayN)`

Return the concatenation of N-d array objects, *array1*,
*array2*, ..., *arrayN* along dimension *dim*.

```octave
A = ones (2, 2);
B = zeros (2, 2);
cat (2, A, B)
=> ans =

     1 1 0 0
     1 1 0 0
```

Alternatively, we can concatenate *A* and *B* along the
second dimension the following way:

```octave
[A, B].
```

*dim* can be larger than the dimensions of the N-d array objects
and the result will thus have *dim* dimensions as the
following example shows:

```octave
cat (4, ones(2, 2), zeros (2, 2))
=> ans =

   ans(:,:,1,1) =

     1 1
     1 1

   ans(:,:,1,2) =
     0 0
     0 0
```

See also horzcat, vertcat

**Built-in Function:** `horzcat (array1, array2, ..., arrayN)`

Return the horizontal concatenation of N-d array objects, *array1*,
*array2*, ..., *arrayN* along dimension 2.

See also cat, vertcat

**Built-in Function:** `vertcat (array1, array2, ..., arrayN)`

Return the vertical concatenation of N-d array objects, *array1*,
*array2*, ..., *arrayN* along dimension 1.

See also cat, horzcat

**Built-in Function:** `permute (a, perm)`

Return the generalized transpose for an N-d array object *a*.
The permutation vector *perm* must contain the elements
`1:ndims(a)` (in any order, but each element must appear just once).

See also ipermute

**Built-in Function:** `ipermute (a, iperm)`

The inverse of the `permute` function. The expression

```octave
ipermute (permute (a, perm), perm)
```

returns the original array *a*.

See also permute

**Built-in Function:** `reshape (a, m, n, ...)`

**Built-in Function:** `reshape (a, size)`

Return a matrix with the given dimensions whose elements are taken
from the matrix *a*. The elements of the matrix are accessed in
column-major order (like Fortran arrays are stored).

For example,

```octave
reshape ([1, 2, 3, 4], 2, 2)
     =>  1  3
         2  4
```

Note that the total number of elements in the original
matrix must match the total number of elements in the new matrix.

A single dimension of the return matrix can be unknown and is flagged
by an empty argument.

**Function File:** `y = circshift (x, n)`

Circularly shifts the values of the array *x*. *n* must be
a vector of integers no longer than the number of dimensions in
*x*. The values of *n* can be either positive or negative,
which determines the direction in which the values or *x* are
shifted. If an element of *n* is zero, then the corresponding
dimension of *x* will not be shifted. For example

```octave
x = [1, 2, 3; 4, 5, 6; 7, 8, 9];
circshift (x, 1)
=>  7, 8, 9
    1, 2, 3
    4, 5, 6
circshift (x, -2)
=>  7, 8, 9
    1, 2, 3
    4, 5, 6
circshift (x, [0,1])
=>  3, 1, 2
    6, 4, 5
    9, 7, 8
```

See also permute, ipermute, shiftdim

**Function File:** `y = shiftdim (x, n)`

**Function File:** `[y, ns] = shiftdim (x)`

Shifts the dimension of *x* by *n*, where *n* must be
an integer scalar. When *n* is positive, the dimensions of
*x* are shifted to the left, with the leading dimensions
circulated to the end. If *n* is negative, then the dimensions
of *x* are shifted to the right, with *n* leading singleton
dimensions added.

Called with a single argument, `shiftdim`, removes the leading
singleton dimensions, returning the number of dimensions removed
in the second output argument *ns*.

For example

```octave
x = ones (1, 2, 3);
size (shiftdim (x, -1))
=> [1, 1, 2, 3]
size (shiftdim (x, 1))
=> [2, 3]
[b, ns] = shiftdim (x);
=> b =  [1, 1, 1; 1, 1, 1]
=> ns = 1
```

See also reshape, permute, ipermute, circshift, squeeze

**Function File:** `shift (x, b)`

**Function File:** `shift (x, b, dim)`

If *x* is a vector, perform a circular shift of length *b* of
the elements of *x*.

If *x* is a matrix, do the same for each column of *x*.
If the optional *dim* argument is given, operate along this
dimension

**Loadable Function:** `[s, i] = sort (x)`

**Loadable Function:** `[s, i] = sort (x, dim)`

**Loadable Function:** `[s, i] = sort (x, mode)`

**Loadable Function:** `[s, i] = sort (x, dim, mode)`

Return a copy of *x* with the elements arranged in increasing
order. For matrices, `sort` orders the elements in each column.

For example,

```octave
sort ([1, 2; 2, 3; 3, 1])
     =>  1  1
         2  2
         3  3
```

The `sort` function may also be used to produce a matrix
containing the original row indices of the elements in the sorted
matrix. For example,

```octave
[s, i] = sort ([1, 2; 2, 3; 3, 1])
     => s = 1  1
            2  2
            3  3
     => i = 1  3
            2  1
            3  2
```

If the optional argument *dim* is given, then the matrix is sorted
along the dimension defined by *dim*. The optional argument `mode`
defines the order in which the values will be sorted. Valid values of
`mode` are `ascend' or `descend'.

For equal elements, the indices are such that the equal elements are listed
in the order that appeared in the original list.

The `sort` function may also be used to sort strings and cell arrays
of strings, in which case the dictionary order of the strings is used.

The algorithm used in `sort` is optimized for the sorting of partially
ordered lists.

**Function File:** `sortrows (a, c)`

Sort the rows of the matrix *a* according to the order of the
columns specified in *c*. If *c* is omitted, a
lexicographical sort is used. By default ascending order is used
however if elements of *c* are negative then the corresponding
column is sorted in descending order.

Since the `sort` function does not allow sort keys to be specified,
it can't be used to order the rows of a matrix according to the values
of the elements in various columns([7](https://book.huihoo.com/gnu-octave-manual-version-3/octave_foot.html#FOOT7))
in a single call. Using the second output, however, it is possible to
sort all rows based on the values in a given column. Here's an example
that sorts the rows of a matrix based on the values in the second
column.

```octave
a = [1, 2; 2, 3; 3, 1];
[s, i] = sort (a (:, 2));
a (i, :)
     =>  3  1
         1  2
         2  3
```

**Function File:** `swap (inputs)`

```octave
[a1,b1] = swap(a,b)
interchange a and b
```

**Function File:** `swapcols (inputs)`

```octave
 function B = swapcols(A)
 permute columns of A into reverse order
```

**Function File:** `swaprows (inputs)`

```octave
 function B = swaprows(A)
 permute rows of A into reverse order
```

**Function File:** `tril (a, k)`

**Function File:** `triu (a, k)`

Return a new matrix formed by extracting the lower (`tril`)
or upper (`triu`) triangular part of the matrix *a*, and
setting all other elements to zero. The second argument is optional,
and specifies how many diagonals above or below the main diagonal should
also be set to zero.

The default value of *k* is zero, so that `triu` and
`tril` normally include the main diagonal as part of the result
matrix.

If the value of *k* is negative, additional elements above (for
`tril`) or below (for `triu`) the main diagonal are also
selected.

The absolute value of *k* must not be greater than the number of
sub- or super-diagonals.

For example,

```octave
tril (ones (3), -1)
=>  0  0  0
    1  0  0
    1  1  0
```

and

```octave
tril (ones (3), 1)
=>  1  1  0
    1  1  1
    1  1  1
```

See also triu, diag

**Function File:** `vec (x)`

Return the vector obtained by stacking the columns of the matrix *x*
one above the other.

**Function File:** `vech (x)`

Return the vector obtained by eliminating all supradiagonal elements of
the square matrix *x* and stacking the result one column above the
other.

**Function File:** `prepad (x, l, c)`

**Function File:** `postpad (x, l, c)`

**Function File:** `postpad (x, l, c, dim)`

Prepends (appends) the scalar value *c* to the vector *x*
until it is of length *l*. If the third argument is not
supplied, a value of 0 is used.

If `length (*x*) > *l*`, elements from the beginning (end) of
*x* are removed until a vector of length *l* is obtained.

If *x* is a matrix, elements are prepended or removed from each row.

If the optional *dim* argument is given, then operate along this
dimension.

**Function File:** `blkdiag (a, b, c, ...)`

Build a block diagonal matrix from *a*, *b*, *c*, ....
All the arguments must be numeric and are two-dimensional matrices or
scalars.

See also diag, horzcat, vertcat

#### 16.3 Applying a Function to an Array

**Function File:** `a = arrayfun (name, c)`

**Function File:** `a = arrayfun (func, c)`

**Function File:** `a = arrayfun (func, c, d)`

**Function File:** `a = arrayfun (func, c, options)`

**Function File:** `[a, b, ...] = arrayfun (func, c, ...)`

Execute a function on each element of an array. This is useful for
functions that do not accept array arguments. If the function does
accept array arguments it is better to call the function directly.

See `cellfun` for complete usage instructions.

See also cellfun

**Loadable Function:** `bsxfun (f, a, b)`

Applies a binary function *f* element-wise to two matrix arguments
*a* and *b*. The function *f* must be capable of accepting
two column vector arguments of equal length, or one column vector
argument and a scalar.

The dimensions of *a* and *b* must be equal or singleton. The
singleton dimensions of the matrices will be expanded to the same
dimensionality as the other matrix.

See also arrayfun, cellfun

#### 16.4 Special Utility Matrices

**Built-in Function:** `eye (x)`

**Built-in Function:** `eye (n, m)`

**Built-in Function:** `eye (..., class)`

Return an identity matrix. If invoked with a single scalar argument,
`eye` returns a square matrix with the dimension specified. If you
supply two scalar arguments, `eye` takes them to be the number of
rows and columns. If given a vector with two elements, `eye` uses
the values of the elements as the number of rows and columns,
respectively. For example,

```octave
eye (3)
     =>  1  0  0
         0  1  0
         0  0  1
```

The following expressions all produce the same result:

```octave
eye (2)
==
eye (2, 2)
==
eye (size ([1, 2; 3, 4])
```

The optional argument *class*, allows `eye` to return an array of
the specified type, like

```octave
val = zeros (n,m, "uint8")
```

Calling `eye` with no arguments is equivalent to calling it
with an argument of 1. This odd definition is for compatibility
with Matlab.

**Built-in Function:** `ones (x)`

**Built-in Function:** `ones (n, m)`

**Built-in Function:** `ones (n, m, k, ...)`

**Built-in Function:** `ones (..., class)`

Return a matrix or N-dimensional array whose elements are all 1.
The arguments are handled the same as the arguments for `eye`.

If you need to create a matrix whose values are all the same, you should
use an expression like

```octave
val_matrix = val * ones (n, m)
```

The optional argument *class*, allows `ones` to return an array of
the specified type, for example

```octave
val = ones (n,m, "uint8")
```

**Built-in Function:** `zeros (x)`

**Built-in Function:** `zeros (n, m)`

**Built-in Function:** `zeros (n, m, k, ...)`

**Built-in Function:** `zeros (..., class)`

Return a matrix or N-dimensional array whose elements are all 0.
The arguments are handled the same as the arguments for `eye`.

The optional argument *class*, allows `zeros` to return an array of
the specified type, for example

```octave
val = zeros (n,m, "uint8")
```

**Function File:** `repmat (A, m, n)`

**Function File:** `repmat (A, [m n])`

**Function File:** `repmat (A, [m n p ...])`

Form a block matrix of size *m* by *n*, with a copy of matrix
*A* as each element. If *n* is not specified, form an
*m* by *m* block matrix.

**Built-in Function:** `diag (v, k)`

Return a diagonal matrix with vector *v* on diagonal *k*. The
second argument is optional. If it is positive, the vector is placed on
the *k*-th super-diagonal. If it is negative, it is placed on the
*-k*-th sub-diagonal. The default value of *k* is 0, and the
vector is placed on the main diagonal. For example,

```octave
diag ([1, 2, 3], 1)
     =>  0  1  0  0
         0  0  2  0
         0  0  0  3
         0  0  0  0
```

Given a matrix argument, instead of a vector, `diag` extracts the
*k*-th diagonal of the matrix.

The functions `linspace` and `logspace` make it very easy to
create vectors with evenly or logarithmically spaced elements.
See section 4.2 [Ranges](https://book.huihoo.com/gnu-octave-manual-version-3/octave_39.html).

**Built-in Function:** `linspace (base, limit, n)`

Return a row vector with *n* linearly spaced elements between
*base* and *limit*. If the number of elements is greater than one,
then the *base* and *limit* are always included in
the range. If *base* is greater than *limit*, the elements are
stored in decreasing order. If the number of points is not specified, a
value of 100 is used.

The `linspace` function always returns a row vector.

For compatibility with Matlab, return the second argument if
fewer than two values are requested.

**Function File:** `logspace (base, limit, n)`

Similar to `linspace` except that the values are logarithmically
spaced from

10^base to 10^limit.

If *limit* is equal to

pi,

the points are between

10^base and pi,

*not*

10^base and 10^pi,

in order to be compatible with the corresponding Matlab
function.

Also for compatibility, return the second argument if fewer than two
values are requested.

See also linspace

#### 16.5 Random Matrices

This section describes the basic generators for random matrices in Octave. Additional random distributions can be found in section 24.7 [Random Number Generation](https://book.huihoo.com/gnu-octave-manual-version-3/octave_236.html).

**Loadable Function:** `rand (x)`

**Loadable Function:** `rand (n, m)`

**Loadable Function:** `rand ("state", x)`

**Loadable Function:** `rand ("seed", x)`

Return a matrix with random elements uniformly distributed on the
interval (0, 1). The arguments are handled the same as the arguments
for `eye`.

You can query the state of the random number generator using the
form

```octave
v = rand ("state")
```

This returns a column vector *v* of length 625. Later, you can
restore the random number generator to the state *v*
using the form

```octave
rand ("state", v)
```

You may also initialize the state vector from an arbitrary vector *v* of length 625 or less. This new state will be a hash based on the
value of *v*, not *v* itself.

By default, the generator is initialized from `/dev/urandom` if it is
available, otherwise from cpu time, wall clock time and the current
fraction of a second.

To compute the pseudo-random sequence, `rand` uses the Mersenne
Twister with a period of 2^{19937-1}.([8](https://book.huihoo.com/gnu-octave-manual-version-3/octave_foot.html#FOOT8))
Do **not** use for cryptography without securely hashing
several returned values together, otherwise the generator state
can be learned after reading 624 consecutive values.

Older versions of Octave used a different random number generator.
The new generator is now used by default
as it is faster and produces
random numbers with a significantly longer cycle time. However, in
some circumstances it might be desirable to obtain the random
sequences produced by the old generator. The keyword
"seed" specifies that the old generators should be used,
as in

```octave
rand ("seed", val)
```

which sets the seed of the generator to *val*. The seed of the
generator can be queried with

```octave
s = rand ("seed")
```

However, it should be noted that querying the seed will not cause
`rand` to use the old generators, only setting the seed will.
To cause `rand` to once again use the new generators, the
keyword "state" should be used to reset the state of the `rand`.

See also randn, rande, randg, randp

**Loadable Function:** `randn (x)`

**Loadable Function:** `randn (n, m)`

**Loadable Function:** `randn ("state", x)`

**Loadable Function:** `randn ("seed", x)`

Return a matrix with normally distributed random elements. The
arguments are handled the same as the arguments for `rand`.

By default, `randn` uses the Marsaglia and Tsang “Ziggurat technique” to
transform from a uniform to a normal distribution. ([9](https://book.huihoo.com/gnu-octave-manual-version-3/octave_foot.html#FOOT9))

See also rand, rande, randg, randp

**Loadable Function:** `rande (x)`

**Loadable Function:** `rande (n, m)`

**Loadable Function:** `rande ("state", x)`

**Loadable Function:** `rande ("seed", x)`

Return a matrix with exponentially distributed random elements. The
arguments are handled the same as the arguments for `rand`.

By default, `rande` uses the Marsaglia and Tsang Ziggurat technique to
transform a uniform distribution to an exponential distribution.

See also rand, randn, randg, randp

**Loadable Function:** `randp (l, x)`

**Loadable Function:** `randp (l, n, m)`

**Loadable Function:** `randp ("state", x)`

**Loadable Function:** `randp ("seed", x)`

Return a matrix with Poisson distributed random elements with mean value parameter given by the first argument, *l*. The arguments
are handled the same as the arguments for `rand`, except for the
argument *l*.

See also rand, randn, rande, randg

**Loadable Function:** `randg (a, x)`

**Loadable Function:** `randg (a, n, m)`

**Loadable Function:** `randg ("state", x)`

**Loadable Function:** `randg ("seed", x)`

Return a matrix with `gamma(*a*,1)` distributed random elements.
The arguments are handled the same as the arguments for `rand`,
except for the argument *a*.

See also rand, randn, rande, randp

The generators operate in the new or old style together, it is not
possible to mix the two. Initializing any generator with
`"state"` or `"seed"` causes the others to switch to the
same style for future calls.

The state of each generator is independent and calls to different
generators can be interleaved without affecting the final result. For
example,

```octave
rand ("state", [11, 22, 33]);
randn ("state", [44, 55, 66]);
u = rand (100, 1);
n = randn (100, 1);
```

and

```octave
rand ("state", [11, 22, 33]);
randn ("state", [44, 55, 66]);
u = zeros (100, 1);
n = zeros (100, 1);
for i = 1:100
  u(i) = rand ();
  n(i) = randn ();
end
```

produce equivalent results. When the generators are initialized in
the old style with `"seed"` only `rand` and `randn` are
independent, because the old `rande`, `randg` and
`randp` generators make calls to `rand` and `randn`.

The generators are initialized with random states at start-up, so
that the sequences of random numbers are not the same each time you run
Octave.([10](https://book.huihoo.com/gnu-octave-manual-version-3/octave_foot.html#FOOT10)) If you really do
need to reproduce a sequence of numbers exactly, you can set the state
or seed to a specific value.

If invoked without arguments, `rand` and `randn` return a
single element of a random sequence.

The original `rand` and `randn` functions use Fortran code from
Ranlib, a library of fortran routines for random number generation,
compiled by Barry W. Brown and James Lovato of the Department of
Biomathematics at The University of Texas, M.D. Anderson Cancer Center,
Houston, TX 77030.

**Function File:** `randperm (n)`

Return a row vector containing a random permutation of the
integers from 1 to *n*.

#### 16.6 Famous Matrices

The following functions return famous matrix forms.

**Function File:** `hadamard (n)`

Construct a Hadamard matrix *Hn* of size *n*-by-*n*. The
size *n* must be of the form `2 ^ *k* * *p*` in which
*p* is one of 1, 12, 20 or 28. The returned matrix is normalized,
meaning `Hn(:,1) == 1` and `H(1,:) == 1`.

Some of the properties of Hadamard matrices are:

- `kron (*Hm*, *Hn*)` is a Hadamard matrix of size
*m*-by-*n*.

- `Hn * Hn' == *n* * eye (*n*)`.

- The rows of *Hn* are orthogonal.

- `det (*A*)

```octave
H(i,j) = c(i+j-1),  i+j-1 <= m;
H(i,j) = r(i+j-m),  otherwise
```

See also vander, sylvester_matrix, hilb, invhilb, toeplitz

**Function File:** `hilb (n)`

Return the Hilbert matrix of order *n*. The

i, j

element of a Hilbert matrix is defined as

```octave
H (i, j) = 1 / (i + j - 1)
```

See also hankel, vander, sylvester_matrix, invhilb, toeplitz

**Function File:** `invhilb (n)`

Return the inverse of a Hilbert matrix of order *n*. This can be
computed exactly using

```octave
           (i+j)         /n+i-1\  /n+j-1\   /i+j-2\ 2
A(i,j) = -1      (i+j-1)(       )(       ) (       )
                         \ n-j /  \ n-i /   \ i-2 /

       = p(i) p(j) / (i+j-1)
```

where

```octave
         k  /k+n-1\   /n\
p(k) = -1  (       ) (   )
            \ k-1 /   \k/
```

The validity of this formula can easily be checked by expanding
the binomial coefficients in both formulas as factorials. It can
be derived more directly via the theory of Cauchy matrices:
see J. W. Demmel, Applied Numerical Linear Algebra, page 92.

Compare this with the numerical calculation of `inverse (hilb (n))`,
which suffers from the ill-conditioning of the Hilbert matrix, and the
finite precision of your computer's floating point arithmetic.

See also hankel, vander, sylvester_matrix, hilb, toeplitz

**Function File:** `magic (n)`

Create an *n*-by-*n* magic square. Note that `magic (*2*)` is undefined since there is no 2-by-2 magic square.

**Function File:** `pascal (n, t)`

Return the Pascal matrix of order *n* if `*t* = 0`.
*t* defaults to 0. Return lower triangular Cholesky factor of
the Pascal matrix if `*t* = 1`. This matrix is its own
inverse, that is `pascal (*n*, 1) ^ 2 == eye (*n*)`.
If `*t* = 2`, return a transposed and permuted version of
`pascal (*n*, 1)`, which is the cube-root of the identity
matrix. That is `pascal (*n*, 2) ^ 3 == eye (*n*)`.

See also hankel, vander, sylvester_matrix, hilb, invhilb, toeplitz
hadamard, wilkinson, compan, rosser

**Function File:** `rosser ()`

Returns the Rosser matrix. This is a difficult test case used to test
eigenvalue algorithms.

See also hankel, vander, sylvester_matrix, hilb, invhilb, toeplitz
hadamard, wilkinson, compan, pascal

**Function File:** `sylvester_matrix (k)`

Return the Sylvester matrix of order

n = 2^k.

See also hankel, vander, hilb, invhilb, toeplitz

**Function File:** `toeplitz (c, r)`

Return the Toeplitz matrix constructed given the first column *c*,
and (optionally) the first row *r*. If the first element of *c*
is not the same as the first element of *r*, the first element of
*c* is used. If the second argument is omitted, the first row is
taken to be the same as the first column.

A square Toeplitz matrix has the form:

```octave
c(0)  r(1)   r(2)  ...  r(n)
c(1)  c(0)   r(1)  ... r(n-1)
c(2)  c(1)   c(0)  ... r(n-2)
 .     ,      ,   .      .
 .     ,      ,     .    .
 .     ,      ,       .  .
c(n) c(n-1) c(n-2) ...  c(0)
```

See also hankel, vander, sylvester_matrix, hilb, invhilb

**Function File:** `vander (c)`

Return the Vandermonde matrix whose next to last column is *c*.

A Vandermonde matrix has the form:

```octave
c(1)^(n-1) ... c(1)^2  c(1)  1
c(2)^(n-1) ... c(2)^2  c(2)  1
    .     .      .      .    .
    .       .    .      .    .
    .         .  .      .    .
c(n)^(n-1) ... c(n)^2  c(n)  1
```

See also hankel, sylvester_matrix, hilb, invhilb, toeplitz

**Function File:** `wilkinson (n)`

Return the Wilkinson matrix of order *n*.

See also hankel, vander, sylvester_matrix, hilb, invhilb, toeplitz
hadamard, rosser, compan, pascal

### 18 Linear Algebra

This chapter documents the linear algebra functions of Octave.
Reference material for many of these functions may be found in
Golub and Van Loan, Matrix Computations, 2nd Ed., Johns Hopkins,
1989, and in the lapack Users' Guide, SIAM, 1992.

#### 18.1 Techniques used for Linear Algebra

Octave uses a polymorphic solver which selects an appropriate
matrix factorization depending on the properties of the matrix itself.
Generally, the cost of determining the matrix type is small relative to
the cost of factorizing the matrix, and the
type is cached once it is calculated, so that it is not re-determined each time the matrix is used.

The selection tree for solving a linear system or computing a matrix inverse is as follows:

1. If the matrix is upper or lower triangular sparse, try a forward or backward substitution using the lapack xTRTRS function, and goto 4.
2. If the matrix is square, hermitian with a real positive diagonal, attempt Cholesky factorization using the lapack xPOTRF function.
3. If the Cholesky factorization failed or the matrix is not hermitian with a real positive diagonal, and the matrix is square, factorize
using the lapack xGETRF function.
4. If the matrix is not square, or any of the previous solvers flags a singular or near singular matrix, find a least squares solution using
the lapack xGELSD function.

The user can force the type of the matrix with the `matrix_type`
function. This overcomes the cost of discovering the type of the matrix.
However, it should be noted that identifying the type of the matrix incorrectly
will lead to unpredictable results, and so `matrix_type` should be
used with care.

#### 18.2 Basic Matrix Functions

**Loadable Function:** `aa = balance (a, opt)`

**Loadable Function:** `[dd, aa] = balance (a, opt)`

**Loadable Function:** `[cc, dd, aa, bb] = balance (a, b, opt)`

Compute `aa = dd \ a * dd` in which `aa` is a matrix whose
row and column norms are roughly equal in magnitude, and
`dd` = `p * d`, in which `p` is a permutation
matrix and `d` is a diagonal matrix of powers of two. This allows
the equilibration to be computed without roundoff. Results of
eigenvalue calculation are typically improved by balancing first.

If four output values are requested, compute `aa = cc*a*dd` and
`bb = cc*b*dd)`, in which `aa` and `bb` have non-zero
elements of approximately the same magnitude and `cc` and `dd`
are permuted diagonal matrices as in `dd` for the algebraic
eigenvalue problem.

The eigenvalue balancing option `opt` may be one of:

`"N", "n"`

No balancing; arguments copied, transformation(s) set to identity.

`"P", "p"`

Permute argument(s) to isolate eigenvalues where possible.

`"S", "s"`

Scale to improve accuracy of computed eigenvalues.

`"B", "b"`

Permute and scale, in that order. Rows/columns of a (and b)
that are isolated by permutation are not scaled. This is the default
behavior.

Algebraic eigenvalue balancing uses standard lapack routines.

Generalized eigenvalue problem balancing uses Ward's algorithm
(SIAM Journal on Scientific and Statistical Computing, 1981).

**Function File:** `cond (a, p)`

Compute the *p*-norm condition number of a matrix. `cond (*a*)` is
defined as `norm (*a*, *p*) * norm (inv (*a*), *p*)`.
By default `*p*=2` is used which implies a (relatively slow)
singular value decomposition. Other possible selections are
`*p*= 1, Inf, inf, 'Inf', 'fro'` which are generally faster.

See also norm, inv, det, svd, rank

**Loadable Function:** `[d, rcond] = det (a)`

Compute the determinant of *a* using lapack. Return an estimate
of the reciprocal condition number if requested.

**Function File:** `dmult (a, b)`

If *a* is a vector of length `rows (*b*)`, return
`diag (*a*) * *b*` (but computed much more efficiently).

**Function File:** `dot (x, y, dim)`

Computes the dot product of two vectors. If *x* and *y*
are matrices, calculate the dot-product along the first
non-singleton dimension. If the optional argument *dim* is
given, calculate the dot-product along this dimension.

**Loadable Function:** `lambda = eig (a)`

**Loadable Function:** `[v, lambda] = eig (a)`

The eigenvalues (and eigenvectors) of a matrix are computed in a several
step process which begins with a Hessenberg decomposition, followed by a
Schur decomposition, from which the eigenvalues are apparent. The
eigenvectors, when desired, are computed by further manipulations of the
Schur decomposition.

The eigenvalues returned by `eig` are not ordered.

**Loadable Function:** `g = givens (x, y)`

**Loadable Function:** `[c, s] = givens (x, y)`

Return a 2 by 2 orthogonal matrix
`*g* = [*c* *s*; -*s*' *c*]` such that
`*g* [*x*; *y*] = [*; 0]` with *x* and *y* scalars.

For example,

```octave
givens (1, 1)
     =>   0.70711   0.70711
         -0.70711   0.70711
```

**Loadable Function:** `[x, rcond] = inv (a)`

**Loadable Function:** `[x, rcond] = inverse (a)`

Compute the inverse of the square matrix *a*. Return an estimate
of the reciprocal condition number if requested, otherwise warn of an
ill-conditioned matrix if the reciprocal condition number is small.

**Loadable Function:** `type = matrix_type (a)`

**Loadable Function:** `a = matrix_type (a, type)`

**Loadable Function:** `a = matrix_type (a, 'upper', perm)`

**Loadable Function:** `a = matrix_type (a, 'lower', perm)`

**Loadable Function:** `a = matrix_type (a, 'banded', nl, nu)`

Identify the matrix type or mark a matrix as a particular type. This allows rapid
for solutions of linear equations involving *a* to be performed. Called with a
single argument, `matrix_type` returns the type of the matrix and caches it for
future use. Called with more than one argument, `matrix_type` allows the type
of the matrix to be defined.

The possible matrix types depend on whether the matrix is full or sparse, and can be
one of the following

`'unknown'`

Remove any previously cached matrix type, and mark type as unknown

`'full'`

Mark the matrix as full.

`'positive definite'`

Probable full positive definite matrix.

`'diagonal'`

Diagonal Matrix. (Sparse matrices only)

`'permuted diagonal'`

Permuted Diagonal matrix. The permutation does not need to be specifically
indicated, as the structure of the matrix explicitly gives this. (Sparse matrices
only)

`'upper'`

Upper triangular. If the optional third argument *perm* is given, the matrix is
assumed to be a permuted upper triangular with the permutations defined by the
vector *perm*.

`'lower'`

Lower triangular. If the optional third argument *perm* is given, the matrix is
assumed to be a permuted lower triangular with the permutations defined by the
vector *perm*.

`'banded'`

`'banded positive definite'`

Banded matrix with the band size of *nl* below the diagonal and *nu* above
it. If *nl* and *nu* are 1, then the matrix is tridiagonal and treated
with specialized code. In addition the matrix can be marked as probably a
positive definite (Sparse matrices only)

`'singular'`

The matrix is assumed to be singular and will be treated with a minimum norm solution

Note that the matrix type will be discovered automatically on the first attempt to
solve a linear equation involving *a*. Therefore `matrix_type` is only
useful to give Octave hints of the matrix type. Incorrectly defining the
matrix type will result in incorrect results from solutions of linear equations,
and so it is entirely the responsibility of the user to correctly identify the
matrix type.

Also the test for positive definiteness is a low-cost test for a hermitian
matrix with a real positive diagonal. This does not guarantee that the matrix
is positive definite, but only that it is a probable candidate. When such a
matrix is factorized, a Cholesky factorization is first attempted, and if
that fails the matrix is then treated with an LU factorization. Once the
matrix has been factorized, `matrix_type` will return the correct
classification of the matrix.

**Function File:** `norm (a, p)`

Compute the p-norm of the matrix *a*. If the second argument is
missing, `p = 2` is assumed.

If *a* is a matrix:

`p = 1`

1-norm, the largest column sum of the absolute values of *a*.

`p = 2`

Largest singular value of *a*.

`p = Inf or "inf"`

Infinity norm, the largest row sum of the absolute values of *a*.

`p = "fro"`

Frobenius norm of *a*, `sqrt (sum (diag (*a*' * *a*)))`.

If *a* is a vector or a scalar:

`p = Inf or "inf"`

`max (abs (*a*))`.

`p = -Inf`

`min (abs (*a*))`.

`p = "fro"`

Frobenius norm of *a*, `sqrt (sumsq (abs (a)))`.

`other`

p-norm of *a*, `(sum (abs (*a*) .^ *p*)) ^ (1/*p*)`.

See also cond, svd

**Function File:** `null (a, tol)`

Return an orthonormal basis of the null space of *a*.

The dimension of the null space is taken as the number of singular
values of *a* not greater than *tol*. If the argument *tol*
is missing, it is computed as

```octave
max (size (a)) * max (svd (a)) * eps
```

**Function File:** `orth (a, tol)`

Return an orthonormal basis of the range space of *a*.

The dimension of the range space is taken as the number of singular
values of *a* greater than *tol*. If the argument *tol* is
missing, it is computed as

```octave
max (size (a)) * max (svd (a)) * eps
```

**Loadable Function:** `pinv (x, tol)`

Return the pseudoinverse of *x*. Singular values less than
*tol* are ignored.

If the second argument is omitted, it is assumed that

```octave
tol = max (size (x)) * sigma_max (x) * eps,
```

where `sigma_max (*x*)` is the maximal singular value of *x*.

**Function File:** `rank (a, tol)`

Compute the rank of *a*, using the singular value decomposition.
The rank is taken to be the number of singular values of *a* that
are greater than the specified tolerance *tol*. If the second
argument is omitted, it is taken to be

```octave
tol = max (size (a)) * sigma(1) * eps;
```

where `eps` is machine precision and `sigma(1)` is the largest
singular value of *a*.

**Function File:** `trace (a)`

Compute the trace of *a*, `sum (diag (*a*))`.

**Function File:** `[r, k] = rref (a, tol)`

Returns the reduced row echelon form of *a*. *tol* defaults
to `eps * max (size (*a*)) * norm (*a*, inf)`.

Called with two return arguments, *k* returns the vector of
"bound variables", which are those columns on which elimination
has been performed.

#### 18.3 Matrix Factorizations

**Loadable Function:** `chol (a)`

Compute the Cholesky factor, *r*, of the symmetric positive definite
matrix *a*, where

```octave
r' * r = a.
```

See also cholinv, chol2inv

**Loadable Function:** `cholinv (a)`

Use the Cholesky factorization to compute the inverse of the
symmetric positive definite matrix *a*.

See also chol, chol2inv

**Loadable Function:** `chol2inv (u)`

Invert a symmetric, positive definite square matrix from its Cholesky
decomposition, *u*. Note that *u* should be an upper-triangular
matrix with positive diagonal elements. `chol2inv (*u*)`
provides `inv (*u*'**u*)` but it is much faster than
using `inv`.

See also chol, cholinv

**Loadable Function:** `h = hess (a)`

**Loadable Function:** `[p, h] = hess (a)`

Compute the Hessenberg decomposition of the matrix *a*.

The Hessenberg decomposition is usually used as the first step in an
eigenvalue computation, but has other applications as well (see Golub,
Nash, and Van Loan, IEEE Transactions on Automatic Control, 1979). The
Hessenberg decomposition is

`p * h * p' = a` where `p` is a square unitary matrix
(`p' * p = I`, using complex-conjugate transposition) and `h`
is upper Hessenberg (`i >= j+1 => h (i, j) = 0`).

**Loadable Function:** `[l, u, p] = lu (a)`

Compute the LU decomposition of *a*, using subroutines from
lapack. The result is returned in a permuted form, according to
the optional return value *p*. For example, given the matrix
`a = [1, 2; 3, 4]`,

```octave
[l, u, p] = lu (a)
```

returns

```octave
l =

  1.00000  0.00000
  0.33333  1.00000

u =

  3.00000  4.00000
  0.00000  0.66667

p =

  0  1
  1  0
```

The matrix is not required to be square.

**Loadable Function:** `[q, r, p] = qr (a)`

Compute the QR factorization of *a*, using standard lapack
subroutines. For example, given the matrix `a = [1, 2; 3, 4]`,

```octave
[q, r] = qr (a)
```

returns

```octave
q =

  -0.31623  -0.94868
  -0.94868   0.31623

r =

  -3.16228  -4.42719
   0.00000  -0.63246
```

The `qr` factorization has applications in the solution of least
squares problems

```octave
min norm(A x - b)
```

for overdetermined systems of equations (i.e.,

`a`

is a tall, thin matrix). The QR factorization is

`q * r = a` where `q` is an orthogonal matrix and `r` is
upper triangular.

The permuted QR factorization `[*q*, *r*, *p*] = qr (*a*)` forms the QR factorization such that the diagonal
entries of `r` are decreasing in magnitude order. For example,
given the matrix `a = [1, 2; 3, 4]`,

```octave
[q, r, p] = qr(a)
```

returns

```octave
q =

  -0.44721  -0.89443
  -0.89443   0.44721

r =

  -4.47214  -3.13050
   0.00000   0.44721

p =

   0  1
   1  0
```

The permuted `qr` factorization `[q, r, p] = qr (a)`
factorization allows the construction of an orthogonal basis of
`span (a)`.

**Loadable Function:** `lambda = qz (a, b)`

Generalized eigenvalue problem A x = s B x,
*QZ* decomposition. There are three ways to call this function:

1. `lambda = qz(A,B)` Computes the generalized eigenvalues
*lambda*
of (A - s B).
2. `[AA, BB, Q, Z, V, W, lambda] = qz (A, B)` Computes qz decomposition, generalized eigenvectors, and
generalized eigenvalues of (A - sB) 

```octave
    A*V = B*V*diag(lambda)
    W'*A = diag(lambda)*W'*B
    AA = Q'*A*Z, BB = Q'*B*Z
```

 with *Q* and *Z* orthogonal (unitary)= *I*
3. `[AA,BB,Z{, lambda}] = qz(A,B,opt)` As in form [2], but allows ordering of generalized eigenpairs
for (e.g.) solution of discrete time algebraic Riccati equations.
Form 3 is not available for complex matrices, and does not compute
the generalized eigenvectors *V*, *W*, nor the orthogonal matrix *Q*. 

`opt`

 for ordering eigenvalues of the GEP pencil. The leading block
of the revised pencil contains all eigenvalues that satisfy: 

`"N"`

 = unordered (default) 

`"S"`

 = small: leading block has all |lambda| <=1 

`"B"`

 = big: leading block has all |lambda| >= 1 

`"-"`

 = negative real part: leading block has all eigenvalues
in the open left half-plane 

`"+"`

 = nonnegative real part: leading block has all eigenvalues
in the closed right half-plane

Note: qz performs permutation balancing, but not scaling (see balance).
Order of output arguments was selected for compatibility with MATLAB

See also balance, dare, eig, schur

**Function File:** `[aa, bb, q, z] = qzhess (a, b)`

Compute the Hessenberg-triangular decomposition of the matrix pencil
`(*a*, *b*)`, returning
`*aa* = *q* * *a* * *z*`,
`*bb* = *q* * *b* * *z*`, with *q* and *z*
orthogonal. For example,

```octave
[aa, bb, q, z] = qzhess ([1, 2; 3, 4], [5, 6; 7, 8])
=> aa = [ -3.02244, -4.41741;  0.92998,  0.69749 ]
=> bb = [ -8.60233, -9.99730;  0.00000, -0.23250 ]
=>  q = [ -0.58124, -0.81373; -0.81373,  0.58124 ]
=>  z = [ 1, 0; 0, 1 ]
```

The Hessenberg-triangular decomposition is the first step in
Moler and Stewart's QZ decomposition algorithm.

Algorithm taken from Golub and Van Loan, Matrix Computations, 2nd
edition.

**Loadable Function:** `s = schur (a)`

**Loadable Function:** `[u, s] = schur (a, opt)`

The Schur decomposition is used to compute eigenvalues of a
square matrix, and has applications in the solution of algebraic
Riccati equations in control.
`schur` always returns

`s = u' * a * u`

where

`u`

is a unitary matrix

(`u'* u` is identity)

and

`s`

is upper triangular. The eigenvalues of

`a` (and `s`)

are the diagonal elements of

`s`.

If the matrix

`a`

is real, then the real Schur decomposition is computed, in which the
matrix

`u`

is orthogonal and

`s`

is block upper triangular
with blocks of size at most

`2 x 2`

along the diagonal. The diagonal elements of

`s`

(or the eigenvalues of the

`2 x 2`

blocks, when
appropriate) are the eigenvalues of

`a`

and

`s`.

The eigenvalues are optionally ordered along the diagonal according to
the value of `opt`. `opt = "a"` indicates that all
eigenvalues with negative real parts should be moved to the leading
block of

`s`

(used in `are`), `opt = "d"` indicates that all eigenvalues
with magnitude less than one should be moved to the leading block of

`s`

(used in `dare`), and `opt = "u"`, the default, indicates that
no ordering of eigenvalues should occur. The leading

`k`

columns of

`u`

always span the

`a`-invariant

subspace corresponding to the

`k`

leading eigenvalues of

`s`.

**Loadable Function:** `s = svd (a)`

**Loadable Function:** `[u, s, v] = svd (a)`

Compute the singular value decomposition of *a*

```octave
A = U*S*V'
```

The function `svd` normally returns the vector of singular values.
If asked for three return values, it computes

U, S, and V.

For example,

```octave
svd (hilb (3))
```

returns

```octave
ans =

  1.4083189
  0.1223271
  0.0026873
```

and

```octave
[u, s, v] = svd (hilb (3))
```

returns

```octave
u =

  -0.82704   0.54745   0.12766
  -0.45986  -0.52829  -0.71375
  -0.32330  -0.64901   0.68867

s =

  1.40832  0.00000  0.00000
  0.00000  0.12233  0.00000
  0.00000  0.00000  0.00269

v =

  -0.82704   0.54745   0.12766
  -0.45986  -0.52829  -0.71375
  -0.32330  -0.64901   0.68867
```

If given a second argument, `svd` returns an economy-sized
decomposition, eliminating the unnecessary rows or columns of *u* or
*v*.

**Function File:** `[housv, beta, zer] = housh (x, j, z)`

Compute Householder reflection vector *housv* to reflect *x*
to be the j-th column of identity, i.e.,

```octave
(I - beta*housv*housv')x =  norm(x)*e(j) if x(1) < 0,
(I - beta*housv*housv')x = -norm(x)*e(j) if x(1) >= 0
```

Inputs

`x`

vector

`j`

index into vector

`z`

threshold for zero (usually should be the number 0)

Outputs (see Golub and Van Loan):

`beta`

If beta = 0, then no reflection need be applied (zer set to 0)

`housv`

householder vector

**Function File:** `[u, h, nu] = krylov (a, v, k, eps1, pflg)`

Construct an orthogonal basis *u* of block Krylov subspace

```octave
[v a*v a^2*v ... a^(k+1)*v]
```

Using Householder reflections to guard against loss of orthogonality.

If *v* is a vector, then *h* contains the Hessenberg matrix
such that `a*u == u*h+rk*ek'`, in which `rk = a*u(:,k)-u*h(:,k)`, and `ek'` is the vector
`[0, 0, ..., 1]` of length `k`. Otherwise, *h* is
meaningless.

If *v* is a vector and *k* is greater than
`length(A)-1`, then *h* contains the Hessenberg matrix such
that `a*u == u*h`.

The value of *nu* is the dimension of the span of the krylov
subspace (based on *eps1*).

If *b* is a vector and *k* is greater than *m-1*, then
*h* contains the Hessenberg decomposition of *a*.

The optional parameter *eps1* is the threshold for zero. The
default value is 1e-12.

If the optional parameter *pflg* is nonzero, row pivoting is used
to improve numerical behavior. The default value is 0.

Reference: Hodel and Misra, "Partial Pivoting in the Computation of
Krylov Subspaces", to be submitted to Linear Algebra and its
Applications

#### 18.4 Functions of a Matrix

**Loadable Function:** `expm (a)`

Return the exponential of a matrix, defined as the infinite Taylor
series

```octave
expm(a) = I + a + a^2/2! + a^3/3! + ...
```

The Taylor series is *not* the way to compute the matrix
exponential; see Moler and Van Loan, Nineteen Dubious Ways to
Compute the Exponential of a Matrix, SIAM Review, 1978. This routine
uses Ward's diagonal

Pade'

approximation method with three step preconditioning (SIAM Journal on
Numerical Analysis, 1977). Diagonal

Pade'

approximations are rational polynomials of matrices

```octave
     -1
D (a)   N (a)
```

whose Taylor series matches the first

`2q+1`

terms of the Taylor series above; direct evaluation of the Taylor series
(with the same preconditioning steps) may be desirable in lieu of the

Pade'

approximation when

`Dq(a)`

is ill-conditioned.

**Function File:** `logm (a)`

Compute the matrix logarithm of the square matrix *a*. Note that
this is currently implemented in terms of an eigenvalue expansion and
needs to be improved to be more robust.

**Loadable Function:** `[result, error_estimate] = sqrtm (a)`

Compute the matrix square root of the square matrix *a*.

Ref: Nicholas J. Higham. A new sqrtm for MATLAB. Numerical Analysis
Report No. 336, Manchester Centre for Computational Mathematics,
Manchester, England, January 1999.

See also expm, logm, funm

**Loadable Function:** `kron (a, b)`

Form the kronecker product of two matrices, defined block by block as

```octave
x = [a(i, j) b]
```

For example,

```octave
kron (1:4, ones (3, 1))
      =>  1  2  3  4
          1  2  3  4
          1  2  3  4
```

**Loadable Function:** `x = syl (a, b, c)`

Solve the Sylvester equation

```octave
A X + X B + C = 0
```

using standard lapack subroutines. For example,

```octave
syl ([1, 2; 3, 4], [5, 6; 7, 8], [9, 10; 11, 12])
     => [ -0.50000, -0.66667; -0.66667, -0.50000 ]
```
