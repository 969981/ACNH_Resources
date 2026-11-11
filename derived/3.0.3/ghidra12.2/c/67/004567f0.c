
void _INIT_254(void)

{
  if ((DAT_04c6fce0 & 1) == 0) {
    DAT_04c6fcd0 = (undefined **)0x0;
    DAT_04c6fcd8 = 0;
    FUN_0043dcf0(&DAT_04c6fcd0);
    DAT_04c6fcd0 = &PTR_LAB_04862298;
    FUN_001001d0(&LAB_00456750,&DAT_04c6fcd0,&__DT_FINI_ARRAY);
    DAT_04c6fce0 = 1;
  }
  return;
}

