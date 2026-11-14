
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01a19d20(float param_1,undefined8 param_2,long param_3,char *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
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
  float local_b4 [2];
  float local_ac;
  undefined *local_a8;
  int local_a0;
  int local_9c;
  byte local_98;
  
  puVar3 = PTR_DAT_04bbc1a0;
  puVar8 = PTR_DAT_04bb27c8;
  puVar2 = PTR_DAT_04bb2010;
  if ((*param_4 != '\0') && (sVar5 = *(short *)PTR_DAT_04bb6298, sVar5 != -1)) {
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar4 >> 0x1a & 1) != 0) && ((*puVar4 >> 1 & 1) != 0)) &&
       (lVar13 = *(long *)PTR_DAT_04bb59d8, lVar13 != 0)) {
      if (*(int *)(param_3 + 8) < *(int *)(lVar13 + 0x28)) {
        return 0;
      }
      if (*(int *)(lVar13 + 0x38) < *(int *)(param_3 + 8)) {
        return 0;
      }
      if (*(int *)(param_3 + 0xc) < *(int *)(lVar13 + 0x2c)) {
        return 0;
      }
      if (*(int *)(lVar13 + 0x3c) < *(int *)(param_3 + 0xc)) {
        return 0;
      }
    }
  }
  local_e0 = PTR_DAT_04bbc1a0 + 0x10;
  local_f0 = PTR_DAT_04bb2010 + 0x10;
  iVar6 = *(uint *)(param_3 + 8) - (uint)((*(uint *)(param_3 + 8) & 0x80000001) == 1);
  local_e4 = *(uint *)(param_3 + 0xc) - (uint)((*(uint *)(param_3 + 0xc) & 0x80000001) == 1);
  local_c0 = iVar6 + 1;
  iStack_bc = local_e4 + 1;
  iVar1 = local_e4 + 2;
  local_e8 = iVar6;
  puStack_d8 = local_f0;
  local_d0 = iVar6;
  iStack_cc = local_e4;
  local_c8 = local_f0;
  do {
    local_a0 = 0;
    local_a8 = (undefined *)0x0;
    local_b4[0] = 1.12104e-44;
    local_a8 = (undefined *)0x100;
    local_a0 = 0;
    lVar13 = *(long *)puVar8;
    if (((lVar13 != 0) && (*(long *)(lVar13 + 0xa8) != 0)) &&
       (uVar11 = FUN_00949798(lVar13 + 0x28,&local_f0,&local_a8), (uVar11 & 1) != 0)) {
      return 0;
    }
    puVar9 = PTR_DAT_04bbfe68;
    puVar7 = PTR_DAT_04bb2720;
    if (local_e8 < local_c0) {
      local_e8 = local_e8 + 1;
    }
    else {
      local_e4 = local_e4 + 1;
      local_e8 = local_d0;
    }
  } while ((iVar6 != local_e8) || (iVar1 != local_e4));
  local_e0 = puVar3 + 0x10;
  local_f0 = puVar2 + 0x10;
  iVar6 = *(uint *)(param_3 + 8) - (uint)((*(uint *)(param_3 + 8) & 0x80000001) == 1);
  local_e4 = *(uint *)(param_3 + 0xc) - (uint)((*(uint *)(param_3 + 0xc) & 0x80000001) == 1);
  local_c0 = iVar6 + 1;
  iStack_bc = local_e4 + 1;
  iVar1 = local_e4 + 2;
  puVar2 = PTR_DAT_04bb2018 + 0x10;
  puVar3 = PTR_DAT_04bbfe68 + 0x10;
  local_e8 = iVar6;
  puStack_d8 = local_f0;
  local_d0 = iVar6;
  iStack_cc = local_e4;
  local_c8 = local_f0;
  while( true ) {
    fVar15 = (float)local_e8 * 0.5;
    uVar14 = 0;
    if (fVar15 != (float)(int)fVar15) {
      uVar14 = (uint)(fVar15 < 0.0);
    }
    local_a0 = (int)fVar15 - uVar14;
    fVar15 = (float)local_e4 * 0.5;
    uVar14 = 0;
    if (fVar15 != (float)(int)fVar15) {
      uVar14 = (uint)(fVar15 < 0.0);
    }
    local_9c = (int)fVar15 - uVar14;
    local_a8 = puVar2;
    uVar11 = FUN_01318220(&local_a8);
    if ((uVar11 & 1) != 0) {
      return 0;
    }
    local_ac = (float)local_e4 * 5.0 + 2.5;
    local_b4[0] = (float)local_e8 * 5.0 + 2.5;
    fVar15 = (float)FUN_015cb8d4(local_b4,0);
    lVar13 = *(long *)puVar7;
    local_a0 = 0;
    local_a8 = puVar3;
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x330) == 0)) {
      puVar12 = &DAT_055c04a0;
    }
    else {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar10 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
    local_9c = *(int *)(puVar12 + 7);
    local_98 = FUN_017baf44();
    local_98 = local_98 & 1;
    fVar16 = (float)FUN_01a1c290(&local_a8,&local_f0);
    if (param_1 < fVar15 + fVar16) {
      return 0;
    }
    local_a8 = puVar9 + 0x10;
    local_a0 = 0;
    lVar13 = *(long *)puVar7;
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x330) == 0)) {
      puVar12 = &DAT_055c04a0;
    }
    else {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar10 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
    local_9c = *(int *)(puVar12 + 7);
    local_98 = FUN_017baf44();
    local_98 = local_98 & 1;
    fVar15 = (float)FUN_01a1c290(&local_a8,&local_f0);
    if (5.0 < fVar15) {
      return 0;
    }
    uVar11 = FUN_01a1d5d0(&local_f0);
    if ((uVar11 & 1) != 0) {
      return 0;
    }
    local_a0 = 0;
    local_a8 = (undefined *)0x0;
    local_b4[0] = 7.00649e-45;
    local_a8 = (undefined *)0x20;
    local_a0 = 0;
    lVar13 = *(long *)puVar8;
    if (((lVar13 != 0) && (*(long *)(lVar13 + 0xa8) != 0)) &&
       (uVar11 = FUN_00949898(lVar13 + 0x28,&local_f0,&local_a8), (uVar11 & 1) != 0)) break;
    if (local_e8 < local_c0) {
      local_e8 = local_e8 + 1;
    }
    else {
      local_e4 = local_e4 + 1;
      local_e8 = local_d0;
    }
    if ((iVar6 == local_e8) && (iVar1 == local_e4)) {
      return 1;
    }
  }
  return 0;
}

