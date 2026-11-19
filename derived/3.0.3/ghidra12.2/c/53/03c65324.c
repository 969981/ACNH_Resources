
undefined * FUN_03c65324(long param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_2 < 2) {
    if (((*PTR_DAT_04bd37e8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd37e8), puVar3 = PTR_DAT_04bd37b0, iVar2 != 0)) {
      if (((*PTR_DAT_04bd37b8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd37b8), puVar5 = PTR_DAT_04bd37d0, iVar2 != 0)) {
        puVar1 = PTR_DAT_04bd37c8 + 0x10;
        *(undefined **)puVar3 = PTR_DAT_04bd37c0 + 0x10;
        *(undefined **)(puVar3 + 8) = puVar1;
        puVar1 = PTR_DAT_04bd37d8;
        *(undefined **)(puVar3 + 0x28) = puVar5 + 0x10;
        *(undefined **)(puVar3 + 0x48) = puVar1 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd37b8);
      }
      puVar5 = PTR_DAT_04bd37e0;
      (*(code *)**(undefined8 **)(puVar3 + 8))(puVar3 + 8,PTR_DAT_04bd37e0);
      __cxa_guard_release(PTR_DAT_04bd37e8);
    }
    else {
      puVar5 = PTR_DAT_04bd37e0;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
      if (((*PTR_DAT_04bd3798 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3798), puVar3 = PTR_DAT_04bd3790, iVar2 != 0)) {
        FUN_03c63fe4(PTR_DAT_04bd3790,0);
        FUN_001001d0(FUN_03c60734,puVar3,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd3798);
      }
      puVar3 = (undefined *)FUN_03c66100(lVar4,PTR_DAT_04bd3790,*(undefined8 *)(param_1 + 0x18));
      return puVar3;
    }
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

