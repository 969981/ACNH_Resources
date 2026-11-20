
undefined * FUN_03e87900(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (((DAT_05af8b88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8b88), iVar1 != 0)) {
      if (((DAT_05af8b40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8b40), iVar1 != 0)) {
        DAT_05af8ad8 = &PTR_LAB_04b93df0;
        DAT_05af8ae0 = &PTR_FUN_04b93e20;
        DAT_05af8b00 = &PTR_FUN_04b93e48;
        DAT_05af8b20 = &PTR_FUN_04b93e70;
        __cxa_guard_release(&DAT_05af8b40);
      }
      (*(code *)*DAT_05af8ae0)(&DAT_05af8ae0,&DAT_05af8b48);
      __cxa_guard_release(&DAT_05af8b88);
      puVar2 = &DAT_05af8b48;
    }
    else {
      puVar2 = &DAT_05af8b48;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af8a78 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af8a78);
        if (iVar1 != 0) {
          FUN_03db9308();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c52db8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af8a78);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,&DAT_04c52db8,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

