
undefined * FUN_03d0e594(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_2 == 0) {
    if ((*PTR_DAT_04bd3a18 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3a18);
      puVar2 = PTR_DAT_04bd3a20;
      puVar5 = PTR_DAT_04bd3a10;
      if (iVar4 != 0) {
        if ((*PTR_DAT_04bd3a28 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3a28);
          puVar3 = PTR_DAT_04bd3a40;
          if (iVar4 != 0) {
            puVar1 = PTR_DAT_04bd3a38 + 0x10;
            *(undefined **)puVar2 = PTR_DAT_04bd3a30 + 0x10;
            *(undefined **)(puVar2 + 8) = puVar1;
            puVar1 = PTR_DAT_04bd3a48;
            *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
            *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
            __cxa_guard_release(PTR_DAT_04bd3a28);
          }
        }
        puVar7 = *(undefined8 **)(puVar2 + 8);
        *(undefined4 *)puVar5 = 0;
        (*(code *)*puVar7)(puVar2 + 8,puVar5);
        __cxa_guard_release(PTR_DAT_04bd3a18);
      }
    }
    else {
      puVar5 = PTR_DAT_04bd3a10;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar6 = *param_1, lVar6 != 0)) {
      if (((DAT_05af0830 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05af0830), iVar4 != 0)) {
        FUN_03ccb8ec();
        FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c4f7e8,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_05af0830);
      }
      puVar5 = (undefined *)FUN_03c66100(lVar6,&DAT_04c4f7e8,param_1[1]);
      return puVar5;
    }
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

