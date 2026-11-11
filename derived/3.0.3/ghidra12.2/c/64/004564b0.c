
void _INIT_251(void)

{
  if ((DAT_04c6fc98 & 1) == 0) {
    DAT_04c6fc88 = (undefined **)0x0;
    DAT_04c6fc90 = 0;
    FUN_0043dcf0(&DAT_04c6fc88);
    DAT_04c6fc88 = &PTR_LAB_048621a8;
    FUN_001001d0(&LAB_004563f0,&DAT_04c6fc88,&__DT_FINI_ARRAY);
    DAT_04c6fc98 = 1;
  }
  return;
}

