
undefined8 * FUN_03dd8a74(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05afa190 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05afa190);
      if (iVar1 != 0) {
        if (((DAT_05af9d70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af9d70), iVar1 != 0)) {
          DAT_05af9d08 = &PTR_LAB_04b960c8;
          DAT_05af9d10 = &PTR_FUN_04b960f8;
          DAT_05af9d30 = &PTR_FUN_04b96120;
          DAT_05af9d50 = &PTR_FUN_04b96148;
          __cxa_guard_release(&DAT_05af9d70);
        }
        DAT_05afa18b = 0;
        DAT_05af9d8c = 0;
        DAT_05af9d88 = 0x400;
        DAT_05af9d78 = PTR_DAT_04bb2f40 + 0x10;
        DAT_05af9d80 = &DAT_05af9d8c;
        (*(code *)*DAT_05af9d10)(&DAT_05af9d10,&DAT_05af9d78);
        __cxa_guard_release(&DAT_05afa190);
      }
      puVar2 = &DAT_05af9d78;
    }
    else {
      puVar2 = &DAT_05af9d78;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af9ca8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af9ca8);
        if (iVar1 != 0) {
          FUN_03dd7600();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c556b8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af9ca8);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c556b8,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

