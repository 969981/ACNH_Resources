
undefined8 * FUN_03dd1068(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 < 2) {
    if ((DAT_05af9650 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05af9650);
      if (iVar1 != 0) {
        if (((DAT_05af95f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af95f0), iVar1 != 0)) {
          DAT_05af9588 = &PTR_LAB_04b957c8;
          DAT_05af9590 = &PTR_FUN_04b957f8;
          DAT_05af95b0 = &PTR_FUN_04b95820;
          DAT_05af95d0 = &PTR_FUN_04b95848;
          __cxa_guard_release(&DAT_05af95f0);
        }
        DAT_05af964b = 0;
        DAT_05af960c = 0;
        DAT_05af9608 = 0x40;
        DAT_05af95f8 = PTR_DAT_04bb2bc0 + 0x10;
        DAT_05af9600 = &DAT_05af960c;
        (*(code *)*DAT_05af9590)(&DAT_05af9590,&DAT_05af95f8);
        __cxa_guard_release(&DAT_05af9650);
      }
      puVar2 = &DAT_05af95f8;
    }
    else {
      puVar2 = &DAT_05af95f8;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
      if ((DAT_05af9528 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af9528);
        if (iVar1 != 0) {
          FUN_03dcfa60();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c54c78,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af9528);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c54c78,*(undefined8 *)(param_1 + 0x18));
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

