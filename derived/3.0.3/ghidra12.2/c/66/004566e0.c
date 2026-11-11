
void _INIT_253(void)

{
  if ((DAT_04c6fcc8 & 1) == 0) {
    DAT_04c6fcb8 = (undefined **)0x0;
    DAT_04c6fcc0 = 0;
    FUN_0043dcf0(&DAT_04c6fcb8);
    DAT_04c6fcb8 = &PTR_LAB_04862248;
    FUN_001001d0(&LAB_00456630,&DAT_04c6fcb8,&__DT_FINI_ARRAY);
    DAT_04c6fcc8 = 1;
  }
  return;
}

