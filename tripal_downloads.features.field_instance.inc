<?php
/**
 * @file
 * tripal_downloads.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function tripal_downloads_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-download-field_download_algorithm'.
  $field_instances['node-download-field_download_algorithm'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Algorithm name, e.g. blast.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_algorithm',
    'label' => 'Algorithm',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-download-field_download_category'.
  $field_instances['node-download-field_download_category'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_category',
    'label' => 'Category',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-download-field_download_description'.
  $field_instances['node-download-field_download_description'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please provide all necessary information to allow someone to recreate the analysis, including materials and methods for collection of the source data and performing the analysis',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_description',
    'label' => 'Materials & Methods (Description and/or Program Settings)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-download-field_download_file'.
  $field_instances['node-download-field_download_file'] = array(
    'bundle' => 'download',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_file',
    'label' => 'File',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'download',
      'file_extensions' => 'bam bed fasta gff3 gz tar txt vcf zip',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-download-field_download_index'.
  $field_instances['node-download-field_download_index'] = array(
    'bundle' => 'download',
    'deleted' => 0,
    'description' => 'For BAM, a .bam.bai file. For GFF3, a .gff3.gz.tbi file.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_index',
    'label' => 'Index',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'download',
      'file_extensions' => 'bai bam bed gff3 gz tbi vcf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-download-field_download_is_jbrowse_track'.
  $field_instances['node-download-field_download_is_jbrowse_track'] = array(
    'bundle' => 'download',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this to make the file available through the JBrowse API',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_is_jbrowse_track',
    'label' => 'Expose as JBrowse Track?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-download-field_download_organism'.
  $field_instances['node-download-field_download_organism'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_organism',
    'label' => 'Organism',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-download-field_download_program'.
  $field_instances['node-download-field_download_program'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Program name, e.g. blastx, blastp, sim4, genscan. If the analysis was not derived from a software package, provide a very brief description of the pipeline or method.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_program',
    'label' => 'Program, Pipeline Name or Method Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-download-field_download_programversion'.
  $field_instances['node-download-field_download_programversion'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Version description, e.g. TBLASTX 2.0MP-WashU [09-Nov-2000]. Enter \'n/a\' if no version is available or applicable.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_programversion',
    'label' => 'Program, Pipeline or Method version',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-download-field_download_sourcename'.
  $field_instances['node-download-field_download_sourcename'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The name of the source data. This could be a file name, data set name or a small description for how the data was collected. For long descriptions use the description field below',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_sourcename',
    'label' => 'Source Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-download-field_download_sourceuri'.
  $field_instances['node-download-field_download_sourceuri'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_sourceuri',
    'label' => 'Source URI',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-download-field_download_sourceversion'.
  $field_instances['node-download-field_download_sourceversion'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the source dataset has a version, include it here',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_sourceversion',
    'label' => 'Source Version',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-download-field_download_timeexecuted'.
  $field_instances['node-download-field_download_timeexecuted'] = array(
    'bundle' => 'download',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_timeexecuted',
    'label' => 'Time Executed',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1900:2050',
      ),
      'type' => 'date_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-download-field_download_type'.
  $field_instances['node-download-field_download_type'] = array(
    'bundle' => 'download',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_download_type',
    'label' => 'Track Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Algorithm');
  t('Algorithm name, e.g. blast.');
  t('Category');
  t('Check this to make the file available through the JBrowse API');
  t('Expose as JBrowse Track?');
  t('File');
  t('For BAM, a .bam.bai file. For GFF3, a .gff3.gz.tbi file.');
  t('If the source dataset has a version, include it here');
  t('Index');
  t('Materials & Methods (Description and/or Program Settings)');
  t('Organism');
  t('Please provide all necessary information to allow someone to recreate the analysis, including materials and methods for collection of the source data and performing the analysis');
  t('Program name, e.g. blastx, blastp, sim4, genscan. If the analysis was not derived from a software package, provide a very brief description of the pipeline or method.');
  t('Program, Pipeline Name or Method Name');
  t('Program, Pipeline or Method version');
  t('Source Name');
  t('Source URI');
  t('Source Version');
  t('The name of the source data. This could be a file name, data set name or a small description for how the data was collected. For long descriptions use the description field below');
  t('Time Executed');
  t('Track Type');
  t('Version description, e.g. TBLASTX 2.0MP-WashU [09-Nov-2000]. Enter \'n/a\' if no version is available or applicable.');

  return $field_instances;
}
