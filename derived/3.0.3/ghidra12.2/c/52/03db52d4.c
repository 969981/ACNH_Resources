
undefined * FUN_03db52d4(long param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 < 2) {
    if (((DAT_05af8888 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8888), iVar1 != 0)) {
      if (((DAT_05af8870 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8870), iVar1 != 0)) {
        DAT_05af8808 = &PTR_LAB_04b93730;
        DAT_05af8810 = &PTR_FUN_04b93760;
        DAT_05af8830 = &PTR_FUN_04b93788;
        DAT_05af8850 = &PTR_FUN_04b937b0;
        __cxa_guard_release(&DAT_05af8870);
      }
      (*(code *)*DAT_05af8810)(&DAT_05af8810,&DAT_05af8878);
      __cxa_guard_release(&DAT_05af8888);
      puVar2 = &DAT_05af8878;
    }
    else {
      puVar2 = &DAT_05af8878;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
      if ((DAT_05af87a8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af87a8);
        if (iVar1 != 0) {
          FUN_03db3f88();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c52608,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af87a8);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,&DAT_04c52608,*(undefined8 *)(param_1 + 0x18));
      return puVar2;
    }
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

