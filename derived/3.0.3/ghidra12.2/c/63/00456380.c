
void _INIT_250(void)

{
  if ((DAT_04c6fc80 & 1) == 0) {
    DAT_04c6fc70 = (undefined **)0x0;
    DAT_04c6fc78 = 0;
    FUN_0043dcf0(&DAT_04c6fc70);
    DAT_04c6fc70 = &PTR_LAB_04862158;
    FUN_001001d0(&LAB_004562e0,&DAT_04c6fc70,&__DT_FINI_ARRAY);
    DAT_04c6fc80 = 1;
  }
  return;
}

