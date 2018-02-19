<?php
$tech =  new montaj_data();
if($lang == 'en')
{
$tech->get_tech_en();
echo $tech->tech_en;
}
else if($lang == 'ro'){
$tech->get_tech_ro();
echo $tech->tech_ro;
}
else{
$tech->get_tech_ro();
echo $tech->tech_ro;
}
?>