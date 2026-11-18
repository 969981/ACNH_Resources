
void FUN_0378cc0c(long param_1,char *param_2)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined **local_e0;
  undefined ***pppuStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined **local_a8;
  byte *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *puStack_88;
  char *local_80;
  undefined *local_78;
  char *local_70;
  undefined *local_68;
  undefined8 local_60;
  long lStack_58;
  
  fVar15 = *(float *)(param_2 + 0xc);
  pbVar1 = (byte *)(param_1 + 0x13e8);
  uVar14 = *(undefined4 *)(param_2 + 0x10);
  fVar16 = fVar15;
  if ((*(int **)PTR_DAT_04bb59b8 != (int *)0x0) &&
     (fVar16 = fVar15 + 15.0, 6 < **(int **)PTR_DAT_04bb59b8 - 1U)) {
    fVar16 = fVar15;
  }
  bVar9 = *(byte *)(param_1 + 0x13e9);
  *(undefined4 *)(param_1 + 0x13f8) = *(undefined4 *)(param_2 + 8);
  *(float *)(param_1 + 0x1408) = fVar16;
  *(undefined4 *)(param_1 + 0x1418) = uVar14;
  if ((bVar9 >> 1 & 1) != 0) {
    if ((*pbVar1 & 1) != 0) {
      *pbVar1 = *pbVar1 & 0xfe;
    }
    bVar9 = bVar9 & 0xfd;
    *(byte *)(param_1 + 0x13e9) = bVar9;
  }
  if ((bVar9 & 1) != 0) {
    if ((*pbVar1 & 1) == 0) {
      *pbVar1 = *pbVar1 | 1;
    }
    *(byte *)(param_1 + 0x13e9) = bVar9 & 0xfe;
  }
  uVar5 = *(uint *)(param_2 + 4);
  local_a8 = (undefined **)CONCAT44(local_a8._4_4_,uVar5);
  uVar10 = uVar5 - 0x20;
  if ((int)uVar5 < 0x20) {
    uVar10 = uVar5;
  }
  uVar11 = 0x1ffbf;
  if ((int)uVar5 < 0x20) {
    uVar11 = 0xfffffff8;
  }
  uVar11 = uVar11 & 1 << (ulong)(uVar10 & 0x1f);
  uVar10 = 0x60040;
  uVar3 = uVar5 - 0x20;
  if ((int)uVar5 < 0x20) {
    uVar3 = uVar5;
  }
  if ((int)uVar5 < 0x20) {
    uVar10 = 6;
  }
  uVar10 = uVar10 & 1 << (ulong)(uVar3 & 0x1f);
  if ((*(int *)(param_2 + 4) == 0) || (*(int *)(param_1 + 0x1450) == *(int *)(param_2 + 4)))
  goto LAB_0378cecc;
  pbVar13 = (byte *)(param_1 + 0x1420);
  *pbVar13 = *pbVar13 & 0xfd;
  FUN_03f45838(param_1 + 0x1430);
  if (*(long *)(param_1 + 0x1428) != 0) {
    *pbVar13 = *pbVar13 & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(param_1 + 0x1428),0);
    *(undefined8 *)(param_1 + 0x1428) = 0;
  }
  puVar7 = PTR_DAT_04bb2120;
  puVar6 = PTR_DAT_04bb2020;
  lVar2 = param_1 + 0x13ec;
  if (uVar11 == 0) {
    if (uVar10 != 0) {
      pppuStack_d8 = (undefined ***)(PTR_DAT_04bb2020 + 0x10);
      local_e0 = (undefined **)(PTR_DAT_04bb3c68 + 0x10);
      local_c0 = PTR_DAT_04bb2120;
      uStack_b8 = 0;
      local_d0 = PTR_DAT_04bb2120;
      puStack_c8 = (undefined *)pppuStack_d8;
      local_b0 = lVar2;
      if ((*pbVar13 >> 1 & 1) == 0) {
        *pbVar13 = *pbVar13 | 2;
        uVar8 = *(undefined8 *)PTR_DAT_04bcb3d8;
        local_60 = *(undefined8 *)(param_1 + 0x10);
        local_80 = puVar7;
        if (**(char **)(param_1 + 0x468) != '\0') {
          local_80 = *(char **)(param_1 + 0x468);
        }
        local_70 = local_80;
        goto LAB_0378ceb4;
      }
    }
  }
  else {
    lVar4 = param_1 + 0x3f8 + (ulong)*(uint *)(param_2 + 4) * 0x50;
    if (0x32 < *(uint *)(param_2 + 4)) {
      lVar4 = param_1 + 0x3f8;
    }
    pppuStack_d8 = (undefined ***)(PTR_DAT_04bb2020 + 0x10);
    pcVar12 = *(char **)(lVar4 + 0x20);
    local_c0 = PTR_DAT_04bb2120;
    uStack_b8 = 0;
    local_d0 = PTR_DAT_04bb2120;
    local_e0 = &PTR_FUN_04b46e20;
    puStack_c8 = (undefined *)pppuStack_d8;
    local_b0 = lVar2;
    if ((*pbVar13 >> 1 & 1) == 0) {
      *pbVar13 = *pbVar13 | 2;
      local_70 = *(char **)(param_1 + 0x508);
      local_60 = *(undefined8 *)(param_1 + 0x48);
      uVar8 = *(undefined8 *)PTR_DAT_04bcb3d8;
      local_80 = pcVar12;
LAB_0378ceb4:
      local_90 = &local_e0;
      local_98 = 0;
      local_a8 = (undefined **)((ulong)local_a8 & 0xffffffffffff0000);
      uStack_b8 = 0;
      local_d0 = puVar7;
      pppuStack_d8 = (undefined ***)(puVar6 + 0x10);
      puStack_c8 = (undefined *)pppuStack_d8;
      local_c0 = local_d0;
      local_b0 = lVar2;
      local_a0 = pbVar13;
      puStack_88 = (undefined *)pppuStack_d8;
      local_78 = (undefined *)pppuStack_d8;
      local_68 = (undefined *)pppuStack_d8;
      lStack_58 = param_1 + 0x1430;
      FUN_03839ca0(uVar8,&local_a8,0);
    }
  }
  *(undefined4 *)(param_1 + 0x1450) = *(undefined4 *)(param_2 + 4);
LAB_0378cecc:
  FUN_038386d0(param_1 + 0x1420);
  if ((*(byte *)(param_1 + 0x1420) & 1) != 0) {
    if (uVar11 == 0) {
      if (uVar10 == 0) {
        return;
      }
      local_a8 = (undefined **)(PTR_DAT_04bb3c80 + 0x10);
      bVar9 = *param_2 != '\0' & *pbVar1;
    }
    else {
      local_a8 = &PTR_LAB_04b46e50;
      bVar9 = *param_2 != '\0' & *pbVar1;
    }
    local_98 = 0;
    local_a0 = (byte *)((ulong)local_a0 & 0xffffffffffffff00);
    local_90._0_2_ = CONCAT11(bVar9,1);
    pppuStack_d8 = &local_a8;
    local_e0 = (undefined **)0x0;
    FUN_03838950(param_1 + 0x1420,&local_e0);
  }
  return;
}

