
void _INIT_305(void)

{
  if ((DAT_04c70548 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70470);
    DAT_04c70470 = &PTR_FUN_048645c0;
    FUN_001001d0(FUN_0043f070,&DAT_04c70470,&__DT_FINI_ARRAY);
    DAT_04c70548 = 1;
  }
  return;
}

