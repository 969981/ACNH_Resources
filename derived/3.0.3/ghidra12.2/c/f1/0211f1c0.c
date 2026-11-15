
void FUN_0211f1c0(long param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  
  uVar3 = FUN_02119c7c();
  puVar2 = PTR_DAT_04bb27c0;
  if (0xfffffffd < uVar3) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) goto LAB_0211f2e4;
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_0211f290;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0211f290:
    uVar10 = 0;
  }
  if (plVar9 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    if ((uVar10 & uVar5) == 1) {
      FUN_006fb3d0(plVar9);
    }
  }
LAB_0211f2e4:
  if (*(int *)(param_1 + 0x1530) < *(int *)(param_1 + 0x1534)) {
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar3 * 8) + 0x1c4);
    puVar8 = *(undefined8 **)(param_1 + 0x1540);
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x1540) = *puVar8;
    }
    *(undefined4 *)puVar8 = uVar1;
    if (*(int *)(param_1 + 0x1530) < *(int *)(param_1 + 0x1534)) {
      *(undefined8 **)(*(long *)(param_1 + 0x1538) + (long)*(int *)(param_1 + 0x1530) * 8) = puVar8;
      *(int *)(param_1 + 0x1530) = *(int *)(param_1 + 0x1530) + 1;
    }
  }
  if ((int)uVar3 < *(int *)(param_1 + 0x1e8)) {
    lVar7 = (long)(int)uVar3;
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x1f0) + lVar7 * 8);
      (**(code **)*puVar8)(puVar8);
      lVar7 = lVar7 + 1;
      *puVar8 = *(undefined8 *)(param_1 + 0x1f8);
      *(undefined8 **)(param_1 + 0x1f8) = puVar8;
    } while (lVar7 < (int)(uVar3 + 1));
  }
  if ((-1 < (int)uVar3) && (iVar4 = *(int *)(param_1 + 0x1e8), (int)uVar3 < iVar4)) {
    uVar10 = uVar3 + 1;
    uVar5 = iVar4 - uVar10;
    if (uVar5 != 0 && (int)uVar10 <= iVar4) {
      memmove((void *)(*(long *)(param_1 + 0x1f0) + (ulong)uVar3 * 8),
              (void *)(*(long *)(param_1 + 0x1f0) + (ulong)uVar10 * 8),
              -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
      iVar4 = *(int *)(param_1 + 0x1e8);
    }
    *(int *)(param_1 + 0x1e8) = iVar4 + -1;
  }
  return;
}

