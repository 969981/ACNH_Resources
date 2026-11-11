
void _INIT_258(void)

{
  if ((DAT_04c6fd40 & 1) == 0) {
    DAT_04c6fd30 = (undefined **)0x0;
    DAT_04c6fd38 = 0;
    FUN_0043dcf0(&DAT_04c6fd30);
    DAT_04c6fd30 = &PTR_LAB_048623d8;
    FUN_001001d0(&LAB_00456b80,&DAT_04c6fd30,&__DT_FINI_ARRAY);
    DAT_04c6fd40 = 1;
  }
  return;
}

