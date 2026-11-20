
undefined * FUN_03e7ea6c(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (((DAT_05af84e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af84e8), iVar1 != 0)) {
      if (((DAT_05af84d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af84d8), iVar1 != 0)) {
        DAT_05af8470 = &PTR_LAB_04b92e30;
        DAT_05af8478 = &PTR_FUN_04b92e60;
        DAT_05af8498 = &PTR_FUN_04b92e88;
        DAT_05af84b8 = &PTR_FUN_04b92eb0;
        __cxa_guard_release(&DAT_05af84d8);
      }
      (*(code *)*DAT_05af8478)(&DAT_05af8478,&DAT_05af84e0);
      __cxa_guard_release(&DAT_05af84e8);
      puVar2 = &DAT_05af84e0;
    }
    else {
      puVar2 = &DAT_05af84e0;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af8410 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af8410);
        if (iVar1 != 0) {
          FUN_03dad134();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c51bc8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af8410);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,&DAT_04c51bc8,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

