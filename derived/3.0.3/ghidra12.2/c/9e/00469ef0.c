
void _INIT_288(void)

{
  if ((DAT_04c704c0 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70360);
    DAT_04c70360 = &PTR_FUN_04863ed8;
    FUN_001001d0(FUN_0043f070,&DAT_04c70360,&__DT_FINI_ARRAY);
    DAT_04c704c0 = 1;
  }
  return;
}

