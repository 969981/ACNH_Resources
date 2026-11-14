
void FUN_01bf1510(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  ushort uVar5;
  ulong uVar6;
  int iVar7;
  ushort uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ushort *puVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined **local_1358;
  long local_1350 [2];
  undefined *local_1340 [4];
  undefined8 local_1320;
  undefined8 uStack_1318;
  undefined *local_1310;
  undefined8 local_12f0;
  undefined8 uStack_12e8;
  undefined *local_12e0;
  undefined8 local_12c0;
  undefined8 uStack_12b8;
  undefined *local_12b0;
  undefined8 local_1290;
  undefined8 uStack_1288;
  undefined *local_1280;
  undefined8 local_1260;
  undefined8 uStack_1258;
  undefined *local_1250;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined *local_1220;
  undefined8 local_1200;
  undefined8 uStack_11f8;
  undefined *local_11f0;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined *local_11c0;
  undefined8 local_11a0;
  undefined8 uStack_1198;
  undefined *local_1190;
  uint local_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined4 local_1158;
  short *local_1150;
  int local_1148;
  ushort uStack_1144;
  undefined1 uStack_1142;
  undefined1 uStack_1141;
  undefined1 uStack_1140;
  undefined1 uStack_113f;
  undefined1 uStack_113e;
  undefined1 uStack_113d;
  ushort uStack_113c;
  short sStack_113a;
  ushort local_1138 [2];
  undefined1 local_1134;
  undefined1 uStack_1133;
  short *local_1130;
  short *local_1128;
  undefined4 local_1120;
  undefined1 local_111c [4];
  undefined *local_1118;
  undefined1 *local_1110;
  undefined4 local_1108;
  undefined1 local_1104 [39];
  undefined1 local_10dd;
  undefined1 local_10c5;
  undefined *local_10c0;
  undefined1 *local_10b8;
  undefined4 local_10b0;
  undefined1 local_10ac [63];
  undefined1 local_106d;
  undefined1 auStack_1068 [2];
  undefined1 auStack_1066 [4094];
  undefined1 auStack_68 [8];
  
  uVar18 = *(undefined8 *)(param_1 + 0x30d8);
  lVar14 = *(long *)(param_1 + 0x30e0);
  local_1130 = (short *)0x0;
  local_1148 = 0;
  uStack_1144 = 0;
  uStack_1142 = 0;
  uStack_1141 = 0;
  uStack_1140 = 0;
  uStack_113f = 0;
  uStack_113e = 0;
  uStack_113d = 0;
  uStack_113c = 0;
  sStack_113a = 0;
  local_1138[0] = 0;
  local_1138[1] = 0;
  local_1134 = 0;
  uStack_1133 = 0;
  FUN_01b970f0(&local_1148,uVar18);
  FUN_01b9735c(&local_1148,uVar18,lVar14 + 0x18);
  if (local_1148 == 3) {
    puVar16 = local_1138;
  }
  else if (local_1148 == 2) {
    puVar16 = &uStack_113c;
  }
  else {
    if (local_1148 != 1) {
      uVar15 = 0;
      goto LAB_01bf15cc;
    }
    puVar16 = (ushort *)((ulong)&local_1148 | 6);
  }
  uVar15 = 0;
  if ((byte)*puVar16 < 0x18) {
    uVar15 = (uint)(byte)*puVar16;
  }
LAB_01bf15cc:
  local_1358 = (undefined **)CONCAT44(local_1358._4_4_,uVar15);
  *(char *)(param_1 + 0x30f0) = uVar15 != 0;
  uVar17 = (uint)uStack_1144;
  if (local_1148 != 1) {
    uVar17 = 0;
  }
  if (uVar15 == 0) {
    memset(local_1350,0,0x1e0);
    local_1358 = &PTR_LAB_04a3e128;
    local_1320 = 0;
    uStack_1318 = 0;
    local_12f0 = 0;
    uStack_12e8 = 0;
    uVar18 = *(undefined8 *)(param_1 + 0x30d8);
    local_1340[0] = PTR_DAT_04bb2d80 + 0x10;
    local_12c0 = 0;
    uStack_12b8 = 0;
    lVar14 = *(long *)(param_1 + 0x30e0);
    local_1138[0] = 0x800;
    local_1138[1] = 0;
    local_1170 = 0xffffffff;
    local_1158 = 0;
    local_1134 = 0;
    local_1130 = (short *)0xffffffff;
    local_1128 = (short *)0xffffffff00000000;
    local_1110 = local_1104;
    local_1120 = 0xffffffff;
    local_1108 = 0x40;
    local_10c5 = 0;
    local_1290 = 0;
    uStack_1288 = 0;
    local_1260 = 0;
    uStack_1258 = 0;
    local_1230 = 0;
    uStack_1228 = 0;
    local_1200 = 0;
    uStack_11f8 = 0;
    local_11d0 = 0;
    uStack_11c8 = 0;
    local_11a0 = 0;
    uStack_1198 = 0;
    local_1168 = 0;
    uStack_1160 = 0;
    local_1118 = PTR_DAT_04bb2bc0 + 0x10;
    local_10b8 = local_10ac;
    local_1104[0] = 0;
    local_10b0 = 0x40;
    local_106d = 0;
    local_10ac[0] = 0;
    puVar1 = PTR_DAT_04bc0bf8 + 0x10;
    uStack_1140 = SUB81(auStack_1068,0);
    uStack_113f = (undefined1)((ulong)auStack_1068 >> 8);
    uStack_113e = (undefined1)((ulong)auStack_1068 >> 0x10);
    uStack_113d = (undefined1)((ulong)auStack_1068 >> 0x18);
    uStack_113c = (ushort)((ulong)auStack_1068 >> 0x20);
    sStack_113a = (short)((ulong)auStack_1068 >> 0x30);
    local_1148 = (int)puVar1;
    uStack_1144 = (ushort)((ulong)puVar1 >> 0x20);
    uStack_1142 = (undefined1)((ulong)puVar1 >> 0x30);
    uStack_1141 = (undefined1)((ulong)puVar1 >> 0x38);
    local_1310 = local_1340[0];
    local_12e0 = local_1340[0];
    local_12b0 = local_1340[0];
    local_1280 = local_1340[0];
    local_1250 = local_1340[0];
    local_1220 = local_1340[0];
    local_11f0 = local_1340[0];
    local_11c0 = local_1340[0];
    local_1190 = local_1340[0];
    local_10c0 = local_1118;
    memset(auStack_1068,0,0x1000);
    puVar2 = auStack_68;
    if (auStack_68 <= auStack_1066) {
      puVar2 = auStack_1066;
    }
    memset(auStack_1068,0,(size_t)(puVar2 + (-0xe0 - (long)&local_1148)));
    FUN_006f50a0(&local_1148,uVar18,lVar14 + 0x18,0);
    local_1150 = (short *)0x0;
    FUN_006f1750(&local_1358);
    local_1170 = 0xffffffff;
    local_1158 = 0;
    local_1168 = 0;
    uStack_1160 = 0;
    lVar14 = (**(code **)(CONCAT17(uStack_1141,
                                   CONCAT16(uStack_1142,CONCAT24(uStack_1144,local_1148))) + 0x18))
                       (&local_1148);
    lVar12 = (**(code **)(CONCAT17(uStack_1141,
                                   CONCAT16(uStack_1142,CONCAT24(uStack_1144,local_1148))) + 0x18))
                       (&local_1148);
    if (((lVar12 != 0) &&
        (uVar13 = (**(code **)(CONCAT17(uStack_1141,
                                        CONCAT16(uStack_1142,CONCAT24(uStack_1144,local_1148))) +
                              0x20))(&local_1148), lVar14 != 0)) && ((int)local_1170 < 9)) {
      local_1170 = local_1170 + 1;
      uVar6 = (ulong)local_1170;
      bVar11 = 9 < local_1170;
      plVar3 = local_1350 + uVar6 * 6;
      if (bVar11) {
        plVar3 = local_1350;
      }
      *plVar3 = lVar14;
      plVar3 = local_1350 + uVar6 * 6 + 1;
      if (bVar11) {
        plVar3 = local_1350 + 1;
      }
      *plVar3 = lVar12 + (uVar13 & 0xffffffff) * 2;
      ppuVar4 = local_1340 + uVar6 * 6;
      if (bVar11) {
        ppuVar4 = local_1340;
      }
      *ppuVar4 = PTR_DAT_04bb2d80 + 0x10;
    }
    (*(code *)local_1358[3])(&local_1358);
    FUN_006f1490(&local_1358);
    if (local_1150 != (short *)0x0) {
      uStack_113c = 0;
      sStack_113a = 0;
      local_1138[0] = 0;
      local_1148 = 0;
      iVar7 = local_1148;
      uStack_1144 = 0;
      uVar8 = uStack_1144;
      uStack_1142 = 0;
      uVar9 = uStack_1142;
      uStack_1141 = 0;
      uVar10 = uStack_1141;
      uStack_1140 = 0;
      uStack_113f = 0;
      uStack_113e = 0;
      local_1130 = (short *)0x0;
      local_1128 = (short *)0x0;
      uStack_1142 = (undefined1)((ulong)local_1150 >> 0x30);
      uStack_1141 = (undefined1)((ulong)local_1150 >> 0x38);
      uStack_1144 = (ushort)((ulong)local_1150 >> 0x20);
      local_1148 = (int)local_1150;
      if (*local_1150 == 0xf) {
        local_1128 = local_1150 + 3;
        uStack_113e = 1;
        uStack_113c = local_1150[1];
        sStack_113a = local_1150[2];
        iVar7 = local_1148;
        uVar8 = uStack_1144;
        uVar9 = uStack_1142;
        uVar10 = uStack_1141;
      }
      else if (*local_1150 == 0xe) {
        uVar5 = local_1150[3];
        if ((uVar5 & 1) == 0) {
          uStack_113f = 1;
          uStack_113c = local_1150[1];
          sStack_113a = local_1150[2];
          local_1130 = local_1150 + 4;
          local_1128 = (short *)((long)local_1130 + ((ulong)uVar5 & 0xfffe));
          iVar7 = local_1148;
          uVar8 = uStack_1144;
          uVar9 = uStack_1142;
          uVar10 = uStack_1141;
          local_1138[0] = uVar5;
        }
      }
      else {
        uStack_1140 = 1;
      }
      uStack_1141 = uVar10;
      uStack_1142 = uVar9;
      uStack_1144 = uVar8;
      local_1148 = iVar7;
      FUN_01bf25d0(param_1 + 8,&local_1148,*(undefined8 *)(param_1 + 0x30d8),
                   *(undefined8 *)(param_1 + 0x30e0));
      uVar17 = 0xffffffff;
    }
    if (*(char *)(param_1 + 0x30f0) == '\0') {
      local_10dd = 0;
      local_1120 = 0x40;
      local_1128 = (short *)local_111c;
      local_1148 = 1;
      local_1138[0] = 0;
      local_1138[1] = 0;
      local_1130 = (short *)(PTR_DAT_04bb2bc0 + 0x10);
      local_111c[0] = 0;
      uStack_1144 = (ushort)uVar17;
      uStack_1142 = (undefined1)(uVar17 >> 0x10);
      uStack_1141 = (undefined1)(uVar17 >> 0x18);
      uStack_1140 = 0xff;
      uStack_113f = 0xff;
      uStack_113e = 0xff;
      uStack_113d = 0xff;
      uStack_113c = 0;
      sStack_113a = 0;
      if (uVar17 != 0xffffffff) {
        FUN_038d1270(&local_1130,&DAT_0405bf91,uVar17);
      }
      FUN_01bf13ec(param_1,&local_1148);
    }
  }
  return;
}

