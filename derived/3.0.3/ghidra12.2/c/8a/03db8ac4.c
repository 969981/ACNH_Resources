
undefined * FUN_03db8ac4(long param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 < 2) {
    if (((DAT_05af8a70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8a70), iVar1 != 0)) {
      if (((DAT_05af8a40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8a40), iVar1 != 0)) {
        DAT_05af89d8 = &PTR_LAB_04b93bb0;
        DAT_05af89e0 = &PTR_FUN_04b93be0;
        DAT_05af8a00 = &PTR_FUN_04b93c08;
        DAT_05af8a20 = &PTR_FUN_04b93c30;
        __cxa_guard_release(&DAT_05af8a40);
      }
      (*(code *)*DAT_05af89e0)(&DAT_05af89e0,&DAT_05af8a48);
      __cxa_guard_release(&DAT_05af8a70);
      puVar2 = &DAT_05af8a48;
    }
    else {
      puVar2 = &DAT_05af8a48;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
      if ((DAT_05af8978 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af8978);
        if (iVar1 != 0) {
          FUN_03db76d8();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c52b28,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af8978);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,&DAT_04c52b28,*(undefined8 *)(param_1 + 0x18));
      return puVar2;
    }
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

