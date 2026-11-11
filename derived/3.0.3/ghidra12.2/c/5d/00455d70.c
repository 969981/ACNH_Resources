
void _INIT_245(void)

{
  if ((DAT_04c6fbf8 & 1) == 0) {
    DAT_04c6fbe8 = (undefined **)0x0;
    DAT_04c6fbf0 = 0;
    FUN_0043dcf0(&DAT_04c6fbe8);
    DAT_04c6fbe8 = &PTR_LAB_04861f78;
    FUN_001001d0(&LAB_00455ce0,&DAT_04c6fbe8,&__DT_FINI_ARRAY);
    DAT_04c6fbf8 = 1;
  }
  return;
}

