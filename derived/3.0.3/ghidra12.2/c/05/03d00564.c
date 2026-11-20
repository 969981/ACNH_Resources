
undefined4 * FUN_03d00564(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  
  if (param_2 == 0) {
    if ((DAT_05af06d8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_05af06d8);
      puVar2 = PTR_DAT_04bd3bf0;
      if (iVar4 != 0) {
        if (((*PTR_DAT_04bd3bf8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd3bf8), puVar3 = PTR_DAT_04bd3c10, iVar4 != 0)) {
          puVar1 = PTR_DAT_04bd3c08 + 0x10;
          *(undefined **)puVar2 = PTR_DAT_04bd3c00 + 0x10;
          *(undefined **)(puVar2 + 8) = puVar1;
          puVar1 = PTR_DAT_04bd3c18;
          *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
          *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
          __cxa_guard_release(PTR_DAT_04bd3bf8);
        }
        DAT_05af06d0 = 0;
        (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,&DAT_05af06d0);
        __cxa_guard_release(&DAT_05af06d8);
      }
      puVar5 = &DAT_05af06d0;
    }
    else {
      puVar5 = &DAT_05af06d0;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar6 = *param_1, lVar6 != 0)) {
      if (((DAT_05af0670 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05af0670), iVar4 != 0)) {
        FUN_03cc668c();
        FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c4f038,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_05af0670);
      }
      puVar5 = (undefined4 *)FUN_03c66100(lVar6,&DAT_04c4f038,param_1[1]);
      return puVar5;
    }
    puVar5 = (undefined4 *)0x0;
  }
  return puVar5;
}

