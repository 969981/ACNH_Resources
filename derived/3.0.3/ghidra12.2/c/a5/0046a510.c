
void _INIT_302(void)

{
  if ((DAT_04c70530 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70440);
    DAT_04c70440 = &PTR_FUN_04864488;
    FUN_001001d0(FUN_0043f070,&DAT_04c70440,&__DT_FINI_ARRAY);
    DAT_04c70530 = 1;
  }
  return;
}

