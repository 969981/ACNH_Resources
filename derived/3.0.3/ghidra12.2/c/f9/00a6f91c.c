
undefined8 FUN_00a6f91c(long *param_1,undefined8 param_2,float *param_3)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined **local_70;
  undefined4 local_68;
  undefined4 local_64;
  byte local_60;
  undefined *local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  
  pfVar7 = (float *)(**(code **)(*param_1 + 0x108))();
  if (pfVar7 == (float *)0x0) {
    return 0;
  }
  pfVar8 = (float *)FUN_0251b3b0(param_2,0);
  if (pfVar8 == (float *)0x0) {
    return 0;
  }
  lVar9 = FUN_0251bdc4(param_2,0);
  if (lVar9 == 0) {
    return 0;
  }
  fVar13 = *pfVar8 - *pfVar7;
  fVar14 = pfVar8[2] - pfVar7[2];
  fVar13 = fVar14 * fVar14 + fVar13 * fVar13;
  if (fVar13 <= *(float *)((long)param_1 + 0x274)) {
    fVar15 = pfVar8[1] - pfVar7[1];
    fVar14 = *(float *)(param_1 + 0x4f);
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (-fVar14 <= fVar15) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar15) && !NAN(fVar14)) {
        bVar2 = fVar15 < fVar14;
        bVar3 = fVar15 == fVar14;
        bVar4 = false;
      }
    }
    if (bVar3 || bVar2 != bVar4) {
      iVar5 = FUN_006f0400(*pfVar7 - *pfVar8,pfVar7[2] - pfVar8[2]);
      fVar14 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x27c));
      fVar15 = (float)(uint)(iVar5 - *(int *)(lVar9 + 4)) * 8.381903e-08;
      fVar12 = 360.0 - fVar14 * 8.381903e-08;
      bVar2 = false;
      bVar3 = false;
      if (fVar14 * 8.381903e-08 < fVar15) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar15) && !NAN(fVar12)) {
          bVar2 = fVar15 < fVar12;
          bVar3 = false;
        }
      }
      if (bVar2 == bVar3) {
        if (*(char *)((long)param_1 + 0x286) < '\0') {
          iVar5 = FUN_006f0400(*pfVar8 - *pfVar7,pfVar8[2] - pfVar7[2]);
          (**(code **)(*param_1 + 0xf8))(&local_70,param_1);
          uVar6 = iVar5 - (int)local_70;
          (**(code **)(*param_1 + 0x100))(&local_70,param_1);
          fVar14 = (float)NEON_ucvtf((int)local_70);
          fVar15 = (float)uVar6 * 8.381903e-08;
          fVar12 = 360.0 - fVar14 * 8.381903e-08;
          bVar2 = false;
          bVar3 = false;
          if (fVar14 * 8.381903e-08 < fVar15) {
            bVar2 = false;
            bVar3 = true;
            if (!NAN(fVar15) && !NAN(fVar12)) {
              bVar2 = fVar15 < fVar12;
              bVar3 = false;
            }
          }
          if (bVar2 != bVar3) {
            return 0;
          }
        }
        local_58 = PTR_DAT_04bb2010 + 0x10;
        local_68 = 0;
        fVar14 = (*pfVar7 + *pfVar8) * 0.5;
        fVar15 = (pfVar7[2] + pfVar8[2]) * 0.5;
        local_50 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
        iStack_4c = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
        if (DAT_05aed670 == 0) {
          puVar11 = &DAT_055c04a0;
        }
        else {
          puVar11 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar11 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar5 = FUN_006bd550(*puVar11,0);
            puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar5 != 0x758f7eaf) {
              puVar11 = &DAT_055c04a0;
            }
          }
        }
        local_64 = *(undefined4 *)(puVar11 + 7);
        local_60 = FUN_017baf44();
        local_60 = local_60 & 1;
        local_70 = &PTR_LAB_0492e760;
        FUN_01a5033c(auStack_78,&local_70,0,&local_58,0);
        puVar1 = PTR_DAT_04bb43c0;
        lVar9 = *(long *)PTR_DAT_04bb43c0;
        uVar6 = FUN_0277d6c4(auStack_78);
        if (*(long *)puVar1 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            FUN_01ad5d04(auStack_90,auStack_78);
            uVar10 = FUN_01ae59b0(auStack_90);
            if (((uVar10 & 1) != 0) && (iVar5 = FUN_0277ebd0(auStack_78), iVar5 != 0)) {
              local_44 = 6;
              local_48 = FUN_01aee3b4(auStack_90);
              if (local_48 == local_44) {
                return 0;
              }
              local_44 = 7;
              iVar5 = FUN_01aee3b4(auStack_90);
              if (iVar5 == local_44) {
                return 0;
              }
            }
          }
        }
        if (param_3 != (float *)0x0) {
          *param_3 = fVar13;
        }
        return 1;
      }
    }
  }
  return 0;
}

