
void _INIT_244(void)

{
  if ((DAT_04c6fbe0 & 1) == 0) {
    DAT_04c6fbd0 = (undefined **)0x0;
    DAT_04c6fbd8 = 0;
    FUN_0043dcf0(&DAT_04c6fbd0);
    DAT_04c6fbd0 = &PTR_LAB_04861f28;
    FUN_001001d0(&LAB_00455be0,&DAT_04c6fbd0,&__DT_FINI_ARRAY);
    DAT_04c6fbe0 = 1;
  }
  return;
}

