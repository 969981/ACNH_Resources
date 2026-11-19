
undefined * FUN_03c6c4b4(long param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_2 < 2) {
    if (((*PTR_DAT_04bd3608 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3608), puVar2 = PTR_DAT_04bd35c0, iVar1 != 0)) {
      if (((*PTR_DAT_04bd35c8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd35c8), iVar1 != 0)) {
        *(undefined ***)puVar2 = &PTR_LAB_04b83848;
        *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b83878;
        *(undefined ***)(puVar2 + 0x28) = &PTR_FUN_04b838a0;
        *(undefined ***)(puVar2 + 0x48) = &PTR_FUN_04b838c8;
        __cxa_guard_release(PTR_DAT_04bd35c8);
      }
      puVar4 = PTR_DAT_04bd3600;
      (*(code *)**(undefined8 **)(puVar2 + 8))(puVar2 + 8,PTR_DAT_04bd3600);
      __cxa_guard_release(PTR_DAT_04bd3608);
    }
    else {
      puVar4 = PTR_DAT_04bd3600;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
      if (((*PTR_DAT_04bd35a8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd35a8), puVar2 = PTR_DAT_04bd35a0, iVar1 != 0)) {
        FUN_03c6b120(PTR_DAT_04bd35a0,0);
        FUN_001001d0(PTR_FUN_04bd2f60,puVar2,&__DT_FINI_ARRAY);
        __cxa_guard_release(PTR_DAT_04bd35a8);
      }
      puVar2 = (undefined *)FUN_03c66100(lVar3,PTR_DAT_04bd35a0,*(undefined8 *)(param_1 + 0x18));
      return puVar2;
    }
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}

