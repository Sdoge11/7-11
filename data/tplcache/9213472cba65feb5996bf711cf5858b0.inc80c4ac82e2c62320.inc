<?php
$z[0]=Array("field","global \$dsql;\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\$row = \$dsql->GetOne(\$sql);@me=is_array(\$row)?'class=\"dropdown \"':'';",4,244);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("field","",256,282);
$z[1][4]=array();
$z[1][4]['name']="currentstyle";
$z[2]=Array("field","",290,311);
$z[2][4]=array();
$z[2][4]['name']="typeurl";
$z[3]=Array("field","",313,335);
$z[3][4]=array();
$z[3][4]['name']="typename";
$z[4]=Array("field","global \$dsql;\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\$row = \$dsql->GetOne(\$sql);@me=is_array(\$row)?'<a id=\"app_menudown\" class=\"dropdown-toggle\" data-toggle=\"dropdown\" role=\"button\" aria-expanded=\"false\"><span class=\"glyphicon glyphicon-menu-down btn-xs\"></span></a><ul class=\"dropdown-menu nav_small\" role=\"menu\">':'';",344,781);
$z[4][4]=array();
$z[4][4]['name']="typeid";
$z[4][4]['runphp']="yes";
$z[5]=Array("channel","\r\n			  <li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n              ",797,929);
$z[5][4]=array();
$z[5][4]['type']="son";
$z[5][4]['noself']="yes";
$z[6]=Array("field","global \$dsql;\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\$row = \$dsql->GetOne(\$sql);@me=is_array(\$row)?'</ul>':'';",934,1162);
$z[6][4]=array();
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";

?>