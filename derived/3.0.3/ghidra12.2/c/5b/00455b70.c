
void _INIT_243(void)

{
  if ((DAT_04c6fbc8 & 1) == 0) {
    DAT_04c6fbb8 = (undefined **)0x0;
    DAT_04c6fbc0 = 0;
    FUN_0043dcf0(&DAT_04c6fbb8);
    DAT_04c6fbb8 = &PTR_LAB_04861ed8;
    FUN_001001d0(&LAB_00455ae0,&DAT_04c6fbb8,&__DT_FINI_ARRAY);
    DAT_04c6fbc8 = 1;
  }
  return;
}

