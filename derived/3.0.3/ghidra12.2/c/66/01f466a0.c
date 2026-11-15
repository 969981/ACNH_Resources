
/* WARNING: Removing unreachable block (ram,0x01f46a5c) */
/* WARNING: Removing unreachable block (ram,0x01f46a6c) */
/* WARNING: Removing unreachable block (ram,0x01f46a78) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_01f466a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  int iVar15;
  ulong uVar16;
  short *psVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  undefined *local_f0;
  int local_e8;
  int local_e4;
  undefined *local_e0;
  undefined *puStack_d8;
  int local_d0;
  int iStack_cc;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  
  sVar10 = *(short *)PTR_DAT_04bb6298;
  if (sVar10 != -1) {
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
    if (0xff < (uint)(int)sVar10) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 1 & 1) != 0) {
      bVar8 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
      if (bVar8 < 5) {
        local_a0._0_4_ = 5;
      }
      else if (bVar8 < 8) {
        local_a0._0_4_ = 0;
      }
      else if (bVar8 < 0xc) {
        local_a0._0_4_ = 1;
      }
      else if (bVar8 < 0x10) {
        local_a0._0_4_ = 2;
      }
      else {
        local_a0._0_4_ = 3;
        if (0x12 < bVar8) {
          local_a0._0_4_ = 4;
        }
      }
      if (((int)local_a0 == 4) && (uVar16 = FUN_021e6d60(), (uVar16 & 1) != 0)) {
        local_a0 = (undefined *)
                   CONCAT44(local_a0._4_4_,*(undefined4 *)(*(long *)(param_1 + 8) + 0x230));
        FUN_021e8490(&local_a0,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,param_1 + 0x188,1,0)
        ;
        local_b0 = 0;
        lVar21 = *(long *)PTR_DAT_04bb2720;
        if (lVar21 == 0) {
          puVar24 = &DAT_055c04a0;
        }
        else {
          puVar24 = &DAT_055c04a0;
          if (*(long *)(lVar21 + 0x330) != 0) {
            puVar24 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
            iVar15 = FUN_006bd550(*puVar24,0);
            puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar15 != 0x758f7eaf) {
              puVar24 = &DAT_055c04a0;
            }
          }
        }
        local_ac = *(undefined4 *)(puVar24 + 7);
        local_a8 = FUN_017baf44();
        local_a8 = local_a8 & 1;
        local_b8 = PTR_DAT_04bb3140 + 0x10;
        iVar15 = FUN_01317b90(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,0);
        uVar25 = 0;
        bVar14 = true;
        puVar1 = PTR_DAT_04bbc1a0 + 0x10;
        puVar2 = PTR_DAT_04bb2010 + 0x10;
LAB_01f468f4:
        lVar23 = *(long *)(param_1 + 8);
        lVar21 = *(long *)(param_1 + 0x1c8);
        uVar19 = *(uint *)(lVar21 + 0x18);
        uVar18 = *(uint *)(lVar23 + 0x288);
        *(undefined4 *)(lVar23 + 0x288) = *(undefined4 *)(lVar23 + 0x28c);
        uVar18 = uVar18 ^ uVar18 << 0xb;
        *(undefined4 *)(lVar23 + 0x28c) = *(undefined4 *)(lVar23 + 0x290);
        uVar26 = *(uint *)(lVar23 + 0x294);
        *(uint *)(lVar23 + 0x290) = uVar26;
        uVar18 = uVar18 >> 8 ^ uVar26 >> 0x13 ^ uVar18 ^ uVar26;
        *(uint *)(lVar23 + 0x294) = uVar18;
        if (0 < (int)*(uint *)(lVar21 + 8)) {
          uVar26 = 0;
          uVar16 = (ulong)uVar19 * (ulong)uVar18 >> 0x20;
          do {
            if ((*(uint *)(*(long *)(lVar21 + 0x10) + (ulong)(uVar26 >> 5) * 4) >>
                 (ulong)(uVar26 & 0x1f) & 1) != 0) {
              if ((int)uVar16 == 0) {
                iVar7 = *(int *)(lVar21 + 0x1c);
                iVar12 = 0;
                if (iVar7 != 0) {
                  iVar12 = (int)uVar26 / iVar7;
                }
                uVar9 = *(ushort *)(param_1 + 0x188);
                iVar11 = iVar12 * iVar7;
                iVar3 = iVar12 + (uint)*(ushort *)(param_1 + 0x18a);
                local_e4 = iVar3 + -3;
                iStack_bc = iVar3 + 3;
                iVar4 = ((uint)uVar9 - iVar11) + uVar26;
                local_e8 = iVar4 + -3;
                local_c0 = iVar4 + 3;
                local_f0 = puVar2;
                local_e0 = puVar1;
                puStack_d8 = puVar2;
                local_d0 = local_e8;
                iStack_cc = local_e4;
                local_c8 = puVar2;
                goto LAB_01f469e4;
              }
              uVar16 = (ulong)((int)uVar16 - 1);
            }
            uVar26 = uVar26 + 1;
          } while (*(uint *)(lVar21 + 8) != uVar26);
        }
        goto LAB_01f468e0;
      }
    }
  }
  return false;
LAB_01f469e4:
  do {
    psVar17 = (short *)FUN_01a5010c(&local_b8,0,&local_f0);
    if (*psVar17 != -2) {
LAB_01f46c2c:
      FUN_021e7c50(&local_e0);
      goto LAB_01f46c34;
    }
    fVar28 = (float)local_e8 * 0.5;
    fVar27 = (float)local_e4 * 0.5;
    uVar18 = 0;
    if (fVar28 != (float)(int)fVar28) {
      uVar18 = (uint)(fVar28 < 0.0);
    }
    uVar19 = 0;
    if (fVar27 != (float)(int)fVar27) {
      uVar19 = (uint)(fVar27 < 0.0);
    }
    local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
    iVar20 = 0;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
      lVar21 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
      iVar20 = 0;
      if (lVar21 != 0) {
        uVar22 = ((int)fVar28 - uVar18) - *(int *)(lVar21 + 0x28);
        uVar6 = *(uint *)(lVar21 + 0x18);
        uVar13 = ((int)fVar27 - uVar19) - *(int *)(lVar21 + 0x2c);
        if ((uVar22 < uVar6 && uVar13 <= *(uint *)(lVar21 + 0x1c)) &&
            (uVar6 <= uVar22 || *(uint *)(lVar21 + 0x1c) != uVar13)) {
          uVar22 = uVar22 + uVar6 * uVar13;
LAB_01f46b00:
          if (*(uint *)(lVar21 + 0x30) <= uVar22) {
            uVar22 = 0;
          }
          puVar24 = (undefined8 *)(*(long *)(lVar21 + 0x38) + (long)(int)uVar22 * 0x68);
        }
        else if (*(char *)(lVar21 + 0x88) == '\0') {
          puVar24 = &DAT_051a50f0;
        }
        else {
          uVar18 = ((int)fVar28 - uVar18) - *(int *)(lVar21 + 0x98);
          uVar19 = ((int)fVar27 - uVar19) - *(int *)(lVar21 + 0x9c);
          puVar24 = &DAT_051a50f0;
          if (uVar18 < *(uint *)(lVar21 + 0xa0) && uVar19 < *(uint *)(lVar21 + 0xa4)) {
            uVar22 = uVar18 + *(uint *)(lVar21 + 0xa0) * uVar19 + *(int *)(lVar21 + 0x8c);
            goto LAB_01f46b00;
          }
        }
        iVar20 = (int)*(char *)(puVar24 + 2);
      }
    }
    if ((iVar20 != iVar15) || (uVar16 = FUN_0097abd0(&local_f0,1), (uVar16 & 1) != 0))
    goto LAB_01f46c2c;
    uVar18 = ((iVar11 - (uint)uVar9) - uVar26) + local_e8;
    uVar19 = -uVar18;
    if (-1 < (int)uVar18) {
      uVar19 = uVar18;
    }
    if (uVar19 < 2) {
      uVar19 = local_e4 - iVar3;
      uVar18 = -uVar19;
      if (-1 < (int)uVar19) {
        uVar18 = uVar19;
      }
      if (uVar18 < 2) {
        local_90 = local_e8;
        iStack_8c = local_e4;
        local_a0 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_98 = PTR_DAT_04bb2010 + 0x10;
        local_80 = local_e8;
        iStack_7c = local_e4;
        local_88 = puStack_98;
        if (((*(long *)PTR_DAT_04bb27c8 == 0) ||
            (lVar21 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar21 == 0)) ||
           (uVar16 = FUN_00971f80(lVar21,&local_a0,0), (uVar16 & 1) == 0)) goto LAB_01f46c2c;
      }
    }
    if (local_e8 < local_c0) {
      local_e8 = local_e8 + 1;
    }
    else {
      local_e4 = local_e4 + 1;
      local_e8 = local_d0;
    }
  } while ((iVar4 - local_e8 != 3) || (iVar3 + 4 != local_e4));
  uVar16 = FUN_021e7c50(&local_e0);
  if ((uVar16 & 1) == 0) {
    *(uint *)(param_1 + 0xe7b0) = (uVar26 - iVar7 * iVar12) + (uint)uVar9;
    *(int *)(param_1 + 0xe7b4) = iVar3;
    return bVar14;
  }
LAB_01f46c34:
  lVar21 = *(long *)(param_1 + 0x1c8);
  uVar26 = ((((uint)uVar9 + *(int *)(lVar21 + 0x1c) * (iVar3 - (uint)*(ushort *)(param_1 + 0x18a)))
            - iVar11) - (uint)*(ushort *)(param_1 + 0x188)) + uVar26;
  uVar19 = 1 << (ulong)(uVar26 & 0x1f);
  uVar18 = *(uint *)(*(long *)(lVar21 + 0x10) + (long)((int)uVar26 >> 5) * 4);
  if ((uVar19 & uVar18) != 0) {
    *(uint *)(*(long *)(lVar21 + 0x10) + ((long)((ulong)uVar26 << 0x20) >> 0x25) * 4) =
         uVar18 & (uVar19 ^ 0xffffffff);
    *(int *)(lVar21 + 0x18) = *(int *)(lVar21 + 0x18) + -1;
  }
LAB_01f468e0:
  bVar14 = uVar25 < 9;
  uVar25 = uVar25 + 1;
  if (uVar25 == 10) {
    return bVar14;
  }
  goto LAB_01f468f4;
}

