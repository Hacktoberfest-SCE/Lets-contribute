$(document).ready(function() {
    // Today's Goal Progress
    var today = parseFloat($('.today').data('progress'));
    $('.today.circle-progress').circleProgress({
        value: today
    }).on('circle-animation-progress', function(event, progress) {
        $(this).find('strong').html(parseInt(100 * progress * today) + '<i>%</i>');
    });
    
    // Overall Goal Progress
    var overall = parseFloat($('.overall').data('progress'));
    $('.overall.circle-progress').circleProgress({
        value: overall
    }).on('circle-animation-progress', function(event, progress) {
        $(this).find('strong').html(parseInt(100 * progress * overall) + '<i>%</i>');
    });
});