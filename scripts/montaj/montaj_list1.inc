<?php
$list1 =  new montaj_data();
if($lang == 'en')
{
$list1->get_list1_en();
echo $list1->list1_en;
}
else if($lang == 'ro'){
$list1->get_list1_ro();
echo $list1->list1_ro;
}
else{
$list1->get_list1_ro();
echo $list1->list1_ro;
}
?>