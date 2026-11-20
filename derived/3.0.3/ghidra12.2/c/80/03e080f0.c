
undefined * FUN_03e080f0(long *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04bd33b8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd33b8), puVar3 = PTR_DAT_04bd3380, iVar2 != 0)) {
      if (((*PTR_DAT_04bd3388 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3388), puVar5 = PTR_DAT_04bd33a0, iVar2 != 0)) {
        puVar1 = PTR_DAT_04bd3398 + 0x10;
        *(undefined **)puVar3 = PTR_DAT_04bd3390 + 0x10;
        *(undefined **)(puVar3 + 8) = puVar1;
        puVar1 = PTR_DAT_04bd33a8;
        *(undefined **)(puVar3 + 0x28) = puVar5 + 0x10;
        *(undefined **)(puVar3 + 0x48) = puVar1 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd3388);
      }
      puVar5 = PTR_DAT_04bd33b0;
      (*(code *)**(undefined8 **)(puVar3 + 8))(puVar3 + 8,PTR_DAT_04bd33b0);
      __cxa_guard_release(PTR_DAT_04bd33b8);
    }
    else {
      puVar5 = PTR_DAT_04bd33b0;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar4 = *param_1, lVar4 != 0)) {
      if (((*PTR_DAT_04bd3368 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3368), puVar3 = PTR_DAT_04bd3360, iVar2 != 0)) {
        FUN_03c60320(PTR_DAT_04bd3360,0);
        FUN_001001d0(PTR_FUN_04bd2f60,puVar3,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd3368);
      }
      puVar3 = (undefined *)FUN_03c66100(lVar4,PTR_DAT_04bd3360,param_1[1]);
      return puVar3;
    }
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

