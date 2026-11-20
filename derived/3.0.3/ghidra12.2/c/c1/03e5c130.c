
undefined8 * FUN_03e5c130(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05afa2a0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05afa2a0);
      if (iVar1 != 0) {
        if (((DAT_05afa260 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05afa260), iVar1 != 0)) {
          DAT_05afa1f8 = &PTR_LAB_04b96308;
          DAT_05afa200 = &PTR_FUN_04b96338;
          DAT_05afa220 = &PTR_FUN_04b96360;
          DAT_05afa240 = &PTR_FUN_04b96388;
          __cxa_guard_release(&DAT_05afa260);
        }
        DAT_05afa29a = 0;
        DAT_05afa27c = 0;
        DAT_05afa278 = 0x10;
        DAT_05afa268 = PTR_DAT_04bbd6c0 + 0x10;
        DAT_05afa270 = &DAT_05afa27c;
        (*(code *)*DAT_05afa200)(&DAT_05afa200,&DAT_05afa268);
        __cxa_guard_release(&DAT_05afa2a0);
      }
      puVar2 = &DAT_05afa268;
    }
    else {
      puVar2 = &DAT_05afa268;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05afa198 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05afa198);
        if (iVar1 != 0) {
          FUN_03dd94f0();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c55948,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05afa198);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c55948,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

