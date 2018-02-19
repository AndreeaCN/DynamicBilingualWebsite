<?php
$left_r =  new scari_data();
if($lang == 'en')
{
$left_r->get_rightlist_en();
echo $left_r->listright_en;
}
else if($lang == 'ro'){
$left_r->get_rightlist_ro();
echo $left_r->listright_ro;
}
else{
$left_r->get_rightlist_ro();
echo $left_r->listright_ro;
}
?>