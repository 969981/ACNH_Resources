
/* WARNING: Removing unreachable block (ram,0x0126ebf0) */

void FUN_0126e7f0(undefined4 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  undefined *local_b8;
  long local_b0;
  undefined3 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  int iStack_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar3 = *(undefined4 *)(param_2 + 1);
  local_a0 = (long *)((ulong)local_a0 & 0xffffff0000000000);
  plVar17 = (long *)*param_2;
  *param_1 = 0;
  local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
  param_1[0x2c] = uVar3;
  local_98 = 0x244db4da;
  local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)((long)param_2 + 0xc));
  local_b8 = PTR_DAT_04bbc030 + 0x10;
  lVar8 = FUN_012aa5e8(&local_b8,plVar17,&local_a0);
  *(long *)(param_1 + 0x26) = lVar8;
  if (lVar8 == 0) {
    return;
  }
  FUN_0126c550(lVar8,param_1 + 1,*(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  uVar14 = 9;
  iVar12 = 0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x26) + 0xb8);
  uVar13 = 0;
  uVar15 = 8;
  uVar16 = 9;
  *(undefined8 *)(lVar8 + 8) = 0x800000009;
  do {
    if (uVar16 != 0) {
      uVar16 = 0;
      do {
        if ((uVar13 < 9) && (uVar15 = (uint)uVar16, uVar15 < 10)) {
          uVar2 = iVar12 + uVar15;
          uVar14 = (ulong)uVar2;
          if (0x47 < uVar2) {
            uVar14 = 0;
          }
          uVar4 = *(undefined2 *)((long)(param_1 + 1) + uVar14 * 2);
          lVar9 = lVar8 + 0x10 + (ulong)uVar2 * 0x18;
          if (0x47 < uVar2) {
            lVar9 = lVar8 + 0x10;
          }
          *(uint *)(lVar9 + 0xc) = uVar15;
          *(uint *)(lVar9 + 0x10) = uVar13;
          *(undefined2 *)(lVar9 + 8) = uVar4;
          uVar14 = (ulong)*(uint *)(lVar8 + 8);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar14);
      uVar15 = *(uint *)(lVar8 + 0xc);
      uVar16 = uVar14;
    }
    uVar13 = uVar13 + 1;
    iVar12 = iVar12 + 9;
  } while (uVar13 < uVar15);
  *(undefined4 *)(lVar8 + 0x6d0) = 0;
  if (*(long *)(*(long *)(param_1 + 0x26) + 0xa8) != 0) {
    FUN_01327870(&local_a0,*(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
    puVar5 = PTR_DAT_04bb2720;
    lVar8 = *(long *)PTR_DAT_04bb2720;
    if (lVar8 == 0) {
      local_b8 = (undefined *)0x0;
    }
    else {
      local_b8 = (undefined *)0x0;
      if (*(long *)(lVar8 + 0x330) != 0) {
        local_b8 = *(undefined **)(*(long *)(lVar8 + 0x330) + 0xd0);
      }
    }
    local_b0 = *(long *)(param_1 + 0x26);
    local_a8 = 0x10100;
    if ((local_b8 != (undefined *)0x0) && (local_b0 != 0)) {
      FUN_01327a80(&local_a0,&local_b8);
      lVar8 = *(long *)puVar5;
    }
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x330) == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x330) + 0xd0);
    }
    FUN_01328860(&local_a0,param_1 + 0x2e,uVar11);
  }
  puVar5 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar10 = malloc(0xe0);
  }
  else {
    plVar10 = plVar17;
    if (plVar17 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_0126ea14;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0xe0,8);
  }
LAB_0126ea14:
  *(undefined4 *)(plVar10 + 1) = 0;
  puVar6 = PTR_DAT_04bbc5d0;
  plVar10[2] = 0;
  plVar10[3] = 0;
  puVar7 = PTR_DAT_04bbc5e0;
  puVar1 = PTR_DAT_04bb2018;
  *(undefined4 *)(plVar10 + 6) = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  local_90 = puVar1 + 0x10;
  puVar1 = puVar7 + 0x10;
  *plVar10 = (long)(puVar6 + 0x10);
  plVar10[0xd] = 0;
  *(undefined4 *)(plVar10 + 0xe) = 0;
  plVar10[4] = (long)local_90;
  plVar10[5] = 0;
  plVar10[7] = 0;
  plVar10[8] = (long)puVar1;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *(undefined4 *)(plVar10 + 0xf) = 0;
  plVar10[0x10] = 0;
  *(undefined1 *)(plVar10 + 0x11) = 0;
  *(undefined4 *)((long)plVar10 + 0x8c) = 0;
  plVar10[0x1a] = 0;
  *(undefined4 *)(plVar10 + 0x1b) = 0;
  local_80 = 0;
  local_7e = 0;
  local_78 = 0;
  plVar10[0x12] = (long)local_90;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = (long)puVar1;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x26) + 0xa8);
  uStack_68 = 0;
  local_88 = *(int *)(lVar8 + 0x18);
  iStack_84 = *(int *)(lVar8 + 0x1c);
  local_7f = 1;
  local_98 = CONCAT44((*(int *)(lVar8 + 0x2c) - iStack_84) + 1,
                      (*(int *)(lVar8 + 0x28) - local_88) + 1);
  local_a0 = plVar17;
  local_70 = local_90;
  FUN_013817c0(plVar10,&local_a0);
  plVar10[2] = *(long *)(param_1 + 0x26);
  *(long **)(param_1 + 0x28) = plVar10;
  lVar8 = *(long *)puVar5;
  if (lVar8 == 0) {
    plVar10 = malloc(0x70);
  }
  else {
    plVar10 = plVar17;
    if (plVar17 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_0126eb48;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x70,8);
  }
LAB_0126eb48:
  *(undefined4 *)(plVar10 + 1) = 0;
  puVar5 = PTR_DAT_04bbc320;
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[10] = 0;
  *(undefined4 *)(plVar10 + 0xb) = 0;
  *plVar10 = (long)(puVar5 + 0x10);
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[4] = 0;
  plVar10[5] = (long)(puVar7 + 0x10);
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  local_98 = *(undefined8 *)(param_1 + 0x28);
  local_90 = (undefined *)CONCAT44(200,*(undefined4 *)(param_2 + 1));
  local_a0 = plVar17;
  FUN_01311710(plVar10,&local_a0);
  *(long **)(param_1 + 0x2a) = plVar10;
  FUN_01381fa0(*(undefined8 *)(param_1 + 0x28),1);
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0xd0) != 0) {
    iVar12 = 0;
    if (*(uint *)((long)param_2 + 0xc) < 3) {
      iVar12 = *(uint *)((long)param_2 + 0xc) + 1;
    }
    *(int *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) + 0xb0) + 0xb14) = iVar12;
  }
  return;
}

