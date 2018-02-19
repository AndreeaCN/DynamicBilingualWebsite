<?php
$list4 =  new montaj_data();
if($lang == 'en')
{
$list4->get_list4_en();
echo $list4->list4_en;
}
else if($lang == 'ro'){
$list4->get_list4_ro();
echo $list4->list4_ro;
}
else{
$list4->get_list4_ro();
echo $list4->list4_ro;
}
?>