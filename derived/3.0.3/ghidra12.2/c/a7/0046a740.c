
void _INIT_307(void)

{
  if ((DAT_04c70558 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70490);
    DAT_04c70490 = &PTR_FUN_04864690;
    FUN_001001d0(FUN_0043f070,&DAT_04c70490,&__DT_FINI_ARRAY);
    DAT_04c70558 = 1;
  }
  return;
}

