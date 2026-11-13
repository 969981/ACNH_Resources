
void FUN_012def80(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined2 uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  long *plVar16;
  void *pvVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 auStack_c0 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 uStack_45;
  uint local_44;
  
  auStack_c0[1] = 0;
  local_78 = &local_c8;
  auStack_c0[2] = 0;
  auStack_c0[3] = 0;
  auStack_c0[4] = 0;
  auStack_c0[5] = 0;
  local_c8 = PTR_DAT_04bbc358 + 0x10;
  auStack_c0[6] = 0;
  auStack_c0[7] = 0;
  auStack_c0[0] = 0;
  local_80 = &PTR_LAB_0498df40;
  FUN_0131c950(&local_80);
  puVar7 = PTR_DAT_04bb2698;
  lVar20 = *(long *)PTR_DAT_04bb2698;
  if (lVar20 == 0) {
    pvVar17 = malloc(0x20);
joined_r0x012df1e8:
    if (pvVar17 != (void *)0x0) {
      *(void **)(param_1 + 0x18) = pvVar17;
      *(undefined4 *)(param_1 + 0x10) = 4;
    }
  }
  else {
    plVar16 = param_2;
    if (param_2 != (long *)0x0) {
LAB_012df028:
      pvVar17 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,0x20,8);
      goto joined_r0x012df1e8;
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar16 = (long *)(lVar20 + 8);
    if (lVar15 != 0) {
      plVar16 = (long *)(lVar15 + 0xa8);
    }
    plVar16 = (long *)*plVar16;
    if (plVar16 != (long *)0x0) goto LAB_012df028;
  }
  uVar12 = nn::os::GetSystemTick();
  local_44 = 0;
  local_80._0_4_ = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  local_80._4_4_ = ((uint)local_80 ^ (uint)local_80 >> 0x1e) * 0x6c078965 + 2;
  local_78._0_4_ = (local_80._4_4_ ^ local_80._4_4_ >> 0x1e) * 0x6c078965 + 3;
  local_78._4_4_ = ((uint)local_78 ^ (uint)local_78 >> 0x1e) * 0x6c078965 + 4;
  iVar13 = FUN_00da1ae4(auStack_c0);
  if (iVar13 == 0) {
LAB_012df114:
    uVar12 = 0;
  }
  else {
    uVar18 = FUN_00da1ae4(auStack_c0);
    uVar12 = (uint)local_80 ^ (uint)local_80 << 0xb;
    local_80._0_4_ = local_80._4_4_;
    local_80._4_4_ = (uint)local_78;
    uVar12 = uVar12 >> 8 ^ local_78._4_4_ >> 0x13 ^ uVar12 ^ local_78._4_4_;
    local_78._0_4_ = local_78._4_4_;
    local_78._4_4_ = uVar12;
    uVar12 = FUN_00edf160(auStack_c0,(int)((ulong)uVar12 * (uVar18 & 0xffffffff) >> 0x20) + 1);
    if ((int)uVar12 < 0) goto LAB_012df114;
    if ((uVar12 & 0xffff) < 0x200) {
      uVar18 = (ulong)(uVar12 >> 5 & 0x7ff);
      *(uint *)((long)auStack_c0 + uVar18 * 4) =
           *(uint *)((long)auStack_c0 + uVar18 * 4) & (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
    }
  }
  puVar10 = PTR_DAT_04bbc350;
  puVar8 = PTR_DAT_04bb27a8;
  local_d8 = (long *)(PTR_DAT_04bbc350 + 0x10);
  lVar20 = *(long *)PTR_DAT_04bb27a8;
  uVar5 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1168);
  if (uVar5 < *(uint *)(lVar20 + 0x1148)) {
    local_d0 = *(undefined8 *)(*(long *)(lVar20 + 0x1150) + (long)(int)uVar5 * 8);
  }
  else {
    local_d0 = 0;
  }
  uVar14 = FUN_0131c3d0(&local_d8);
  uVar11 = FUN_013257f0(&uStack_45,uVar14,&local_80);
  local_d0._0_4_ = CONCAT22(uVar11,(short)uVar12);
  lVar20 = *(long *)puVar7;
  local_d0 = CONCAT44(local_44,(undefined4)local_d0);
  local_d8 = param_2;
  if (lVar20 == 0) {
    plVar16 = malloc(0xe0);
  }
  else {
    plVar19 = param_2;
    if (param_2 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar19 = (long *)(lVar20 + 8);
      if (lVar15 != 0) {
        plVar19 = (long *)(lVar15 + 0xa8);
      }
      plVar19 = (long *)*plVar19;
      plVar16 = (long *)0x0;
      if (plVar19 == (long *)0x0) goto LAB_012df1f8;
    }
    plVar16 = (long *)(**(code **)(*plVar19 + 0x30))(plVar19,0xe0,8);
  }
LAB_012df1f8:
  plVar16[3] = 0;
  plVar16[4] = 0;
  uVar18 = 0;
  plVar19 = plVar16 + 2;
  *plVar19 = 0;
  puVar9 = PTR_DAT_04bbc170;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[0x13] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  *plVar16 = (long)(puVar9 + 0x10);
  plVar16[1] = 0;
  plVar16[0xd] = 0;
  plVar16[0xe] = 0;
  plVar16[0xf] = 0;
  plVar16[0x10] = 0;
  plVar16[0x11] = 0;
  plVar16[0x12] = 0;
  do {
    lVar20 = uVar18 << 0x20;
    uVar3 = uVar18 << 1;
    uVar4 = uVar18 >> 0x1f;
    uVar12 = (int)uVar18 + 2;
    uVar18 = (ulong)uVar12;
    *(undefined2 *)((long)plVar19 + (-uVar4 & 0xfffffffe00000000 | uVar3)) = 0;
    *(undefined2 *)((long)plVar19 + (lVar20 + 0x100000000 >> 0x1f)) = 0;
  } while (uVar12 != 0x48);
  plVar16[0x14] = 0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  *(undefined4 *)(plVar16 + 0x17) = 0;
  puVar6 = PTR_DAT_04bb2010;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  *(undefined4 *)(plVar16 + 0x1a) = 0;
  plVar16[0x18] = (long)puVar1;
  plVar16[0x19] = 0;
  uVar12 = local_44;
  if (*(uint *)(param_1 + 0x10) <= local_44) {
    uVar12 = 0;
  }
  *(long **)(*(long *)(param_1 + 0x18) + (long)(int)uVar12 * 8) = plVar16;
  uVar12 = local_44;
  if (*(uint *)(param_1 + 0x10) <= local_44) {
    uVar12 = 0;
  }
  FUN_012dd8d0(*(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar12 * 8),&local_d8);
  local_44 = 1;
  iVar13 = FUN_00da1ae4(auStack_c0);
  if (iVar13 == 0) {
LAB_012df344:
    uVar12 = 0;
  }
  else {
    uVar18 = FUN_00da1ae4(auStack_c0);
    uVar12 = (uint)local_80 ^ (uint)local_80 << 0xb;
    local_80._0_4_ = local_80._4_4_;
    local_80._4_4_ = (uint)local_78;
    uVar12 = uVar12 >> 8 ^ local_78._4_4_ >> 0x13 ^ uVar12 ^ local_78._4_4_;
    local_78._0_4_ = local_78._4_4_;
    local_78._4_4_ = uVar12;
    uVar12 = FUN_00edf160(auStack_c0,(int)((ulong)uVar12 * (uVar18 & 0xffffffff) >> 0x20) + 1);
    if ((int)uVar12 < 0) goto LAB_012df344;
    if ((uVar12 & 0xffff) < 0x200) {
      uVar18 = (ulong)(uVar12 >> 5 & 0x7ff);
      *(uint *)((long)auStack_c0 + uVar18 * 4) =
           *(uint *)((long)auStack_c0 + uVar18 * 4) & (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
    }
  }
  local_d8 = (long *)(puVar10 + 0x10);
  lVar20 = *(long *)puVar8;
  uVar5 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1168);
  if (uVar5 < *(uint *)(lVar20 + 0x1148)) {
    local_d0 = *(undefined8 *)(*(long *)(lVar20 + 0x1150) + (long)(int)uVar5 * 8);
  }
  else {
    local_d0 = 0;
  }
  uVar14 = FUN_0131c3d0(&local_d8);
  uVar11 = FUN_013257f0(&uStack_45,uVar14,&local_80);
  local_d0._0_4_ = CONCAT22(uVar11,(short)uVar12);
  lVar20 = *(long *)puVar7;
  local_d0 = CONCAT44(local_44,(undefined4)local_d0);
  if (lVar20 == 0) {
    local_d8 = param_2;
    plVar16 = malloc(0xe0);
  }
  else {
    plVar19 = param_2;
    local_d8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar19 = (long *)(lVar20 + 8);
      if (lVar15 != 0) {
        plVar19 = (long *)(lVar15 + 0xa8);
      }
      plVar19 = (long *)*plVar19;
      plVar16 = (long *)0x0;
      if (plVar19 == (long *)0x0) goto LAB_012df408;
    }
    plVar16 = (long *)(**(code **)(*plVar19 + 0x30))(plVar19,0xe0,8);
  }
LAB_012df408:
  plVar16[0x13] = 0;
  uVar18 = 0;
  *plVar16 = (long)(puVar9 + 0x10);
  plVar16[1] = 0;
  plVar16[3] = 0;
  plVar16[4] = 0;
  plVar19 = plVar16 + 2;
  *plVar19 = 0;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  plVar16[0xd] = 0;
  plVar16[0xe] = 0;
  plVar16[0xf] = 0;
  plVar16[0x10] = 0;
  plVar16[0x11] = 0;
  plVar16[0x12] = 0;
  do {
    lVar20 = uVar18 << 0x20;
    uVar3 = uVar18 << 1;
    uVar4 = uVar18 >> 0x1f;
    uVar12 = (int)uVar18 + 2;
    uVar18 = (ulong)uVar12;
    *(undefined2 *)((long)plVar19 + (-uVar4 & 0xfffffffe00000000 | uVar3)) = 0;
    *(undefined2 *)((long)plVar19 + (lVar20 + 0x100000000 >> 0x1f)) = 0;
  } while (uVar12 != 0x48);
  plVar16[0x14] = 0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  *(undefined4 *)(plVar16 + 0x17) = 0;
  *(undefined4 *)(plVar16 + 0x1a) = 0;
  plVar16[0x18] = (long)(puVar6 + 0x10);
  plVar16[0x19] = 0;
  uVar12 = local_44;
  if (*(uint *)(param_1 + 0x10) <= local_44) {
    uVar12 = 0;
  }
  *(long **)(*(long *)(param_1 + 0x18) + (long)(int)uVar12 * 8) = plVar16;
  uVar12 = local_44;
  if (*(uint *)(param_1 + 0x10) <= local_44) {
    uVar12 = 0;
  }
  FUN_012dd8d0(*(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar12 * 8),&local_d8);
  local_44 = 2;
  iVar13 = FUN_00da1ae4(auStack_c0);
  if (iVar13 == 0) {
LAB_012df540:
    uVar12 = 0;
  }
  else {
    uVar18 = FUN_00da1ae4(auStack_c0);
    uVar12 = (uint)local_80 ^ (uint)local_80 << 0xb;
    local_80._0_4_ = local_80._4_4_;
    local_80._4_4_ = (uint)local_78;
    uVar12 = uVar12 >> 8 ^ local_78._4_4_ >> 0x13 ^ uVar12 ^ local_78._4_4_;
    local_78._0_4_ = local_78._4_4_;
    local_78._4_4_ = uVar12;
    uVar12 = FUN_00edf160(auStack_c0,(int)((ulong)uVar12 * (uVar18 & 0xffffffff) >> 0x20) + 1);
    if ((int)uVar12 < 0) goto LAB_012df540;
    if ((uVar12 & 0xffff) < 0x200) {
      uVar18 = (ulong)(uVar12 >> 5 & 0x7ff);
      *(uint *)((long)auStack_c0 + uVar18 * 4) =
           *(uint *)((long)auStack_c0 + uVar18 * 4) & (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
    }
  }
  local_d8 = (long *)(puVar10 + 0x10);
  lVar20 = *(long *)puVar8;
  uVar5 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1168);
  if (uVar5 < *(uint *)(lVar20 + 0x1148)) {
    local_d0 = *(undefined8 *)(*(long *)(lVar20 + 0x1150) + (long)(int)uVar5 * 8);
  }
  else {
    local_d0 = 0;
  }
  uVar14 = FUN_0131c3d0(&local_d8);
  uVar11 = FUN_013257f0(&uStack_45,uVar14,&local_80);
  local_d0._0_4_ = CONCAT22(uVar11,(short)uVar12);
  lVar20 = *(long *)puVar7;
  local_d0 = CONCAT44(local_44,(undefined4)local_d0);
  if (lVar20 == 0) {
    local_d8 = param_2;
    plVar16 = malloc(0xe0);
  }
  else {
    plVar19 = param_2;
    local_d8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar19 = (long *)(lVar20 + 8);
      if (lVar15 != 0) {
        plVar19 = (long *)(lVar15 + 0xa8);
      }
      plVar19 = (long *)*plVar19;
      plVar16 = (long *)0x0;
      if (plVar19 == (long *)0x0) goto LAB_012df604;
    }
    plVar16 = (long *)(**(code **)(*plVar19 + 0x30))(plVar19,0xe0,8);
  }
LAB_012df604:
  plVar16[0x13] = 0;
  uVar18 = 0;
  *plVar16 = (long)(puVar9 + 0x10);
  plVar16[1] = 0;
  plVar16[3] = 0;
  plVar16[4] = 0;
  plVar19 = plVar16 + 2;
  *plVar19 = 0;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  plVar16[0xd] = 0;
  plVar16[0xe] = 0;
  plVar16[0xf] = 0;
  plVar16[0x10] = 0;
  plVar16[0x11] = 0;
  plVar16[0x12] = 0;
  do {
    lVar20 = uVar18 << 0x20;
    uVar3 = uVar18 << 1;
    uVar4 = uVar18 >> 0x1f;
    uVar12 = (int)uVar18 + 2;
    uVar18 = (ulong)uVar12;
    *(undefined2 *)((long)plVar19 + (-uVar4 & 0xfffffffe00000000 | uVar3)) = 0;
    *(undefined2 *)((long)plVar19 + (lVar20 + 0x100000000 >> 0x1f)) = 0;
  } while (uVar12 != 0x48);
  plVar16[0x14] = 0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  *(undefined4 *)(plVar16 + 0x17) = 0;
  *(undefined4 *)(plVar16 + 0x1a) = 0;
  plVar16[0x18] = (long)(puVar6 + 0x10);
  plVar16[0x19] = 0;
  uVar12 = local_44;
  if (*(uint *)(param_1 + 0x10) <= local_44) {
    uVar12 = 0;
  }
  *(long **)(*(long *)(param_1 + 0x18) + (long)(int)uVar12 * 8) = plVar16;
  uVar12 = local_44;
  if (*(uint *)(param_1 + 0x10) <= local_44) {
    uVar12 = 0;
  }
  FUN_012dd8d0(*(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar12 * 8),&local_d8);
  local_44 = 3;
  iVar13 = FUN_00da1ae4(auStack_c0);
  if (iVar13 == 0) {
LAB_012df73c:
    uVar12 = 0;
  }
  else {
    uVar18 = FUN_00da1ae4(auStack_c0);
    uVar12 = (uint)local_80 ^ (uint)local_80 << 0xb;
    local_80._0_4_ = local_80._4_4_;
    local_80._4_4_ = (uint)local_78;
    uVar12 = uVar12 >> 8 ^ local_78._4_4_ >> 0x13 ^ uVar12 ^ local_78._4_4_;
    local_78._0_4_ = local_78._4_4_;
    local_78._4_4_ = uVar12;
    uVar12 = FUN_00edf160(auStack_c0,(int)((ulong)uVar12 * (uVar18 & 0xffffffff) >> 0x20) + 1);
    if ((int)uVar12 < 0) goto LAB_012df73c;
    if ((uVar12 & 0xffff) < 0x200) {
      uVar18 = (ulong)(uVar12 >> 5 & 0x7ff);
      *(uint *)((long)auStack_c0 + uVar18 * 4) =
           *(uint *)((long)auStack_c0 + uVar18 * 4) & (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
    }
  }
  local_d8 = (long *)(puVar10 + 0x10);
  lVar20 = *(long *)puVar8;
  uVar5 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1168);
  if (uVar5 < *(uint *)(lVar20 + 0x1148)) {
    local_d0 = *(undefined8 *)(*(long *)(lVar20 + 0x1150) + (long)(int)uVar5 * 8);
  }
  else {
    local_d0 = 0;
  }
  uVar14 = FUN_0131c3d0(&local_d8);
  uVar11 = FUN_013257f0(&uStack_45,uVar14,&local_80);
  local_d0._0_4_ = CONCAT22(uVar11,(short)uVar12);
  lVar20 = *(long *)puVar7;
  local_d0 = CONCAT44(local_44,(undefined4)local_d0);
  if (lVar20 == 0) {
    local_d8 = param_2;
    plVar16 = malloc(0xe0);
  }
  else {
    local_d8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar2 = (undefined8 *)(lVar20 + 8);
      if (lVar15 != 0) {
        puVar2 = (undefined8 *)(lVar15 + 0xa8);
      }
      param_2 = (long *)*puVar2;
      if (param_2 == (long *)0x0) {
        plVar16 = (long *)0x0;
        goto LAB_012df808;
      }
    }
    plVar16 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0xe0,8);
  }
LAB_012df808:
  plVar16[0x13] = 0;
  uVar18 = 0;
  *plVar16 = (long)(puVar9 + 0x10);
  plVar16[1] = 0;
  plVar16[3] = 0;
  plVar16[4] = 0;
  plVar19 = plVar16 + 2;
  *plVar19 = 0;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  plVar16[0xd] = 0;
  plVar16[0xe] = 0;
  plVar16[0xf] = 0;
  plVar16[0x10] = 0;
  plVar16[0x11] = 0;
  plVar16[0x12] = 0;
  do {
    lVar20 = uVar18 << 0x20;
    uVar3 = uVar18 << 1;
    uVar4 = uVar18 >> 0x1f;
    uVar12 = (int)uVar18 + 2;
    uVar18 = (ulong)uVar12;
    *(undefined2 *)((long)plVar19 + (-uVar4 & 0xfffffffe00000000 | uVar3)) = 0;
    *(undefined2 *)((long)plVar19 + (lVar20 + 0x100000000 >> 0x1f)) = 0;
  } while (uVar12 != 0x48);
  plVar16[0x14] = 0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  *(undefined4 *)(plVar16 + 0x17) = 0;
  *(undefined4 *)(plVar16 + 0x1a) = 0;
  plVar16[0x18] = (long)(puVar6 + 0x10);
  plVar16[0x19] = 0;
  uVar12 = local_44;
  if (*(uint *)(param_1 + 0x10) <= local_44) {
    uVar12 = 0;
  }
  *(long **)(*(long *)(param_1 + 0x18) + (long)(int)uVar12 * 8) = plVar16;
  uVar12 = local_44;
  if (*(uint *)(param_1 + 0x10) <= local_44) {
    uVar12 = 0;
  }
  FUN_012dd8d0(*(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar12 * 8),&local_d8);
  return;
}

