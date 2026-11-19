
undefined * FUN_03ce84e8(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04bd3538 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3538), puVar2 = PTR_DAT_04bd3500, iVar1 != 0)) {
      if (((*PTR_DAT_04bd3508 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3508), iVar1 != 0)) {
        *(undefined ***)puVar2 = &PTR_LAB_04b8bb10;
        *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b8bb40;
        *(undefined ***)(puVar2 + 0x28) = &PTR_FUN_04b8bb68;
        *(undefined ***)(puVar2 + 0x48) = &PTR_FUN_04b8bb90;
        __cxa_guard_release(PTR_DAT_04bd3508);
      }
      puVar4 = PTR_DAT_04bd3530;
      (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,PTR_DAT_04bd3530);
      __cxa_guard_release(PTR_DAT_04bd3538);
    }
    else {
      puVar4 = PTR_DAT_04bd3530;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if (((*PTR_DAT_04bd34e8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd34e8), puVar2 = PTR_DAT_04bd34e0, iVar1 != 0)) {
        FUN_03ce6a18(PTR_DAT_04bd34e0,0);
        FUN_001001d0(PTR_FUN_04bd2f60,puVar2,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd34e8);
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,PTR_DAT_04bd34e0,param_1[1]);
      return puVar2;
    }
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}

