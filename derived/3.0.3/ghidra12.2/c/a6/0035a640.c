
void _INIT_34(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc9650;
  if ((DAT_04c62e68 & 1) == 0) {
    DAT_04c62e68 = 1;
    FUN_003532e0(PTR_DAT_04bc9650);
    FUN_001001d0(PTR_FUN_04bd0690,puVar1,&__DT_FINI_ARRAY);
    return;
  }
  return;
}

