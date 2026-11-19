
undefined * FUN_03cd254c(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (((DAT_05af0a58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af0a58), iVar1 != 0)) {
      if (((DAT_05af0a40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af0a40), iVar1 != 0)) {
        DAT_05af09d8 = &PTR_LAB_04b8a398;
        DAT_05af09e0 = &PTR_FUN_04b8a3f0;
        DAT_05af0a00 = &PTR_FUN_04b8a3c8;
        DAT_05af0a20 = &PTR_FUN_04b8a418;
        __cxa_guard_release(&DAT_05af0a40);
      }
      (*(code *)*DAT_05af09e0)(&DAT_05af09e0,&DAT_05af0a48);
      __cxa_guard_release(&DAT_05af0a58);
      puVar2 = &DAT_05af0a48;
    }
    else {
      puVar2 = &DAT_05af0a48;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af0978 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af0978);
        if (iVar1 != 0) {
          FUN_03cd0b58();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c4ff98,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af0978);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,&DAT_04c4ff98,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

