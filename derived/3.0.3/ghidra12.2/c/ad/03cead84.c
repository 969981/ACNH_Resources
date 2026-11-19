
undefined * FUN_03cead84(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_2 == 0) {
    if ((*PTR_DAT_04bd3b58 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3b58);
      puVar5 = PTR_DAT_04bd3b50;
      puVar4 = PTR_DAT_04bd3b20;
      if (iVar3 != 0) {
        if ((*PTR_DAT_04bd3b28 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3b28);
          puVar2 = PTR_DAT_04bd3b40;
          if (iVar3 != 0) {
            puVar1 = PTR_DAT_04bd3b38 + 0x10;
            *(undefined **)puVar4 = PTR_DAT_04bd3b30 + 0x10;
            *(undefined **)(puVar4 + 8) = puVar1;
            puVar1 = PTR_DAT_04bd3b48;
            *(undefined **)(puVar4 + 0x28) = puVar2 + 0x10;
            *(undefined **)(puVar4 + 0x48) = puVar1 + 0x10;
            __cxa_guard_release(PTR_DAT_04bd3b28);
          }
        }
        puVar7 = *(undefined8 **)(puVar4 + 8);
        *(undefined4 *)puVar5 = 0;
        (*(code *)*puVar7)(puVar4 + 8,puVar5);
        __cxa_guard_release(PTR_DAT_04bd3b58);
      }
    }
    else {
      puVar5 = PTR_DAT_04bd3b50;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar6 = *param_1, lVar6 != 0)) {
      if ((*PTR_DAT_04bd3b08 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3b08);
        puVar4 = PTR_DAT_04bd3b00;
        if (iVar3 != 0) {
          FUN_03c6e9e0(PTR_DAT_04bd3b00,0);
          FUN_001001d0(PTR_FUN_04bd2f60,puVar4,&__DT_FINI_ARRAY);
          __cxa_guard_release(PTR_DAT_04bd3b08);
        }
      }
      puVar4 = (undefined *)FUN_03c66100(lVar6,PTR_DAT_04bd3b00,param_1[1]);
      return puVar4;
    }
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

