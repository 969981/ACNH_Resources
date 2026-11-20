
undefined8 * FUN_03dcb3c8(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 < 2) {
    if ((DAT_05af9310 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05af9310);
      if (iVar1 != 0) {
        if (((DAT_05af92e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af92e8), iVar1 != 0)) {
          DAT_05af9280 = &PTR_LAB_04b95108;
          DAT_05af9288 = &PTR_FUN_04b95138;
          DAT_05af92a8 = &PTR_FUN_04b95160;
          DAT_05af92c8 = &PTR_FUN_04b95188;
          __cxa_guard_release(&DAT_05af92e8);
        }
        DAT_05af930b = 0;
        DAT_05af9304 = 0;
        DAT_05af9300 = 8;
        DAT_05af92f0 = PTR_DAT_04bb3768 + 0x10;
        DAT_05af92f8 = &DAT_05af9304;
        (*(code *)*DAT_05af9288)(&DAT_05af9288,&DAT_05af92f0);
        __cxa_guard_release(&DAT_05af9310);
      }
      puVar2 = &DAT_05af92f0;
    }
    else {
      puVar2 = &DAT_05af92f0;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
      if ((DAT_05af9220 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af9220);
        if (iVar1 != 0) {
          FUN_03dc9dc8();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c544c8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af9220);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c544c8,*(undefined8 *)(param_1 + 0x18));
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

