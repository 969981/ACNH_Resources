
void _INIT_299(void)

{
  if ((DAT_04c70518 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70410);
    DAT_04c70410 = &PTR_FUN_04864350;
    FUN_001001d0(FUN_0043f070,&DAT_04c70410,&__DT_FINI_ARRAY);
    DAT_04c70518 = 1;
  }
  return;
}

