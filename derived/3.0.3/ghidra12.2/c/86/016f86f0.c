
void FUN_016f86f0(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bb30c8;
  puVar2 = PTR_DAT_04bb30c0;
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar7 = (long)*(int *)(param_1 + 0xbc);
    plVar6 = (long *)(*(long *)(param_1 + 0xb0) - lVar7);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      if ((plVar6 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar5 & 1) != 0)) {
        *(byte *)(plVar6 + 0x67) = param_2 & 1;
        break;
      }
      plVar6 = (long *)(*(long *)((long)plVar6 + lVar7 + 8) - lVar7);
    } while (plVar6 != (long *)((param_1 + 0xa8) - lVar7));
  }
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bb37b0);
    if ((uVar5 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x016f8810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x488))(plVar6,param_2 & 1);
      return;
    }
  }
  return;
}

