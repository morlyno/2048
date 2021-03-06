#include "Text.h"

Text::Text( Surface& font,Color chroma )
	:
	font( font ),
	chroma( chroma ),
	CharWidth( font.getWidht() / 32 ),
	CharHeight( font.getHeight() / 4 )
{
}

void Text::DrawText( const std::string& text,const Vec2i& pos,Graphics& gfx ) const
{
	int currletter = 0;
	for ( auto c : text )
	{
		gfx.DrawSprite( pos.x + currletter * CharWidth,pos.y,CharMaping( c ),font,chroma );
		++currletter;
	}
}

RecI Text::CharMaping( char c ) const
{
	const char y = c / ( font.getWidht() / CharWidth );
	const char x = c % ( font.getWidht() / CharWidth );
	return RecI( x * CharWidth,( x + 1 ) * CharWidth,y * CharHeight,( y + 1 ) * CharHeight );
}
