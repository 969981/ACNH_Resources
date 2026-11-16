
undefined8 FUN_0299d950(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong *puVar19;
  int iVar20;
  undefined8 *local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  long *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined *local_1c8;
  undefined1 *puStack_1c0;
  ulong *local_1b8;
  char *local_1b0;
  ulong local_1a8;
  ulong uStack_1a0;
  undefined8 local_198;
  undefined8 local_a8;
  long local_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  ulong *puStack_70;
  
  puVar5 = PTR_DAT_04bb2020;
  local_1b8 = (ulong *)(PTR_DAT_04bb2020 + 0x10);
  local_1b0 = "AudioMusicSpaceInfoMgr";
  plVar7 = (long *)FUN_038c9744(0,&local_1b8,*param_2,8,1,0);
  *param_1 = (ulong)plVar7;
  puVar6 = PTR_DAT_04bb2698;
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    puVar9 = malloc(0x22478);
    if (puVar9 == (undefined8 *)0x0) goto LAB_0299db1c;
LAB_0299da1c:
    iVar20 = 0x15f;
    puVar11 = puVar9 + 1;
    *puVar9 = 0x15f;
    puVar14 = puVar11;
    do {
      *(undefined1 *)puVar14 = 0;
      *(undefined4 *)((long)puVar14 + 4) = 0xffffffff;
      *(undefined1 *)(puVar14 + 1) = 0;
      *(undefined8 *)((long)puVar14 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x14) = 0xffffffff00000000;
      puVar14[4] = 0;
      *(undefined4 *)(puVar14 + 5) = 0xffffffff;
      puVar14[6] = 0;
      *(undefined1 *)(puVar14 + 7) = 0;
      *(undefined4 *)(puVar14 + 8) = 0xffffffff;
      *(undefined4 *)(puVar14 + 0xb) = 0;
      puVar14[9] = puVar14 + 9;
      puVar14[10] = puVar14 + 9;
      puVar14[0x1e] = puVar14 + 0x21;
      puVar14[0x1b] = puVar14 + 0x1e;
      puVar14[0x18] = puVar14 + 0x1b;
      puVar14[0x15] = puVar14 + 0x18;
      puVar14[0x12] = puVar14 + 0x15;
      *(undefined1 *)(puVar14 + 0x24) = 0;
      puVar17 = puVar14 + 0xf;
      *puVar17 = puVar14 + 0x12;
      puVar14[0x21] = 0;
      *(undefined4 *)(puVar14 + 0xe) = 7;
      *(undefined2 *)((long)puVar14 + 0x122) = 0xfffe;
      *(undefined4 *)(puVar14 + 0x2a) = 0xffffffff;
      *(undefined1 *)((long)puVar14 + 0x15c) = 0;
      puVar14[0x2c] = 0xffffffff00000000;
      *(undefined4 *)(puVar14 + 0x2d) = 0xffffffff;
      *(undefined4 *)(puVar14 + 0x30) = 0xffffffff;
      *(undefined1 *)((long)puVar14 + 0x18c) = 0;
      puVar14[0xc] = puVar17;
      puVar14[0xd] = puVar17;
      *(undefined8 *)((long)puVar14 + 0x124) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 300) = 0xffffffff;
      *(undefined8 *)((long)puVar14 + 0x134) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x154) = 0xffffffff0000fffe;
      *(undefined8 *)((long)puVar14 + 0x184) = 0xffffffff0000fffe;
      puVar14[0x28] = 0xffffffffffffffff;
      puVar14[0x29] = 0xffffffffffffffff;
      puVar14[0x2e] = 0xffffffffffffffff;
      puVar14[0x2f] = 0xffffffffffffffff;
      puVar14 = puVar14 + 0x32;
    } while (puVar14 != puVar9 + 0x448f);
    *(undefined4 *)(param_1 + 0x13) = 0x15f;
    param_1[0x14] = (ulong)puVar11;
LAB_0299db28:
    iVar10 = 0;
    iVar12 = 0;
    do {
      iVar1 = iVar12 + 1;
      *(int *)((long)puVar11 + (long)iVar12 * 400 + 4) = iVar10;
      *(int *)(puVar11 + (long)iVar12 * 0x32 + 0x2b) = iVar10;
      *(int *)(puVar11 + (long)iVar12 * 0x32 + 0x31) = iVar10;
      iVar10 = iVar10 + 1;
      *(undefined1 *)((long)puVar11 + (long)iVar12 * 400 + 0x15c) = 0;
      *(undefined1 *)((long)puVar11 + (long)iVar12 * 400 + 0x18c) = 1;
      iVar12 = iVar1;
    } while (iVar20 != iVar1);
  }
  else {
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar18 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_0299db1c;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x22478,8);
    if (puVar9 != (undefined8 *)0x0) goto LAB_0299da1c;
LAB_0299db1c:
    iVar20 = (int)param_1[0x13];
    if (iVar20 != 0) {
      puVar11 = (undefined8 *)param_1[0x14];
      goto LAB_0299db28;
    }
  }
  FUN_0299dfd0(param_1);
  param_1[0xc57f] = (ulong)&DAT_04a97620;
  param_1[0xc580] = (ulong)param_1;
  local_1b8 = (ulong *)0x7800000085;
  param_1[0xc581] = (ulong)&LAB_029a1220;
  param_1[0xc582] = 0;
  local_1a8 = *param_1;
  local_1b0 = (char *)CONCAT44(local_1b0._4_4_,0x85);
  local_198 = 0x85;
  uStack_1a0 = 0;
  if ((int)param_1[0x13] != 0) {
    uStack_1a0 = param_1[0x14];
  }
  FUN_02991730(param_1 + 0x1e,&local_1b8);
  lVar18 = *(long *)puVar6;
  if (lVar18 == 0) {
    puVar9 = malloc(0xeb10);
    if (puVar9 == (undefined8 *)0x0) goto LAB_0299dd80;
LAB_0299dc14:
    iVar20 = 0x6d;
    puVar11 = puVar9 + 1;
    *puVar9 = 0x6d;
    puVar14 = puVar11;
    do {
      *(undefined4 *)puVar14 = 0xffffffff;
      *(undefined1 *)((long)puVar14 + 4) = 0;
      *(undefined4 *)(puVar14 + 1) = 0xffffffff;
      *(undefined1 *)(puVar14 + 2) = 0;
      *(undefined8 *)((long)puVar14 + 0x14) = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar14 + 0x1c) = 0;
      *(undefined2 *)(puVar14 + 6) = 0;
      *(undefined4 *)((long)puVar14 + 0x34) = 0xffffffff;
      *(undefined2 *)(puVar14 + 7) = 0;
      *(undefined1 *)((long)puVar14 + 0x3a) = 0xff;
      *(undefined8 *)((long)puVar14 + 0x3c) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x44) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar14 + 0x4c) = 0xffffffff;
      *(undefined4 *)(puVar14 + 10) = 0x42f00000;
      *(undefined8 *)((long)puVar14 + 0x54) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x5c) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 100) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x6c) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar14 + 0x74) = 0xffffffff;
      puVar14[4] = 0xffffffffffffffff;
      puVar14[5] = 0;
      *(undefined8 *)((long)puVar14 + 0xf3) = 0xffffffffffffffff;
      puVar14[0x10] = 0;
      puVar14[0xf] = 0;
      *(undefined2 *)(puVar14 + 0x17) = 0;
      *(undefined1 *)((long)puVar14 + 0xba) = 0;
      *(undefined8 *)((long)puVar14 + 0xcb) = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar14 + 0xd3) = 0xff;
      *(undefined8 *)((long)puVar14 + 0xd4) = 0;
      *(undefined8 *)((long)puVar14 + 0xdc) = 0;
      *(undefined8 *)((long)puVar14 + 0xe4) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar14 + 0xec) = 0xffffffff;
      *(undefined2 *)(puVar14 + 0x1e) = 0;
      *(undefined1 *)((long)puVar14 + 0xf2) = 0;
      *(undefined1 *)((long)puVar14 + 0x10b) = 0xff;
      *(undefined8 *)((long)puVar14 + 0x114) = 0;
      *(undefined8 *)((long)puVar14 + 0x10c) = 0;
      *(undefined8 *)((long)puVar14 + 0x11c) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar14 + 0x124) = 0xffffffff;
      puVar14[0x25] = 0;
      *(undefined2 *)(puVar14 + 0x26) = 0;
      *(undefined4 *)((long)puVar14 + 0x134) = 0xffffffff;
      *(undefined2 *)(puVar14 + 0x27) = 0;
      *(undefined1 *)((long)puVar14 + 0x13a) = 0xff;
      *(undefined8 *)((long)puVar14 + 0x13c) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x144) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar14 + 0x14c) = 0xffffffff;
      *(undefined4 *)(puVar14 + 0x2a) = 0x42f00000;
      *(undefined8 *)((long)puVar14 + 0x154) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x15c) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x164) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x16c) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar14 + 0x174) = 0xffffffff;
      puVar14[0x30] = 0;
      puVar14[0x2f] = 0;
      *(undefined2 *)(puVar14 + 0x37) = 0;
      *(undefined1 *)((long)puVar14 + 0x1ba) = 0;
      *(undefined1 *)((long)puVar14 + 0x1d3) = 0xff;
      *(undefined8 *)((long)puVar14 + 0x1bb) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x1d4) = 0;
      *(undefined8 *)((long)puVar14 + 0x1dc) = 0;
      *(undefined8 *)((long)puVar14 + 0x1e4) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar14 + 0x1ec) = 0xffffffff;
      *(undefined2 *)(puVar14 + 0x3e) = 0;
      *(undefined1 *)((long)puVar14 + 0x1f2) = 0;
      *(undefined8 *)((long)puVar14 + 0x203) = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar14 + 0x20b) = 0xff;
      *(undefined8 *)((long)puVar14 + 0x21c) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0xbb) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0xc3) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0xfb) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x103) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x1c3) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x1cb) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 499) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x1fb) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar14 + 0x20c) = 0;
      *(undefined8 *)((long)puVar14 + 0x214) = 0;
      puVar2 = (undefined4 *)((long)puVar14 + 0x224);
      puVar14 = puVar14 + 0x45;
      *puVar2 = 0xffffffff;
    } while (puVar14 != puVar9 + 0x1d62);
    *(undefined4 *)(param_1 + 0x4f3) = 0x6d;
    param_1[0x4f4] = (ulong)puVar11;
  }
  else {
    plVar7 = (long *)*param_1;
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar18 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_0299dd80;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0xeb10,8);
    if (puVar9 != (undefined8 *)0x0) goto LAB_0299dc14;
LAB_0299dd80:
    iVar20 = (int)param_1[0x4f3];
    if (iVar20 == 0) goto LAB_0299dde8;
    puVar11 = (undefined8 *)param_1[0x4f4];
  }
  iVar10 = 0;
  uVar13 = 0x85;
  do {
    uVar15 = param_1[0x14];
    uVar3 = uVar13;
    if ((uint)param_1[0x13] <= uVar13) {
      uVar3 = 0;
    }
    puVar16 = (uint *)(puVar11 + (long)iVar10 * 0x45);
    uVar4 = 0;
    if (uVar13 + 1 < (uint)param_1[0x13]) {
      uVar4 = uVar13 + 1;
    }
    iVar10 = iVar10 + 1;
    *puVar16 = uVar13;
    uVar13 = uVar13 + 2;
    *(ulong *)(puVar16 + 10) = uVar15 + (ulong)uVar3 * 400;
    *(ulong *)(puVar16 + 0x4a) = uVar15 + (ulong)uVar4 * 400;
  } while (iVar20 != iVar10);
LAB_0299dde8:
  local_1d8 = 0;
  iVar20 = 0;
  puVar9 = (undefined8 *)((ulong)&local_1f8 | 4);
  do {
    puVar19 = param_1 + (long)iVar20 * 0x15c + 0x4f8;
    FUN_029894b4(puVar19,&local_1d8);
    local_1f8 = CONCAT44(local_1f8._4_4_,0xffffffff);
    local_1b0 = (char *)0x10000000000;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 0;
    local_200 = 0;
    local_1a8 = local_1a8 & 0xffffffffffffff00;
    local_1cc = 0;
    local_210 = (undefined8 *)0x0;
    uStack_208 = 0xffffffff;
    puStack_1c0 = &DAT_0405db6e;
    local_1c8 = puVar5 + 0x10;
    local_1b8 = &local_1a8;
    FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0xff;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    puStack_70 = local_1b8;
    local_78 = puVar5 + 0x10;
    uVar15 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
    if (((((uVar15 & 1) != 0) && (local_a0 != 0)) && (*(uint *)(local_a0 + 0x18) != 0)) &&
       (plVar7 = (long *)((ulong)*(uint *)(local_a0 + 0x18) + local_a0),
       *plVar7 == 0x101feff464e494d)) {
      local_210 = &local_1f8;
      local_1f8 = 0;
      local_200 = 0;
      local_1e8 = 0;
      local_1f0 = 0;
      uStack_208 = 0;
      local_1e0 = plVar7;
    }
    FUN_029899a0(puVar19,&local_210);
    iVar20 = iVar20 + 1;
    puVar19[4] = 1;
    puVar19[5] = 0xffffffffffffffff;
    *(undefined4 *)(puVar19 + 0x1d) = 1;
    *(undefined1 *)((long)puVar19 + 0xadc) = 0;
  } while (iVar20 != 0x85);
  param_1[0xc5a2] = 0;
  param_1[0xc5a3] = 0;
  param_1[0xc5a0] = 0;
  param_1[0xc5a1] = 0;
  param_1[0xc59e] = 0;
  param_1[0xc59f] = 0;
  param_1[0xc59c] = 0;
  param_1[0xc59d] = 0;
  param_1[0xc59a] = 0;
  param_1[0xc59b] = 0;
  param_1[0xc598] = 0;
  param_1[0xc599] = 0;
  param_1[0xc596] = 0;
  param_1[0xc597] = 0;
  param_1[0xc594] = 0;
  param_1[0xc595] = 0;
  param_1[0xc592] = 0;
  param_1[0xc593] = 0;
  param_1[0xc590] = 0;
  param_1[0xc591] = 0;
  param_1[0xc58e] = 0;
  param_1[0xc58f] = 0;
  param_1[0xc58c] = 0;
  param_1[0xc58d] = 0;
  puVar5 = PTR_LAB_04bc3d88;
  param_1[0xc588] = (ulong)(PTR_DAT_04bc3d90 + 0x10);
  param_1[0xc589] = (ulong)(param_1 + 0xc58c);
  param_1[0xc58a] = (ulong)puVar5;
  param_1[0xc58b] = 0;
  (**(code **)(*(long *)*param_1 + 0x28))();
  return 1;
}

