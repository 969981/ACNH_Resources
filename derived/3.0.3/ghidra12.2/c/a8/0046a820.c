
void _INIT_309(void)

{
  if ((DAT_04c70568 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c704b0);
    DAT_04c704b0 = &PTR_FUN_04864760;
    FUN_001001d0(FUN_0043f070,&DAT_04c704b0,&__DT_FINI_ARRAY);
    DAT_04c70568 = 1;
  }
  return;
}

