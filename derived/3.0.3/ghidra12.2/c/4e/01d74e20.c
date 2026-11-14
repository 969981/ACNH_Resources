
void FUN_01d74e20(long param_1,ushort *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint local_14;
  
  uVar8 = *param_2;
  uVar17 = (ulong)uVar8;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(&DAT_04c8c100);
    uVar17 = (ulong)(uint)uVar8;
    if (iVar9 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar17 = (ulong)(uint)uVar8;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar11 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar11 * 4) == (int)(uVar17 >> 0xb)) goto LAB_01d74e8c;
      uVar11 = uVar11 + 1;
    } while (DAT_04c8c0f0 != uVar11);
  }
  uVar11 = 0;
LAB_01d74e8c:
  uVar10 = (uint)uVar11;
  lVar1 = param_1 + 0x4858;
  puVar12 = &DAT_04c8c0f0;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(&DAT_04c8c100);
    puVar12 = (uint *)PTR_DAT_04bb3120;
    if (iVar9 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      puVar12 = &DAT_04c8c0f0;
    }
  }
  if (*puVar12 <= uVar10) {
    uVar10 = 0;
  }
  switch(*(undefined4 *)(*(long *)(puVar12 + 2) + (long)(int)uVar10 * 4)) {
  case 3:
    local_14 = 3;
    break;
  default:
    local_14 = 4;
    break;
  case 8:
    local_14 = 1;
    break;
  case 9:
    local_14 = 2;
    break;
  case 10:
    local_14 = 0;
  }
  uVar17 = (ulong)local_14;
  if (4 < local_14) {
    uVar17 = 0;
  }
  lVar5 = lVar1 + (ulong)local_14 * 2;
  if (4 < local_14) {
    lVar5 = lVar1;
  }
  if ((*(short *)(lVar1 + uVar17 * 2) != *(short *)PTR_DAT_04bb3170) &&
     (uVar10 = *(uint *)(param_1 + 0x4878), uVar10 != 0)) {
    uVar13 = 0;
    do {
      iVar9 = *(int *)(param_1 + 0x4874) + uVar13;
      iVar7 = 0;
      if (*(int *)(param_1 + 0x4870) <= iVar9) {
        iVar7 = *(int *)(param_1 + 0x4870);
      }
      if (*(long *)(*(long *)(param_1 + 0x4868) + (long)(iVar9 - iVar7) * 8) == lVar5) {
        if ((((int)uVar13 < (int)uVar10) && (uVar16 = uVar10 - 1, 0 < (int)uVar10)) &&
           (-1 < (int)uVar13)) {
          if (uVar13 < uVar16) {
            lVar15 = (long)(int)uVar13;
            lVar14 = (long)(int)(uVar13 + 1);
            do {
              iVar7 = *(int *)(param_1 + 0x4870);
              iVar6 = *(int *)(param_1 + 0x4874);
              iVar9 = 0;
              if (iVar7 <= (int)lVar14 + iVar6) {
                iVar9 = iVar7;
              }
              iVar4 = 0;
              if (iVar7 <= (int)lVar15 + iVar6) {
                iVar4 = iVar7;
              }
              lVar2 = lVar14 + ((long)iVar6 - (long)iVar9);
              lVar14 = lVar14 + 1;
              lVar3 = lVar15 + ((long)iVar6 - (long)iVar4);
              lVar15 = lVar15 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0x4868) + lVar3 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 0x4868) + lVar2 * 8);
              uVar16 = *(int *)(param_1 + 0x4878) - 1;
            } while ((int)lVar15 < (int)uVar16);
          }
          *(uint *)(param_1 + 0x4878) = uVar16;
        }
        break;
      }
      uVar13 = uVar13 + 1;
    } while (uVar10 != uVar13);
  }
  *(ushort *)(lVar1 + uVar17 * 2) = *param_2;
  iVar9 = *(int *)(param_1 + 0x4878);
  iVar7 = *(int *)(param_1 + 0x4870);
  if (iVar9 < iVar7) {
    *(int *)(param_1 + 0x4878) = iVar9 + 1;
    iVar9 = *(int *)(param_1 + 0x4874) + iVar9;
    iVar6 = 0;
    if (iVar7 <= iVar9) {
      iVar6 = iVar7;
    }
    *(long *)(*(long *)(param_1 + 0x4868) + (long)(iVar9 - iVar6) * 8) = lVar5;
  }
  return;
}

