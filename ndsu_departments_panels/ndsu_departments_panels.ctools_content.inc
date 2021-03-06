<?php

/**
 * @file
 * Bulk export of ctools_content objects generated by Bulk export module.
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function ndsu_departments_panels_default_ctools_custom_content() {
    $contents = array();

    $content = new stdClass();
    $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
    $content->api_version = 1;
    $content->name = 'ndsu_contacts';
    $content->admin_title = 'NDSU Contacts';
    $content->admin_description = 'Display both department and technical contacts';
    $content->category = 'NDSU';
    $content->settings = array(
        'admin_title' => 'Contacts',
        'title' => '',
        'body' => '<div class="row">
<?php
//department contacts
$name_d = \'%term:field_ndsu_dept_name_d\';
$title_d = \'%term:field_ndsu_dept_title_d\';
$address_d = "%term:field_ndsu_dept_address_d";
$email_d = \'%term:field_ndsu_dept_email_d\';
$phone_d = \'%term:field_ndsu_dept_phone_d\';
$cell_d = \'%term:field_ndsu_dept_cell_d\';

if($name_d != \'\') {
    echo \'<div class="contact col-lg-6"><h2>Contacts</h2><div class="name">\' . $name_d;
    if($title_d != \'\') {echo \', <span class="job-title">\' . $title_d . \'</span>\';}
    echo \'</div>\';
    if($address_d != \'\') {echo \'<div class="address">\' . $address_d . \'</div>\';}
    echo \'<div class="email field-inline">\' . $email_d . \'</div>\';
    if($phone_d != \'\') {echo \'<div class="phone field-inline"><span class="label-inline">Phone:</span> <a href="tel:\' . $phone_d . \'">\' . $phone_d . \'</a></div>\';}
    if($cell_d != \'\') {echo \'<div class="phone cell field-inline"><span class="label-inline">Cell:</span> <a href="tel:\' . $cell_d . \'">\' . $cell_d . \'</a></div>\';}
    echo \'</div>\';
}
//technical contacts
$name_t = \'%term:field_ndsu_dept_name_t\';
$title_t = \'%term:field_ndsu_dept_title_t\';
$address_t = "%term:field_ndsu_dept_address_t";
$email_t = \'%term:field_ndsu_dept_email_t\';
$phone_t = \'%term:field_ndsu_dept_phone_t\';
$cell_t = \'%term:field_ndsu_dept_cell_t\';

if($name_t != \'\') {
    echo \'<div class="contact col-lg-6"><h2>Technical Contacts</h2><div class="name">\' . $name_t;
    if($title_t != \'\') {echo \', <span class="job-title">\' . $title_t . \'</span>\';}
    echo \'</div>\';
    if($address_t != \'\') {echo \'<div class="address">\' . $address_t . \'</div>\';}
    echo \'<div class="email field-inline">\' . $email_t . \'</div>\';
    if($phone_t != \'\') {echo \'<div class="phone field-inline"><span class="label-inline">Phone:</span> <a href="tel:\' . $phone_t . \'">\' . $phone_t . \'</a></div>\';}
    if($cell_t != \'\') {echo \'<div class="phone cell field-inline"><span class="label-inline">Cell:</span> <a href="tel:\' . $cell_t . \'">\' . $cell_t . \'</a></div>\';}
    echo \'</div>\';
}
?>
</div>',
        'format' => 'php_code',
        'substitute' => 1,
    );
    $contents['ndsu_contacts'] = $content;

    $content = new stdClass();
    $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
    $content->api_version = 1;
    $content->name = 'ndsu_department_contact';
    $content->admin_title = 'NDSU Department Contacts';
    $content->admin_description = '';
    $content->category = 'NDSU';
    $content->settings = array(
        'admin_title' => 'Department Contacts',
        'title' => 'Contact',
        'body' => '<?php
$name_d = \'%term:field_ndsu_dept_name_d\';
$title_d = \'%term:field_ndsu_dept_title_d\';
$address_d = "%term:field_ndsu_dept_address_d";
$email_d = \'%term:field_ndsu_dept_email_d\';
$phone_d = \'%term:field_ndsu_dept_phone_d\';
$cell_d = \'%term:field_ndsu_dept_cell_d\';

if($name_d != \'\') {
    echo \'<div class="contact"><div class="name">\' . $name_d;
    if($title_d != \'\') {echo \', <span class="job-title">\' . $title_d . \'</span>\';}
    echo \'</div>\';
    if($address_d != \'\') {echo \'<div class="address">\' . $address_d . \'</div>\';}
    echo \'<div class="email field-inline">\' . $email_d . \'</div>\';
    if($phone_d != \'\') {echo \'<div class="phone field-inline"><span class="label-inline">Phone:</span> <a href="tel:\' . $phone_d . \'">\' . $phone_d . \'</a></div>\';}
    if($cell_d != \'\') {echo \'<div class="phone cell field-inline"><span class="label-inline">Cell:</span> <a href="tel:\' . $cell_d . \'">\' . $cell_d . \'</a></div>\';}
    echo \'</div>\';
}
?>',
        'format' => 'php_code',
        'substitute' => 1,
    );
    $contents['ndsu_department_contact'] = $content;

    $content = new stdClass();
    $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
    $content->api_version = 1;
    $content->name = 'ndsu_technical_contact';
    $content->admin_title = 'NDSU Technical Contacts';
    $content->admin_description = '';
    $content->category = 'NDSU';
    $content->settings = array(
        'admin_title' => 'Technical Contacts',
        'title' => 'Technical Contact',
        'body' => '<?php
$name_t = \'%term:field_ndsu_dept_name_t\';
$title_t = \'%term:field_ndsu_dept_title_t\';
$address_t = "%term:field_ndsu_dept_address_t";
$email_t = \'%term:field_ndsu_dept_email_t\';
$phone_t = \'%term:field_ndsu_dept_phone_t\';
$cell_t = \'%term:field_ndsu_dept_cell_t\';

if($name_t != \'\') {
    echo \'<div class="contact"><div class="name">\' . $name_t;
    if($title_t != \'\') {echo \', <span class="job-title">\' . $title_t . \'</span>\';}
    echo \'</div>\';
    if($address_t != \'\') {echo \'<div class="address">\' . $address_t . \'</div>\';}
    echo \'<div class="email field-inline">\' . $email_t . \'</div>\';
    if($phone_t != \'\') {echo \'<div class="phone field-inline"><span class="label-inline">Phone:</span> <a href="tel:\' . $phone_t . \'">\' . $phone_t . \'</a></div>\';}
    if($cell_t != \'\') {echo \'<div class="phone cell field-inline"><span class="label-inline">Cell:</span> <a href="tel:\' . $cell_t . \'">\' . $cell_t . \'</a></div>\';}
    echo \'</div>\';
}
?>',
        'format' => 'php_code',
        'substitute' => 1,
    );
    $contents['ndsu_technical_contact'] = $content;

    return $contents;
}
