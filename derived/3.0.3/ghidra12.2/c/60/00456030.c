
void _INIT_247(void)

{
  if ((DAT_04c6fc38 & 1) == 0) {
    DAT_04c6fc28 = (undefined **)0x0;
    DAT_04c6fc30 = 0;
    FUN_0043dcf0(&DAT_04c6fc28);
    DAT_04c6fc28 = &PTR_LAB_04862068;
    FUN_001001d0(&LAB_00455f90,&DAT_04c6fc28,&__DT_FINI_ARRAY);
    DAT_04c6fc38 = 1;
  }
  return;
}

