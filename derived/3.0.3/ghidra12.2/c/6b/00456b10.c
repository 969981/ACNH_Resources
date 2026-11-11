
void _INIT_257(void)

{
  if ((DAT_04c6fd28 & 1) == 0) {
    DAT_04c6fd18 = (undefined **)0x0;
    DAT_04c6fd20 = 0;
    FUN_0043dcf0(&DAT_04c6fd18);
    DAT_04c6fd18 = &PTR_LAB_04862388;
    FUN_001001d0(&LAB_00456a90,&DAT_04c6fd18,&__DT_FINI_ARRAY);
    DAT_04c6fd28 = 1;
  }
  return;
}

