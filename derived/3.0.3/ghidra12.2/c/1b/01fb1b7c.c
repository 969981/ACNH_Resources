
bool FUN_01fb1b7c(long param_1,undefined8 *param_2,long param_3,int param_4)

{
  float *pfVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  uint local_38;
  int local_34;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  pfVar1 = (float *)(lVar12 + 0x278);
  if ((param_4 == 6) || (param_4 == 7)) {
    fVar15 = *pfVar1;
    fVar14 = (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0;
    bVar5 = false;
    if (((float)*(int *)(param_3 + 0x10) * 5.0 <= fVar15) &&
       (bVar5 = false, !NAN(fVar15) && !NAN(fVar14))) {
      bVar5 = fVar15 < fVar14;
    }
    if (!bVar5) {
      return false;
    }
    fVar14 = *(float *)(lVar12 + 0x280);
    if (fVar14 < (float)*(int *)(param_3 + 0x14) * 5.0) {
      return false;
    }
    local_58._4_4_ = *(int *)(param_3 + 0x24);
  }
  else {
    local_34 = param_4;
    if (3 < param_4 - 2U) {
      local_68 = 0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_70 = (undefined *)*param_2;
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar8 = FUN_0277d6c4(&local_70);
      local_38 = 0;
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = ((uint)uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (uVar7 < *(uint *)(lVar13 + 0x1d8)) {
          local_38 = 0;
          if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) == 0) goto LAB_01fb1de0;
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(param_2);
          uVar7 = ((uint)uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (uVar7 < *(uint *)(lVar13 + 0x1d8)) {
            puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8);
            local_38 = 0;
            if (puVar10 == (uint *)0x0) goto LAB_01fb1de0;
            uVar7 = *puVar10;
            if (uVar7 != 0 && puVar10 != (uint *)(ulong)uVar7) {
              puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
              if (((*puVar11 != 0) && (uVar7 = puVar11[1], uVar7 != 0)) &&
                 ((ulong)(ushort)puVar11[2] != 0)) {
                lVar13 = 0xc;
                if (*(char *)((long)puVar11 + 10) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
                if (lVar13 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar7);
                  }
                  if (*puVar11 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc0110) &&
                     (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar2 * 2),
                     local_38 = (uint)uVar3, uVar3 < 9)) goto LAB_01fb1de0;
                }
              }
            }
          }
        }
        local_38 = 0;
      }
LAB_01fb1de0:
      uVar9 = FUN_01fb0064(uVar8,pfVar1,param_2,param_3,&local_38);
      if ((uVar9 & 1) != 0) {
        if (param_4 == 0) {
          lVar13 = *(long *)puVar4;
          uVar7 = FUN_0277d6c4(param_2);
          if (*(long *)puVar4 != 0) {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              FUN_01a4f4bc(&local_78);
              local_78 = PTR_DAT_04bb3140 + 0x10;
              uVar9 = FUN_01a50010(&local_78,1,param_3);
              if ((uVar9 & 1) == 0) {
                return false;
              }
            }
          }
        }
        fVar15 = *pfVar1;
        fVar14 = (float)(*(int *)(param_3 + 0x20) + 1) * 5.0 + 5.0;
        bVar5 = false;
        bVar6 = true;
        if ((float)(*(int *)(param_3 + 0x10) + -1) * 5.0 <= fVar15) {
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar15) && !NAN(fVar14)) {
            bVar5 = fVar15 == fVar14;
            bVar6 = fVar14 <= fVar15;
          }
        }
        if ((!bVar6 || bVar5) &&
           ((float)(*(int *)(param_3 + 0x14) + -1) * 5.0 <= *(float *)(lVar12 + 0x280))) {
          return *(float *)(lVar12 + 0x280) <= (float)(*(int *)(param_3 + 0x24) + 1) * 5.0 + 5.0;
        }
      }
      return false;
    }
    local_68 = 0;
    local_78 = PTR_DAT_04bbc1a0 + 0x10;
    local_70 = PTR_DAT_04bb2010 + 0x10;
    local_58 = 0;
    local_60 = local_70;
    FUN_01508594(&local_78,&local_34);
    fVar15 = *pfVar1;
    fVar14 = (float)(int)local_58 * 5.0 + 5.0;
    bVar5 = false;
    if (((float)(int)local_68 * 5.0 < fVar15) && (bVar5 = false, !NAN(fVar15) && !NAN(fVar14))) {
      bVar5 = fVar15 < fVar14;
    }
    if (!bVar5) {
      return false;
    }
    fVar14 = *(float *)(lVar12 + 0x280);
    if (fVar14 <= (float)local_68._4_4_ * 5.0) {
      return false;
    }
  }
  return fVar14 < (float)local_58._4_4_ * 5.0 + 5.0;
}

