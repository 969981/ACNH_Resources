
/* WARNING: Removing unreachable block (ram,0x02a648ec) */
/* WARNING: Removing unreachable block (ram,0x02a64850) */
/* WARNING: Removing unreachable block (ram,0x02a64860) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02a64790(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined *local_98;
  int local_90;
  int local_8c;
  undefined *local_88;
  undefined *puStack_80;
  int local_78;
  int local_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  puVar8 = PTR_DAT_04bb5008;
  uVar3 = *(uint *)(param_1 + 0x28c);
  if (uVar3 != 0xffffffff) {
    if (((*(int *)(param_1 + 0x2e0) == 0) || (lVar11 = **(long **)(param_1 + 0x2e8), lVar11 == 0))
       || (*(char *)(lVar11 + 0x540) == '\0')) {
      uVar16 = 0;
    }
    else {
      uVar16 = (uint)(*(uint *)(lVar11 + 0x20) < 2);
    }
    uVar15 = uVar3;
    if (*(uint *)(*(long *)PTR_DAT_04bb5008 + 0x22a0) <= uVar3) {
      uVar15 = 0;
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_04bb5008 + 0x22a8) + (long)(int)uVar15 * 0x10;
    *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) & 0xfffffffe | uVar16;
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
    }
    lVar11 = puVar2[1];
    if ((lVar11 != 0) &&
       (lVar12 = *(long *)(lVar11 + 0x48038), uVar3 < *(uint *)(lVar11 + 0x48030) && lVar12 != 0)) {
      lVar11 = *(long *)puVar8;
      pbVar17 = (byte *)(lVar12 + (long)(int)uVar3 * 0x718 + 8);
      if ((*pbVar17 >> 1 & 1) == 0) {
        lVar10 = lVar12 + (long)(int)uVar3 * 0x718 + 0x90;
      }
      else {
        lVar10 = lVar12 + (long)(int)uVar3 * 0x718 + 0x2e0;
      }
      local_98 = PTR_DAT_04bb2018 + 0x10;
      local_88 = PTR_DAT_04bbc5d8 + 0x10;
      fVar19 = (float)*(int *)(lVar10 + 0x14) * 0.5;
      fVar18 = (float)*(int *)(lVar10 + 0x10) * 0.5;
      fVar21 = (float)*(int *)(lVar10 + 0x20) * 0.5;
      fVar20 = (float)*(int *)(lVar10 + 0x24) * 0.5;
      uVar15 = 0;
      if (fVar18 != (float)(int)fVar18) {
        uVar15 = (uint)(fVar18 < 0.0);
      }
      iVar13 = (int)fVar18 - uVar15;
      uVar15 = 0;
      if (fVar19 != (float)(int)fVar19) {
        uVar15 = (uint)(fVar19 < 0.0);
      }
      iVar5 = (int)fVar19 - uVar15;
      uVar15 = 0;
      if (fVar21 != (float)(int)fVar21) {
        uVar15 = (uint)(fVar21 < 0.0);
      }
      iVar6 = (int)fVar21 - uVar15;
      uVar15 = 0;
      if (fVar20 != (float)(int)fVar20) {
        uVar15 = (uint)(fVar20 < 0.0);
      }
      iVar7 = (int)fVar20 - uVar15;
      iVar1 = iVar13;
      if (iVar6 <= iVar13) {
        iVar1 = iVar6;
      }
      if (iVar13 <= iVar6) {
        iVar13 = iVar6;
      }
      local_8c = iVar5;
      if (iVar7 <= iVar5) {
        local_8c = iVar7;
      }
      if (iVar5 <= iVar7) {
        iVar5 = iVar7;
      }
      _local_68 = CONCAT44(iVar5,iVar13);
      if (iVar5 + 1 != local_8c) {
        local_90 = iVar1;
        puStack_80 = local_98;
        local_78 = iVar1;
        local_74 = local_8c;
        local_70 = local_98;
        do {
          if ((((*pbVar17 & 1) != 0) &&
              (uVar9 = FUN_02ad806c(lVar12 + (long)(int)uVar3 * 0x718 + 0xb8,7,&local_98),
              (uVar9 & 1) != 0)) &&
             (((*(byte *)(param_1 + 0x27c) >> 4 & 1) == 0 &&
              (lVar10 = *(long *)(lVar11 + 0x22c0), lVar10 != 0)))) {
            uVar4 = local_90 + local_8c * *(int *)(lVar11 + 0x22b8);
            uVar15 = *(uint *)(lVar11 + 0x22c8);
            if (uVar4 < uVar15) {
              iVar13 = *(int *)(lVar11 + 0x22cc) + 1;
              *(int *)(lVar11 + 0x22cc) = *(int *)(lVar11 + 0x22cc) + 2;
              if (uVar16 == 0) {
                if (-1 < (int)uVar4 && (int)uVar4 < (int)uVar15) {
                  lVar14 = (ulong)(uVar4 >> 5) * 4;
                  uVar15 = *(uint *)(lVar10 + lVar14) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
                  goto LAB_02a64b00;
                }
              }
              else if (-1 < (int)uVar4 && (int)uVar4 < (int)uVar15) {
                lVar14 = (ulong)(uVar4 >> 5) * 4;
                uVar15 = *(uint *)(lVar10 + lVar14) | 1 << (ulong)(uVar4 & 0x1f);
LAB_02a64b00:
                *(uint *)(lVar10 + lVar14) = uVar15;
                iVar13 = *(int *)(lVar11 + 0x22cc) + -1;
              }
              *(int *)(lVar11 + 0x22cc) = iVar13 + -1;
            }
          }
          if (local_90 < local_68) {
            local_90 = local_90 + 1;
          }
          else {
            local_8c = local_8c + 1;
            local_90 = local_78;
          }
        } while (iVar1 != local_90 || iVar5 + 1 != local_8c);
      }
    }
  }
  return;
}

