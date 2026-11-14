
undefined8 FUN_01838590(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bb5db8;
  puVar2 = PTR_DAT_04bb5db0;
  lVar6 = *(long *)(param_1 + 0x48);
  if (*(long *)(lVar6 + 0xb0) != lVar6 + 0xa8) {
    lVar8 = (long)*(int *)(lVar6 + 0xbc);
    plVar7 = (long *)(*(long *)(lVar6 + 0xb0) - lVar8);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2), (uVar5 & 1) != 0)) {
        uVar5 = FUN_01a21080((int)plVar7[0x53],*(long *)(param_1 + 0x300) + 0x278);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        return 1;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)((lVar6 + 0xa8) - lVar8));
  }
  return 0;
}

