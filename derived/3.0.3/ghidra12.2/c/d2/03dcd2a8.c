
undefined8 * FUN_03dcd2a8(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 < 2) {
    if ((DAT_05af9410 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05af9410);
      if (iVar1 != 0) {
        if (((DAT_05af93e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af93e0), iVar1 != 0)) {
          DAT_05af9378 = &PTR_LAB_04b95348;
          DAT_05af9380 = &PTR_FUN_04b95378;
          DAT_05af93a0 = &PTR_FUN_04b953a0;
          DAT_05af93c0 = &PTR_FUN_04b953c8;
          __cxa_guard_release(&DAT_05af93e0);
        }
        DAT_05af940b = 0;
        DAT_05af93fc = 0;
        DAT_05af93f8 = 0x10;
        DAT_05af93e8 = PTR_DAT_04bb2ab0 + 0x10;
        DAT_05af93f0 = &DAT_05af93fc;
        (*(code *)*DAT_05af9380)(&DAT_05af9380,&DAT_05af93e8);
        __cxa_guard_release(&DAT_05af9410);
      }
      puVar2 = &DAT_05af93e8;
    }
    else {
      puVar2 = &DAT_05af93e8;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
      if ((DAT_05af9318 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af9318);
        if (iVar1 != 0) {
          FUN_03dcbca0();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c54758,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af9318);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c54758,*(undefined8 *)(param_1 + 0x18));
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

