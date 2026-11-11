
void _INIT_248(void)

{
  if ((DAT_04c6fc50 & 1) == 0) {
    DAT_04c6fc40 = (undefined **)0x0;
    DAT_04c6fc48 = 0;
    FUN_0043dcf0(&DAT_04c6fc40);
    DAT_04c6fc40 = &PTR_LAB_048620b8;
    FUN_001001d0(&LAB_004560a0,&DAT_04c6fc40,&__DT_FINI_ARRAY);
    DAT_04c6fc50 = 1;
  }
  return;
}

