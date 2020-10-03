$(document).ready(function() {
	// Reset all forms
	$('form').find("input[type=text], textarea").val("");
	
	// Delete label if there's text in the input
	$('form input, form textarea').focus(function() {
		$(this).parent().find('label').addClass('hidden');
	});
	$('form input, form textarea').focusout(function() {
		if($(this).val() == '')
			$(this).parent().find('label').removeClass('hidden');
	});
});