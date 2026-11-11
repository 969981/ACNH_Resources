
void _INIT_300(void)

{
  if ((DAT_04c70520 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c70420);
    DAT_04c70420 = &PTR_FUN_048643b8;
    FUN_001001d0(FUN_0043f070,&DAT_04c70420,&__DT_FINI_ARRAY);
    DAT_04c70520 = 1;
  }
  return;
}

