<?php
$g_intro =  new acasa_data();
if($lang == 'en')
{
$g_intro->get_introg_en();
echo $g_intro->introg_en;
}
else if($lang == 'ro'){
$g_intro->get_introg_ro();
echo $g_intro->introg_ro;
}
else{
$g_intro->get_introg_ro();
echo $g_intro->introg_ro;
}?>
