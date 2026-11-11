
void _INIT_303(void)

{
  if ((DAT_04c70538 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70450);
    DAT_04c70450 = &PTR_FUN_048644f0;
    FUN_001001d0(FUN_0043f070,&DAT_04c70450,&__DT_FINI_ARRAY);
    DAT_04c70538 = 1;
  }
  return;
}

