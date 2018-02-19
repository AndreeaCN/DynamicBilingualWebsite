<?php
$tech_text =  new rustic_data();
if($lang == 'en')
{
$tech_text->get_tech_en();
echo $tech_text->tech_rustic_en;
}
else if($lang == 'ro'){
$tech_text->get_tech_ro();
echo $tech_text->tech_rustic_ro;
}
else{
$tech_text->get_tech_ro();
echo $tech_text->tech_rustic_ro;
}?>