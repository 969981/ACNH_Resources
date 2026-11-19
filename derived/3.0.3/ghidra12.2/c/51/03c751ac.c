
undefined * FUN_03c751ac(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04bd3848 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3848), puVar2 = PTR_DAT_04bd3810, iVar1 != 0)) {
      if (((*PTR_DAT_04bd3818 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3818), iVar1 != 0)) {
        *(undefined ***)puVar2 = &PTR_LAB_04b83d88;
        *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b83db8;
        *(undefined ***)(puVar2 + 0x28) = &PTR_FUN_04b83de0;
        *(undefined ***)(puVar2 + 0x48) = &PTR_FUN_04b83e08;
        __cxa_guard_release(PTR_DAT_04bd3818);
      }
      puVar4 = PTR_DAT_04bd3840;
      (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,PTR_DAT_04bd3840);
      __cxa_guard_release(PTR_DAT_04bd3848);
    }
    else {
      puVar4 = PTR_DAT_04bd3840;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if (((*PTR_DAT_04bd37f8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd37f8), puVar2 = PTR_DAT_04bd37f0, iVar1 != 0)) {
        FUN_03c73fc0(PTR_DAT_04bd37f0,0);
        FUN_001001d0(PTR_FUN_04bd2f60,puVar2,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd37f8);
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,PTR_DAT_04bd37f0,param_1[1]);
      return puVar2;
    }
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}

