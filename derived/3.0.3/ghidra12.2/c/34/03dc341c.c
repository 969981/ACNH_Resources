
undefined8 * FUN_03dc341c(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 < 2) {
    if ((DAT_05af8f90 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05af8f90);
      if (iVar1 != 0) {
        if (((DAT_05af8f78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8f78), iVar1 != 0)) {
          DAT_05af8f10 = &PTR_LAB_04b94888;
          DAT_05af8f18 = &PTR_FUN_04b948b8;
          DAT_05af8f38 = &PTR_FUN_04b948e0;
          DAT_05af8f58 = &PTR_FUN_04b94908;
          __cxa_guard_release(&DAT_05af8f78);
        }
        DAT_05af8f80 = PTR_DAT_04bb2020 + 0x10;
        DAT_05af8f88 = PTR_DAT_04bb2120;
        (*(code *)*DAT_05af8f18)(&DAT_05af8f18,&DAT_05af8f80);
        __cxa_guard_release(&DAT_05af8f90);
      }
      puVar2 = &DAT_05af8f80;
    }
    else {
      puVar2 = &DAT_05af8f80;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
      if ((DAT_05af8eb0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af8eb0);
        if (iVar1 != 0) {
          FUN_03dc1f54();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c53a88,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af8eb0);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c53a88,*(undefined8 *)(param_1 + 0x18));
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

