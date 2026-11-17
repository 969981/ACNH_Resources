
undefined8 FUN_02cd94a0(byte *param_1,uint param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined2 uVar14;
  uint uVar15;
  long lVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  uint local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined1 auStack_94 [2];
  undefined1 auStack_92 [2];
  byte local_90 [2];
  undefined1 auStack_8e [2];
  uint local_8c;
  undefined4 uStack_88;
  byte local_84 [4];
  undefined2 local_80 [2];
  uint local_7c;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  if (7 < param_2) {
    return 0;
  }
  if (7 < *param_1) {
    return 0;
  }
  local_78 = (undefined *)CONCAT71(local_78._1_7_,*param_1);
  lVar9 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_78,1);
  if (lVar9 == 0) {
    return 0;
  }
  lVar9 = lVar9 + (ulong)param_2 * 0x2450;
  if ((*(long *)(lVar9 + 0x3f28) == 0) ||
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x3f28) + 0x10), puVar10 == (undefined8 *)0x0)) {
    local_bc = 0;
    lVar16 = *(long *)(lVar9 + 0x3f60);
    if (lVar16 != 0) goto LAB_02cd954c;
LAB_02cd9570:
    uVar6 = 0;
    lVar16 = *(long *)(lVar9 + 0x3f28);
  }
  else {
    local_bc = (**(code **)*puVar10)();
    lVar16 = *(long *)(lVar9 + 0x3f60);
    if (lVar16 == 0) goto LAB_02cd9570;
LAB_02cd954c:
    if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) goto LAB_02cd9570;
    uVar6 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
    lVar16 = *(long *)(lVar9 + 0x3f28);
  }
  if ((lVar16 != 0) && (plVar11 = *(long **)(lVar16 + 0x20), plVar11 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x3f08);
    local_70 = *(undefined8 *)(lVar9 + 0x3f10);
    local_68 = 0x11f8;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  uVar12 = FUN_026e9ac0(*(long *)(lVar9 + 0x3f10) + *(long *)(lVar9 + 0x3f08));
  if ((uVar12 & 1) == 0) {
    FUN_02cda4d0(param_1,param_2,PTR_PTR_04bb8620);
  }
  local_a4 = 0xfffe;
  FUN_0277d4ac(&local_a4);
  local_9c = 0xfffe;
  FUN_0277d4ac(&local_9c);
  local_b4 = 0xfffe;
  FUN_0277d4ac(&local_b4);
  local_ac = 0xfffe;
  FUN_0277d4ac(&local_ac);
  puVar10 = param_3 + 3;
  local_b4 = *puVar10;
  local_ac = *param_3;
  uVar12 = FUN_02665700(&local_b4);
  puVar4 = PTR_DAT_04bb43c0;
  if ((uVar12 & 1) != 0) {
    local_68 = 0;
    local_78 = PTR_DAT_04bc0510 + 0x10;
    local_70 = local_b4;
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar4 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(&local_b4);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (uVar7 < *(uint *)(lVar16 + 0x1d8)) {
          lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar16 != 0) {
            local_68 = lVar16;
          }
        }
      }
    }
    local_84[0] = *param_1;
    if (7 < local_84[0]) {
      local_84[0] = 0xff;
    }
    FUN_01b086f4(local_80,&local_78);
    FUN_026563f0(&local_7c,local_84,param_2,local_80);
    FUN_007ef010(auStack_8e,&local_7c);
    FUN_00805ba8(&local_8c,auStack_8e);
    local_a4 = CONCAT44(uStack_88,local_8c);
  }
  uVar12 = FUN_02665700(&local_ac);
  puVar4 = PTR_DAT_04bb43c0;
  if ((uVar12 & 1) != 0) {
    local_68 = 0;
    local_78 = PTR_DAT_04bc0510 + 0x10;
    local_70 = local_ac;
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar4 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(&local_ac);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (uVar7 < *(uint *)(lVar16 + 0x1d8)) {
          lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar16 != 0) {
            local_68 = lVar16;
          }
        }
      }
    }
    local_90[0] = *param_1;
    if (7 < local_90[0]) {
      local_90[0] = 0xff;
    }
    FUN_01b086f4(auStack_92,&local_78);
    FUN_026565f0(&local_7c,local_90,param_2,auStack_92);
    FUN_007ef010(auStack_94,&local_7c);
    FUN_00805ba8(&local_8c,auStack_94);
    local_9c = CONCAT44(uStack_88,local_8c);
  }
  puVar4 = PTR_DAT_04bb43c0;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_9c);
  if (*(long *)puVar4 == 0) {
LAB_02cd9894:
    bVar5 = false;
    lVar16 = *(long *)(lVar9 + 0x3f60);
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if (*(uint *)(lVar16 + 0x1d8) <= uVar7) goto LAB_02cd9894;
    bVar5 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0;
    lVar16 = *(long *)(lVar9 + 0x3f60);
  }
  if ((lVar16 != 0) && (plVar11 = *(long **)(lVar16 + 0x20), plVar11 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x3f40);
    local_70 = *(undefined8 *)(lVar9 + 0x3f48);
    local_68 = 0x1190;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  puVar1 = (undefined2 *)(*(long *)(lVar9 + 0x3f48) + *(long *)(lVar9 + 0x3f40));
  puVar20 = &local_9c;
  if (!bVar5) {
    puVar20 = param_3;
  }
  *puVar1 = *(undefined2 *)puVar20;
  puVar20 = &local_9c;
  if (!bVar5) {
    puVar20 = param_3;
  }
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)((long)puVar20 + 2);
  puVar20 = &local_9c;
  if (!bVar5) {
    puVar20 = param_3;
  }
  *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)puVar20 + 3);
  puVar20 = &local_9c;
  if (!bVar5) {
    puVar20 = param_3;
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((long)puVar20 + 4);
  if ((*(long *)(lVar9 + 0x3f60) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar9 + 0x3f60) + 0x20), plVar11 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x3f40);
    local_70 = *(undefined8 *)(lVar9 + 0x3f48);
    local_68 = 0x1190;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  puVar20 = param_3 + 1;
  lVar16 = *(long *)(lVar9 + 0x3f48) + *(long *)(lVar9 + 0x3f40);
  *(undefined2 *)(lVar16 + 0x8b0) = *(undefined2 *)puVar20;
  *(undefined1 *)(lVar16 + 0x8b2) = *(undefined1 *)((long)param_3 + 10);
  *(undefined1 *)(lVar16 + 0x8b3) = *(undefined1 *)((long)param_3 + 0xb);
  *(undefined4 *)(lVar16 + 0x8b4) = *(undefined4 *)((long)param_3 + 0xc);
  if ((*(long *)(lVar9 + 0x3f60) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar9 + 0x3f60) + 0x20), plVar11 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x3f40);
    local_70 = *(undefined8 *)(lVar9 + 0x3f48);
    local_68 = 0x1190;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  puVar21 = param_3 + 2;
  lVar22 = *(long *)puVar4;
  lVar16 = *(long *)(lVar9 + 0x3f48) + *(long *)(lVar9 + 0x3f40);
  *(undefined2 *)(lVar16 + 0x8b8) = *(undefined2 *)puVar21;
  *(undefined1 *)(lVar16 + 0x8ba) = *(undefined1 *)((long)param_3 + 0x12);
  *(undefined1 *)(lVar16 + 0x8bb) = *(undefined1 *)((long)param_3 + 0x13);
  *(undefined4 *)(lVar16 + 0x8bc) = *(undefined4 *)((long)param_3 + 0x14);
  uVar7 = FUN_0277d6c4(&local_a4);
  if (*(long *)puVar4 == 0) {
LAB_02cd9a4c:
    bVar5 = false;
    lVar16 = *(long *)(lVar9 + 0x3f60);
    puVar25 = puVar10;
  }
  else {
    lVar16 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if (*(uint *)(lVar16 + 0x1d8) <= uVar7) goto LAB_02cd9a4c;
    bVar5 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0;
    puVar25 = &local_a4;
    if (!bVar5) {
      puVar25 = puVar10;
    }
    lVar16 = *(long *)(lVar9 + 0x3f60);
  }
  if ((lVar16 != 0) && (plVar11 = *(long **)(lVar16 + 0x20), plVar11 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x3f40);
    local_70 = *(undefined8 *)(lVar9 + 0x3f48);
    local_68 = 0x1190;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  lVar16 = *(long *)(lVar9 + 0x3f48) + *(long *)(lVar9 + 0x3f40);
  *(undefined2 *)(lVar16 + 0x8c0) = *(undefined2 *)puVar25;
  puVar1 = (undefined2 *)((ulong)&local_a4 | 2);
  if (!bVar5) {
    puVar1 = (undefined2 *)((long)param_3 + 0x1a);
  }
  *(undefined1 *)(lVar16 + 0x8c2) = *(undefined1 *)puVar1;
  puVar2 = (undefined1 *)((ulong)&local_a4 | 3);
  if (!bVar5) {
    puVar2 = (undefined1 *)((long)param_3 + 0x1b);
  }
  *(undefined1 *)(lVar16 + 0x8c3) = *puVar2;
  puVar3 = (undefined4 *)((long)&local_a4 + 4);
  if (!bVar5) {
    puVar3 = (undefined4 *)((long)param_3 + 0x1c);
  }
  *(undefined4 *)(lVar16 + 0x8c4) = *puVar3;
  if ((*(long *)(lVar9 + 0x3f60) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar9 + 0x3f60) + 0x20), plVar11 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x3f40);
    local_70 = *(undefined8 *)(lVar9 + 0x3f48);
    local_68 = 0x1190;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  lVar16 = *(long *)(lVar9 + 0x3f48) + *(long *)(lVar9 + 0x3f40);
  puVar25 = param_3 + 4;
  *(undefined2 *)(lVar16 + 0x1170) = *(undefined2 *)puVar25;
  *(undefined1 *)(lVar16 + 0x1172) = *(undefined1 *)((long)param_3 + 0x22);
  *(undefined1 *)(lVar16 + 0x1173) = *(undefined1 *)((long)param_3 + 0x23);
  *(undefined4 *)(lVar16 + 0x1174) = *(undefined4 *)((long)param_3 + 0x24);
  if ((*(long *)(lVar9 + 0x3f60) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar9 + 0x3f60) + 0x20), plVar11 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x3f40);
    local_70 = *(undefined8 *)(lVar9 + 0x3f48);
    local_68 = 0x1190;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  lVar16 = *(long *)(lVar9 + 0x3f48) + *(long *)(lVar9 + 0x3f40);
  puVar26 = param_3 + 5;
  *(undefined2 *)(lVar16 + 0x1178) = *(undefined2 *)puVar26;
  *(undefined1 *)(lVar16 + 0x117a) = *(undefined1 *)((long)param_3 + 0x2a);
  *(undefined1 *)(lVar16 + 0x117b) = *(undefined1 *)((long)param_3 + 0x2b);
  *(undefined4 *)(lVar16 + 0x117c) = *(undefined4 *)((long)param_3 + 0x2c);
  if ((*(long *)(lVar9 + 0x3f60) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar9 + 0x3f60) + 0x20), plVar11 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x3f40);
    local_70 = *(undefined8 *)(lVar9 + 0x3f48);
    local_68 = 0x1190;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  lVar16 = *(long *)(lVar9 + 0x3f48) + *(long *)(lVar9 + 0x3f40);
  puVar27 = param_3 + 6;
  *(undefined2 *)(lVar16 + 0x1180) = *(undefined2 *)puVar27;
  *(undefined1 *)(lVar16 + 0x1182) = *(undefined1 *)((long)param_3 + 0x32);
  *(undefined1 *)(lVar16 + 0x1183) = *(undefined1 *)((long)param_3 + 0x33);
  *(undefined4 *)(lVar16 + 0x1184) = *(undefined4 *)((long)param_3 + 0x34);
  if ((*(long *)(lVar9 + 0x3f60) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar9 + 0x3f60) + 0x20), plVar11 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x3f40);
    local_70 = *(undefined8 *)(lVar9 + 0x3f48);
    local_68 = 0x1190;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  lVar16 = *(long *)(lVar9 + 0x3f48) + *(long *)(lVar9 + 0x3f40);
  puVar28 = param_3 + 7;
  *(undefined2 *)(lVar16 + 0x1188) = *(undefined2 *)puVar28;
  *(undefined1 *)(lVar16 + 0x118a) = *(undefined1 *)((long)param_3 + 0x3a);
  *(undefined1 *)(lVar16 + 0x118b) = *(undefined1 *)((long)param_3 + 0x3b);
  *(undefined4 *)(lVar16 + 0x118c) = *(undefined4 *)((long)param_3 + 0x3c);
  if ((*(long *)(lVar9 + 0x3f28) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar9 + 0x3f28) + 0x20), plVar11 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x3f08);
    local_70 = *(undefined8 *)(lVar9 + 0x3f10);
    local_68 = 0x11f8;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  }
  puVar4 = PTR_DAT_04bb43c0;
  lVar16 = *(long *)(lVar9 + 0x3f10) + *(long *)(lVar9 + 0x3f08);
  lVar24 = *(long *)PTR_DAT_04bb43c0;
  lVar22 = lVar16 + 0x11f0;
  uVar7 = FUN_0277d6c4(lVar22);
  lVar23 = *(long *)puVar4;
  if (lVar23 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_68 = 0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_70 = *(undefined8 *)(lVar16 + 0x11f0);
      uVar7 = FUN_0277d6c4(&local_70);
      if (*(long *)PTR_DAT_04bb43c0 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar23 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(lVar22);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if (uVar7 < *(uint *)(lVar23 + 0x1d8)) {
            lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8);
            if (lVar23 != 0) {
              local_68 = lVar23;
            }
          }
        }
      }
      local_80[0] = 0;
      FUN_01adab50(&local_78,local_80);
      uVar7 = 0;
      do {
        local_7c = uVar7;
        if ((uVar7 != 0) && (local_8c = uVar7, uVar7 < 0xe)) {
          local_b4 = CONCAT44(local_b4._4_4_,uVar7);
          uVar15 = uVar7 + 7;
          if (-1 < (int)uVar7) {
            uVar15 = uVar7;
          }
          if (((uint)((int)uVar15 >> 3) < 2) &&
             (local_b4 = CONCAT44(local_b4._4_4_,uVar7),
             (*(byte *)((long)local_80 + (ulong)(uint)((int)uVar15 >> 3)) >> (ulong)(uVar7 & 7) & 1)
             != 0)) goto LAB_02cd9e3c;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0xe);
      uVar7 = 0;
LAB_02cd9e3c:
      local_b4 = CONCAT44(local_b4._4_4_,uVar7);
      lVar23 = *(long *)PTR_DAT_04bb43c0;
    }
  }
  uVar7 = FUN_0277d6c4(lVar22);
  lVar24 = *(long *)PTR_DAT_04bb43c0;
  if (lVar24 == 0) {
switchD_02cda030_caseD_9:
    uVar15 = 0xffffffff;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((*(uint *)(lVar23 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
    goto switchD_02cda030_caseD_9;
    local_68 = 0;
    local_78 = PTR_DAT_04bc0510 + 0x10;
    local_70 = *(undefined8 *)(lVar16 + 0x11f0);
    uVar7 = FUN_0277d6c4(&local_70);
    if (*(long *)PTR_DAT_04bb43c0 != 0) {
      lVar16 = *(long *)(lVar24 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(lVar22);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (uVar7 < *(uint *)(lVar16 + 0x1d8)) {
          lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar16 != 0) {
            local_68 = lVar16;
          }
        }
      }
    }
    local_80[0] = 0;
    FUN_01adab50(&local_78,local_80);
    uVar7 = 0;
    do {
      local_7c = uVar7;
      if ((uVar7 != 0) && (local_8c = uVar7, uVar7 < 0xe)) {
        local_b4 = CONCAT44(local_b4._4_4_,uVar7);
        uVar15 = uVar7 + 7;
        if (-1 < (int)uVar7) {
          uVar15 = uVar7;
        }
        if (((uint)((int)uVar15 >> 3) < 2) &&
           (local_b4 = CONCAT44(local_b4._4_4_,uVar7),
           (*(byte *)((long)local_80 + (ulong)(uint)((int)uVar15 >> 3)) >> (ulong)(uVar7 & 7) & 1)
           != 0)) goto LAB_02cda004;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0xe);
    uVar7 = 0;
LAB_02cda004:
    local_b4 = CONCAT44(local_b4._4_4_,uVar7);
    uVar15 = 0;
    switch(uVar7) {
    case 1:
      break;
    case 2:
      uVar15 = 1;
      break;
    case 3:
      uVar15 = 2;
      break;
    case 4:
      uVar15 = 9;
      break;
    case 5:
      iVar8 = FUN_01ad76e8(&local_78);
      uVar15 = 3;
      if (iVar8 != 0x20) {
        uVar15 = 4;
      }
      break;
    case 6:
      uVar15 = 5;
      break;
    case 7:
      uVar15 = 6;
      break;
    case 8:
      uVar15 = 7;
      break;
    default:
      goto switchD_02cda030_caseD_9;
    case 10:
      uVar15 = 8;
    }
  }
  local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar15);
  if (uVar15 < 9) {
                    /* WARNING: Could not recover jumptable at 0x02cd9ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (*(code *)(&UNK_02cd9ff4 + (ulong)(byte)(&DAT_04180386)[uVar15] * 4))();
    return uVar13;
  }
  local_b4 = 0xfffe;
  FUN_0277d4ac(&local_b4);
  puVar4 = PTR_DAT_04bb43c0;
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(puVar10);
  lVar16 = *(long *)puVar4;
  if (lVar16 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      uVar12 = FUN_02665540(puVar10);
      if ((uVar12 & 1) == 0) goto LAB_02cda394;
      lVar16 = *(long *)PTR_DAT_04bb43c0;
    }
  }
  uVar7 = FUN_0277d6c4(param_3);
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  if (lVar22 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
       (puVar10 = param_3, *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0))
    goto LAB_02cda394;
  }
  uVar7 = FUN_0277d6c4(puVar20);
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  lVar16 = lVar23;
  if (lVar23 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      uVar7 = FUN_0277d6c4(puVar21);
      lVar16 = *(long *)PTR_DAT_04bb43c0;
      if (lVar16 != 0) {
        lVar22 = *(long *)(lVar23 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) goto LAB_02cda1ec;
      }
      puVar10 = puVar20;
      goto LAB_02cda394;
    }
  }
LAB_02cda1ec:
  uVar7 = FUN_0277d6c4(puVar21);
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  if (lVar22 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
       (puVar10 = puVar21, *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0))
    goto LAB_02cda394;
  }
  uVar7 = FUN_0277d6c4(puVar20);
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  if (lVar16 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (puVar10 = puVar20, *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0))
    goto LAB_02cda394;
  }
  uVar7 = FUN_0277d6c4(puVar25);
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  if (lVar22 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      uVar12 = FUN_02665540(puVar25);
      puVar10 = puVar25;
      if ((uVar12 & 1) == 0) goto LAB_02cda394;
      lVar22 = *(long *)PTR_DAT_04bb43c0;
    }
  }
  uVar7 = FUN_0277d6c4(puVar26);
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  if (lVar16 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (puVar10 = puVar26, *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0))
    goto LAB_02cda394;
  }
  uVar7 = FUN_0277d6c4(puVar27);
  puVar10 = puVar28;
  if (*(long *)PTR_DAT_04bb43c0 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if (uVar7 < *(uint *)(lVar16 + 0x1d8)) {
      if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
        puVar28 = puVar27;
      }
      puVar10 = puVar28;
    }
  }
LAB_02cda394:
  local_b4 = *puVar10;
  uVar14 = *(undefined2 *)puVar10;
  uVar17 = *(undefined1 *)((long)puVar10 + 2);
  uVar18 = *(undefined1 *)((long)puVar10 + 3);
  uVar19 = *(undefined4 *)((long)puVar10 + 4);
  if ((*(long *)(lVar9 + 0x3f28) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar9 + 0x3f28) + 0x20), plVar11 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x3f08);
    local_70 = *(undefined8 *)(lVar9 + 0x3f10);
    local_68 = 0x11f8;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
    uVar14 = (undefined2)local_b4;
    uVar17 = local_b4._2_1_;
    uVar18 = local_b4._3_1_;
    uVar19 = local_b4._4_4_;
  }
  lVar16 = *(long *)(lVar9 + 0x3f10) + *(long *)(lVar9 + 0x3f08);
  *(undefined2 *)(lVar16 + 0x11f0) = uVar14;
  *(undefined4 *)(lVar16 + 0x11f4) = uVar19;
  *(undefined1 *)(lVar16 + 0x11f2) = uVar17;
  *(undefined1 *)(lVar16 + 0x11f3) = uVar18;
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar9 + 0x3f60) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x3f60) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if ((((local_bc & 1) != 0) && (*(long *)(lVar9 + 0x3f28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x3f28) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return 1;
}

