
void FUN_032b6c7c(long *param_1,undefined4 *param_2,byte param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ushort uVar11;
  ushort uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  
  puVar5 = PTR_DAT_04bc8e68;
  puVar4 = PTR_PTR_04bb2238;
  if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
    lVar6 = *(long *)(*(long *)(param_1[2] + 0xf0) + 0x18);
  }
  else {
    local_80 = PTR_DAT_04bc8e68 + 0x10;
    local_78 = *(char **)(PTR_PTR_04bb2238 + 8);
    lVar6 = FUN_032cb8e0(&local_88,&local_80,*(undefined8 *)(param_1[2] + 0xf0));
  }
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
  lVar6 = *param_1;
  plVar7 = *(long **)(lVar6 + 0x570);
  puVar1 = (undefined *)0x0;
  if (plVar7 != (long *)0x0) {
    puVar1 = PTR_LAB_04bc8ef0;
  }
  if (puVar1 == (undefined *)0x0) {
    lVar6 = *(long *)(*(long *)(lVar6 + 0x20) + 0x18);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
  }
  else {
    uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,1);
    if ((uVar8 & 1) != 0) {
      FUN_032883c0(lVar6,1);
    }
  }
  lVar6 = *param_1;
  FUN_0328a0b0(lVar6,6,1,param_5 & 1);
  if (((param_5 & 1) == 0) &&
     (((*(ushort *)(lVar6 + 0x578) >> 5 & 1) == 0 || ((*(ushort *)(lVar6 + 0x578) >> 4 & 1) == 0))))
  {
    uVar12 = *(ushort *)(lVar6 + 0x250) | 0x200;
  }
  else {
    uVar12 = *(ushort *)(lVar6 + 0x250) & 0xfdff;
  }
  local_80._0_4_ = 9;
  *(ushort *)(lVar6 + 0x250) = uVar12;
  FUN_0328a2b0(*param_1,param_5 & 1);
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x57c) == '\x02') {
    local_80 = (undefined *)((ulong)local_80._4_4_ << 0x20);
    if ((param_3 & 1) == 0) {
      uVar12 = *(ushort *)(lVar6 + 0x578) & 0xfffe;
    }
    else {
      uVar12 = *(ushort *)(lVar6 + 0x578) | 1;
    }
    plVar7 = *(long **)(lVar6 + 0x548);
    *(ushort *)(lVar6 + 0x578) = uVar12;
    if (plVar7 != (long *)0x0) {
      local_78 = (char *)(((ulong)CONCAT31((int3)((ulong)local_78 >> 0x28),param_3) & 0xffffff01) <<
                         0x20);
      local_80 = (undefined *)lVar6;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_80);
    }
    uVar2 = 7;
    if ((param_3 & 1) == 0) {
      uVar2 = 8;
    }
    FUN_0328a0b0(lVar6,uVar2,1,0);
    lVar6 = *param_1;
  }
  local_78 = "T_00";
  local_88 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x18);
  local_80 = puVar5 + 0x10;
  lVar6 = FUN_0328b6d0(&local_88,&local_80,0);
  FUN_0038a8a4(lVar6,param_1[0xc]);
  FUN_0038aa38(lVar6,param_1 + 10);
  fVar13 = *(float *)(param_1 + 0xb);
  uVar12 = *(ushort *)(lVar6 + 0x114) >> 2 & 1;
  uVar3 = *(ushort *)(lVar6 + 0x114) & 0xfffb;
  if (*(float *)(lVar6 + 0x104) != fVar13) {
    uVar12 = 1;
  }
  uVar11 = 4;
  if (uVar12 == 0) {
    uVar11 = 0;
  }
  *(ushort *)(lVar6 + 0x114) = uVar11 | uVar3;
  if (*(float *)(lVar6 + 0x104) != fVar13) {
    *(float *)(lVar6 + 0x104) = fVar13;
  }
  fVar13 = *(float *)((long)param_1 + 0x5c);
  if (*(float *)(lVar6 + 0x100) != fVar13) {
    uVar12 = 1;
  }
  uVar11 = 4;
  if (uVar12 == 0) {
    uVar11 = 0;
  }
  *(ushort *)(lVar6 + 0x114) = uVar11 | uVar3;
  if (*(float *)(lVar6 + 0x100) != fVar13) {
    *(float *)(lVar6 + 0x100) = fVar13;
  }
  if (**(char **)(param_4 + 8) == '\0') {
    ppuVar9 = &local_d8;
    uStack_d0 = *(undefined8 *)(param_4 + 0x18);
    ppuVar10 = &local_e8;
    local_d8 = PTR_DAT_04bc8e78 + 0x10;
    lVar6 = *param_1;
    local_e8 = puVar5 + 0x10;
    puStack_e0 = &DAT_040c1e5f;
  }
  else {
    puVar1 = puVar5 + 0x10;
    uStack_a0 = *(undefined8 *)(puVar4 + 8);
    plVar7 = *(long **)PTR_DAT_04bc9198;
    if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
      plVar7 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
    }
    local_a8 = puVar1;
    local_98 = puVar1;
    pcStack_90 = *(char **)(param_4 + 8);
    (**(code **)(*plVar7 + 0x18))(&local_80,plVar7,&local_98,&local_a8);
    ppuVar9 = &local_b8;
    puStack_c0 = &DAT_040c1e5f;
    lVar6 = *param_1;
    ppuVar10 = &local_c8;
    local_b8 = PTR_DAT_04bc8e78 + 0x10;
    puStack_b0 = local_78;
    local_c8 = puVar1;
  }
  FUN_0328a808(lVar6,ppuVar9,ppuVar10);
  local_78 = *(char **)(puVar4 + 8);
  uVar14 = *param_2;
  fVar13 = (float)param_2[1];
  if (*local_78 == '\0') {
    lVar6 = *(long *)(*(long *)(param_1[1] + 0xf0) + 0x18);
  }
  else {
    local_80 = puVar5 + 0x10;
    lVar6 = FUN_032cb8e0(&local_88,&local_80,*(undefined8 *)(param_1[1] + 0xf0));
  }
  *(undefined4 *)(lVar6 + 0x30) = uVar14;
  *(float *)(lVar6 + 0x34) = fVar13;
  *(undefined4 *)(lVar6 + 0x38) = 0;
  local_78 = "B_Hit";
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
  local_88 = *(undefined8 *)(*(long *)(*param_1 + 0x20) + 0x18);
  local_80 = puVar5 + 0x10;
  lVar6 = FUN_032ba210(&local_88,&local_80,0);
  local_78 = *(char **)(puVar4 + 8);
  fVar15 = *(float *)(lVar6 + 0x54);
  if (*local_78 == '\0') {
    lVar6 = *(long *)(*(long *)(param_1[2] + 0xf0) + 0x18);
  }
  else {
    local_80 = puVar5 + 0x10;
    lVar6 = FUN_032cb8e0(&local_88,&local_80,*(undefined8 *)(param_1[2] + 0xf0));
  }
  *(undefined4 *)(lVar6 + 0x30) = uVar14;
  *(undefined4 *)(lVar6 + 0x38) = 0;
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
  *(float *)(lVar6 + 0x34) = fVar13 + fVar15 * -0.5;
  return;
}

