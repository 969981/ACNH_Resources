
long * FUN_02977780(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04bc3c98;
  puVar3 = PTR_DAT_04bc3c90;
  puVar2 = PTR_DAT_04bb37e0;
  if (*(long *)(param_1 + 0xb0) == param_1 + 0xa8) {
    return (long *)PTR_DAT_04bb37e0;
  }
  lVar9 = (long)*(int *)(param_1 + 0xbc);
  plVar8 = (long *)(*(long *)(param_1 + 0xb0) - lVar9);
  puVar1 = PTR_DAT_04bbca00 + 0x10;
  while( true ) {
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
      *(undefined **)puVar3 = puVar1;
      __cxa_guard_release(puVar4);
    }
    if ((plVar8 != (long *)0x0) &&
       (uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar3), (uVar6 & 1) != 0)) break;
    plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9);
    if (plVar8 == (long *)((param_1 + 0xa8) - lVar9)) {
      return (long *)puVar2;
    }
  }
  uVar7 = 0;
  while ((lVar9 = (long)((ulong)uVar7 << 0x20) >> 0x1b,
         (*(int *)((long)plVar8 + lVar9 + 0x280) != *(int *)(param_2 + 8) ||
         *(int *)((long)plVar8 + lVar9 + 0x284) != *(int *)(param_2 + 0xc)) ||
         *(char *)((long)plVar8 + lVar9 + 0x291) == '\0' ||
         ((short)plVar8[(long)(int)uVar7 * 4 + 0x51] == -2))) {
    uVar7 = uVar7 + 1;
    if (uVar7 == 0x14) {
      return (long *)PTR_DAT_04bb37e0;
    }
  }
  return plVar8 + (long)(int)uVar7 * 4 + 0x51;
}

