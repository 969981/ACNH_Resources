
void _INIT_292(void)

{
  if ((DAT_04c704e0 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c703a0);
    DAT_04c703a0 = &PTR_FUN_04864078;
    FUN_001001d0(FUN_0043f070,&DAT_04c703a0,&__DT_FINI_ARRAY);
    DAT_04c704e0 = 1;
  }
  return;
}

