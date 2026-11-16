
void FUN_025ba248(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  int iVar6;
  byte bVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  undefined *local_2c8;
  char *pcStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined *local_298;
  undefined1 *puStack_290;
  undefined4 local_288;
  undefined1 local_284 [15];
  undefined1 local_275;
  undefined1 local_245;
  undefined *local_240;
  undefined1 *puStack_238;
  undefined4 local_230;
  undefined1 local_22c [63];
  undefined1 local_1ed;
  undefined8 local_1e8;
  undefined6 uStack_1e0;
  undefined2 local_1da;
  undefined6 uStack_1d8;
  undefined1 auStack_1d2 [2];
  uint local_1d0;
  undefined *local_1c8;
  undefined8 *puStack_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined *local_198;
  undefined1 *puStack_190;
  undefined4 local_188;
  undefined1 local_184 [63];
  undefined1 local_145;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined8 local_e8;
  undefined6 uStack_e0;
  undefined2 local_da;
  undefined6 uStack_d8;
  undefined1 auStack_d2 [2];
  undefined *local_d0;
  char *local_c8;
  undefined *local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_6d;
  
  FUN_02602950(param_1,0x50);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_2c0 = "IsLocal";
  local_2c8 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_2c8,
                 *(int *)(*(long *)(*(long *)PTR_DAT_04bb21d8 + 0x3d8) + 0x10) == 1);
    pcStack_2c0 = "PlayerNSAID";
    local_2c8 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_2c8,*(undefined8 *)param_2[1]);
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_2c0 = "PlayerPOPID";
      local_2c8 = puVar1;
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),&local_2c8,*(undefined8 *)param_2[2]);
        pcStack_2c0 = "PlayerLocalPID";
        local_2c8 = puVar1;
        if (*(long *)(param_1 + 8) != 0) {
          FUN_02605660(*(long *)(param_1 + 8),&local_2c8,*(undefined4 *)(*param_2 + 0x1c));
          local_2c8 = PTR_DAT_04bb2020 + 0x10;
          pcStack_2c0 = "PlayerLocalVID";
          if (*(long *)(param_1 + 8) != 0) {
            FUN_02605660(*(long *)(param_1 + 8),&local_2c8,*(undefined4 *)*param_2);
          }
        }
      }
    }
  }
  local_1b4 = 0;
  local_1b8 = 0xb;
  lVar12 = *param_2;
  local_1b0 = 0xffffffff;
  uStack_1a8 = 0xffffffff00000000;
  puStack_190 = local_184;
  puStack_1c0 = &local_e8;
  local_1a0 = 0xffffffff;
  local_188 = 0x40;
  local_145 = 0;
  local_184[0] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_130 = 0x40;
  local_ed = 0;
  local_12c[0] = 0;
  puStack_138 = local_12c;
  puVar2 = PTR_DAT_04bb5128 + 0x10;
  puVar5 = auStack_d2;
  if (auStack_d2 <= (undefined1 *)((long)&local_e8 + 2U)) {
    puVar5 = (undefined1 *)((long)&local_e8 + 2U);
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_da = 0;
  uStack_d8 = 0;
  local_1c8 = puVar2;
  local_198 = puVar1;
  local_140 = puVar1;
  memset(puStack_1c0,0,(ulong)(puVar5 + (-0xe1 - (long)&local_1c8)) & 0xfffffffffffffffc | 2);
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,10);
  local_b8 = (char *)(lVar12 + 0x20);
  FUN_0082b014(&local_1c8);
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2b8 = 0;
  local_2a0 = CONCAT31(local_2a0._1_3_,1);
  local_29c = 0;
  puVar3 = PTR_DAT_04bc0cd8 + 0x10;
  pcStack_2c0 = (char *)0x0;
  local_2c8 = puVar3;
  FUN_02906b00(&local_2c8,&local_1c8,&local_c0);
  iVar6 = *(int *)(lVar12 + 0x34);
  puVar9 = (undefined4 *)(**(code **)(local_1c8 + 0x40))(&local_1c8);
  uVar11 = 1;
  if (iVar6 == 1) {
    uVar11 = 2;
  }
  *puVar9 = uVar11;
  puVar4 = PTR_DAT_04bb2020 + 0x10;
  local_b8 = "PlayerPlayerName";
  local_c0 = puVar4;
  if (*(long *)(param_1 + 8) != 0) {
    pcStack_2c0 = (char *)((long)&local_2b8 + 4);
    local_275 = 0;
    local_2b8 = CONCAT35(local_2b8._5_3_,0x40);
    local_2c8 = puVar1;
    FUN_006f4bf4(&local_1c8,&local_2c8,0);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605980(*(long *)(param_1 + 8),&local_c0,&local_2c8);
    }
  }
  uVar8 = (ulong)local_2b8 >> 0x20;
  local_2b8 = CONCAT44((uint)uVar8 & 0xffffff00,0xb);
  pcStack_2c0 = (char *)&local_1e8;
  local_2a0 = 0xffffffff;
  lVar12 = *param_2;
  local_288 = 0x40;
  local_245 = 0;
  local_284[0] = 0;
  local_230 = 0x40;
  local_1ed = 0;
  local_22c[0] = 0;
  local_2b0 = 0xffffffff;
  uStack_2a8 = 0xffffffff00000000;
  puStack_290 = local_284;
  puStack_238 = local_22c;
  puVar5 = auStack_1d2;
  if (auStack_1d2 <= (undefined1 *)((long)&local_1e8 + 2U)) {
    puVar5 = (undefined1 *)((long)&local_1e8 + 2U);
  }
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1da = 0;
  uStack_1d8 = 0;
  local_2c8 = puVar2;
  local_298 = puVar1;
  local_240 = puVar1;
  memset(pcStack_2c0,0,(ulong)(puVar5 + (-0xe1 - (long)&local_2c8)) & 0xfffffffffffffffc | 2);
  local_c8 = (char *)(lVar12 + 4);
  local_1d0 = 2;
  local_d0 = (undefined *)CONCAT44(local_d0._4_4_,10);
  FUN_0082b014(&local_2c8);
  local_98 = 1;
  local_a8 = 0;
  uStack_a0 = 0;
  local_94 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_c0 = puVar3;
  FUN_02906b00(&local_c0,&local_2c8,&local_d0);
  bVar7 = *(byte *)(lVar12 + 0x18);
  local_c8 = "PlayerLandName";
  local_1d0 = 2;
  if (bVar7 < 4) {
    local_1d0 = (uint)bVar7;
  }
  local_d0 = puVar4;
  if (*(long *)(param_1 + 8) != 0) {
    local_6d = 0;
    local_b8 = (char *)((long)&local_b0 + 4);
    local_b0 = CONCAT35(local_b0._5_3_,0x40);
    local_c0 = PTR_DAT_04bb2bc0 + 0x10;
    FUN_006f4bf4(&local_2c8,&local_c0,0);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605980(*(long *)(param_1 + 8),&local_d0,&local_c0);
      local_c0 = PTR_DAT_04bb2020 + 0x10;
      local_b8 = "OppositeNum";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_c0,(long)(int)param_2[3]);
      }
    }
  }
  if (*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) {
    lVar12 = *(long *)(param_1 + 8);
    if (lVar12 == 0) {
      return;
    }
    lVar10 = -1;
  }
  else {
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,*(int *)(*(long *)PTR_DAT_04bbaed0 + 0x3c));
    lVar10 = (long)*(int *)(*(long *)PTR_DAT_04bbaed0 + 0x3c);
    lVar12 = *(long *)(param_1 + 8);
    if (lVar12 == 0) {
      return;
    }
  }
  local_b8 = "MultiPlaySession";
  local_c0 = PTR_DAT_04bb2020 + 0x10;
  FUN_026054d0(lVar12,&local_c0,lVar10);
  return;
}

