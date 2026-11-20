
undefined8 * FUN_03e6e88c(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05afaf10 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05afaf10);
      if (iVar1 != 0) {
        if (((DAT_05afaaf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05afaaf0), iVar1 != 0)) {
          DAT_05afaa88 = &PTR_LAB_04b96ea8;
          DAT_05afaa90 = &PTR_FUN_04b96ed8;
          DAT_05afaab0 = &PTR_FUN_04b96f30;
          DAT_05afaad0 = &PTR_FUN_04b96f58;
          __cxa_guard_release(&DAT_05afaaf0);
        }
        DAT_05afaf0a = 0;
        DAT_05afab0c = 0;
        DAT_05afab08 = 0x200;
        DAT_05afaaf8 = PTR_DAT_04bd2e10 + 0x10;
        DAT_05afab00 = &DAT_05afab0c;
        (*(code *)*DAT_05afaa90)(&DAT_05afaa90,&DAT_05afaaf8);
        __cxa_guard_release(&DAT_05afaf10);
      }
      puVar2 = &DAT_05afaaf8;
    }
    else {
      puVar2 = &DAT_05afaaf8;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05afaa28 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05afaa28);
        if (iVar1 != 0) {
          FUN_03de3220();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c56618,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05afaa28);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c56618,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

