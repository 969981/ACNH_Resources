
void _INIT_298(void)

{
  if ((DAT_04c70510 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70400);
    DAT_04c70400 = &PTR_FUN_048642e8;
    FUN_001001d0(FUN_0043f070,&DAT_04c70400,&__DT_FINI_ARRAY);
    DAT_04c70510 = 1;
  }
  return;
}

