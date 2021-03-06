<?php
/**
 * @file
 * me_prisons.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function me_prisons_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:prison:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'prison';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bootopoly_bryant_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9ed2efc2-6ffc-4081-b4e6-e721083ec195';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9ad929fb-b3c1-4dc9-9dc3-c8fe0097c884';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_security_level';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ad929fb-b3c1-4dc9-9dc3-c8fe0097c884';
    $display->content['new-9ad929fb-b3c1-4dc9-9dc3-c8fe0097c884'] = $pane;
    $display->panels['contentmain'][0] = 'new-9ad929fb-b3c1-4dc9-9dc3-c8fe0097c884';
    $pane = new stdClass();
    $pane->pid = 'new-acda6d48-f283-46d7-a150-15b37eb73bbf';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          0 => 'address',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'acda6d48-f283-46d7-a150-15b37eb73bbf';
    $display->content['new-acda6d48-f283-46d7-a150-15b37eb73bbf'] = $pane;
    $display->panels['contentmain'][1] = 'new-acda6d48-f283-46d7-a150-15b37eb73bbf';
    $pane = new stdClass();
    $pane->pid = 'new-8260c294-25eb-48c2-bd79-dd42df6f71d4';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8260c294-25eb-48c2-bd79-dd42df6f71d4';
    $display->content['new-8260c294-25eb-48c2-bd79-dd42df6f71d4'] = $pane;
    $display->panels['contentmain'][2] = 'new-8260c294-25eb-48c2-bd79-dd42df6f71d4';
    $pane = new stdClass();
    $pane->pid = 'new-120660b7-d60a-4e8b-878a-9f002914896b';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '120660b7-d60a-4e8b-878a-9f002914896b';
    $display->content['new-120660b7-d60a-4e8b-878a-9f002914896b'] = $pane;
    $display->panels['contentmain'][3] = 'new-120660b7-d60a-4e8b-878a-9f002914896b';
    $pane = new stdClass();
    $pane->pid = 'new-baba69a0-47ed-4479-8f44-e5131a39dd95';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'geofield_wkt',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'data' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'baba69a0-47ed-4479-8f44-e5131a39dd95';
    $display->content['new-baba69a0-47ed-4479-8f44-e5131a39dd95'] = $pane;
    $display->panels['contentmain'][4] = 'new-baba69a0-47ed-4479-8f44-e5131a39dd95';
    $pane = new stdClass();
    $pane->pid = 'new-037631d8-bcd3-4ae5-85f1-8a896cd391b0';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_prison_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '037631d8-bcd3-4ae5-85f1-8a896cd391b0';
    $display->content['new-037631d8-bcd3-4ae5-85f1-8a896cd391b0'] = $pane;
    $display->panels['contentmain'][5] = 'new-037631d8-bcd3-4ae5-85f1-8a896cd391b0';
    $pane = new stdClass();
    $pane->pid = 'new-d5bd0dae-5e00-4c1b-a26a-68725ed187b8';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_prison_region';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd5bd0dae-5e00-4c1b-a26a-68725ed187b8';
    $display->content['new-d5bd0dae-5e00-4c1b-a26a-68725ed187b8'] = $pane;
    $display->panels['contentmain'][6] = 'new-d5bd0dae-5e00-4c1b-a26a-68725ed187b8';
    $pane = new stdClass();
    $pane->pid = 'new-9ea20631-a025-48c4-ab88-ef654574db3d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '9ea20631-a025-48c4-ab88-ef654574db3d';
    $display->content['new-9ea20631-a025-48c4-ab88-ef654574db3d'] = $pane;
    $display->panels['contentmain'][7] = 'new-9ea20631-a025-48c4-ab88-ef654574db3d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9ad929fb-b3c1-4dc9-9dc3-c8fe0097c884';
  $panelizer->display = $display;
  $export['taxonomy_term:prison:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:prison:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'prison';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bootopoly_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9cc0b4a1-eef9-4b8b-bf4c-4ecfe4acf597';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8bb6ccda-2946-4e8b-a825-3361711d0a60';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8bb6ccda-2946-4e8b-a825-3361711d0a60';
    $display->content['new-8bb6ccda-2946-4e8b-a825-3361711d0a60'] = $pane;
    $display->panels['contentmain'][0] = 'new-8bb6ccda-2946-4e8b-a825-3361711d0a60';
    $pane = new stdClass();
    $pane->pid = 'new-8116791a-c343-4d15-9640-91d93c0af47e';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8116791a-c343-4d15-9640-91d93c0af47e';
    $display->content['new-8116791a-c343-4d15-9640-91d93c0af47e'] = $pane;
    $display->panels['contentmain'][1] = 'new-8116791a-c343-4d15-9640-91d93c0af47e';
    $pane = new stdClass();
    $pane->pid = 'new-9818c758-d62f-4182-bf92-585253f82920';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9818c758-d62f-4182-bf92-585253f82920';
    $display->content['new-9818c758-d62f-4182-bf92-585253f82920'] = $pane;
    $display->panels['sidebar'][0] = 'new-9818c758-d62f-4182-bf92-585253f82920';
    $pane = new stdClass();
    $pane->pid = 'new-8d646883-c087-4e64-8833-6e54d6e098f7';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_prison_region';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8d646883-c087-4e64-8833-6e54d6e098f7';
    $display->content['new-8d646883-c087-4e64-8833-6e54d6e098f7'] = $pane;
    $display->panels['sidebar'][1] = 'new-8d646883-c087-4e64-8833-6e54d6e098f7';
    $pane = new stdClass();
    $pane->pid = 'new-6e5f0cc1-3f5c-488c-a3b5-91238aa01851';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_prison_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6e5f0cc1-3f5c-488c-a3b5-91238aa01851';
    $display->content['new-6e5f0cc1-3f5c-488c-a3b5-91238aa01851'] = $pane;
    $display->panels['sidebar'][2] = 'new-6e5f0cc1-3f5c-488c-a3b5-91238aa01851';
    $pane = new stdClass();
    $pane->pid = 'new-5db5e9eb-7d23-4f63-9fb7-065beafc7884';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_security_level';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5db5e9eb-7d23-4f63-9fb7-065beafc7884';
    $display->content['new-5db5e9eb-7d23-4f63-9fb7-065beafc7884'] = $pane;
    $display->panels['sidebar'][3] = 'new-5db5e9eb-7d23-4f63-9fb7-065beafc7884';
    $pane = new stdClass();
    $pane->pid = 'new-c2a8f1eb-196c-4b50-ad80-891466f77603';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'geofield_leaflet',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'data' => 'full',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c2a8f1eb-196c-4b50-ad80-891466f77603';
    $display->content['new-c2a8f1eb-196c-4b50-ad80-891466f77603'] = $pane;
    $display->panels['sidebar'][4] = 'new-c2a8f1eb-196c-4b50-ad80-891466f77603';
    $pane = new stdClass();
    $pane->pid = 'new-11acdf23-f2b0-41c9-a1dd-83046a6b0ce4';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          0 => 'address',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '11acdf23-f2b0-41c9-a1dd-83046a6b0ce4';
    $display->content['new-11acdf23-f2b0-41c9-a1dd-83046a6b0ce4'] = $pane;
    $display->panels['sidebar'][5] = 'new-11acdf23-f2b0-41c9-a1dd-83046a6b0ce4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5db5e9eb-7d23-4f63-9fb7-065beafc7884';
  $panelizer->display = $display;
  $export['taxonomy_term:prison:default:default'] = $panelizer;

  return $export;
}
