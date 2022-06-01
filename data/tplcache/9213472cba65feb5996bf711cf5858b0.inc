<li {dede:field name=typeid runphp='yes'}global $dsql;$sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";$row = $dsql->GetOne($sql);@me=is_array($row)?'class="dropdown "':'';{/dede:field} ><a class='{dede:field.currentstyle/}' href="{dede:field.typeurl/}">{dede:field.typename/}</a>
			{dede:field name=typeid runphp='yes'}global $dsql;$sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";$row = $dsql->GetOne($sql);@me=is_array($row)?'<a id="app_menudown" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-expanded="false"><span class="glyphicon glyphicon-menu-down btn-xs"></span></a><ul class="dropdown-menu nav_small" role="menu">':'';{/dede:field}
              {dede:channel type=son noself='yes'}
			  <li><a href="[field:typelink/]">[field:typename/]</a></li>
              {/dede:channel}
			{dede:field name=typeid runphp='yes'}global $dsql;$sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";$row = $dsql->GetOne($sql);@me=is_array($row)?'</ul>':'';{/dede:field}
          </li>