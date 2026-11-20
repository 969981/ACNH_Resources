
undefined8 * FUN_03dc16a0(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 < 2) {
    if ((DAT_05af8ea8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05af8ea8);
      if (iVar1 != 0) {
        if (((DAT_05af8e88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8e88), iVar1 != 0)) {
          DAT_05af8e20 = &PTR_LAB_04b94648;
          DAT_05af8e28 = &PTR_FUN_04b946a0;
          DAT_05af8e48 = &PTR_FUN_04b94678;
          DAT_05af8e68 = &PTR_FUN_04b946c8;
          __cxa_guard_release(&DAT_05af8e88);
        }
        DAT_05af8e90 = 0x7f7fffff7f7fffff;
        DAT_05af8e98 = 0xff7fffff7f7fffff;
        DAT_05af8ea0 = 0xff7fffffff7fffff;
        (*(code *)*DAT_05af8e28)(&DAT_05af8e28,&DAT_05af8e90);
        __cxa_guard_release(&DAT_05af8ea8);
      }
      puVar2 = &DAT_05af8e90;
    }
    else {
      puVar2 = &DAT_05af8e90;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
      if ((DAT_05af8dc0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af8dc0);
        if (iVar1 != 0) {
          FUN_03dc02d8();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c537f8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af8dc0);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c537f8,*(undefined8 *)(param_1 + 0x18));
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

