
void _INIT_296(void)

{
  if ((DAT_04c70500 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c703e0);
    DAT_04c703e0 = &PTR_FUN_04864218;
    FUN_001001d0(FUN_0043f070,&DAT_04c703e0,&__DT_FINI_ARRAY);
    DAT_04c70500 = 1;
  }
  return;
}

