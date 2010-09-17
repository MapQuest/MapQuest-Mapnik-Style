<Style name="shield-text">
<!--Interstate shield-->
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &lt; 3</Filter>
		&maxscale_zoom7;
		&minscale_zoom9;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us2.png" type="png" width="30" height="30" min_distance="20" spacing="600"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &gt; 2 and [length] &lt; 6</Filter>
		&maxscale_zoom7;
		&minscale_zoom9;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us3.png" type="png" width="30" height="30" min_distance="20" spacing="600"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &lt; 3</Filter>
		&maxscale_zoom10;
		&minscale_zoom12;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us2.png" type="png" width="30" height="30" min_distance="20" spacing="600"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &gt; 2 and [length] &lt; 6</Filter>
		&maxscale_zoom10;
		&minscale_zoom12;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us3.png" type="png" width="30" height="30" min_distance="20" spacing="600"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &lt; 3</Filter>
		&maxscale_zoom13;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us2.png" type="png" width="30" height="30" min_distance="20" spacing="600"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^I .*') and [length] &gt; 2 and [length] &lt; 6</Filter>
		&maxscale_zoom13;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#fff" placement="line" file="&symbols;/shield_fwy_us3.png" type="png" width="30" height="30" min_distance="20" spacing="600"/>
	</Rule>
<!--US Highway shield-->
	<Rule>
		<Filter>[ref].match('^US.*') and [length] &lt; 3</Filter>
		&maxscale_zoom8;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_hwy_us3.png" type="png" width="24" height="23" min_distance="30" spacing="600"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^US.*') and [length] = 4</Filter>
		&maxscale_zoom8;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_hwy_us4.png" type="png" width="30" height="22" min_distance="30" spacing="600"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^US.*') and [length] = 5</Filter>
		&maxscale_zoom8;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us5.png" type="png" width="40" height="18" min_distance="30" spacing="600"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^US.*') and [length] = 6</Filter>
		&maxscale_zoom8;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us6.png" type="png" width="48" height="18" min_distance="60"/>
	</Rule>
	<Rule>
		<Filter>[ref].match('^US.*') and [length] = 7</Filter>
		&maxscale_zoom8;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us7.png" type="png" width="56" height="18" min_distance="30" spacing="600"/>
	</Rule>
<!--State Highway shield-->
	<Rule>
		<Filter>not [ref].match('^US .*') and not [ref].match('^I .*') and [length] &lt; 3</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us3.png" type="png" width="24" height="18" min_distance="40" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>not [ref].match('^US .*') and not [ref].match('^I .*') and [length] = 4</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us4.png" type="png" width="34" height="18" min_distance="40" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>not [ref].match('^US .*') and not [ref].match('^I .*') and [length] = 5</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us5.png" type="png" width="40" height="18" min_distance="40" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>not [ref].match('^US .*') and not [ref].match('^I .*') and [length] = 6</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us6.png" type="png" width="48" height="18" min_distance="40" spacing="750"/>
	</Rule>
	<Rule>
		<Filter>not [ref].match('^US .*') and not [ref].match('^I .*') and [length] = 7</Filter>
		&maxscale_zoom10;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#000" placement="line" file="&symbols;/shield_sr_us7.png" type="png" width="56" height="18" min_distance="40" spacing="750"/>
	</Rule>
</Style>
<Style name="street-text">
<!--motorway text-->
	<Rule>
		<Filter>[highway] = 'motorway'</Filter>
		&maxscale_zoom12;
		<!--<TextSymbolizer name="name" fontset_name="book-fonts" size="12" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2" placement="line" max_char_angle_delta="40"/>-->
		<TextSymbolizer name="[name]" fontset_name="bold-fonts" size="12" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2" dy="0" placement="line" max_char_angle_delta="40" text_convert="toupper"/>
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
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
		&maxscale_zoom16;
		&minscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="book-fonts" size="10" fill="#2b2b2b" halo_fill="rgba(255,255,255,0.25)" halo_radius="2" placement="line" max_char_angle_delta="40"/>
	</Rule>
	<Rule>
		<Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road' or [highway] = 'tertiary_link' or [highway] = 'residential_link' or [highway] = 'unclassified_link'</Filter>
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
      ref,char_length(regexp_replace(ref,E'^(US|I)\\s*([0-9]{1,3})',E'\\2')) as length,
      regexp_replace(ref,E'^(US|I)\\s*([0-9]{1,3})',E'\\2') as shield_name,
      case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge
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
