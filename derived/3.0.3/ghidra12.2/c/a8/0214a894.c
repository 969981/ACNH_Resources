
void FUN_0214a894(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  
  puVar8 = PTR_DAT_04bb27c0;
  uVar16 = *param_2;
  if (uVar16 == *(uint *)(param_1 + 0x10)) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return;
  }
  if ((((uVar16 == 0) ||
       (plVar15 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
      ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar16)) {
    plVar15 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar8;
    iVar9 = (**(code **)(*plVar10 + 0x60))();
    if (iVar9 < 0x11) {
      uVar16 = 1;
      goto joined_r0x0214a960;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0214a960;
    }
  }
  uVar16 = 0;
joined_r0x0214a960:
  if (plVar15 != (long *)0x0) {
    lVar12 = plVar15[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar11 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar12 == 1) {
      uVar1 = uVar16;
    }
    if ((((uVar11 & 1) != 0) && (uVar1 != 0)) &&
       ((lVar12 = plVar15[0xd], lVar12 != 0 &&
        ((plVar15[0x76] != 0 && (*(int *)(plVar15[0x76] + 0x360) != 0x13)))))) {
      fVar17 = *(float *)(lVar12 + 0x278) + -2.5;
      fVar18 = *(float *)(lVar12 + 0x280) + -2.5;
      uVar16 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0) & 0xffff;
      iVar5 = uVar16 - 1;
      iVar9 = *(int *)(param_1 + 0x14);
      iVar13 = *(int *)(param_1 + 0x18);
      uVar1 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0) & 0xffff;
      iVar6 = uVar1 - 1;
      uVar14 = iVar5 - iVar9;
      if ((uVar14 < 0x19) && ((iVar7 = iVar6 - iVar13, -1 < iVar7 && (iVar7 < 0x15)))) {
        lVar12 = *(long *)(param_1 + 8);
        uVar4 = uVar14 + *(int *)(lVar12 + 0x1c) * iVar7;
        uVar3 = 1 << (ulong)(uVar4 & 0x1f);
        uVar2 = *(uint *)(*(long *)(lVar12 + 0x10) + (long)((int)uVar4 >> 5) * 4);
        if ((uVar3 & uVar2) == 0) {
          *(uint *)(*(long *)(lVar12 + 0x10) + ((long)((ulong)uVar4 << 0x20) >> 0x25) * 4) =
               uVar3 | uVar2;
          *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
          iVar9 = *(int *)(param_1 + 0x14);
          iVar13 = *(int *)(param_1 + 0x18);
          uVar14 = iVar5 - iVar9;
        }
      }
      if (((uVar14 < 0x19) && (iVar7 = uVar1 - iVar13, -1 < iVar7)) && (iVar7 < 0x15)) {
        lVar12 = *(long *)(param_1 + 8);
        uVar14 = uVar14 + *(int *)(lVar12 + 0x1c) * iVar7;
        uVar3 = 1 << (ulong)(uVar14 & 0x1f);
        uVar2 = *(uint *)(*(long *)(lVar12 + 0x10) + (long)((int)uVar14 >> 5) * 4);
        if ((uVar3 & uVar2) == 0) {
          *(uint *)(*(long *)(lVar12 + 0x10) + ((long)((ulong)uVar14 << 0x20) >> 0x25) * 4) =
               uVar3 | uVar2;
          *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
          iVar9 = *(int *)(param_1 + 0x14);
          iVar13 = *(int *)(param_1 + 0x18);
        }
        uVar14 = iVar5 - iVar9;
      }
      iVar5 = uVar1 + 1;
      if (((uVar14 < 0x19) && (iVar7 = iVar5 - iVar13, -1 < iVar7)) && (iVar7 < 0x15)) {
        lVar12 = *(long *)(param_1 + 8);
        uVar14 = uVar14 + *(int *)(lVar12 + 0x1c) * iVar7;
        uVar3 = 1 << (ulong)(uVar14 & 0x1f);
        uVar2 = *(uint *)(*(long *)(lVar12 + 0x10) + (long)((int)uVar14 >> 5) * 4);
        if ((uVar3 & uVar2) == 0) {
          *(uint *)(*(long *)(lVar12 + 0x10) + ((long)((ulong)uVar14 << 0x20) >> 0x25) * 4) =
               uVar3 | uVar2;
          *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
          iVar9 = *(int *)(param_1 + 0x14);
          iVar13 = *(int *)(param_1 + 0x18);
        }
      }
      uVar14 = uVar16 - iVar9;
      if (((uVar14 < 0x19) && (iVar7 = iVar6 - iVar13, -1 < iVar7)) && (iVar7 < 0x15)) {
        lVar12 = *(long *)(param_1 + 8);
        uVar4 = uVar14 + *(int *)(lVar12 + 0x1c) * iVar7;
        uVar3 = 1 << (ulong)(uVar4 & 0x1f);
        uVar2 = *(uint *)(*(long *)(lVar12 + 0x10) + (long)((int)uVar4 >> 5) * 4);
        if ((uVar3 & uVar2) == 0) {
          *(uint *)(*(long *)(lVar12 + 0x10) + ((long)((ulong)uVar4 << 0x20) >> 0x25) * 4) =
               uVar3 | uVar2;
          *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
          iVar9 = *(int *)(param_1 + 0x14);
          iVar13 = *(int *)(param_1 + 0x18);
          uVar14 = uVar16 - iVar9;
        }
      }
      if (((uVar14 < 0x19) && (iVar7 = uVar1 - iVar13, -1 < iVar7)) && (iVar7 < 0x15)) {
        lVar12 = *(long *)(param_1 + 8);
        uVar14 = uVar14 + *(int *)(lVar12 + 0x1c) * iVar7;
        uVar3 = 1 << (ulong)(uVar14 & 0x1f);
        uVar2 = *(uint *)(*(long *)(lVar12 + 0x10) + (long)((int)uVar14 >> 5) * 4);
        if ((uVar3 & uVar2) == 0) {
          *(uint *)(*(long *)(lVar12 + 0x10) + ((long)((ulong)uVar14 << 0x20) >> 0x25) * 4) =
               uVar3 | uVar2;
          *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
          iVar9 = *(int *)(param_1 + 0x14);
          iVar13 = *(int *)(param_1 + 0x18);
        }
        uVar14 = uVar16 - iVar9;
      }
      if (((uVar14 < 0x19) && (iVar7 = iVar5 - iVar13, -1 < iVar7)) && (iVar7 < 0x15)) {
        lVar12 = *(long *)(param_1 + 8);
        uVar14 = uVar14 + *(int *)(lVar12 + 0x1c) * iVar7;
        uVar3 = 1 << (ulong)(uVar14 & 0x1f);
        uVar2 = *(uint *)(*(long *)(lVar12 + 0x10) + (long)((int)uVar14 >> 5) * 4);
        if ((uVar3 & uVar2) == 0) {
          *(uint *)(*(long *)(lVar12 + 0x10) + ((long)((ulong)uVar14 << 0x20) >> 0x25) * 4) =
               uVar3 | uVar2;
          *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
          iVar9 = *(int *)(param_1 + 0x14);
          iVar13 = *(int *)(param_1 + 0x18);
        }
      }
      iVar7 = uVar16 + 1;
      uVar16 = iVar7 - iVar9;
      if (((uVar16 < 0x19) && (iVar6 = iVar6 - iVar13, -1 < iVar6)) && (iVar6 < 0x15)) {
        lVar12 = *(long *)(param_1 + 8);
        uVar3 = uVar16 + *(int *)(lVar12 + 0x1c) * iVar6;
        uVar2 = 1 << (ulong)(uVar3 & 0x1f);
        uVar14 = *(uint *)(*(long *)(lVar12 + 0x10) + (long)((int)uVar3 >> 5) * 4);
        if ((uVar2 & uVar14) == 0) {
          *(uint *)(*(long *)(lVar12 + 0x10) + ((long)((ulong)uVar3 << 0x20) >> 0x25) * 4) =
               uVar2 | uVar14;
          *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
          iVar9 = *(int *)(param_1 + 0x14);
          iVar13 = *(int *)(param_1 + 0x18);
          uVar16 = iVar7 - iVar9;
        }
      }
      if (((uVar16 < 0x19) && (iVar6 = uVar1 - iVar13, -1 < iVar6)) && (iVar6 < 0x15)) {
        lVar12 = *(long *)(param_1 + 8);
        uVar16 = uVar16 + *(int *)(lVar12 + 0x1c) * iVar6;
        uVar14 = 1 << (ulong)(uVar16 & 0x1f);
        uVar1 = *(uint *)(*(long *)(lVar12 + 0x10) + (long)((int)uVar16 >> 5) * 4);
        if ((uVar14 & uVar1) == 0) {
          *(uint *)(*(long *)(lVar12 + 0x10) + ((long)((ulong)uVar16 << 0x20) >> 0x25) * 4) =
               uVar14 | uVar1;
          *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
          iVar9 = *(int *)(param_1 + 0x14);
          iVar13 = *(int *)(param_1 + 0x18);
        }
        uVar16 = iVar7 - iVar9;
      }
      if (((uVar16 < 0x19) && (iVar5 = iVar5 - iVar13, -1 < iVar5)) && (iVar5 < 0x15)) {
        lVar12 = *(long *)(param_1 + 8);
        uVar16 = uVar16 + *(int *)(lVar12 + 0x1c) * iVar5;
        uVar14 = 1 << (ulong)(uVar16 & 0x1f);
        uVar1 = *(uint *)(*(long *)(lVar12 + 0x10) + (long)((int)uVar16 >> 5) * 4);
        if ((uVar14 & uVar1) == 0) {
          *(uint *)(*(long *)(lVar12 + 0x10) + ((long)((ulong)uVar16 << 0x20) >> 0x25) * 4) =
               uVar14 | uVar1;
          *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
        }
      }
    }
  }
  return;
}

