
undefined8 * FUN_03ea056c(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05af9078 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05af9078);
      if (iVar1 != 0) {
        if (((DAT_05af9060 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af9060), iVar1 != 0)) {
          DAT_05af8ff8 = &PTR_LAB_04b94ac8;
          DAT_05af9000 = &PTR_FUN_04b94af8;
          DAT_05af9020 = &PTR_FUN_04b94b20;
          DAT_05af9040 = &PTR_FUN_04b94b48;
          __cxa_guard_release(&DAT_05af9060);
        }
        DAT_05af9068 = PTR_DAT_04bb8610 + 0x10;
        DAT_05af9070 = PTR_DAT_04bb2da0;
        (*(code *)*DAT_05af9000)(&DAT_05af9000,&DAT_05af9068);
        __cxa_guard_release(&DAT_05af9078);
      }
      puVar2 = &DAT_05af9068;
    }
    else {
      puVar2 = &DAT_05af9068;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af8f98 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af8f98);
        if (iVar1 != 0) {
          FUN_03dc3cc0();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c53d18,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af8f98);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c53d18,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

