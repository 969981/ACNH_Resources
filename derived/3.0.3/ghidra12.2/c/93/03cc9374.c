
undefined4 * FUN_03cc9374(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  
  if (param_2 == 0) {
    if ((DAT_05af0748 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_05af0748);
      puVar2 = PTR_DAT_04bd3bc0;
      if (iVar4 != 0) {
        if (((*PTR_DAT_04bd3bc8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3bc8), puVar3 = PTR_DAT_04bd3be0, iVar4 != 0)) {
          puVar1 = PTR_DAT_04bd3bd8 + 0x10;
          *(undefined **)puVar2 = PTR_DAT_04bd3bd0 + 0x10;
          *(undefined **)(puVar2 + 8) = puVar1;
          puVar1 = PTR_DAT_04bd3be8;
          *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
          *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
          __cxa_guard_release(PTR_DAT_04bd3bc8);
        }
        DAT_05af0740 = 0;
        (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,&DAT_05af0740);
        __cxa_guard_release(&DAT_05af0748);
      }
      puVar5 = &DAT_05af0740;
    }
    else {
      puVar5 = &DAT_05af0740;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar6 = *param_1, lVar6 != 0)) {
      if (((DAT_05af06e0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05af06e0), iVar4 != 0)) {
        FUN_03cc81fc();
        FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c4f2c8,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_05af06e0);
      }
      puVar5 = (undefined4 *)FUN_03c66100(lVar6,&DAT_04c4f2c8,param_1[1]);
      return puVar5;
    }
    puVar5 = (undefined4 *)0x0;
  }
  return puVar5;
}

