uniform sampler2D Texture0;
uniform sampler2D Texture1;
uniform lowp int  inIsFlipped;
uniform lowp vec2 inResolution;
uniform lowp float inDepth;
varying highp vec2 TexCoord0;
varying highp vec2 ScreenPos;

precision lowp    float;

vec4 gaussianBlur(in sampler2D texture, in vec2 uv, in float radius, in vec2 resolution, in vec2 direction) {
  vec4 color = vec4(0.0);
  vec2 step = radius / resolution * direction;
  color += texture2D(texture, uv - 4.0 * step) * 0.02699548325659403;
  color += texture2D(texture, uv - 3.0 * step) * 0.06475879783294587;
  color += texture2D(texture, uv - 2.0 * step) * 0.12098536225957168;
  color += texture2D(texture, uv - 1.0 * step) * 0.17603266338214976;
  color += texture2D(texture, uv) * 0.19947114020071635;
  color += texture2D(texture, uv + 1.0 * step) * 0.17603266338214976;
  color += texture2D(texture, uv + 2.0 * step) * 0.12098536225957168;
  color += texture2D(texture, uv + 3.0 * step) * 0.06475879783294587;
  color += texture2D(texture, uv + 4.0 * step) * 0.02699548325659403;
  return color;
}

void main(void)
{
    highp vec2 nTexCoord = vec2(-ScreenPos.y, ScreenPos.x);
    if( inIsFlipped == 1 )
        nTexCoord = vec2(ScreenPos.y, -ScreenPos.x);
    else if (inIsFlipped == 2)
        nTexCoord = ScreenPos.xy;

	lowp float depth = texture2D(Texture1,nTexCoord).r;
	//lowp float blur  = 0.0;
	//lowp float strength = 5.0;

	if( depth >= inDepth /*&& depth < 1.0*/)
		gl_FragColor = gaussianBlur(Texture0, nTexCoord, (1.0 - depth) * 1000.0, inResolution.xy, (nTexCoord - 0.5)*2.0 );
	else
		gl_FragColor = texture2D(Texture0, nTexCoord);
//	gl_Fr/agColor = texture2D(Texture0,ScreenPos.xy);
}
