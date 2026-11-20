
undefined8 * FUN_03e6f9f0(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05afb800 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05afb800);
      if (iVar1 != 0) {
        if (((DAT_05afafe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05afafe0), iVar1 != 0)) {
          DAT_05afaf78 = &PTR_LAB_04b97118;
          DAT_05afaf80 = &PTR_FUN_04b97148;
          DAT_05afafa0 = &PTR_FUN_04b971a0;
          DAT_05afafc0 = &PTR_FUN_04b971c8;
          __cxa_guard_release(&DAT_05afafe0);
        }
        DAT_05afb7fa = 0;
        DAT_05afaffc = 0;
        DAT_05afaff8 = 0x400;
        DAT_05afafe8 = PTR_DAT_04bb62a0 + 0x10;
        DAT_05afaff0 = &DAT_05afaffc;
        (*(code *)*DAT_05afaf80)(&DAT_05afaf80,&DAT_05afafe8);
        __cxa_guard_release(&DAT_05afb800);
      }
      puVar2 = &DAT_05afafe8;
    }
    else {
      puVar2 = &DAT_05afafe8;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05afaf18 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05afaf18);
        if (iVar1 != 0) {
          FUN_03de5250();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c568a8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05afaf18);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c568a8,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

