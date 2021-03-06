void Text_opp (TEXTURE &Txt, unsigned char opp, unsigned char *data);
void Text_generate_plain (TEXTURE Txt, T_PLAIN plain, unsigned char *data);
void Text_generate_noise (TEXTURE Txt, T_NOISE noise, unsigned char *data);
void Text_generate_perlin (TEXTURE Txt, T_PERLIN perlin, unsigned char *data);
void Text_generate_celular (TEXTURE Txt, T_CELULAR celular, unsigned char *data);
void Text_generate_plasma (TEXTURE Txt, T_PLASMA plasma, unsigned char *data);
void Text_generate_blob (TEXTURE Txt, T_BLOB blob, unsigned char *data);
void Text_generate_line (TEXTURE Txt, T_LINE line, unsigned char *data);
void Text_generate_font (TEXTURE Txt, T_FONT font, unsigned char *data);
void Text_generate_xor (TEXTURE Txt, T_XOR t_xor, unsigned char *data);
void Text_effect_bw (TEXTURE Txt, unsigned char *data);
void Text_effect_rect2polar (TEXTURE Txt, unsigned char *data);
void Text_effect_blur (TEXTURE Txt, unsigned char *data);
void Text_effect_motionblur (TEXTURE Txt, unsigned char *data);
void Text_effect_edges1 (TEXTURE Txt, unsigned char *data);
void Text_effect_edges2 (TEXTURE Txt, unsigned char *data);
void Text_effect_sharpen1 (TEXTURE Txt, unsigned char *data);
void Text_effect_sharpen2 (TEXTURE Txt, unsigned char *data);
void Text_effect_sharpen3 (TEXTURE Txt, unsigned char *data);
void Text_effect_emboss1 (TEXTURE Txt, unsigned char *data);
void Text_effect_emboss2 (TEXTURE Txt, unsigned char *data);
void Text_effect_mean (TEXTURE Txt, unsigned char *data);
void Text_effect_mean2 (TEXTURE Txt, unsigned char *data);
void Text_effect_custom3 (TEXTURE Txt, T_EFF_CUSTOM t_eff_cust, unsigned char *data);
void Text_effect_color (TEXTURE Txt, T_EFF_COLOR t_eff_color, unsigned char *data);
void Text_effect_gradblur (TEXTURE Txt, T_EFF_GRADBLUR t_eff_gradblur, unsigned char *data);