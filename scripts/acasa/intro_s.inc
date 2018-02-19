<?php
$s_intro =  new acasa_data();
if($lang == 'en')
{
$s_intro->get_intros_en();
echo $s_intro->intros_en;
}
else if($lang == 'ro'){
$s_intro->get_intros_ro();
echo $s_intro->intros_ro;
}
else{
$s_intro->get_intros_ro();
echo $s_intro->intros_ro;
}?>
