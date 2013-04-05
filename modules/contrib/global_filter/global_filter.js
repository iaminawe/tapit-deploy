
(function($) {
  Drupal.behaviors.GlobalFilterSubmitOnChange = {
    attach: function(context, settings) {
      $('.global-filter select').change(function() {
        // Find enclosing form and auto-resubmit as soon as a new value is selected.
        for (var element = $(this).parent(); !element.is('form'); element = element.parent()) {}
        element.submit();
      });
    }
  }

  Drupal.behaviors.GlobalFilterToggleSelector = {
    attach: function(context, settings) {
      var viewSelectorDiv  = $('#global-filter-selector-view' ).parent();
      var fieldSelectorDiv = $('#global-filter-selector-field').parent();

      if ($('fieldset#edit-global-filter input[type="radio"]:checked').val() < 1) {
        viewSelectorDiv.hide();
      }
      else {
        fieldSelectorDiv.hide();
      }
      $('fieldset#edit-global-filter input[type="radio"]').change(function() {
        if ($(this).val() < 1) {
          viewSelectorDiv.hide();
          fieldSelectorDiv.show();
        }
        else {
          viewSelectorDiv.show();
          fieldSelectorDiv.hide();
        }
      });
    }
  }

})(jQuery);
