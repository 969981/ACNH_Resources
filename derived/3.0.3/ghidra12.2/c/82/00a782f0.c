
bool FUN_00a782f0(undefined8 param_1)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  
  if (DAT_04da4ab8 == 0) {
    return false;
  }
  uVar6 = FUN_00a738a0(param_1,0);
  if ((uVar6 & 1) != 0) {
    return false;
  }
  uVar4 = FUN_00a70070(param_1,0);
  if (uVar4 == 0xffffffff) {
    return false;
  }
  if ((int)uVar4 < 0) {
    return false;
  }
  if ((int)DAT_04c47dc0 < (int)uVar4) {
    return false;
  }
  piVar1 = (int *)(PTR_DAT_04bb6258 + (ulong)uVar4 * 0x10);
  if (999 < uVar4) {
    piVar1 = (int *)PTR_DAT_04bb6258;
  }
  if (*piVar1 == 0) {
    return false;
  }
  if (*(long *)(piVar1 + 2) == -1) {
    return false;
  }
  uVar6 = 0;
  puVar8 = (uint *)PTR_DAT_04bb6258;
  do {
    puVar2 = puVar8;
    if (999 < uVar6) {
      puVar2 = (uint *)PTR_DAT_04bb6258;
    }
    if ((*puVar2 != 0) && (*(long *)(puVar2 + 2) == *(long *)(piVar1 + 2))) {
      if ((uint)uVar6 != 0xffffffff) {
        if (999 < (uint)uVar6) {
          puVar8 = (uint *)PTR_DAT_04bb6258;
        }
        uVar4 = *puVar8;
        goto LAB_00a783e0;
      }
      break;
    }
    uVar6 = uVar6 + 1;
    puVar8 = puVar8 + 4;
  } while ((ulong)DAT_04c47dc0 + 1 != uVar6);
  uVar4 = 0;
LAB_00a783e0:
  if (DAT_04c93e08 == 0) {
    return false;
  }
  if ((((uVar4 == 0) ||
       (lVar9 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         (ulong)(uVar4 >> 0x14) * 8), lVar9 == 0)) ||
      ((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar9 + 0x230) != uVar4)) {
    lVar9 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar3 = DAT_04c93e08;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar4 = 1;
      goto LAB_00a78484;
    }
    if (*(uint *)(lVar3 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar3 + 0x5e8) & 0x1f) & 1;
      goto LAB_00a78484;
    }
  }
  uVar4 = 0;
LAB_00a78484:
  if (lVar9 != 0) {
    uVar4 = uVar4 ^ 1;
    if (*(int *)(lVar9 + 0x150) != 1) {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      return *(int *)(lVar9 + 0x15c) == 0xe9;
    }
  }
  return false;
}

