
void _INIT_32(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd06a8;
  if ((DAT_04c62e48 & 1) == 0) {
    DAT_04c62e48 = 1;
    FUN_00352f84(PTR_DAT_04bd06a8);
    FUN_001001d0(PTR_FUN_04bd0680,puVar1,&__DT_FINI_ARRAY);
    return;
  }
  return;
}

