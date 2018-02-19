<?php
$list3 =  new montaj_data();
if($lang == 'en')
{
$list3->get_list3_en();
echo $list3->list3_en;
}
else if($lang == 'ro'){
$list3->get_list3_ro();
echo $list3->list3_ro;
}
else{
$list3->get_list3_ro();
echo $list3->list3_ro;
}
?>