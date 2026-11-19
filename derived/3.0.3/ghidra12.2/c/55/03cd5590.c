
undefined8 * FUN_03cd5590(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_2 < 2) {
    if ((DAT_05af0b40 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_05af0b40);
      puVar3 = PTR_DAT_04bd3f40;
      if (iVar5 != 0) {
        if (((*PTR_DAT_04bd3f48 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd3f48), iVar5 != 0)) {
          puVar1 = PTR_DAT_04bd3f50 + 0x10;
          puVar2 = PTR_DAT_04bd3f60 + 0x10;
          *(undefined **)(puVar3 + 0x28) = PTR_DAT_04bd3f58 + 0x10;
          puVar4 = PTR_DAT_04bd3f68;
          *(undefined **)puVar3 = puVar1;
          *(undefined **)(puVar3 + 8) = puVar2;
          *(undefined **)(puVar3 + 0x48) = puVar4 + 0x10;
          __cxa_guard_release(PTR_DAT_04bd3f48);
        }
        DAT_05af0b30 = 0;
        DAT_05af0b38 = 0;
        DAT_05af0b20 = PTR_DAT_04bc8e10 + 0x10;
        DAT_05af0b28 = 0xffffffffffffffff;
        (*(code *)**(undefined8 **)(puVar3 + 8))(puVar3 + 8,&DAT_05af0b20);
        __cxa_guard_release(&DAT_05af0b40);
      }
      puVar6 = &DAT_05af0b20;
    }
    else {
      puVar6 = &DAT_05af0b20;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar7 = *(long *)(param_1 + 0x10), lVar7 != 0)) {
      if ((DAT_05af0ac0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_05af0ac0);
        if (iVar5 != 0) {
          FUN_03cd423c();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c504b8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af0ac0);
        }
      }
      puVar6 = (undefined8 *)FUN_03c66100(lVar7,&DAT_04c504b8,*(undefined8 *)(param_1 + 0x18));
      return puVar6;
    }
    puVar6 = (undefined8 *)0x0;
  }
  return puVar6;
}

