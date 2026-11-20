
undefined8 * FUN_03e4bc90(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
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
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af9528 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af9528);
        if (iVar1 != 0) {
          FUN_03dcfa60();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c54c78,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af9528);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c54c78,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

