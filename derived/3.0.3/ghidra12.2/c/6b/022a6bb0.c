
bool FUN_022a6bb0(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                 int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  undefined *local_130;
  int local_128;
  int local_124;
  undefined *local_120;
  int local_118;
  int local_114;
  undefined *local_110;
  float local_108;
  int iStack_104;
  undefined *local_100;
  undefined *puStack_f8;
  int local_f0;
  int iStack_ec;
  undefined *local_e8;
  int local_e0;
  int iStack_dc;
  undefined *local_d8;
  undefined8 local_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined *local_b0;
  undefined8 local_a8;
  uint local_a0;
  int iStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  
  iVar12 = *(int *)(param_2 + 8);
  iVar13 = *(int *)(param_3 + 8);
  if (iVar12 == iVar13) {
    iVar25 = *(int *)(param_2 + 0xc);
    iVar26 = *(int *)(param_3 + 0xc);
    if (iVar25 == iVar26) {
      if ((param_4 & 1) == 0) {
        return true;
      }
      lVar17 = FUN_0251bdc4(param_5,0);
      if (lVar17 != 0) {
        fVar27 = (float)(uint)(*param_6 - *(int *)(lVar17 + 4)) * 8.381903e-08;
        fVar28 = fVar27 + -360.0;
        if (fVar27 <= 180.0) {
          fVar28 = fVar27;
        }
        return -60.0 <= fVar28 && fVar28 <= 60.0;
      }
      iVar12 = *(int *)(param_2 + 8);
      iVar13 = *(int *)(param_3 + 8);
      goto LAB_022a6c80;
    }
    iVar13 = iVar12;
  }
  else {
LAB_022a6c80:
    iVar25 = *(int *)(param_2 + 0xc);
    iVar26 = *(int *)(param_3 + 0xc);
    if (iVar12 == iVar13) {
      iVar12 = iVar13;
    }
    else {
      if (iVar25 != iVar26) {
        iVar3 = iVar12 + 1;
        iVar21 = iVar26 + 1;
        iVar22 = iVar13 + 1;
        iVar4 = iVar25 + 1;
        local_100 = PTR_DAT_04bbc1a0 + 0x10;
        puVar7 = PTR_DAT_04bb2010 + 0x10;
        iVar8 = iVar12 + iVar13;
        if (iVar8 < 0 != SCARRY4(iVar12,iVar13)) {
          iVar8 = iVar8 + 1;
        }
        iVar8 = iVar8 >> 1;
        iVar24 = iVar26 + iVar25;
        if (iVar24 < 0 != SCARRY4(iVar26,iVar25)) {
          iVar24 = iVar24 + 1;
        }
        iVar24 = iVar24 >> 1;
        iVar1 = iVar8 * 2 - iVar13;
        iVar2 = iVar24 * 2 - iVar26;
        iVar5 = iVar1 + 1;
        iVar6 = iVar2 + 1;
        iVar20 = iVar13;
        iVar19 = iVar12;
        puStack_f8 = puVar7;
        local_f0 = iVar1;
        iStack_ec = iVar2;
        local_e8 = puVar7;
        local_e0 = iVar5;
        iStack_dc = iVar6;
        local_d8 = local_100;
        local_d0 = puVar7;
        local_c8 = iVar13;
        iStack_c4 = iVar25;
        local_c0 = puVar7;
        local_b8 = iVar22;
        iStack_b4 = iVar4;
        local_b0 = local_100;
        local_a8 = puVar7;
        local_a0 = iVar12;
        iStack_9c = iVar26;
        local_98 = puVar7;
        local_90 = iVar3;
        iStack_8c = iVar21;
        if ((param_4 & 1) == 0) {
          iVar19 = iVar24 + 2;
          iVar20 = iVar8;
          do {
            fVar27 = *(float *)(param_1 + 4);
            local_108 = (float)iVar24 * 5.0 + 2.5;
            local_110 = (undefined *)CONCAT44(local_110._4_4_,(float)iVar20 * 5.0 + 2.5);
            fVar28 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_110,0);
            fVar27 = fVar27 - fVar28;
            bVar9 = false;
            bVar10 = false;
            if (fVar27 < 5.0) {
              bVar9 = false;
              bVar10 = true;
              if (!NAN(fVar27)) {
                bVar9 = fVar27 == -5.0;
                bVar10 = -5.0 <= fVar27;
              }
            }
            if (!bVar10 || bVar9) {
              return false;
            }
            if (iVar8 < iVar20) {
              iVar24 = iVar24 + 1;
              iVar20 = iVar8;
            }
            else {
              iVar20 = iVar20 + 1;
            }
          } while ((iVar8 != iVar20) || (iVar19 != iVar24));
          iVar19 = *(int *)(param_2 + 8);
          iVar20 = *(int *)(param_3 + 8);
        }
        if (iVar20 < iVar19) {
          piVar18 = &local_128;
          iVar22 = iVar5;
          local_108 = (float)iVar3;
        }
        else {
          piVar18 = &local_118;
          local_108 = (float)iVar12;
        }
        local_128 = iVar1;
        local_124 = iVar2;
        local_120 = puVar7;
        local_118 = iVar13;
        local_114 = iVar25;
        local_110 = puVar7;
        *piVar18 = iVar22;
        if (*(int *)(param_3 + 0xc) < *(int *)(param_2 + 0xc)) {
          piVar18 = &local_124;
          iVar21 = iVar6;
          local_114 = iVar4;
        }
        else {
          piVar18 = &iStack_104;
        }
        iStack_104 = iVar26;
        *piVar18 = iVar21;
        local_130 = puVar7;
        uVar14 = FUN_022aa0f0(&local_b0,&local_110);
        uVar15 = FUN_022aa0f0(&local_d8,&local_120);
        uVar16 = FUN_022aa0f0(&local_100,&local_130);
        return (uVar15 & 1) + (uVar14 & 1) + (uVar16 & 1) < 2;
      }
      iVar26 = iVar25;
    }
  }
  iVar12 = FUN_006f0400(((float)iVar13 * 5.0 + 5.0) - ((float)iVar12 * 5.0 + 5.0),
                        ((float)iVar26 * 5.0 + 5.0) - ((float)iVar25 * 5.0 + 5.0));
  local_a8 = (undefined *)((ulong)local_a8._4_4_ << 0x20);
  lVar17 = *(long *)PTR_DAT_04bb2720;
  if (lVar17 == 0) {
    puVar23 = &DAT_055c04a0;
  }
  else {
    puVar23 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar23 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar13 = FUN_006bd550(*puVar23,0);
      puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar13 != 0x758f7eaf) {
        puVar23 = &DAT_055c04a0;
      }
    }
  }
  local_a8 = (undefined *)CONCAT44(*(undefined4 *)(puVar23 + 7),(undefined4)local_a8);
  uVar11 = FUN_017baf44();
  iVar13 = *(int *)(param_2 + 8);
  iVar26 = *(int *)(param_2 + 0xc);
  local_a0 = CONCAT31(local_a0._1_3_,uVar11) & 0xffffff01;
  local_b0 = PTR_DAT_04bb6268 + 0x10;
  local_d8 = PTR_DAT_04bb2010 + 0x10;
  local_100 = (undefined *)0xfffe;
  local_d0._0_4_ = iVar13;
  local_d0._4_4_ = iVar26;
  FUN_0277d4ac(&local_100);
  switch(iVar12 + 0x20000000U >> 0x1e) {
  case 0:
    local_d0._4_4_ = iVar26 + 1;
    break;
  case 1:
    local_d0._0_4_ = iVar13 + 1;
    goto LAB_022a6e6c;
  case 2:
    break;
  case 3:
LAB_022a6e6c:
    FUN_01a5033c(&local_110,&local_b0,0,&local_d8,0);
    if (((short)local_110 != -2) && (iVar12 = FUN_0277ebd0(&local_100), iVar12 != 0)) {
      return false;
    }
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_ + 1,(int)local_d0);
    goto LAB_022a6ec8;
  }
  FUN_01a5033c(&local_110,&local_b0,0,&local_d8,0);
  if (((short)local_110 == -2) || (iVar12 = FUN_0277ebd0(&local_100), iVar12 == 0)) {
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,(int)local_d0 + 1);
LAB_022a6ec8:
    FUN_01a5033c(&local_110,&local_b0,0,&local_d8,0);
    if (((short)local_110 == -2) || (iVar12 = FUN_0277ebd0(&local_100), iVar12 == 0)) {
      return true;
    }
  }
  return false;
}

