
undefined * FUN_03e7ac40(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (((DAT_05af87a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af87a0), iVar1 != 0)) {
      if (((DAT_05af8788 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8788), iVar1 != 0)) {
        DAT_05af8720 = &PTR_LAB_04b934f0;
        DAT_05af8728 = &PTR_FUN_04b93520;
        DAT_05af8748 = &PTR_FUN_04b93548;
        DAT_05af8768 = &PTR_FUN_04b93570;
        __cxa_guard_release(&DAT_05af8788);
      }
      (*(code *)*DAT_05af8728)(&DAT_05af8728,&DAT_05af8790);
      __cxa_guard_release(&DAT_05af87a0);
      puVar2 = &DAT_05af8790;
    }
    else {
      puVar2 = &DAT_05af8790;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af86c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af86c0);
        if (iVar1 != 0) {
          FUN_03db23c8();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c52378,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af86c0);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,&DAT_04c52378,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

