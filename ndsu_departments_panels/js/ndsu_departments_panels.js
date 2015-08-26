// JavaScript Document

jQuery(document).ready(function($) {
   $('body.college-department-term #primary-nav ul.menu li a[href="/college-department"]').parent('li').addClass('active-trail');
})
// Replacing active-trail class on terms that may hae been removed by panels term-view