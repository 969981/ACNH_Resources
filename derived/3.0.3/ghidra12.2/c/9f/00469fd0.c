
void _INIT_290(void)

{
  if ((DAT_04c704d0 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70380);
    DAT_04c70380 = &PTR_FUN_04863fa8;
    FUN_001001d0(FUN_0043f070,&DAT_04c70380,&__DT_FINI_ARRAY);
    DAT_04c704d0 = 1;
  }
  return;
}

