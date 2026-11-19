
undefined * FUN_03cd40ac(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if (param_2 == 0) {
    if ((*PTR_DAT_04bd3f08 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_04bd3f08);
      puVar3 = PTR_DAT_04bd3f10;
      puVar6 = PTR_DAT_04bd3f00;
      if (iVar5 != 0) {
        if (((*PTR_DAT_04bd3f18 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd3f18), iVar5 != 0)) {
          puVar1 = PTR_DAT_04bd3f20 + 0x10;
          puVar2 = PTR_DAT_04bd3f30 + 0x10;
          *(undefined **)(puVar3 + 0x28) = PTR_DAT_04bd3f28 + 0x10;
          puVar4 = PTR_DAT_04bd3f38;
          *(undefined **)puVar3 = puVar1;
          *(undefined **)(puVar3 + 8) = puVar2;
          *(undefined **)(puVar3 + 0x48) = puVar4 + 0x10;
          __cxa_guard_release(PTR_DAT_04bd3f18);
        }
        puVar8 = *(undefined8 **)(puVar3 + 8);
        *(undefined8 *)puVar6 = 0;
        (*(code *)*puVar8)(puVar3 + 8,puVar6);
        __cxa_guard_release(PTR_DAT_04bd3f08);
      }
    }
    else {
      puVar6 = PTR_DAT_04bd3f00;
    }
  }
  else {
    if ((param_1[1] != 0) && (lVar7 = *param_1, lVar7 != 0)) {
      if (((DAT_05af0a60 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05af0a60), iVar5 != 0)) {
        FUN_03cd26cc();
        FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c50228,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_05af0a60);
      }
      puVar6 = (undefined *)FUN_03c66100(lVar7,&DAT_04c50228,param_1[1]);
      return puVar6;
    }
    puVar6 = (undefined *)0x0;
  }
  return puVar6;
}

