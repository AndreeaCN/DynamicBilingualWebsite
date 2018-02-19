<?php
$llist_text =  new caracter_data();
if($lang == 'en')
{
$llist_text->get_Llist_en();
echo $llist_text->Llist_caracter_en;
}
else if($lang == 'ro'){
$llist_text->get_Llist_ro();
echo $llist_text->Llist_caracter_ro;
}
else{
$llist_text->get_Llist_ro();
echo $llist_text->Llist_caracter_ro;
}?>