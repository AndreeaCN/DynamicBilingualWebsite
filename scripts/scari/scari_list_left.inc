<?php
$left_l =  new scari_data();
if($lang == 'en')
{
$left_l->get_leftlist_en();
echo $left_l->listleft_en;
}
else if($lang == 'ro'){
$left_l->get_leftlist_ro();
echo $left_l->listleft_ro;
}
else{
$left_l->get_leftlist_ro();
echo $left_l->listleft_ro;
}
?>