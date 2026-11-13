
/* WARNING: Removing unreachable block (ram,0x01319390) */
/* WARNING: Removing unreachable block (ram,0x013193a0) */
/* WARNING: Removing unreachable block (ram,0x013193ac) */

void FUN_01319350(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  uint uVar12;
  byte bVar13;
  undefined *puVar14;
  bool bVar15;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  undefined *local_160;
  undefined1 *puStack_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined1 local_13c [127];
  undefined1 local_bd;
  ushort local_b6 [2];
  byte local_b2 [8];
  byte local_aa;
  undefined *local_a8;
  undefined *puStack_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined8 local_80;
  
  puVar14 = PTR_DAT_04bb27a8;
  uVar17 = (ulong)local_150 >> 0x20;
  local_150 = (undefined *)((ulong)local_150 & 0xffffffff00000000);
  lVar19 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar19 == 0) {
    return;
  }
  lVar16 = *(long *)(lVar19 + 0xa8);
  if (lVar16 == 0) {
    return;
  }
  sVar11 = *(short *)PTR_DAT_04bb6298;
  if (sVar11 == -1) {
    uVar21 = 0;
  }
  else {
    local_150 = (undefined *)CONCAT44((int)uVar17,3);
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8);
    if (0xff < (uint)(int)sVar11) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar21 = *puVar6 >> 3 & 1;
  }
  lVar19 = *(long *)(lVar19 + 0xb0);
  iVar10 = *(int *)(param_1 + 8);
  if (lVar19 == 0) goto LAB_013194b4;
  uVar20 = iVar10 - *(int *)(lVar19 + 0x28);
  uVar9 = *(uint *)(lVar19 + 0x18);
  uVar12 = *(int *)(param_1 + 0xc) - *(int *)(lVar19 + 0x2c);
  if ((uVar20 < uVar9 && uVar12 <= *(uint *)(lVar19 + 0x1c)) &&
      (uVar9 <= uVar20 || *(uint *)(lVar19 + 0x1c) != uVar12)) {
    uVar20 = uVar20 + uVar9 * uVar12;
LAB_01319494:
    if (*(uint *)(lVar19 + 0x30) <= uVar20) {
      uVar20 = 0;
    }
    bVar13 = *(byte *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar20 * 0x68 + 0xd);
  }
  else {
    bVar13 = DAT_051a50f8._5_1_;
    if (*(char *)(lVar19 + 0x88) != '\0') {
      uVar9 = *(int *)(param_1 + 0xc) - *(int *)(lVar19 + 0x9c);
      uVar20 = *(uint *)(lVar19 + 0xa0);
      uVar12 = iVar10 - *(int *)(lVar19 + 0x98);
      if ((uVar12 < uVar20 && uVar9 <= *(uint *)(lVar19 + 0xa4)) &&
          (uVar20 <= uVar12 || *(uint *)(lVar19 + 0xa4) != uVar9)) {
        uVar20 = uVar12 + uVar20 * uVar9 + *(int *)(lVar19 + 0x8c);
        goto LAB_01319494;
      }
    }
  }
  if ((bVar13 & 1) == 0) {
    return;
  }
LAB_013194b4:
  if (((*(int *)(lVar16 + 0x18) <= iVar10 && iVar10 <= *(int *)(lVar16 + 0x28)) &&
      (*(int *)(lVar16 + 0x1c) <= *(int *)(param_1 + 0xc))) &&
     (*(int *)(param_1 + 0xc) <= *(int *)(lVar16 + 0x2c))) {
    FUN_01309ec4(local_b6,lVar16,param_1);
    uVar20 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb2d88 + 0x10;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    puVar4 = PTR_DAT_04bb2010 + 0x10;
    bVar15 = true;
    do {
      bVar18 = bVar15;
      lVar19 = *(long *)puVar14;
      puVar7 = local_b6 + (ulong)uVar20 * 3;
      if (1 < uVar20) {
        puVar7 = local_b6;
      }
      uVar9 = (uint)*puVar7 - (uint)*(ushort *)(lVar19 + 0x408);
      if ((uVar9 < *(uint *)(lVar19 + 1000)) &&
         (*(long *)(*(long *)(lVar19 + 0x3f0) + (long)(int)uVar9 * 8) != 0)) {
        if ((uVar20 & *puVar7 == 0) != 0) {
          return;
        }
        local_140 = 0x80;
        local_bd = 0;
        local_13c[0] = 0;
        local_150 = puVar2;
        local_148 = local_13c;
        FUN_0130d780(puVar7,&local_150);
        lVar19 = *(long *)PTR_DAT_04bb27c8;
        if (lVar19 != 0) {
          (**(code **)(local_150 + 0x18))(&local_150);
          puStack_158 = local_148;
          fVar22 = 0.0;
          if (local_aa != 4) {
            fVar22 = (float)local_aa * 15.0;
          }
          pbVar8 = local_b2 + (ulong)uVar20 * 6;
          if (1 < uVar20) {
            pbVar8 = local_b2;
          }
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(uint)*pbVar8);
          local_80 = 0;
          local_160 = puVar1;
          uVar17 = FUN_00945160(fVar22,(float)((uint)*pbVar8 << 0x1e) * 1.4629181e-09,lVar19 + 0x28,
                                &local_160,param_1,(long)&local_80 + 4,&local_80,uVar21);
          if ((uVar17 & 1) != 0) {
            local_88 = *(int *)(param_1 + 8) * 2;
            iStack_84 = *(int *)(param_1 + 0xc) * 2;
            iVar10 = local_80._4_4_ + local_88;
            iVar5 = (int)local_80 + iStack_84;
            local_98 = local_88;
            if (iVar10 <= local_88) {
              local_98 = iVar10;
            }
            if (local_88 <= iVar10) {
              local_88 = iVar10;
            }
            iStack_94 = iStack_84;
            if (iVar5 <= iStack_84) {
              iStack_94 = iVar5;
            }
            if (iStack_84 <= iVar5) {
              iStack_84 = iVar5;
            }
            lVar16 = 0x68;
            if (uVar21 == 0) {
              lVar16 = 0x80;
            }
            local_a8 = puVar3;
            puStack_a0 = puVar4;
            local_90 = puVar4;
            FUN_0096e9e0(*(undefined8 *)(lVar19 + lVar16 + 0x28),&local_a8);
          }
        }
      }
      uVar20 = 1;
      bVar15 = false;
    } while (bVar18);
  }
  return;
}

