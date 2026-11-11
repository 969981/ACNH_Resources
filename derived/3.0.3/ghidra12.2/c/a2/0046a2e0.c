
void _INIT_297(void)

{
  if ((DAT_04c70508 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c703f0);
    DAT_04c703f0 = &PTR_FUN_04864280;
    FUN_001001d0(FUN_0043f070,&DAT_04c703f0,&__DT_FINI_ARRAY);
    DAT_04c70508 = 1;
  }
  return;
}

