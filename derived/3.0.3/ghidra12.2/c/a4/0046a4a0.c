
void _INIT_301(void)

{
  if ((DAT_04c70528 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70430);
    DAT_04c70430 = &PTR_FUN_04864420;
    FUN_001001d0(FUN_0043f070,&DAT_04c70430,&__DT_FINI_ARRAY);
    DAT_04c70528 = 1;
  }
  return;
}

