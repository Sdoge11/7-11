<?php
$z[0]=Array("global","",521,545);
$z[0][4]=array();
$z[0][4]['name']="cfg_cname";
$z[1]=Array("channelartlist","\r\n		  <li {dede:field name=typeid runphp='yes'}global \$dsql;\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\$row = \$dsql->GetOne(\$sql);@me=is_array(\$row)?'class=\"dropdown \"':'';{/dede:field} ><a class='{dede:field.currentstyle/}' href=\"{dede:field.typeurl/}\">{dede:field.typename/}</a>\r\n			{dede:field name=typeid runphp='yes'}global \$dsql;\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\$row = \$dsql->GetOne(\$sql);@me=is_array(\$row)?'<a id=\"app_menudown\" class=\"dropdown-toggle\" data-toggle=\"dropdown\" role=\"button\" aria-expanded=\"false\"><span class=\"glyphicon glyphicon-menu-down btn-xs\"></span></a><ul class=\"dropdown-menu nav_small\" role=\"menu\">':'';{/dede:field}\r\n              {dede:channel type=son noself='yes'}\r\n			  <li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n              {/dede:channel}\r\n			{dede:field name=typeid runphp='yes'}global \$dsql;\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\$row = \$dsql->GetOne(\$sql);@me=is_array(\$row)?'</ul>':'';{/dede:field}\r\n          </li>\r\n          ",710,1990);
$z[1][4]=array();
$z[1][4]['typeid']="top";
$z[1][4]['currentstyle']="active";
$z[1][4]['row']="7";

?>