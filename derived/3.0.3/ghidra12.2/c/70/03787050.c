
void FUN_03787050(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  
  puVar2 = PTR_DAT_04bb27c0;
  iVar3 = 0x12;
  if (**(int **)(param_1 + 0x10) != 0x10) {
    iVar3 = 0xc;
  }
  uVar13 = *param_2;
  if (*(uint *)(*(long *)(param_1 + 8) + 0x14) == uVar13) {
    return;
  }
  iVar6 = **(int **)(param_1 + 0x10);
  iVar9 = *(int *)(*(long *)(param_1 + 0x18) + 0xe0);
  if (iVar9 == 0) {
    if (iVar6 != 0) {
      iVar6 = 0;
      goto LAB_0378714c;
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0xe8);
    lVar8 = (long)iVar9 << 3;
    lVar10 = 0;
    lVar11 = lVar8;
    do {
      if (uVar13 == *(uint *)(*(long *)(lVar7 + lVar10 * 8) + 8)) {
        iVar9 = *(int *)(*(long *)(lVar7 + lVar10 * 8) + 0xd8);
        goto LAB_03787108;
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
    iVar9 = 0;
LAB_03787108:
    if (iVar6 != iVar9) {
      lVar10 = 0;
      do {
        if (uVar13 == *(uint *)(*(long *)(lVar7 + lVar10 * 8) + 8)) {
          iVar6 = *(int *)(*(long *)(lVar7 + lVar10 * 8) + 0xd8);
          goto LAB_0378714c;
        }
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
      iVar6 = 0;
LAB_0378714c:
      if (iVar3 != iVar6) {
        return;
      }
    }
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  if ((((uVar13 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar13 = 1;
      goto joined_r0x03787200;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03787200;
    }
  }
  uVar13 = 0;
joined_r0x03787200:
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar10 == 1) {
      uVar1 = uVar13;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      lVar10 = *(long *)(param_1 + 8);
      fVar14 = *(float *)(lVar10 + 8) - *(float *)(plVar12[0xd] + 0x278);
      fVar15 = *(float *)(lVar10 + 0x10) - *(float *)(plVar12[0xd] + 0x280);
      fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
      if (fVar14 < *(float *)(lVar10 + 4)) {
        *(float *)(lVar10 + 4) = fVar14;
        **(uint **)(param_1 + 8) = *param_2;
      }
    }
  }
  return;
}

