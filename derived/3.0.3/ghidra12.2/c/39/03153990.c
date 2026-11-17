
/* WARNING: Removing unreachable block (ram,0x03153d54) */
/* WARNING: Removing unreachable block (ram,0x03153d64) */
/* WARNING: Removing unreachable block (ram,0x03153e2c) */
/* WARNING: Removing unreachable block (ram,0x03153d6c) */
/* WARNING: Removing unreachable block (ram,0x03153da8) */
/* WARNING: Removing unreachable block (ram,0x03153db0) */
/* WARNING: Removing unreachable block (ram,0x03153db8) */
/* WARNING: Removing unreachable block (ram,0x03153e30) */
/* WARNING: Removing unreachable block (ram,0x03153e64) */
/* WARNING: Removing unreachable block (ram,0x03153e74) */
/* WARNING: Removing unreachable block (ram,0x03153e44) */
/* WARNING: Removing unreachable block (ram,0x03153e54) */
/* WARNING: Removing unreachable block (ram,0x03153b6c) */
/* WARNING: Removing unreachable block (ram,0x03153b7c) */
/* WARNING: Removing unreachable block (ram,0x03153c28) */
/* WARNING: Removing unreachable block (ram,0x03153b84) */
/* WARNING: Removing unreachable block (ram,0x03153bc0) */
/* WARNING: Removing unreachable block (ram,0x03153bc8) */
/* WARNING: Removing unreachable block (ram,0x03153bd0) */
/* WARNING: Removing unreachable block (ram,0x03153c2c) */
/* WARNING: Removing unreachable block (ram,0x03153c74) */
/* WARNING: Removing unreachable block (ram,0x03153c84) */
/* WARNING: Removing unreachable block (ram,0x03153c40) */
/* WARNING: Removing unreachable block (ram,0x03153c50) */
/* WARNING: Removing unreachable block (ram,0x03154200) */
/* WARNING: Removing unreachable block (ram,0x03154218) */
/* WARNING: Removing unreachable block (ram,0x03153c58) */
/* WARNING: Removing unreachable block (ram,0x03153c70) */
/* WARNING: Removing unreachable block (ram,0x03153ae0) */
/* WARNING: Removing unreachable block (ram,0x03153ae8) */
/* WARNING: Removing unreachable block (ram,0x03153af0) */
/* WARNING: Removing unreachable block (ram,0x03153afc) */
/* WARNING: Removing unreachable block (ram,0x03153ce0) */
/* WARNING: Removing unreachable block (ram,0x03153ce8) */
/* WARNING: Removing unreachable block (ram,0x03153cf8) */
/* WARNING: Removing unreachable block (ram,0x03153dd0) */
/* WARNING: Removing unreachable block (ram,0x03153d00) */
/* WARNING: Removing unreachable block (ram,0x03153d3c) */
/* WARNING: Removing unreachable block (ram,0x03153d44) */
/* WARNING: Removing unreachable block (ram,0x03153d4c) */
/* WARNING: Removing unreachable block (ram,0x03153dd4) */
/* WARNING: Removing unreachable block (ram,0x03153e14) */
/* WARNING: Removing unreachable block (ram,0x03153e24) */
/* WARNING: Removing unreachable block (ram,0x03153e78) */
/* WARNING: Removing unreachable block (ram,0x03153de8) */
/* WARNING: Removing unreachable block (ram,0x03153df8) */
/* WARNING: Removing unreachable block (ram,0x03153e00) */
/* WARNING: Removing unreachable block (ram,0x03153e58) */
/* WARNING: Removing unreachable block (ram,0x03153e60) */
/* WARNING: Removing unreachable block (ram,0x0315421c) */
/* WARNING: Removing unreachable block (ram,0x03154234) */
/* WARNING: Removing unreachable block (ram,0x03153fb8) */
/* WARNING: Removing unreachable block (ram,0x03153fc4) */
/* WARNING: Removing unreachable block (ram,0x03153f4c) */
/* WARNING: Removing unreachable block (ram,0x03153f5c) */
/* WARNING: Removing unreachable block (ram,0x03154024) */
/* WARNING: Removing unreachable block (ram,0x03153f64) */
/* WARNING: Removing unreachable block (ram,0x03153fa0) */
/* WARNING: Removing unreachable block (ram,0x03153fa8) */
/* WARNING: Removing unreachable block (ram,0x03153fb0) */
/* WARNING: Removing unreachable block (ram,0x03154028) */
/* WARNING: Removing unreachable block (ram,0x0315405c) */
/* WARNING: Removing unreachable block (ram,0x0315406c) */
/* WARNING: Removing unreachable block (ram,0x0315403c) */
/* WARNING: Removing unreachable block (ram,0x0315404c) */

undefined8 FUN_03153990(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  byte local_5c [4];
  byte local_58 [4];
  byte local_54 [4];
  uint local_38 [2];
  
  local_38[1] = 0;
  uVar5 = FUN_03154a30(0);
  local_38[1] = 1;
  uVar1 = (uint)((uVar5 & 1) != 0);
  uVar5 = FUN_03154a30(1);
  local_38[1] = 2;
  uVar9 = uVar1 | 2;
  if ((uVar5 & 1) == 0) {
    uVar9 = uVar1;
  }
  uVar5 = FUN_03154a30(2);
  local_38[1] = 0;
  uVar1 = uVar9 | 4;
  if ((uVar5 & 1) == 0) {
    uVar1 = uVar9;
  }
  bVar3 = *param_1;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  local_38[0]._0_1_ = bVar3;
  uVar5 = FUN_031536a0(0,local_38);
  local_38[1] = 1;
  uVar9 = (uint)((uVar5 & 1) != 0);
  local_38[0]._0_1_ = bVar3;
  uVar5 = FUN_031536a0(1,local_38);
  local_38[1] = 2;
  uVar2 = uVar9 | 2;
  if ((uVar5 & 1) == 0) {
    uVar2 = uVar9;
  }
  local_38[0] = CONCAT31(local_38[0]._1_3_,bVar3);
  uVar5 = FUN_031536a0(2,local_38);
  local_38[0] = 0;
  uVar9 = uVar2 | 4;
  if ((uVar5 & 1) == 0) {
    uVar9 = uVar2;
  }
  uVar9 = uVar9 & uVar1;
  if ((uVar9 & 1) != 0) {
    local_54[0] = *param_1;
    local_38[1] = 0;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
    iVar7 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar7 = 0;
      }
      else {
        puVar6 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar4 = FUN_006bd550(*puVar6,0);
        iVar7 = 0;
        if ((iVar4 == 0x758f7eaf) && (iVar7 = 0, DAT_05aed670 != 0)) {
          iVar7 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar7 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (DAT_05292434 == iVar7) {
      if (DAT_0523a180 != 0) {
        uVar5 = FUN_016b74c0(DAT_0523a180,0);
joined_r0x03153c8c:
        if ((uVar5 & 1) != 0) goto LAB_03153ca0;
      }
    }
    else if (DAT_05abbc58 != 0) {
      uVar5 = FUN_0372e2d0(DAT_05abbc58,0);
      goto joined_r0x03153c8c;
    }
    uVar9 = uVar9 & (1 << (ulong)(local_38[0] & 0x1f) ^ 0xffffffffU);
  }
LAB_03153ca0:
  local_38[0] = 1;
  if ((uVar9 & 2) != 0) {
    local_54[0] = *param_1;
    local_38[1] = 1;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
    uVar5 = FUN_025461a0(local_54);
    if ((uVar5 & 1) == 0) {
      uVar9 = uVar9 & (1 << (ulong)(local_38[0] & 0x1f) ^ 0xffffffffU);
    }
  }
  local_38[0] = 2;
  if ((uVar9 & 4) == 0) goto LAB_03154088;
  local_54[0] = *param_1;
  local_38[1] = 2;
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
  iVar7 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar7 = 0;
    }
    else {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      iVar7 = 0;
      if ((iVar4 == 0x758f7eaf) && (iVar7 = 0, DAT_05aed670 != 0)) {
        iVar7 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar7 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  if (DAT_05292434 == iVar7) {
    if (DAT_0523adf0 != 0) {
      if (*(int *)(DAT_0523adf0 + 0x98) == 0) {
        uVar5 = FUN_020b89e0(*(undefined8 *)PTR_DAT_04bb3968,1);
      }
      else {
        uVar5 = FUN_016b74c0(*(undefined8 *)PTR_DAT_04bb9a68,1);
      }
joined_r0x03154074:
      if ((uVar5 & 1) != 0) goto LAB_03154088;
    }
  }
  else if (DAT_05abbc58 != 0) {
    uVar5 = FUN_0372e2d0(DAT_05abbc58,1);
    goto joined_r0x03154074;
  }
  uVar9 = uVar9 & (1 << (ulong)(local_38[0] & 0x1f) ^ 0xffffffffU);
LAB_03154088:
  if (uVar9 == 0) {
    local_38[1] = 0;
    if ((uVar1 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      local_58[0] = *param_1;
      uVar8 = 1;
      if (7 < local_58[0]) {
        local_58[0] = 0xff;
      }
      FUN_03149b50(0,local_58,1);
    }
    local_38[1] = 1;
    if ((uVar1 & 2) != 0) {
      local_58[0] = *param_1;
      uVar8 = 1;
      if (7 < local_58[0]) {
        local_58[0] = 0xff;
      }
      FUN_03149b50(1,local_58,1);
    }
    local_38[1] = 2;
    if ((uVar1 & 4) != 0) {
      local_58[0] = *param_1;
      uVar8 = 1;
      if (7 < local_58[0]) {
        local_58[0] = 0xff;
      }
      FUN_03149b50(2,local_58,1);
    }
  }
  else {
    local_38[1] = 0;
    uVar8 = 0;
    if ((uVar9 & 1) == 0) {
      local_38[1] = 1;
      uVar8 = 1;
      if ((uVar9 & 2) == 0) {
        local_38[1] = 2;
        uVar8 = 2;
        if ((uVar9 & 4) == 0) {
          return 0;
        }
      }
    }
    local_5c[0] = *param_1;
    if (7 < local_5c[0]) {
      local_5c[0] = 0xff;
    }
    FUN_03149b50(uVar8,local_5c,0);
    uVar8 = 2;
  }
  return uVar8;
}

