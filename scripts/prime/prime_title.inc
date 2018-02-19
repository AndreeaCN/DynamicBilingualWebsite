<?php
$prime_title =  new parchet_data();
if($lang == 'en')
{
$prime_title->get_prime_en();
echo $prime_title->prime_title_en;
}
else if($lang == 'ro'){
$prime_title->get_prime_ro();
echo $prime_title->prime_title_ro;
}
else{
$prime_title->get_prime_ro();
echo $prime_title->prime_title_ro;
}
?>