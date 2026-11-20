
undefined8 * FUN_03e62970(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05afa540 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05afa540);
      if (iVar1 != 0) {
        if (((DAT_05afa4a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05afa4a0), iVar1 != 0)) {
          DAT_05afa438 = &PTR_LAB_04b96788;
          DAT_05afa440 = &PTR_FUN_04b967b8;
          DAT_05afa460 = &PTR_FUN_04b967e0;
          DAT_05afa480 = &PTR_FUN_04b96808;
          __cxa_guard_release(&DAT_05afa4a0);
        }
        DAT_05afa53a = 0;
        DAT_05afa4bc = 0;
        DAT_05afa4b8 = 0x40;
        DAT_05afa4a8 = PTR_DAT_04bc0c10 + 0x10;
        DAT_05afa4b0 = &DAT_05afa4bc;
        (*(code *)*DAT_05afa440)(&DAT_05afa440,&DAT_05afa4a8);
        __cxa_guard_release(&DAT_05afa540);
      }
      puVar2 = &DAT_05afa4a8;
    }
    else {
      puVar2 = &DAT_05afa4a8;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05afa3d8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05afa3d8);
        if (iVar1 != 0) {
          FUN_03ddd2d0();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c55e68,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05afa3d8);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c55e68,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

