
/* WARNING: Removing unreachable block (ram,0x009b3f74) */
/* WARNING: Removing unreachable block (ram,0x009b3e64) */
/* WARNING: Removing unreachable block (ram,0x009b3ee8) */
/* WARNING: Removing unreachable block (ram,0x009b4004) */

void FUN_009b3db0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  plVar1 = (long *)(param_1 + 0xf5b20);
  lVar8 = *(long *)PTR_DAT_04bc95e0;
  if (*(long *)(lVar8 + 0x178) != lVar8 + 0x170) {
    lVar9 = (long)*(int *)(lVar8 + 0x184);
    lVar11 = *(long *)(lVar8 + 0x178) - lVar9;
    do {
      if (*(int *)(lVar11 + 0x18) == 0xd) goto LAB_009b3e28;
      lVar11 = *(long *)(lVar11 + lVar9 + 8) - lVar9;
    } while (lVar11 != (lVar8 + 0x170) - lVar9);
  }
  lVar11 = 0;
LAB_009b3e28:
  *(undefined8 *)(param_1 + 0xf5b30) = 0;
  *(undefined8 *)(param_1 + 0xf5b38) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0xf5b28) = 0;
  *(undefined8 *)(param_1 + 0xf5b40) = 0x500000005;
  *(undefined8 *)(param_1 + 0xf5b48) = 0x500000005;
  puVar5 = PTR_DAT_04bb4f38;
  puVar4 = PTR_DAT_04bb2648;
  lVar8 = **(long **)(*(long *)PTR_DAT_04bb2648 + 0x338);
  if (lVar8 == 0) {
LAB_009b3ec0:
    lVar8 = 0;
  }
  else {
    plVar10 = *(long **)(lVar8 + 0xc20);
    if (((*PTR_DAT_04bb4f38 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4f38);
    }
    if ((plVar10 == (long *)0x0) ||
       (uVar7 = (**(code **)*plVar10)(plVar10,PTR_DAT_04bb4f30), (uVar7 & 1) == 0))
    goto LAB_009b3ec0;
    uVar7 = (**(code **)(*plVar10 + 0x30))(plVar10);
    if ((uVar7 & 1) == 0) {
      lVar8 = 0;
    }
  }
  uVar2 = *(undefined4 *)(lVar11 + 0x30);
  *plVar1 = lVar8;
  *(undefined4 *)(param_1 + 0xf5b40) = uVar2;
  lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0x338) +
                   (ulong)(1 < *(uint *)(*(long *)puVar4 + 0x330)) * 8);
  if (lVar8 == 0) {
LAB_009b3f4c:
    lVar8 = 0;
  }
  else {
    plVar10 = *(long **)(lVar8 + 0xc20);
    if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4f38);
    }
    if ((plVar10 == (long *)0x0) ||
       (uVar7 = (**(code **)*plVar10)(plVar10,PTR_DAT_04bb4f30), (uVar7 & 1) == 0))
    goto LAB_009b3f4c;
    uVar7 = (**(code **)(*plVar10 + 0x30))(plVar10);
    if ((uVar7 & 1) == 0) {
      lVar8 = 0;
    }
  }
  uVar2 = *(undefined4 *)(lVar11 + 0x34);
  *(long *)(param_1 + 0xf5b28) = lVar8;
  *(undefined4 *)(param_1 + 0xf5b44) = uVar2;
  lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0x338) +
                   (ulong)(2 < *(uint *)(*(long *)puVar4 + 0x330)) * 0x10);
  if (lVar8 == 0) {
LAB_009b3fdc:
    lVar8 = 0;
  }
  else {
    plVar10 = *(long **)(lVar8 + 0xc20);
    if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4f38);
    }
    if ((plVar10 == (long *)0x0) ||
       (uVar7 = (**(code **)*plVar10)(plVar10,PTR_DAT_04bb4f30), (uVar7 & 1) == 0))
    goto LAB_009b3fdc;
    uVar7 = (**(code **)(*plVar10 + 0x30))(plVar10);
    if ((uVar7 & 1) == 0) {
      lVar8 = 0;
    }
  }
  uVar2 = *(undefined4 *)(lVar11 + 0x38);
  *(long *)(param_1 + 0xf5b30) = lVar8;
  *(undefined4 *)(param_1 + 0xf5b48) = uVar2;
  lVar8 = 0x18;
  if (*(uint *)(*(long *)puVar4 + 0x330) < 4) {
    lVar8 = 0;
  }
  lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0x338) + lVar8);
  if (lVar8 != 0) {
    plVar10 = *(long **)(lVar8 + 0xc20);
    if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4f38);
    }
    if ((plVar10 != (long *)0x0) &&
       (uVar7 = (**(code **)*plVar10)(plVar10,PTR_DAT_04bb4f30), (uVar7 & 1) != 0)) {
      uVar7 = (**(code **)(*plVar10 + 0x30))(plVar10);
      if ((uVar7 & 1) == 0) {
        lVar8 = 0;
      }
      goto LAB_009b4070;
    }
  }
  lVar8 = 0;
LAB_009b4070:
  uVar2 = *(undefined4 *)(lVar11 + 0x3c);
  *(long *)(param_1 + 0xf5b38) = lVar8;
  *(undefined4 *)(param_1 + 0xf5b4c) = uVar2;
  if (*(char *)(param_1 + 0x58) != '\0') {
    *plVar1 = *(long *)(param_1 + 0x50);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x50) + 0xc30);
    uVar7 = (ulong)uVar3;
    if (8 < uVar3) {
      uVar7 = 0;
    }
    *(undefined4 *)(param_1 + 0xf5b40) = ((undefined4 *)(lVar11 + 0x30))[uVar7];
  }
  return;
}

