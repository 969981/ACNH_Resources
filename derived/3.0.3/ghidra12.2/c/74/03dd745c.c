
undefined8 * FUN_03dd745c(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05af9ca0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05af9ca0);
      if (iVar1 != 0) {
        if (((DAT_05af9a80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af9a80), iVar1 != 0)) {
          DAT_05af9a18 = &PTR_LAB_04b95e88;
          DAT_05af9a20 = &PTR_FUN_04b95eb8;
          DAT_05af9a40 = &PTR_FUN_04b95ee0;
          DAT_05af9a60 = &PTR_FUN_04b95f08;
          __cxa_guard_release(&DAT_05af9a80);
        }
        DAT_05af9c9b = 0;
        DAT_05af9a9c = 0;
        DAT_05af9a98 = 0x200;
        DAT_05af9a88 = PTR_DAT_04bb2d90 + 0x10;
        DAT_05af9a90 = &DAT_05af9a9c;
        (*(code *)*DAT_05af9a20)(&DAT_05af9a20,&DAT_05af9a88);
        __cxa_guard_release(&DAT_05af9ca0);
      }
      puVar2 = &DAT_05af9a88;
    }
    else {
      puVar2 = &DAT_05af9a88;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af99b8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af99b8);
        if (iVar1 != 0) {
          FUN_03dd5710();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c55428,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af99b8);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c55428,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

