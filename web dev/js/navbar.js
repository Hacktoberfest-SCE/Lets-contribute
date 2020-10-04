$(document).ready(function() {
	// If you press the logo
	$('.navbar-brand').click(function(e) {
		$('html, body').stop(true,true).animate({
			scrollTop: 0
		}, 1500);
	});
	
	// Switch active menu tab
	$('#menu li').click(function(e) {
		var name = $(this).find('a').attr('href');
		$('#menu li.active').removeClass('active');
		
		if(!$(this).hasClass('active'))
			$(this).addClass('active');
			
		// Scroll to the position
		$('html, body').stop(true,true).animate({
			scrollTop: $(name).offset().top - 50
		}, 1500);
		
		e.preventDefault();
	});
	
	// Login dialog
	// Lean Modal form for login
	$('#dialog').leanModal({ top: 200, closeButton: ".modal_close" });
	
	// Find out which menu item to set active based on top offset
	var menuLength = $('#menu li').length;
	
	$(window).scroll(function() {
		// Get scroll position
		var offset = $(document).scrollTop();
		
		// Remove active from the menu
		$('#menu li.active').removeClass('active');
		
		// Look through each menu item
		$('#menu li').each(function(index, value) {
			var name = $(this).find('a').attr('href');
			
			// Set menu item active if the window is scrolled to their offset
			if(name == $('#menu li').last().find('a').attr('href'))
			{
				if(offset >= $(name).offset().top - 50)
					$(this).addClass('active');
			}
			else if(offset >= $(name).offset().top - 50 && 
			   offset <= $(name).next().next().offset().top - 50)
				$(this).addClass('active');
		});
	});
});