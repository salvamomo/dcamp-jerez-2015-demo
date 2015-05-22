<?php
/**
 * @file
 * TODO Auto generated file, add description.
 */


/**
 * Form build callback of _dieta_perfil_fisico step.
 *
 * @param array $form_state
 *   Drupal form_state array.
 * @param mixed $next_step
 *   Step name that is to follow.
 * @param mixed $params
 *   Additional params passed into form steps.
 *
 * @return array
 *   Drupal form array.
 */
function _dieta_perfil_fisico(&$form_state, &$next_step, $params) {
  $next_step = '_dieta_preferencias_alimenticias';

  $values = mforms_get_vals('calculadora_dieta');

  $form = array();

  $form['peso'] = array(
    '#type' => 'textfield',
    '#title' => t('Peso'),
    '#default_value' => isset($values['peso']) ? $values['peso'] : NULL,
  );
  $form['altura'] = array(
    '#type' => 'textfield',
    '#title' => t('Altura'),
    '#default_value' => isset($values['altura']) ? $values['altura'] : NULL,
  );

  return $form;
}


/**
 * Form validate callback of _dieta_perfil_fisico step.
 *
 * @param array $form
 *   Drupal form array.
 * @param array $form_state
 *   Drupal form_state array.
 */
function _dieta_perfil_fisico_validate($form, &$form_state) {

}

/**
 * Form submit callback of _dieta_perfil_fisico step.
 *
 * @param array $form
 *   Drupal form array.
 * @param array $form_state
 *   Drupal form_state array.
 */
function _dieta_perfil_fisico_submit($form, &$form_state) {

}

/**
 * Form build callback of _dieta_preferencias_alimenticias step.
 *
 * @param array $form_state
 *   Drupal form_state array.
 * @param mixed $next_step
 *   Step name that is to follow.
 * @param mixed $params
 *   Additional params passed into form steps.
 *
 * @return array
 *   Drupal form array.
 */
function _dieta_preferencias_alimenticias(&$form_state, &$next_step, $params) {
  $next_step = '_dieta_objetivos';

  $values = mforms_get_vals('calculadora_dieta');

  $form = array();

  $form['preferencias_comida'] = array(
    '#type' => 'textarea',
    '#title' => t('Preferencias Comida'),
    '#default_value' => isset($values['preferencias_comida']) ? $values['preferencias_comida'] : NULL,
  );
$form['preferencias_bebida'] = array(
    '#type' => 'textarea',
    '#title' => t('Preferencias Bebida'),
    '#default_value' => isset($values['preferencias_bebida']) ? $values['preferencias_bebida'] : NULL,
  );

  return $form;
}


/**
 * Form validate callback of _dieta_preferencias_alimenticias step.
 *
 * @param array $form
 *   Drupal form array.
 * @param array $form_state
 *   Drupal form_state array.
 */
function _dieta_preferencias_alimenticias_validate($form, &$form_state) {

}

/**
 * Form submit callback of _dieta_preferencias_alimenticias step.
 *
 * @param array $form
 *   Drupal form array.
 * @param array $form_state
 *   Drupal form_state array.
 */
function _dieta_preferencias_alimenticias_submit($form, &$form_state) {

}

/**
 * Form build callback of _dieta_objetivos step.
 *
 * @param array $form_state
 *   Drupal form_state array.
 * @param mixed $next_step
 *   Step name that is to follow.
 * @param mixed $params
 *   Additional params passed into form steps.
 *
 * @return array
 *   Drupal form array.
 */
function _dieta_objetivos(&$form_state, &$next_step, $params) {
  $next_step = NULL;

  $values = mforms_get_vals('calculadora_dieta');

  $form = array();

  $form['duracion_dieta'] = array(
    '#type' => 'textfield',
    '#title' => t('Duracion Dieta'),
    '#default_value' => isset($values['duracion_dieta']) ? $values['duracion_dieta'] : NULL,
  );
$form['tipo_dieta'] = array(
    '#type' => 'textfield',
    '#title' => t('Tipo Dieta'),
    '#default_value' => isset($values['tipo_dieta']) ? $values['tipo_dieta'] : NULL,
  );

  return $form;
}


/**
 * Form validate callback of _dieta_objetivos step.
 *
 * @param array $form
 *   Drupal form array.
 * @param array $form_state
 *   Drupal form_state array.
 */
function _dieta_objetivos_validate($form, &$form_state) {

}

/**
 * Form submit callback of _dieta_objetivos step.
 *
 * @param array $form
 *   Drupal form array.
 * @param array $form_state
 *   Drupal form_state array.
 */
function _dieta_objetivos_submit($form, &$form_state) {

}
