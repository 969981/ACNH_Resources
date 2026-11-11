
void _INIT_304(void)

{
  if ((DAT_04c70540 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70460);
    DAT_04c70460 = &PTR_FUN_04864558;
    FUN_001001d0(FUN_0043f070,&DAT_04c70460,&__DT_FINI_ARRAY);
    DAT_04c70540 = 1;
  }
  return;
}

