
undefined * FUN_03e76608(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (((DAT_05af85d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af85d0), iVar1 != 0)) {
      if (((DAT_05af85b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af85b8), iVar1 != 0)) {
        DAT_05af8550 = &PTR_LAB_04b93070;
        DAT_05af8558 = &PTR_FUN_04b930a0;
        DAT_05af8578 = &PTR_FUN_04b930c8;
        DAT_05af8598 = &PTR_FUN_04b930f0;
        __cxa_guard_release(&DAT_05af85b8);
      }
      (*(code *)*DAT_05af8558)(&DAT_05af8558,&DAT_05af85c0);
      __cxa_guard_release(&DAT_05af85d0);
      puVar2 = &DAT_05af85c0;
    }
    else {
      puVar2 = &DAT_05af85c0;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af84f0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af84f0);
        if (iVar1 != 0) {
          FUN_03daeca8();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c51e58,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af84f0);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,&DAT_04c51e58,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

