
undefined * FUN_03c62f98(long *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04bd3178 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3178), puVar3 = PTR_DAT_04bd3140, iVar2 != 0)) {
      if (((*PTR_DAT_04bd3148 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3148), puVar5 = PTR_DAT_04bd3160, iVar2 != 0)) {
        puVar1 = PTR_DAT_04bd3158 + 0x10;
        *(undefined **)puVar3 = PTR_DAT_04bd3150 + 0x10;
        *(undefined **)(puVar3 + 8) = puVar1;
        puVar1 = PTR_DAT_04bd3168;
        *(undefined **)(puVar3 + 0x28) = puVar5 + 0x10;
        *(undefined **)(puVar3 + 0x48) = puVar1 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd3148);
      }
      puVar5 = PTR_DAT_04bd3170;
      (*(code *)**(undefined8 **)(puVar3 + 8))(puVar3 + 8,PTR_DAT_04bd3170);
      __cxa_guard_release(PTR_DAT_04bd3178);
    }
    else {
      puVar5 = PTR_DAT_04bd3170;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar4 = *param_1, lVar4 != 0)) {
      if (((*PTR_DAT_04bd3128 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3128), puVar3 = PTR_DAT_04bd3120, iVar2 != 0)) {
        FUN_03c613d4(PTR_DAT_04bd3120,0);
        FUN_001001d0(FUN_03c60734,puVar3,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd3128);
      }
      puVar3 = (undefined *)FUN_03c66100(lVar4,PTR_DAT_04bd3120,param_1[1]);
      return puVar3;
    }
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

