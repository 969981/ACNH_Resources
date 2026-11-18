
void FUN_03787380(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  puVar2 = PTR_DAT_04bb27c0;
  iVar3 = *(int *)(*(long *)(param_1 + 0x18) + 0xe0);
  if (iVar3 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0xe8);
    lVar6 = 0;
    lVar8 = (long)iVar3 << 3;
    do {
      if (*param_2 == *(uint *)(*(long *)(lVar7 + lVar6 * 8) + 8)) {
        iVar3 = *(int *)(*(long *)(lVar7 + lVar6 * 8) + 0xd8);
        goto LAB_037873ec;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  iVar3 = 0;
LAB_037873ec:
  if (**(int **)(param_1 + 0x10) != iVar3) {
    return;
  }
  uVar10 = *param_2;
  if (*(uint *)(*(long *)(param_1 + 8) + 0x14) == uVar10) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x037874b4;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x037874b4;
    }
  }
  uVar10 = 0;
joined_r0x037874b4:
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      lVar6 = *(long *)(param_1 + 8);
      fVar11 = *(float *)(lVar6 + 8) - *(float *)(plVar9[0xd] + 0x278);
      fVar12 = *(float *)(lVar6 + 0x10) - *(float *)(plVar9[0xd] + 0x280);
      fVar11 = fVar12 * fVar12 + fVar11 * fVar11;
      if (fVar11 < *(float *)(lVar6 + 4)) {
        *(float *)(lVar6 + 4) = fVar11;
        **(uint **)(param_1 + 8) = *param_2;
      }
    }
  }
  return;
}

