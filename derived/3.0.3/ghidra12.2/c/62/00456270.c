
void _INIT_249(void)

{
  if ((DAT_04c6fc68 & 1) == 0) {
    DAT_04c6fc58 = (undefined **)0x0;
    DAT_04c6fc60 = 0;
    FUN_0043dcf0(&DAT_04c6fc58);
    DAT_04c6fc58 = &PTR_LAB_04862108;
    FUN_001001d0(&LAB_004561c0,&DAT_04c6fc58,&__DT_FINI_ARRAY);
    DAT_04c6fc68 = 1;
  }
  return;
}

