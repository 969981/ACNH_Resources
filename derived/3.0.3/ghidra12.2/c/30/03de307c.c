
undefined8 * FUN_03de307c(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05afaa20 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05afaa20);
      if (iVar1 != 0) {
        if (((DAT_05afa800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05afa800), iVar1 != 0)) {
          DAT_05afa798 = &PTR_LAB_04b96c38;
          DAT_05afa7a0 = &PTR_FUN_04b96c68;
          DAT_05afa7c0 = &PTR_FUN_04b96cc0;
          DAT_05afa7e0 = &PTR_FUN_04b96ce8;
          __cxa_guard_release(&DAT_05afa800);
        }
        DAT_05afaa1a = 0;
        DAT_05afa81c = 0;
        DAT_05afa818 = 0x100;
        DAT_05afa808 = PTR_DAT_04bb8a50 + 0x10;
        DAT_05afa810 = &DAT_05afa81c;
        (*(code *)*DAT_05afa7a0)(&DAT_05afa7a0,&DAT_05afa808);
        __cxa_guard_release(&DAT_05afaa20);
      }
      puVar2 = &DAT_05afa808;
    }
    else {
      puVar2 = &DAT_05afa808;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05afa738 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05afa738);
        if (iVar1 != 0) {
          FUN_03de11f0();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c56388,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05afa738);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c56388,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

