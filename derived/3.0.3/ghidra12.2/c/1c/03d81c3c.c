
undefined * FUN_03d81c3c(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (((DAT_05af8318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8318), iVar1 != 0)) {
      if (((DAT_05af8308 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8308), iVar1 != 0)) {
        DAT_05af82a0 = &PTR_LAB_04b923a8;
        DAT_05af82a8 = &PTR_FUN_04b923d8;
        DAT_05af82c8 = &PTR_FUN_04b92400;
        DAT_05af82e8 = &PTR_FUN_04b92428;
        __cxa_guard_release(&DAT_05af8308);
      }
      (*(code *)*DAT_05af82a8)(&DAT_05af82a8,&DAT_05af8310);
      __cxa_guard_release(&DAT_05af8318);
      puVar2 = &DAT_05af8310;
    }
    else {
      puVar2 = &DAT_05af8310;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af8240 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af8240);
        if (iVar1 != 0) {
          FUN_03d80244();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c51938,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af8240);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,&DAT_04c51938,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

