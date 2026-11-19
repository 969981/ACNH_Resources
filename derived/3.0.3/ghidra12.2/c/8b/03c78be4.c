
undefined * FUN_03c78be4(long param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_2 < 2) {
    if ((*PTR_DAT_04bd3bb8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3bb8);
      puVar3 = PTR_DAT_04bd3bb0;
      puVar2 = PTR_DAT_04bd3b80;
      if (iVar1 != 0) {
        if (((*PTR_DAT_04bd3b88 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3b88), iVar1 != 0)) {
          *(undefined ***)puVar2 = &PTR_LAB_04b83c38;
          *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b83c68;
          *(undefined ***)(puVar2 + 0x28) = &PTR_FUN_04b83c90;
          *(undefined ***)(puVar2 + 0x48) = &PTR_FUN_04b83cb8;
          __cxa_guard_release(PTR_DAT_04bd3b88);
        }
        puVar5 = *(undefined8 **)(puVar2 + 8);
        *(undefined4 *)puVar3 = 0;
        (*(code *)*puVar5)(puVar2 + 8,puVar3);
        __cxa_guard_release(PTR_DAT_04bd3bb8);
      }
    }
    else {
      puVar3 = PTR_DAT_04bd3bb0;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
      if ((*PTR_DAT_04bd3b68 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3b68);
        puVar2 = PTR_DAT_04bd3b60;
        if (iVar1 != 0) {
          FUN_03c77860(PTR_DAT_04bd3b60,0);
          FUN_001001d0(PTR_FUN_04bd2f60,puVar2,&__DT_FINI_ARRAY);
          __cxa_guard_release(PTR_DAT_04bd3b68);
        }
      }
      puVar2 = (undefined *)FUN_03c66100(lVar4,PTR_DAT_04bd3b60,*(undefined8 *)(param_1 + 0x18));
      return puVar2;
    }
    puVar3 = (undefined *)0x0;
  }
  return puVar3;
}

