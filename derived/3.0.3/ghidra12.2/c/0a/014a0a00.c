
uint FUN_014a0a00(long param_1,byte param_2,undefined4 *param_3,long param_4,int *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 uVar15;
  long lVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_fc;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  
  uVar9 = FUN_0277e294(param_3);
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar9 & 1) != 0) {
    local_b8 = 0;
    local_c8 = PTR_DAT_04bc0510 + 0x10;
    local_c0 = *param_3;
    uStack_bc = param_3[1];
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(&local_c0);
    if (*(long *)puVar2 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar10 = FUN_0277d6c4(param_3);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
           (lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8), lVar16 != 0)) {
          local_b8 = lVar16;
        }
      }
    }
    iVar11 = FUN_01ae7550(&local_c8);
    if (iVar11 != 10) {
      if (iVar11 == 0xc) {
        uVar10 = 2;
        bVar17 = true;
      }
      else if (iVar11 == 0xb) {
        bVar17 = true;
        uVar10 = 1;
      }
      else {
        bVar17 = false;
        uVar10 = 0;
      }
      local_e0 = 0;
      local_f0 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_e8 = PTR_DAT_04bb2010 + 0x10;
      local_d0 = 0;
      local_d8 = puStack_e8;
      FUN_01afb480(&local_c8,&local_f0);
      uVar4 = (uint)local_e0 + *(int *)(param_4 + 8);
      iVar18 = local_e0._4_4_ + *(int *)(param_4 + 0xc);
      local_e0 = CONCAT44(iVar18,uVar4);
      local_d0._4_4_ = local_d0._4_4_ + *(int *)(param_4 + 0xc);
      local_d0._0_4_ = (int)local_d0 + *(int *)(param_4 + 8);
      iVar11 = local_d0._4_4_ + 1;
      if (bVar17) {
        if (uVar10 < 2) {
          uVar10 = 1;
        }
        if (iVar11 != iVar18) {
          puVar2 = PTR_DAT_04bbfe68 + 0x10;
          puVar3 = PTR_DAT_04bb5438 + 0x10;
          local_fc = uVar4;
          do {
            uVar19 = 0;
            do {
              local_a8 = 0;
              lVar16 = *(long *)PTR_DAT_04bb2720;
              local_b0 = puVar2;
              if ((lVar16 == 0) || (*(long *)(lVar16 + 0x330) == 0)) {
                puVar13 = &DAT_055c04a0;
              }
              else {
                puVar13 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
                iVar12 = FUN_006bd550(*puVar13,0);
                puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar12 != 0x758f7eaf) {
                  puVar13 = &DAT_055c04a0;
                }
              }
              local_a4 = *(undefined4 *)(puVar13 + 7);
              local_a0 = FUN_017baf44();
              local_a0 = local_a0 & 1;
              local_b0 = puVar3;
              lVar16 = FUN_015001e0(&local_b0);
              iVar12 = *(int *)(lVar16 + 0x20);
              lVar16 = *(long *)PTR_DAT_04bb5ce0;
              if (lVar16 == 0) {
                fVar22 = 0.0;
                fVar20 = 0.0;
                fVar21 = 85.0;
                fVar23 = 85.0;
              }
              else {
                fVar20 = (float)*(int *)(lVar16 + 0xd88) * 5.0;
                fVar22 = (float)*(int *)(lVar16 + 0xd8c) * 5.0;
                fVar21 = (float)*(int *)(lVar16 + 0xd98) * 5.0 + 5.0;
                fVar23 = (float)*(int *)(lVar16 + 0xd9c) * 5.0 + 5.0;
              }
              lVar16 = FUN_01a4fa00(&local_b0);
              iVar6 = *(int *)(lVar16 + 0x14);
              FUN_01a4fa00(&local_b0);
              uVar1 = (iVar6 - iVar18) + 7;
              if ((-1 < (int)uVar1) && (*param_5 - 2U < 4)) {
                iVar6 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
                iVar7 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
                switch(*param_5) {
                case 2:
                  uVar5 = uVar19 + iVar6;
                  uVar8 = local_fc;
                  break;
                case 3:
                  uVar5 = iVar6 + ~local_fc + iVar7;
                  uVar8 = uVar19 + ((int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0));
                  break;
                case 4:
                  uVar5 = iVar7 + ~uVar19;
                  uVar8 = iVar12 - local_fc;
                  break;
                case 5:
                  uVar8 = (~uVar19 - (uint)(fVar21 < 0.0)) + (int)((float)(int)fVar21 / 5.0);
                  uVar5 = local_fc;
                }
                if (((((int)uVar8 < 0x40) && (-1 < (int)(uVar8 | uVar1 | uVar5))) && (uVar1 < 8)) &&
                   ((int)uVar5 < 0x40)) {
                  lVar16 = param_1 + 0x280 + (ulong)uVar8 * 0x3000;
                  if (0x3f < uVar8) {
                    lVar16 = param_1 + 0x280;
                  }
                  lVar14 = lVar16 + (ulong)uVar5 * 0xc0;
                  if (0x3f < uVar5) {
                    lVar14 = lVar16;
                  }
                  *(byte *)(lVar14 + (ulong)uVar1 * 0x18) = param_2 & 1;
                  if ((param_2 & 1) == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = (undefined1)*param_5;
                  }
                  lVar14 = lVar14 + (ulong)uVar1 * 0x18;
                  *(undefined1 *)(lVar14 + 1) = uVar15;
                  *(undefined4 *)(lVar14 + 0x10) = *(undefined4 *)(param_4 + 8);
                  *(undefined4 *)(lVar14 + 0x14) = *(undefined4 *)(param_4 + 0xc);
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar10 != uVar19);
            if ((int)local_fc < (int)local_d0) {
              local_fc = local_fc + 1;
            }
            else {
              iVar18 = iVar18 + 1;
              local_fc = (uint)local_e0;
            }
          } while ((uVar4 != local_fc) || (iVar11 != iVar18));
        }
      }
      else if (iVar11 != iVar18) {
        uVar10 = uVar4;
        do {
          if ((int)uVar10 < (int)local_d0) {
            uVar10 = uVar10 + 1;
          }
          else {
            iVar18 = iVar18 + 1;
            uVar10 = uVar4;
          }
        } while ((uVar4 != uVar10) || (iVar11 != iVar18));
      }
    }
  }
  return uVar9 & 1;
}

