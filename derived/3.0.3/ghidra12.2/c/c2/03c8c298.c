
undefined * FUN_03c8c298(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_04bd3598 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3598), puVar2 = PTR_DAT_04bd3560, iVar1 != 0)) {
      if (((*PTR_DAT_04bd3568 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3568), iVar1 != 0)) {
        *(undefined ***)puVar2 = &PTR_LAB_04b84ee8;
        *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b84f18;
        *(undefined ***)(puVar2 + 0x28) = &PTR_FUN_04b84f40;
        *(undefined ***)(puVar2 + 0x48) = &PTR_FUN_04b84f68;
        __cxa_guard_release(PTR_DAT_04bd3568);
      }
      puVar4 = PTR_DAT_04bd3590;
      (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,PTR_DAT_04bd3590);
      __cxa_guard_release(PTR_DAT_04bd3598);
    }
    else {
      puVar4 = PTR_DAT_04bd3590;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar3 = *param_1, lVar3 != 0)) {
      if (((*PTR_DAT_04bd3548 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3548), puVar2 = PTR_DAT_04bd3540, iVar1 != 0)) {
        FUN_03c8a7cc(PTR_DAT_04bd3540,0);
        FUN_001001d0(PTR_FUN_04bd2f60,puVar2,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd3548);
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,PTR_DAT_04bd3540,param_1[1]);
      return puVar2;
    }
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}

