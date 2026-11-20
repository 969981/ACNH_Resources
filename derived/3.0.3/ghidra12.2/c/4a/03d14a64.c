
undefined * FUN_03d14a64(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_2 == 0) {
    if ((*PTR_DAT_04bd4048 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04bd4048);
      puVar2 = PTR_DAT_04bd4050;
      puVar5 = PTR_DAT_04bd4040;
      if (iVar4 != 0) {
        if ((*PTR_DAT_04bd4058 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_04bd4058);
          puVar3 = PTR_DAT_04bd4070;
          if (iVar4 != 0) {
            puVar1 = PTR_DAT_04bd4068 + 0x10;
            *(undefined **)puVar2 = PTR_DAT_04bd4060 + 0x10;
            *(undefined **)(puVar2 + 8) = puVar1;
            puVar1 = PTR_DAT_04bd4078;
            *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
            *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
            __cxa_guard_release(PTR_DAT_04bd4058);
          }
        }
        puVar7 = *(undefined8 **)(puVar2 + 8);
        *(undefined4 *)puVar5 = 0;
        (*(code *)*puVar7)(puVar2 + 8,puVar5);
        __cxa_guard_release(PTR_DAT_04bd4048);
      }
    }
    else {
      puVar5 = PTR_DAT_04bd4040;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar6 = *param_1, lVar6 != 0)) {
      if (((DAT_05af0890 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05af0890), iVar4 != 0)) {
        FUN_03ccd45c();
        FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c4fa78,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_05af0890);
      }
      puVar5 = (undefined *)FUN_03c66100(lVar6,&DAT_04c4fa78,param_1[1]);
      return puVar5;
    }
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

