
undefined * FUN_03c7afac(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_2 == 0) {
    if ((*PTR_DAT_04bd3748 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3748);
      puVar3 = PTR_DAT_04bd3740;
      puVar2 = PTR_DAT_04bd3710;
      if (iVar1 != 0) {
        if (((*PTR_DAT_04bd3718 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3718), iVar1 != 0)) {
          *(undefined ***)puVar2 = &PTR_LAB_04b83ae8;
          *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b83b18;
          *(undefined ***)(puVar2 + 0x28) = &PTR_FUN_04b83b40;
          *(undefined ***)(puVar2 + 0x48) = &PTR_FUN_04b83b68;
          __cxa_guard_release(PTR_DAT_04bd3718);
        }
        *(undefined4 *)puVar3 = 0xff;
        (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,puVar3);
        __cxa_guard_release(PTR_DAT_04bd3748);
      }
    }
    else {
      puVar3 = PTR_DAT_04bd3740;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar4 = *param_1, lVar4 != 0)) {
      if ((*PTR_DAT_04bd36f8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bd36f8);
        puVar2 = PTR_DAT_04bd36f0;
        if (iVar1 != 0) {
          FUN_03c794c0(PTR_DAT_04bd36f0,0);
          FUN_001001d0(PTR_FUN_04bd2f60,puVar2,&__DT_FINI_ARRAY);
          __cxa_guard_release(PTR_DAT_04bd36f8);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar4,PTR_DAT_04bd36f0,param_1[1]);
      return puVar2;
    }
    puVar3 = (undefined *)0x0;
  }
  return puVar3;
}

