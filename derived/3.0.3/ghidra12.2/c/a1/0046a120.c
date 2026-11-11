
void _INIT_293(void)

{
  if ((DAT_04c704e8 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c703b0);
    DAT_04c703b0 = &PTR_FUN_048640e0;
    FUN_001001d0(FUN_0043f070,&DAT_04c703b0,&__DT_FINI_ARRAY);
    DAT_04c704e8 = 1;
  }
  return;
}

