
undefined8 * FUN_03e5fe00(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05afa3d0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05afa3d0);
      if (iVar1 != 0) {
        if (((DAT_05afa370 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05afa370), iVar1 != 0)) {
          DAT_05afa308 = &PTR_LAB_04b96548;
          DAT_05afa310 = &PTR_FUN_04b96578;
          DAT_05afa330 = &PTR_FUN_04b965a0;
          DAT_05afa350 = &PTR_FUN_04b965c8;
          __cxa_guard_release(&DAT_05afa370);
        }
        DAT_05afa3ca = 0;
        DAT_05afa38c = 0;
        DAT_05afa388 = 0x20;
        DAT_05afa378 = PTR_DAT_04bc0840 + 0x10;
        DAT_05afa380 = &DAT_05afa38c;
        (*(code *)*DAT_05afa310)(&DAT_05afa310,&DAT_05afa378);
        __cxa_guard_release(&DAT_05afa3d0);
      }
      puVar2 = &DAT_05afa378;
    }
    else {
      puVar2 = &DAT_05afa378;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05afa2a8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05afa2a8);
        if (iVar1 != 0) {
          FUN_03ddb3e0();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c55bd8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05afa2a8);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c55bd8,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

