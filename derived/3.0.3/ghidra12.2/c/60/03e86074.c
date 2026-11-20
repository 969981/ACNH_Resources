
undefined * FUN_03e86074(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (((DAT_05af8c70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8c70), iVar1 != 0)) {
      if (((DAT_05af8c58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8c58), iVar1 != 0)) {
        DAT_05af8bf0 = &PTR_LAB_04b94030;
        DAT_05af8bf8 = &PTR_FUN_04b94060;
        DAT_05af8c18 = &PTR_FUN_04b94088;
        DAT_05af8c38 = &PTR_FUN_04b940b0;
        __cxa_guard_release(&DAT_05af8c58);
      }
      (*(code *)*DAT_05af8bf8)(&DAT_05af8bf8,&DAT_05af8c60);
      __cxa_guard_release(&DAT_05af8c70);
      puVar2 = &DAT_05af8c60;
    }
    else {
      puVar2 = &DAT_05af8c60;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af8b90 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af8b90);
        if (iVar1 != 0) {
          FUN_03dbaf88();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c53048,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af8b90);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,&DAT_04c53048,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

