
undefined * FUN_03cfa058(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_2 == 0) {
    if ((*PTR_DAT_04bd3bb8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3bb8);
      puVar5 = PTR_DAT_04bd3bb0;
      puVar4 = PTR_DAT_04bd3b80;
      if (iVar3 != 0) {
        if ((*PTR_DAT_04bd3b88 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3b88);
          puVar2 = PTR_DAT_04bd3ba0;
          if (iVar3 != 0) {
            puVar1 = PTR_DAT_04bd3b98 + 0x10;
            *(undefined **)puVar4 = PTR_DAT_04bd3b90 + 0x10;
            *(undefined **)(puVar4 + 8) = puVar1;
            puVar1 = PTR_DAT_04bd3ba8;
            *(undefined **)(puVar4 + 0x28) = puVar2 + 0x10;
            *(undefined **)(puVar4 + 0x48) = puVar1 + 0x10;
            __cxa_guard_release(PTR_DAT_04bd3b88);
          }
        }
        puVar7 = *(undefined8 **)(puVar4 + 8);
        *(undefined4 *)puVar5 = 0;
        (*(code *)*puVar7)(puVar4 + 8,puVar5);
        __cxa_guard_release(PTR_DAT_04bd3bb8);
      }
    }
    else {
      puVar5 = PTR_DAT_04bd3bb0;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar6 = *param_1, lVar6 != 0)) {
      if ((*PTR_DAT_04bd3b68 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3b68);
        puVar4 = PTR_DAT_04bd3b60;
        if (iVar3 != 0) {
          FUN_03c77860(PTR_DAT_04bd3b60,0);
          FUN_001001d0(PTR_FUN_04bd2f60,puVar4,&__DT_FINI_ARRAY);
          __cxa_guard_release(PTR_DAT_04bd3b68);
        }
      }
      puVar4 = (undefined *)FUN_03c66100(lVar6,PTR_DAT_04bd3b60,param_1[1]);
      return puVar4;
    }
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

