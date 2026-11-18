
void FUN_03456118(long param_1,long *param_2,byte *param_3)

{
  char *pcVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  byte *pbVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined *local_b0;
  char *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  char *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  char *local_80;
  undefined8 local_78;
  undefined *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  undefined4 local_44;
  
  bVar14 = *param_3;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  *(byte *)(param_1 + 0x4c) = bVar14;
  uVar9 = FUN_0277e294(param_2);
  if (((uVar9 & 1) != 0) || (uVar9 = FUN_0277e158(param_2), (uVar9 & 1) == 0)) {
    puVar4 = PTR_DAT_04bb43c0;
    local_60 = 0;
    local_70 = PTR_DAT_04bc0510 + 0x10;
    local_68 = (char *)*param_2;
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_68);
    if (*(long *)puVar4 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(param_2);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (uVar8 < *(uint *)(lVar12 + 0x1d8)) {
          lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8);
          if (lVar12 != 0) {
            local_60 = lVar12;
          }
        }
      }
    }
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0xe);
    iVar6 = FUN_01ae7550(&local_70);
    local_80 = (char *)CONCAT44(local_80._4_4_,iVar6);
    if (iVar6 == (int)local_b0) {
      lVar12 = *(long *)PTR_DAT_04bb39b0;
      pbVar13 = PTR_DAT_04bb32e0;
      if (lVar12 == 0) {
LAB_03456404:
        if (*pbVar13 < 8) goto LAB_0345647c;
LAB_03456410:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_03456474:
          pbVar13 = PTR_DAT_04bb5038;
          goto LAB_0345647c;
        }
        lVar12 = **(long **)PTR_DAT_04bb27d0;
        bVar14 = *(byte *)(lVar12 + 0x473);
        pbVar13 = PTR_DAT_04bb5038;
        if ((long)(char)bVar14 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
          if (7 < bVar14) {
            puVar2 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar13 = (byte *)(lVar12 + 0x471);
          }
        }
        bVar14 = *pbVar13;
        bVar5 = 7 < bVar14;
        if (bVar5) {
          bVar14 = 0xff;
        }
        local_80 = (char *)CONCAT71(local_80._1_7_,bVar14);
        if (bVar5) goto LAB_03456474;
      }
      else {
        if (*(int *)(lVar12 + 0x15c) != 0) {
          pbVar13 = (byte *)(lVar12 + 0x158);
        }
        if (7 < *pbVar13) {
          if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_03456404;
          }
          goto LAB_03456410;
        }
LAB_0345647c:
        bVar14 = *pbVar13;
        if (7 < bVar14) {
          bVar14 = 0xff;
        }
        local_80 = (char *)CONCAT71(local_80._1_7_,bVar14);
      }
      local_b0 = PTR_DAT_04bb2020 + 0x10;
      local_a8 = "UnlockInterior_CeilingFurniture";
      iVar6 = FUN_0274bce0(&local_80,&local_b0);
      if (iVar6 == 0) {
        uVar11 = 0x6b;
        goto switchD_0345665c_caseD_4;
      }
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = PTR_DAT_04bb2010 + 0x10;
    local_60 = 0;
    local_70 = *(undefined **)PTR_DAT_04bb37e0;
    local_44 = 0;
    local_48 = *PTR_DAT_04bb32e0;
    if (7 < local_48) {
      local_48 = 0xff;
    }
    iVar6 = FUN_014e5418(&local_70,param_2,0,0);
    if (iVar6 == 9) {
      lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_3 * 0x740;
      if (7 < *param_3) {
        lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      uVar9 = FUN_022cc1b0(lVar12 + 0x658,&local_70);
      if ((uVar9 & 1) != 0) {
        iVar6 = uStack_50._4_4_;
        fVar18 = (float)local_60._4_4_;
        local_80 = (char *)CONCAT44(local_80._4_4_,uStack_50._4_4_);
        fVar17 = (float)(int)local_60 * 5.0 + 2.5;
        fVar19 = fVar18 * 5.0 + 2.5;
        local_b0 = (undefined *)(ulong)(uint)fVar17;
        local_a8 = (char *)CONCAT44(local_a8._4_4_,fVar19);
        if (uStack_50._4_4_ - 2U < 4) {
          lVar12 = *(long *)PTR_DAT_04bb2720;
          if (lVar12 == 0) {
            puVar16 = &DAT_055c04a0;
          }
          else {
            puVar16 = &DAT_055c04a0;
            if (*(long *)(lVar12 + 0x330) != 0) {
              puVar16 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
              iVar7 = FUN_006bd550(*puVar16,0);
              puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar7 != 0x758f7eaf) {
                puVar16 = &DAT_055c04a0;
              }
            }
          }
          fVar17 = (float)FUN_0153e6b0(&local_b0,iVar6,*(undefined4 *)(puVar16 + 7));
          iVar6 = uStack_50._4_4_;
        }
        else {
          fVar18 = 40.0;
          if (uStack_50._4_4_ != 7) {
            fVar18 = 0.0;
          }
        }
        *(undefined4 *)(param_1 + 0x48) = 3;
        uVar10 = 2;
        uVar11 = (undefined4)*param_2;
        uVar15 = *(undefined4 *)((long)param_2 + 4);
        *(float *)(param_1 + 0x58) = fVar17;
        *(float *)(param_1 + 0x5c) = fVar18;
        goto LAB_034567b0;
      }
    }
    else {
      local_80 = (char *)CONCAT44(local_80._4_4_,iVar6);
      uVar11 = 0x14;
      switch(iVar6) {
      case 1:
        goto switchD_0345665c_caseD_1;
      case 2:
        goto switchD_0345665c_caseD_2;
      case 4:
        goto switchD_0345665c_caseD_4;
      case 5:
        goto switchD_0345665c_caseD_5;
      }
    }
    goto switchD_0345665c_caseD_3;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_44 = 0;
  local_70 = *(undefined **)PTR_DAT_04bb37e0;
  local_48 = *PTR_DAT_04bb32e0;
  pcVar1 = PTR_DAT_04bb2010 + 0x10;
  if (7 < local_48) {
    local_48 = 0xff;
  }
  local_60 = 0;
  local_78 = 0;
  local_80 = pcVar1;
  local_68 = pcVar1;
  iVar6 = FUN_014e55d8(&local_70,&local_80,param_2,0);
  if (iVar6 == 9) {
    local_b0 = local_70;
    local_a0 = (int)local_60;
    uStack_9c = local_60._4_4_;
    lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_3 * 0x740;
    if (7 < *param_3) {
      lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    local_90 = (undefined4)local_78;
    uStack_8c = local_78._4_4_;
    local_88 = (undefined4)local_58;
    uStack_84 = uStack_50._4_4_;
    local_a8 = pcVar1;
    local_98 = pcVar1;
    uVar9 = FUN_022b4660(lVar12 + 0xb0,&local_b0);
    if ((uVar9 & 1) == 0) goto switchD_0345665c_caseD_3;
    iVar6 = uStack_50._4_4_;
    fVar18 = (float)local_60._4_4_;
    fVar17 = (float)(int)local_60 * 5.0 + 2.5;
    fVar19 = fVar18 * 5.0 + 2.5;
    local_b0 = (undefined *)(ulong)(uint)fVar17;
    local_a8 = (char *)CONCAT44(local_a8._4_4_,fVar19);
    if (uStack_50._4_4_ - 2U < 4) {
      lVar12 = *(long *)PTR_DAT_04bb2720;
      if (lVar12 == 0) {
        puVar16 = &DAT_055c04a0;
      }
      else {
        puVar16 = &DAT_055c04a0;
        if (*(long *)(lVar12 + 0x330) != 0) {
          puVar16 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
          iVar7 = FUN_006bd550(*puVar16,0);
          puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar7 != 0x758f7eaf) {
            puVar16 = &DAT_055c04a0;
          }
        }
      }
      fVar17 = (float)FUN_0153e6b0(&local_b0,iVar6,*(undefined4 *)(puVar16 + 7));
      iVar6 = uStack_50._4_4_;
    }
    else {
      fVar18 = 40.0;
      if (uStack_50._4_4_ != 7) {
        fVar18 = 0.0;
      }
    }
    *(undefined4 *)(param_1 + 0x48) = 3;
    uVar10 = 4;
    uVar11 = (undefined4)*param_2;
    uVar15 = *(undefined4 *)((long)param_2 + 4);
    *(float *)(param_1 + 0x58) = fVar17;
    *(float *)(param_1 + 0x5c) = fVar18;
LAB_034567b0:
    *(float *)(param_1 + 0x60) = fVar19;
    *(int *)(param_1 + 100) = iVar6;
    *(undefined4 *)(param_1 + 0x50) = uVar11;
    *(undefined4 *)(param_1 + 0x54) = uVar15;
    goto LAB_034567bc;
  }
  uVar11 = 0x14;
  switch(iVar6) {
  case 1:
switchD_0345665c_caseD_1:
    if (*(long *)PTR_DAT_04bbbc38 == 0) goto switchD_0345665c_caseD_3;
    iVar6 = FUN_014e4978();
    uVar11 = 8;
    if (iVar6 != 2) {
      uVar11 = 1;
    }
    break;
  case 2:
switchD_0345665c_caseD_2:
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 == -1) {
      uVar11 = 2;
    }
    else {
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,1);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar11 = 2;
      if ((*puVar2 & 2) != 0) {
        uVar11 = 3;
      }
    }
    break;
  default:
switchD_0345665c_caseD_3:
    uVar11 = 1;
    break;
  case 4:
    break;
  case 5:
switchD_0345665c_caseD_5:
    uVar11 = 0x13;
  }
switchD_0345665c_caseD_4:
  *(undefined4 *)(param_1 + 0x84) = uVar11;
  *(undefined4 *)(param_1 + 0x48) = 3;
  uVar10 = 8;
LAB_034567bc:
  FUN_03ebb160(param_1,uVar10);
  return;
}

