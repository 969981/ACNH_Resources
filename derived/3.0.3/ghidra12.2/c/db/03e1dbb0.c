
undefined * FUN_03e1dbb0(long *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04bd3538 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3538), puVar3 = PTR_DAT_04bd3500, iVar2 != 0)) {
      if (((*PTR_DAT_04bd3508 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3508), puVar5 = PTR_DAT_04bd3520, iVar2 != 0)) {
        puVar1 = PTR_DAT_04bd3518 + 0x10;
        *(undefined **)puVar3 = PTR_DAT_04bd3510 + 0x10;
        *(undefined **)(puVar3 + 8) = puVar1;
        puVar1 = PTR_DAT_04bd3528;
        *(undefined **)(puVar3 + 0x28) = puVar5 + 0x10;
        *(undefined **)(puVar3 + 0x48) = puVar1 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd3508);
      }
      puVar5 = PTR_DAT_04bd3530;
      (*(code *)**(undefined8 **)(puVar3 + 8))(puVar3 + 8,PTR_DAT_04bd3530);
      __cxa_guard_release(PTR_DAT_04bd3538);
    }
    else {
      puVar5 = PTR_DAT_04bd3530;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar4 = *param_1, lVar4 != 0)) {
      if (((*PTR_DAT_04bd34e8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd34e8), puVar3 = PTR_DAT_04bd34e0, iVar2 != 0)) {
        FUN_03ce6a18(PTR_DAT_04bd34e0,0);
        FUN_001001d0(PTR_FUN_04bd2f60,puVar3,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd34e8);
      }
      puVar3 = (undefined *)FUN_03c66100(lVar4,PTR_DAT_04bd34e0,param_1[1]);
      return puVar3;
    }
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

