<?php
$p_intro =  new acasa_data();
if($lang == 'en')
{
$p_intro->get_introp_en();
echo $p_intro->introp_en;
}
else if($lang == 'ro'){
$p_intro->get_introp_ro();
echo $p_intro->introp_ro;
}
else{
$p_intro->get_introp_ro();
echo $p_intro->introp_ro;
}?>