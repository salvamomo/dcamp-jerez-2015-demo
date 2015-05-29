INTRODUCTION
------------

  This repository contains the code files generated during my session at
  Drupalcamp Spain 2015, in Jerez de la Frontera.
  
  The slides for the session are here: http://salvamomo.github.io/dcamp-jerez-2015
  And the entire recorded session (in Spanish) here: https://vimeo.com/128774802


***Installation***

- Drupal site contained under www/.
- Install it as normally, either through the UI, or using Drush.
- An installation profile is included: "dcamp", that will enable all the modules generated during the session.

- To install with Drush:
> "drush si dcamp --account-pass=admin".


*** Demo 1: ***

> A custom field type created with http://drupal.org/project/ftg
> module is "author_changes" -> sites/all/modules/custom/author_changes.

*** Demo 2: ***

> Custom Entity for dragons, created with Yeoman. (Plugin for this will be contributed very soon).
> Module is "dragon" -> sites/all/modules/custom/dragon.

*** Demo 3: ***

> Custom view created from the command-line and exported into features,
> using the IDC module (http://drupal.org/project/idc).
> Exported view is at -> sites/all/modules/features/f_views

*** Extra: ***

> Custom Multi-step form created with the mforms module: http://drupal.org/project/mforms
> Module is "dieta_personal", under sites/all/modules/genova/dieta_personal.
> After enabling, the multi-step form should be available at "/calculadora-dieta"
