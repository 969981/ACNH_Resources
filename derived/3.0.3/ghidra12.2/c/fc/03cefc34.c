
undefined4 * FUN_03cefc34(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  
  if (param_2 == 0) {
    if ((DAT_05af0668 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_05af0668);
      puVar2 = PTR_DAT_04bd3c20;
      if (iVar4 != 0) {
        if (((*PTR_DAT_04bd3c28 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3c28), puVar3 = PTR_DAT_04bd3c40, iVar4 != 0)) {
          puVar1 = PTR_DAT_04bd3c38 + 0x10;
          *(undefined **)puVar2 = PTR_DAT_04bd3c30 + 0x10;
          *(undefined **)(puVar2 + 8) = puVar1;
          puVar1 = PTR_DAT_04bd3c48;
          *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
          *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
          __cxa_guard_release(PTR_DAT_04bd3c28);
        }
        DAT_05af0660 = 0;
        (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,&DAT_05af0660);
        __cxa_guard_release(&DAT_05af0668);
      }
      puVar5 = &DAT_05af0660;
    }
    else {
      puVar5 = &DAT_05af0660;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar6 = *param_1, lVar6 != 0)) {
      if (((DAT_05af0600 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05af0600), iVar4 != 0)) {
        FUN_03cc4b1c();
        FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c4eda8,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_05af0600);
      }
      puVar5 = (undefined4 *)FUN_03c66100(lVar6,&DAT_04c4eda8,param_1[1]);
      return puVar5;
    }
    puVar5 = (undefined4 *)0x0;
  }
  return puVar5;
}

