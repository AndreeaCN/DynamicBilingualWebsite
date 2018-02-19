<?php
$list2 =  new montaj_data();
if($lang == 'en')
{
$list2->get_list2_en();
echo $list2->list2_en;
}
else if($lang == 'ro'){
$list2->get_list2_ro();
echo $list2->list2_ro;
}
else{
$list2->get_list2_ro();
echo $list2->list2_ro;
}
?>