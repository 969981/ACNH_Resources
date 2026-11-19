
undefined * FUN_03ce4d6c(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04bd3478 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3478), puVar2 = PTR_DAT_04bd3440, iVar1 != 0)) {
      if (((*PTR_DAT_04bd3448 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3448), iVar1 != 0)) {
        *(undefined ***)puVar2 = &PTR_LAB_04b8b7c0;
        *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b8b7f0;
        *(undefined ***)(puVar2 + 0x28) = &PTR_FUN_04b8b818;
        *(undefined ***)(puVar2 + 0x48) = &PTR_FUN_04b8b840;
        __cxa_guard_release(PTR_DAT_04bd3448);
      }
      puVar4 = PTR_DAT_04bd3470;
      (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,PTR_DAT_04bd3470);
      __cxa_guard_release(PTR_DAT_04bd3478);
    }
    else {
      puVar4 = PTR_DAT_04bd3470;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if (((*PTR_DAT_04bd3428 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3428), puVar2 = PTR_DAT_04bd3420, iVar1 != 0)) {
        FUN_03ce3b74(PTR_DAT_04bd3420,0);
        FUN_001001d0(PTR_FUN_04bd2f60,puVar2,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd3428);
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,PTR_DAT_04bd3420,param_1[1]);
      return puVar2;
    }
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}

