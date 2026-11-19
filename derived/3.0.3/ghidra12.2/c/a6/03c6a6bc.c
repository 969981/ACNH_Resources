
undefined * FUN_03c6a6bc(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04bd3678 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3678), puVar2 = PTR_DAT_04bd3630, iVar1 != 0)) {
      if (((*PTR_DAT_04bd3638 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3638), iVar1 != 0)) {
        *(undefined ***)puVar2 = &PTR_LAB_04b837a0;
        *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b837d0;
        *(undefined ***)(puVar2 + 0x28) = &PTR_FUN_04b837f8;
        *(undefined ***)(puVar2 + 0x48) = &PTR_FUN_04b83820;
        __cxa_guard_release(PTR_DAT_04bd3638);
      }
      puVar4 = PTR_DAT_04bd3670;
      (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,PTR_DAT_04bd3670);
      __cxa_guard_release(PTR_DAT_04bd3678);
    }
    else {
      puVar4 = PTR_DAT_04bd3670;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if (((*PTR_DAT_04bd3618 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3618), puVar2 = PTR_DAT_04bd3610, iVar1 != 0)) {
        FUN_03c69498(PTR_DAT_04bd3610,0);
        FUN_001001d0(PTR_FUN_04bd2f60,puVar2,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd3618);
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,PTR_DAT_04bd3610,param_1[1]);
      return puVar2;
    }
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}

