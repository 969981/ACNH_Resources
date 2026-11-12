
/* WARNING: Removing unreachable block (ram,0x009b37e4) */
/* WARNING: Removing unreachable block (ram,0x009b36e0) */
/* WARNING: Removing unreachable block (ram,0x009b3668) */
/* WARNING: Removing unreachable block (ram,0x009b3760) */
/* WARNING: Removing unreachable block (ram,0x009b3868) */

void FUN_009b3624(long param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_04bb2648;
  puVar1 = (ushort *)(param_1 + 0xf5b50);
  *puVar1 = 0;
  puVar3 = PTR_DAT_04bb4f38;
  if (**(long **)(*(long *)puVar2 + 0x338) != 0) {
    plVar7 = *(long **)(**(long **)(*(long *)puVar2 + 0x338) + 0xc20);
    if (((*PTR_DAT_04bb4f38 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4f38);
    }
    if (((plVar7 != (long *)0x0) &&
        (uVar5 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb4f30), (uVar5 & 1) != 0)) &&
       (uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7), (uVar5 & 1) != 0)) {
      *puVar1 = *puVar1 | 1;
    }
  }
  lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0x338) +
                   (ulong)(1 < *(uint *)(*(long *)puVar2 + 0x330)) * 8);
  if (lVar6 != 0) {
    plVar7 = *(long **)(lVar6 + 0xc20);
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4f38);
    }
    if (((plVar7 != (long *)0x0) &&
        (uVar5 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb4f30), (uVar5 & 1) != 0)) &&
       (uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7), (uVar5 & 1) != 0)) {
      *puVar1 = *puVar1 | 2;
    }
  }
  lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0x338) +
                   (ulong)(2 < *(uint *)(*(long *)puVar2 + 0x330)) * 0x10);
  if (lVar6 != 0) {
    plVar7 = *(long **)(lVar6 + 0xc20);
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4f38);
    }
    if (((plVar7 != (long *)0x0) &&
        (uVar5 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb4f30), (uVar5 & 1) != 0)) &&
       (uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7), (uVar5 & 1) != 0)) {
      *puVar1 = *puVar1 | 4;
    }
  }
  lVar6 = 0x18;
  if (*(uint *)(*(long *)puVar2 + 0x330) < 4) {
    lVar6 = 0;
  }
  lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0x338) + lVar6);
  if (lVar6 != 0) {
    plVar7 = *(long **)(lVar6 + 0xc20);
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4f38);
    }
    if (((plVar7 != (long *)0x0) &&
        (uVar5 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb4f30), (uVar5 & 1) != 0)) &&
       (uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7), (uVar5 & 1) != 0)) {
      *puVar1 = *puVar1 | 8;
    }
  }
  lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0x338) +
                   (ulong)(8 < *(uint *)(*(long *)puVar2 + 0x330)) * 0x40);
  if (lVar6 != 0) {
    plVar7 = *(long **)(lVar6 + 0xc20);
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4f38);
    }
    if (((plVar7 != (long *)0x0) &&
        (uVar5 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb4f30), (uVar5 & 1) != 0)) &&
       (uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7), (uVar5 & 1) != 0)) {
      *puVar1 = *puVar1 | 0x100;
    }
  }
  return;
}

