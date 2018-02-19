<?php
$llist_text =  new prime_data();
if($lang == 'en')
{
$llist_text->get_Llist_en();
echo $llist_text->Llist_prime_en;
}
else if($lang == 'ro'){
$llist_text->get_Llist_ro();
echo $llist_text->Llist_prime_ro;
}
else{
$llist_text->get_Llist_ro();
echo $llist_text->Llist_prime_ro;
}?>