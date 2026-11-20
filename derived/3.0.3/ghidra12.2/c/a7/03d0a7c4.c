
undefined * FUN_03d0a7c4(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (((DAT_05af0828 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af0828), iVar1 != 0)) {
      if (((DAT_05af0818 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af0818), iVar1 != 0)) {
        DAT_05af07b0 = &PTR_LAB_04b89c90;
        DAT_05af07b8 = &PTR_FUN_04b89cc0;
        DAT_05af07d8 = &PTR_FUN_04b89ce8;
        DAT_05af07f8 = &PTR_FUN_04b89d10;
        __cxa_guard_release(&DAT_05af0818);
      }
      (*(code *)*DAT_05af07b8)(&DAT_05af07b8,&DAT_05af0820);
      __cxa_guard_release(&DAT_05af0828);
      puVar2 = &DAT_05af0820;
    }
    else {
      puVar2 = &DAT_05af0820;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af0750 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af0750);
        if (iVar1 != 0) {
          FUN_03cc9d6c();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c4f558,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af0750);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,&DAT_04c4f558,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

