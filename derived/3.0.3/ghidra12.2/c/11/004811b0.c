
void _INIT_320(void)

{
  if ((DAT_04c70a88 & 1) == 0) {
    FUN_00421d30(&DAT_04c70a80);
    DAT_04c70a80 = &PTR_FUN_048658e0;
    FUN_001001d0(FUN_00421d50,&DAT_04c70a80,&__DT_FINI_ARRAY);
    DAT_04c70a88 = 1;
  }
  return;
}

