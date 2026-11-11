
void _INIT_255(void)

{
  if ((DAT_04c6fcf8 & 1) == 0) {
    DAT_04c6fce8 = (undefined **)0x0;
    DAT_04c6fcf0 = 0;
    FUN_0043dcf0(&DAT_04c6fce8);
    DAT_04c6fce8 = &PTR_LAB_048622e8;
    FUN_001001d0(&LAB_00456860,&DAT_04c6fce8,&__DT_FINI_ARRAY);
    DAT_04c6fcf8 = 1;
  }
  return;
}

