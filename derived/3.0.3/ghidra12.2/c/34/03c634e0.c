
undefined * FUN_03c634e0(long param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_2 < 2) {
    if (((*PTR_DAT_04bd33b8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd33b8), puVar2 = PTR_DAT_04bd3380, iVar1 != 0)) {
      if (((*PTR_DAT_04bd3388 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3388), iVar1 != 0)) {
        *(undefined ***)puVar2 = &PTR_LAB_04b81d38;
        *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b81d68;
        *(undefined ***)(puVar2 + 0x28) = &PTR_FUN_04b81d90;
        *(undefined ***)(puVar2 + 0x48) = &PTR_FUN_04b81db8;
        __cxa_guard_release(PTR_DAT_04bd3388);
      }
      puVar4 = PTR_DAT_04bd33b0;
      (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,PTR_DAT_04bd33b0);
      __cxa_guard_release(PTR_DAT_04bd33b8);
    }
    else {
      puVar4 = PTR_DAT_04bd33b0;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
      if (((*PTR_DAT_04bd3368 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3368), puVar2 = PTR_DAT_04bd3360, iVar1 != 0)) {
        FUN_03c60320(PTR_DAT_04bd3360,0);
        FUN_001001d0(FUN_03c60734,puVar2,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd3368);
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,PTR_DAT_04bd3360,*(undefined8 *)(param_1 + 0x18));
      return puVar2;
    }
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}

