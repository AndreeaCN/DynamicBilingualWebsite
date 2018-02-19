<?php
$rustic_title =  new parchet_data();
if($lang == 'en')
{
$rustic_title->get_rustic_en();
echo $rustic_title->rustic_title_en;
}
else if($lang == 'ro'){
$rustic_title->get_rustic_ro();
echo $rustic_title->rustic_title_ro;
}
else{
$rustic_title->get_rustic_ro();
echo $rustic_title->rustic_title_ro;
}
?>