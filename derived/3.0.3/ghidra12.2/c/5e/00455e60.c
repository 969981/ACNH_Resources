
void _INIT_246(void)

{
  if ((DAT_04c6fc10 & 1) == 0) {
    DAT_04c6fc00 = (undefined **)0x0;
    DAT_04c6fc08 = 0;
    FUN_0043dcf0(&DAT_04c6fc00);
    DAT_04c6fc00 = &PTR_LAB_04861fc8;
    FUN_001001d0(&LAB_00455de0,&DAT_04c6fc00,&__DT_FINI_ARRAY);
    DAT_04c6fc10 = 1;
  }
  return;
}

