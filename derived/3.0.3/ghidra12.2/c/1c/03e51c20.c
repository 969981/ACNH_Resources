
undefined8 * FUN_03e51c20(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if ((DAT_05af99b0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05af99b0);
      if (iVar1 != 0) {
        if (((DAT_05af9890 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05af9890), iVar1 != 0)) {
          DAT_05af9828 = &PTR_LAB_04b95c48;
          DAT_05af9830 = &PTR_FUN_04b95c78;
          DAT_05af9850 = &PTR_FUN_04b95ca0;
          DAT_05af9870 = &PTR_FUN_04b95cc8;
          __cxa_guard_release(&DAT_05af9890);
        }
        DAT_05af99ab = 0;
        DAT_05af98ac = 0;
        DAT_05af98a8 = 0x100;
        DAT_05af9898 = PTR_DAT_04bb21f8 + 0x10;
        DAT_05af98a0 = &DAT_05af98ac;
        (*(code *)*DAT_05af9830)(&DAT_05af9830,&DAT_05af9898);
        __cxa_guard_release(&DAT_05af99b0);
      }
      puVar2 = &DAT_05af9898;
    }
    else {
      puVar2 = &DAT_05af9898;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if ((DAT_05af97c8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_05af97c8);
        if (iVar1 != 0) {
          FUN_03dd3820();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c55198,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af97c8);
        }
      }
      puVar2 = (undefined8 *)FUN_03c66100(lVar3,&DAT_04c55198,param_1[1]);
      return puVar2;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}

