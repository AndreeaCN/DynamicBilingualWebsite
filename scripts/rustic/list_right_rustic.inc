<?php
$rlist_text =  new rustic_data();
if($lang == 'en')
{
$rlist_text->get_RList_en();
echo $rlist_text->Rlist_rustic_en;
}
else if($lang == 'ro'){
$rlist_text->get_RList_ro();
echo $rlist_text->Rlist_rustic_ro;
}
else{
$rlist_text->get_RList_ro();
echo $rlist_text->Rlist_rustic_ro;
}
?>