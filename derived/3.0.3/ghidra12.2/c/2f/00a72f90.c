
void FUN_00a72f90(byte *param_1)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  
  if (-1 < (int)*(uint *)PTR_DAT_04bb6260) {
    uVar5 = 0;
    puVar7 = (uint *)PTR_DAT_04bb6258;
    do {
      puVar1 = puVar7;
      if (999 < uVar5) {
        puVar1 = (uint *)PTR_DAT_04bb6258;
      }
      if ((*puVar1 != 0) && (*(long *)(puVar1 + 2) == *(long *)(param_1 + 8))) {
        if ((uint)uVar5 != 0xffffffff) {
          if (999 < (uint)uVar5) {
            puVar7 = (uint *)PTR_DAT_04bb6258;
          }
          uVar6 = *puVar7;
          goto LAB_00a73018;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 4;
    } while ((ulong)*(uint *)PTR_DAT_04bb6260 + 1 != uVar5);
  }
  uVar6 = 0;
LAB_00a73018:
  if (DAT_04c93e08 == 0) {
    return;
  }
  if ((((uVar6 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                           (ulong)(uVar6 >> 0x14) * 8), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar6)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar9 = DAT_04c93e08;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar6 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_00a730b4;
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00a730b4:
    uVar6 = 0;
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  uVar6 = uVar6 ^ 1;
  if ((int)plVar8[0x2a] != 1) {
    uVar6 = 1;
  }
  if (uVar6 != 0) {
    return;
  }
  if ((*(uint *)(plVar8 + 0x49) >> 4 & 1) == 0) {
    return;
  }
  uVar6 = DAT_04c9a0c8;
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    uVar6 = *(uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  if (uVar6 == 0) {
    return;
  }
  if (DAT_04c93e08 == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                   ((ulong)(uVar6 >> 0x11) & 0x7ff8));
  if (((lVar9 == 0) || ((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0)) ||
     (*(uint *)(lVar9 + 0x230) != uVar6)) {
    lVar9 = 0;
  }
  if ((*(int *)(DAT_04c93e08 + 0x288) == 1) || (*(int *)(DAT_04c93e08 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar2 = DAT_04c93e08;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar6 = 0;
      goto joined_r0x00a731cc;
    }
    if (*(uint *)(lVar2 + 0x5e8) < 5) {
      uVar6 = 5U >> (ulong)(*(uint *)(lVar2 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00a731cc;
    }
  }
  uVar6 = 1;
joined_r0x00a731cc:
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x150) != 1) {
      uVar6 = 1;
    }
    if (uVar6 == 0) {
      (**(code **)(*plVar8 + 0x150))(plVar8,6,param_1,1);
      param_1[0x20] = 4;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
    }
  }
  return;
}

