
void _INIT_33(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((*PTR_DAT_04bd06c0 & 1) == 0) {
    *PTR_DAT_04bd06c0 = 1;
    puVar2 = PTR_DAT_04bd06b0;
    FUN_00352f84(PTR_DAT_04bd06b0);
    puVar1 = PTR_FUN_04bd0678;
    *(undefined **)puVar2 = PTR_DAT_04bd05e8 + 0x10;
    FUN_001001d0(puVar1,puVar2,&__DT_FINI_ARRAY);
    return;
  }
  return;
}

