<?php
/**
 * @file
 * contact_page.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function contact_page_contact_categories_defaults() {
  return array(
    'Contact Me!' => array(
      'category' => 'Contact Me!',
      'recipients' => 'jbirdmeier@gmail.com',
      'reply' => 'Thanks for reaching out! I will get back to you as soon as I can.

Best,
Jordan Meier

',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
