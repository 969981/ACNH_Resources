
undefined * FUN_03db1a04(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (((DAT_05af86b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af86b8), iVar1 != 0)) {
      if (((DAT_05af86a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af86a0), iVar1 != 0)) {
        DAT_05af8638 = &PTR_LAB_04b932b0;
        DAT_05af8640 = &PTR_FUN_04b932e0;
        DAT_05af8660 = &PTR_FUN_04b93308;
        DAT_05af8680 = &PTR_FUN_04b93330;
        __cxa_guard_release(&DAT_05af86a0);
      }
      (*(code *)*DAT_05af8640)(&DAT_05af8640,&DAT_05af86a8);
      __cxa_guard_release(&DAT_05af86b8);
      puVar2 = &DAT_05af86a8;
    }
    else {
      puVar2 = &DAT_05af86a8;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af85d8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af85d8);
        if (iVar1 != 0) {
          FUN_03db0838();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c520e8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af85d8);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,&DAT_04c520e8,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

