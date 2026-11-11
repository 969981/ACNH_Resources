
void _INIT_256(void)

{
  if ((DAT_04c6fd10 & 1) == 0) {
    DAT_04c6fd00 = (undefined **)0x0;
    DAT_04c6fd08 = 0;
    FUN_0043dcf0(&DAT_04c6fd00);
    DAT_04c6fd00 = &PTR_LAB_04862338;
    FUN_001001d0(&LAB_00456980,&DAT_04c6fd00,&__DT_FINI_ARRAY);
    DAT_04c6fd10 = 1;
  }
  return;
}

