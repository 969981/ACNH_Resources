
void _INIT_306(void)

{
  if ((DAT_04c70550 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70480);
    DAT_04c70480 = &PTR_FUN_04864628;
    FUN_001001d0(FUN_0043f070,&DAT_04c70480,&__DT_FINI_ARRAY);
    DAT_04c70550 = 1;
  }
  return;
}

