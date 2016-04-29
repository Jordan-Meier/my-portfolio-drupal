# Custom Cipher Shift Module

## Epicodus Drupal, Week 2: Practice writing a custom module for Drupal 7 using forms and form validation

### By: Jordan Meier

### Description

This week's code review is a custom module that encrypts a block of text by shifting the value of each letter a specified distance either left or right.

### Known Bugs

No known bugs at this time.

## Prerequisites

You will need the following things properly installed on your computer.

* [MAMP/WAMP](https://www.mamp.info/en/downloads/)
* Drush

## Installation

* `git clone <repository-url>` this repository
* copy the module folder located in sites/all/modules called 'shift_cipher'
* paste the module into your project directory in sites/all/modules


## Running / Development

* Visit the your site at [http://localhost:8888](http://localhost:8888).
* Log into your site as the administrator.
* Once you are logged in as the admin, enable the 'shift_cipher' module by typing the following into your terminal from the project directory:
`$ drush en shift_cipher
 $ drush cc all `
 * In the navigation menu, click the link for shift cipher, fill out the form, and recieve your encrypted phrase!

### Technologies Used
* MAMP
* Drupal 7
* PHP

###Copyright & Licensing

Copyright (c) 2015 **Jordan Meier**

*This software is licensed under the MIT license.*

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
