
undefined * FUN_03cd8cf4(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  if (param_2 < 2) {
    if (((DAT_05af0c40 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&DAT_05af0c40), puVar4 = PTR_DAT_04bd3fa0, iVar3 != 0)) {
      if (((*PTR_DAT_04bd3fa8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3fa8), iVar3 != 0)) {
        puVar6 = PTR_DAT_04bd3fb0 + 0x10;
        puVar1 = PTR_DAT_04bd3fc0 + 0x10;
        *(undefined **)(puVar4 + 0x28) = PTR_DAT_04bd3fb8 + 0x10;
        puVar2 = PTR_DAT_04bd3fc8;
        *(undefined **)puVar4 = puVar6;
        *(undefined **)(puVar4 + 8) = puVar1;
        *(undefined **)(puVar4 + 0x48) = puVar2 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd3fa8);
      }
      puVar6 = &DAT_05af0c28;
      (*(code *)**(undefined8 **)(puVar4 + 8))(puVar4 + 8,&DAT_05af0c28);
      __cxa_guard_release(&DAT_05af0c40);
    }
    else {
      puVar6 = &DAT_05af0c28;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar5 = *(long *)(param_1 + 0x10), lVar5 != 0)) {
      if ((DAT_05af0bc8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_05af0bc8);
        if (iVar3 != 0) {
          FUN_03cd79d8();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c509d8,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af0bc8);
        }
      }
      puVar4 = (undefined *)FUN_03c66100(lVar5,&DAT_04c509d8,*(undefined8 *)(param_1 + 0x18));
      return puVar4;
    }
    puVar6 = (undefined *)0x0;
  }
  return puVar6;
}

