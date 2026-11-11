
void _INIT_252(void)

{
  if ((DAT_04c6fcb0 & 1) == 0) {
    DAT_04c6fca0 = (undefined **)0x0;
    DAT_04c6fca8 = 0;
    FUN_0043dcf0(&DAT_04c6fca0);
    DAT_04c6fca0 = &PTR_LAB_048621f8;
    FUN_001001d0(&LAB_00456520,&DAT_04c6fca0,&__DT_FINI_ARRAY);
    DAT_04c6fcb0 = 1;
  }
  return;
}

