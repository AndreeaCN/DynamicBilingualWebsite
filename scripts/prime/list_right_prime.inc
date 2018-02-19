<?php
$rlist_text =  new prime_data();
if($lang == 'en')
{
$rlist_text->get_RList_en();
echo $rlist_text->Rlist_prime_en;
}
else if($lang == 'ro'){
$rlist_text->get_RList_ro();
echo $rlist_text->Rlist_prime_ro;
}
else{
$rlist_text->get_RList_ro();
echo $rlist_text->Rlist_prime_ro;
}
?>