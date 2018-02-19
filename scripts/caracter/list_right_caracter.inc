<?php
$rlist_text =  new caracter_data();
if($lang == 'en')
{
$rlist_text->get_RList_en();
echo $rlist_text->Rlist_caracter_en;
}
else if($lang == 'ro'){
$rlist_text->get_RList_ro();
echo $rlist_text->Rlist_caracter_ro;
}
else{
$rlist_text->get_RList_ro();
echo $rlist_text->Rlist_caracter_ro;
}
?>