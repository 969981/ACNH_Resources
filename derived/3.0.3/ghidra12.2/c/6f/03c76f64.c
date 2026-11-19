
undefined * FUN_03c76f64(long param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_2 < 2) {
    if (((*PTR_DAT_04bd34d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd34d8), puVar3 = PTR_DAT_04bd34a0, iVar2 != 0)) {
      if (((*PTR_DAT_04bd34a8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd34a8), puVar5 = PTR_DAT_04bd34c0, iVar2 != 0)) {
        puVar1 = PTR_DAT_04bd34b8 + 0x10;
        *(undefined **)puVar3 = PTR_DAT_04bd34b0 + 0x10;
        *(undefined **)(puVar3 + 8) = puVar1;
        puVar1 = PTR_DAT_04bd34c8;
        *(undefined **)(puVar3 + 0x28) = puVar5 + 0x10;
        *(undefined **)(puVar3 + 0x48) = puVar1 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd34a8);
      }
      puVar5 = PTR_DAT_04bd34d0;
      (*(code *)**(undefined8 **)(puVar3 + 8))(puVar3 + 8,PTR_DAT_04bd34d0);
      __cxa_guard_release(PTR_DAT_04bd34d8);
    }
    else {
      puVar5 = PTR_DAT_04bd34d0;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
      if (((*PTR_DAT_04bd3488 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3488), puVar3 = PTR_DAT_04bd3480, iVar2 != 0)) {
        FUN_03c75c20(PTR_DAT_04bd3480,0);
        FUN_001001d0(PTR_FUN_04bd2f60,puVar3,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd3488);
      }
      puVar3 = (undefined *)FUN_03c66100(lVar4,PTR_DAT_04bd3480,*(undefined8 *)(param_1 + 0x18));
      return puVar3;
    }
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

