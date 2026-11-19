
undefined * FUN_03c6e848(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_2 == 0) {
    if ((*PTR_DAT_04bd3af8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3af8);
      puVar3 = PTR_DAT_04bd3af0;
      puVar2 = PTR_DAT_04bd3ac0;
      if (iVar1 != 0) {
        if (((*PTR_DAT_04bd3ac8 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3ac8), iVar1 != 0)) {
          *(undefined ***)puVar2 = &PTR_LAB_04b838f0;
          *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b83920;
          *(undefined ***)(puVar2 + 0x28) = &PTR_FUN_04b83948;
          *(undefined ***)(puVar2 + 0x48) = &PTR_FUN_04b83970;
          __cxa_guard_release(PTR_DAT_04bd3ac8);
        }
        puVar5 = *(undefined8 **)(puVar2 + 8);
        *(undefined4 *)puVar3 = 0;
        (*(code *)*puVar5)(puVar2 + 8,puVar3);
        __cxa_guard_release(PTR_DAT_04bd3af8);
      }
    }
    else {
      puVar3 = PTR_DAT_04bd3af0;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar4 = *param_1, lVar4 != 0)) {
      if ((*PTR_DAT_04bd3aa8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3aa8);
        puVar2 = PTR_DAT_04bd3aa0;
        if (iVar1 != 0) {
          FUN_03c6cd80(PTR_DAT_04bd3aa0,0);
          FUN_001001d0(PTR_FUN_04bd2f60,puVar2,&__DT_FINI_ARRAY);
          __cxa_guard_release(PTR_DAT_04bd3aa8);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar4,PTR_DAT_04bd3aa0,param_1[1]);
      return puVar2;
    }
    puVar3 = (undefined *)0x0;
  }
  return puVar3;
}

