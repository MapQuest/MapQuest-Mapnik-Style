<Style name="shield-text">
	<!--motorway shields-->
	<Rule>
		<Filter>[length] gt 0 and [highway] = 'motorway'</Filter>
		&maxscale_zoom7;
		&minscale_zoom13;
		<ShieldSymbolizer name="[ref]" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_mot_uk[length].svg" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[length] gt 0 and [highway] = 'motorway'</Filter>
		&maxscale_zoom14;
		&minscale_zoom18;
		<ShieldSymbolizer name="[ref]" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_mot_uk[length].svg" min_distance="50" spacing="750"/>
	</Rule>
	<!--trunk shields-->
	<Rule>
		<Filter>[length] gt 0 and [highway] = 'trunk'</Filter>
		&maxscale_zoom10;
		&minscale_zoom13;
		<ShieldSymbolizer name="[ref]" fontset_name="bold-fonts" size="10" fill="#f9ee7c" placement="line" file="&symbols;/shield_trk_uk[length].svg"  min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[length] gt 0 and [highway] = 'trunk'</Filter>
		&maxscale_zoom14;
		&minscale_zoom18;
		<ShieldSymbolizer name="[ref]" fontset_name="bold-fonts" size="10" fill="#f9ee7c" placement="line" file="&symbols;/shield_trk_uk[length].svg"  min_distance="50" spacing="750"/>
	</Rule>
	<!--primary shields-->
	<Rule>
		<Filter>[length] gt 0 and [highway] = 'primary'</Filter>
		&maxscale_zoom12;
		&minscale_zoom13;
		<ShieldSymbolizer name="[ref]" fontset_name="bold-fonts" size="10" fill="#a64263" placement="line" file="&symbols;/shield_pri_uk[length].svg" min_distance="30" spacing="750" />
	</Rule>
	<Rule>
		<Filter>[length] gt 0 and [highway] = 'primary'</Filter>
		&maxscale_zoom14;
		&minscale_zoom18;
		<ShieldSymbolizer name="[ref]" fontset_name="bold-fonts" size="10" fill="#a64263" placement="line" file="&symbols;/shield_pri_uk[length].svg" min_distance="50" spacing="750" />
	</Rule>
	<!--secondary shields-->
	<Rule>
		<Filter>[length] gt 0 and [highway] = 'secondary'</Filter>
		&maxscale_zoom10;
		&minscale_zoom13;
		<ShieldSymbolizer name="[ref]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sec_uk[length].svg" min_distance="30" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>[length] gt 0 and [highway] = 'secondary'</Filter>
		&maxscale_zoom14;
		&minscale_zoom18;
		<ShieldSymbolizer name="[ref]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sec_uk[length].svg" min_distance="50" spacing="750"/>
	</Rule>
</Style>
<Style name="street-text">
  
  <!--motorway text-->
  <Rule>
    <Filter>[highway] = 'motorway'</Filter>
    &maxscale_zoom12;
    <TextSymbolizer name="[name]" fontset_name="bold-fonts" size="12" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2" placement="line" max_char_angle_delta="40" text_transform="uppercase"/>
  </Rule>
  <!--trunk/primary text-->
  <Rule>
    <Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
    &maxscale_zoom12;
    <TextSymbolizer name="[name]" fontset_name="book-fonts" size="12" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2" placement="line" max_char_angle_delta="40"/>
  </Rule>
  <!--secondary text-->
  <Rule>
    <Filter>[highway] = 'secondary' or [highway] = 'proposed' or [highway]='construction'</Filter>
    &maxscale_zoom12;
    <TextSymbolizer name="[name]" fontset_name="book-fonts" size="12" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2" placement="line" max_char_angle_delta="40"/>
  </Rule>
  <!--tertiary text-->
  <Rule>
    <Filter>[highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'residential'</Filter>
    &maxscale_zoom16;
    &minscale_zoom17;
    <TextSymbolizer name="[name]" fontset_name="book-fonts" size="10" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2" placement="line" max_char_angle_delta="40"/>
  </Rule>
  <Rule>
    <Filter>[highway] = 'tertiary' or [highway] = 'unclassified' or [highway] = 'residential'</Filter>
    &maxscale_zoom18;
    <TextSymbolizer name="[name]" fontset_name="book-fonts" size="12" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2" placement="line" max_char_angle_delta="40"/>
  </Rule>
</Style>

<Layer name="shield-text" status="on" srs="&osm2pgsql_projection;">
  <StyleName>shield-text</StyleName>
  <Datasource>
    <Parameter name="table">
      (select way,highway,
      case when name ilike ref then null else name end as name,
      ref,char_length(ref) as length
      from &prefix;_roads
      where highway in ('motorway', 'trunk', 'primary', 'secondary')
      and (name is not null or ref is not null)
      ) as roads
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
<Layer name="street-text" status="on" srs="&osm2pgsql_projection;">
  <StyleName>street-text</StyleName>
  <Datasource>
    <Parameter name="table">
      (select way,highway,aeroway,
      case when name ilike ref then null else name end as name,
      ref,char_length(ref) as length,
      case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge
      from &prefix;_line
      where waterway IS NULL
      and leisure IS NULL
      and landuse IS NULL
      and (name is not null or ref is not null)
      ) as roads
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
