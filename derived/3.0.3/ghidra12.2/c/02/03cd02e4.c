
undefined * FUN_03cd02e4(long param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_2 < 2) {
    if (((DAT_05af0970 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&DAT_05af0970), puVar3 = PTR_DAT_04bd3ff0, iVar2 != 0)) {
      if (((*PTR_DAT_04bd3ff8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd3ff8), puVar5 = PTR_DAT_04bd4010, iVar2 != 0)) {
        puVar1 = PTR_DAT_04bd4008 + 0x10;
        *(undefined **)puVar3 = PTR_DAT_04bd4000 + 0x10;
        *(undefined **)(puVar3 + 8) = puVar1;
        puVar1 = PTR_DAT_04bd4018;
        *(undefined **)(puVar3 + 0x28) = puVar5 + 0x10;
        *(undefined **)(puVar3 + 0x48) = puVar1 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd3ff8);
      }
      puVar5 = &DAT_05af0950;
      (*(code *)**(undefined8 **)(puVar3 + 8))(puVar3 + 8,&DAT_05af0950);
      __cxa_guard_release(&DAT_05af0970);
    }
    else {
      puVar5 = &DAT_05af0950;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
      if ((DAT_05af08f0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_05af08f0);
        if (iVar2 != 0) {
          FUN_03ccefcc();
          FUN_001001d0(PTR_FUN_04bd2f60,&DAT_04c4fd08,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_05af08f0);
        }
      }
      puVar3 = (undefined *)FUN_03c66100(lVar4,&DAT_04c4fd08,*(undefined8 *)(param_1 + 0x18));
      return puVar3;
    }
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

