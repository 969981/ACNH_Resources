
void _INIT_35(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((*PTR_DAT_04bd06d8 & 1) == 0) {
    *PTR_DAT_04bd06d8 = 1;
    puVar2 = PTR_DAT_04bd06c8;
    FUN_003532e0(PTR_DAT_04bd06c8);
    puVar1 = PTR_FUN_04bb2dd8;
    *(undefined **)puVar2 = PTR_DAT_04bd0600 + 0x10;
    FUN_001001d0(puVar1,puVar2,&__DT_FINI_ARRAY);
    return;
  }
  return;
}

