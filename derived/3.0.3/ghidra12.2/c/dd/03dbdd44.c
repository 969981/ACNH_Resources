
undefined8 * FUN_03dbdd44(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05af8d58 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05af8d58);
      if (iVar1 != 0) {
        if (((DAT_05af8d40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af8d40), iVar1 != 0)) {
          DAT_05af8cd8 = &PTR_LAB_04b94270;
          DAT_05af8ce0 = &PTR_FUN_04b942a0;
          DAT_05af8d00 = &PTR_FUN_04b942c8;
          DAT_05af8d20 = &PTR_FUN_04b942f0;
          __cxa_guard_release(&DAT_05af8d40);
        }
        DAT_05af8d48 = 0;
        DAT_05af8d50 = 0x3f80000000000000;
        (*(code *)*DAT_05af8ce0)(&DAT_05af8ce0,&DAT_05af8d48);
        __cxa_guard_release(&DAT_05af8d58);
      }
      puVar2 = &DAT_05af8d48;
    }
    else {
      puVar2 = &DAT_05af8d48;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af8c78 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af8c78);
        if (iVar1 != 0) {
          FUN_03dbcb48();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c532d8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af8c78);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c532d8,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

