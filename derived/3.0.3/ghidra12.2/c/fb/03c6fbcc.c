
undefined * FUN_03c6fbcc(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_2 == 0) {
    if ((*PTR_DAT_04bd3b58 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3b58);
      puVar3 = PTR_DAT_04bd3b50;
      puVar2 = PTR_DAT_04bd3b20;
      if (iVar1 != 0) {
        if (((*PTR_DAT_04bd3b28 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3b28), iVar1 != 0)) {
          *(undefined ***)puVar2 = &PTR_LAB_04b83998;
          *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b839c8;
          *(undefined ***)(puVar2 + 0x28) = &PTR_FUN_04b839f0;
          *(undefined ***)(puVar2 + 0x48) = &PTR_FUN_04b83a18;
          __cxa_guard_release(PTR_DAT_04bd3b28);
        }
        puVar5 = *(undefined8 **)(puVar2 + 8);
        *(undefined4 *)puVar3 = 0;
        (*(code *)*puVar5)(puVar2 + 8,puVar3);
        __cxa_guard_release(PTR_DAT_04bd3b58);
      }
    }
    else {
      puVar3 = PTR_DAT_04bd3b50;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar4 = *param_1, lVar4 != 0)) {
      if ((*PTR_DAT_04bd3b08 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3b08);
        puVar2 = PTR_DAT_04bd3b00;
        if (iVar1 != 0) {
          FUN_03c6e9e0(PTR_DAT_04bd3b00,0);
          FUN_001001d0(PTR_FUN_04bd2f60,puVar2,&__DT_FINI_ARRAY);
          __cxa_guard_release(PTR_DAT_04bd3b08);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar4,PTR_DAT_04bd3b00,param_1[1]);
      return puVar2;
    }
    puVar3 = (undefined *)0x0;
  }
  return puVar3;
}

