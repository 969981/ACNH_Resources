
uint FUN_00f64ea8(byte *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  byte local_e8 [4];
  byte local_e4 [4];
  byte local_e0 [4];
  byte local_dc [4];
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  byte local_c0 [4];
  byte local_bc [4];
  byte local_b8 [4];
  byte local_b4 [4];
  byte local_b0 [4];
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 local_89;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  byte local_64 [4];
  
  local_64[0] = *param_1;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_64,1);
  if (lVar6 == 0) {
    return 0;
  }
  lVar10 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar11 = *(long **)(lVar10 + 0x2a290);
  if ((((plVar11 != (long *)0x0) && (puVar7 = (undefined8 *)*plVar11, puVar7 != (undefined8 *)0x0))
      && (uVar8 = (**(code **)*puVar7)(), (uVar8 & 1) != 0)) &&
     ((lVar6 = *(long *)(lVar10 + 0x2a290), lVar6 != 0 &&
      (puVar7 = *(undefined8 **)(lVar6 + 8), puVar7 != (undefined8 *)0x0)))) {
    (**(code **)*puVar7)();
  }
  local_ac = *(undefined2 *)PTR_DAT_04bb37e0;
  local_aa = PTR_DAT_04bb37e0[2];
  local_a9 = PTR_DAT_04bb37e0[3];
  local_94 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_a8 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_b0[0] = *param_1;
  if (7 < local_b0[0]) {
    local_b0[0] = 0xff;
  }
  local_a4 = local_ac;
  local_a2 = local_aa;
  local_a1 = local_a9;
  local_a0 = local_a8;
  local_9c = local_ac;
  local_9a = local_aa;
  local_99 = local_a9;
  local_98 = local_a8;
  local_90 = local_a8;
  local_8c = local_ac;
  local_8a = local_aa;
  local_89 = local_a9;
  local_88 = local_a8;
  local_84 = local_ac;
  local_82 = local_aa;
  local_81 = local_a9;
  local_80 = local_a8;
  local_7c = local_ac;
  local_7a = local_aa;
  local_79 = local_a9;
  local_78 = local_a8;
  local_74 = local_ac;
  local_72 = local_aa;
  local_71 = local_a9;
  local_70 = local_a8;
  local_6c = local_ac;
  local_6a = local_aa;
  local_69 = local_a9;
  local_68 = local_a8;
  FUN_02665c20(local_b0,&local_ac,1);
  local_b4[0] = *param_1;
  if (7 < local_b4[0]) {
    local_b4[0] = 0xff;
  }
  uVar2 = FUN_00f64cc0(local_b4,&local_ac);
  local_b8[0] = *param_1;
  if (7 < local_b8[0]) {
    local_b8[0] = 0xff;
  }
  uVar8 = FUN_00f64cc0(local_b8,&local_a4);
  uVar3 = 1;
  if ((uVar2 & 1) != 0) {
    uVar3 = 2;
  }
  if ((uVar8 & 1) == 0) {
    uVar3 = uVar2 & 1;
  }
  local_bc[0] = *param_1;
  if (7 < local_bc[0]) {
    local_bc[0] = 0xff;
  }
  uVar2 = FUN_00f64cc0(local_bc,&local_9c);
  iVar14 = uVar3 + (uVar2 & 1);
  local_c0[0] = *param_1;
  if (7 < local_c0[0]) {
    local_c0[0] = 0xff;
  }
  uVar8 = FUN_00f64cc0(local_c0,&local_94);
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar8 & 1) == 0) goto LAB_00f65224;
  local_c8 = 0;
  local_d8 = PTR_DAT_04bc0510 + 0x10;
  local_d0 = local_94;
  uStack_cc = local_90;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_d0);
  if (*(long *)puVar1 == 0) {
LAB_00f6521c:
    iVar9 = 1;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_00f6521c;
    lVar6 = *(long *)PTR_DAT_04bc0428;
    uVar2 = FUN_0277d6c4(&local_94);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar2) ||
       (puVar12 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8),
       puVar12 == (uint *)0x0)) goto LAB_00f6521c;
    uVar2 = *puVar12;
    iVar9 = 1;
    if ((uVar2 != 0) && (puVar12 != (uint *)(ulong)uVar2)) {
      puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar2);
      if ((*puVar13 != 0) && ((uVar2 = puVar13[1], uVar2 != 0 && ((ulong)(ushort)puVar13[2] != 0))))
      {
        lVar6 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar13 + lVar6 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar6 != 0) {
          uVar3 = 0;
          if ((ulong)uVar2 != 0) {
            uVar3 = (uint)((ulong)((long)puVar12 - lVar6) / (ulong)uVar2);
          }
          iVar9 = 1;
          if (*puVar13 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
             (iVar9 = 1, *(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2) == 10))
          {
            iVar9 = 2;
          }
          goto LAB_00f65220;
        }
      }
      goto LAB_00f6521c;
    }
  }
LAB_00f65220:
  iVar14 = iVar9 + iVar14;
LAB_00f65224:
  local_dc[0] = *param_1;
  if (7 < local_dc[0]) {
    local_dc[0] = 0xff;
  }
  uVar2 = FUN_00f64cc0(local_dc,&local_8c);
  local_e0[0] = *param_1;
  if (7 < local_e0[0]) {
    local_e0[0] = 0xff;
  }
  uVar3 = FUN_00f64cc0(local_e0,&local_84);
  local_e4[0] = *param_1;
  if (7 < local_e4[0]) {
    local_e4[0] = 0xff;
  }
  uVar4 = FUN_00f64cc0(local_e4,&local_7c);
  local_e8[0] = *param_1;
  if (7 < local_e8[0]) {
    local_e8[0] = 0xff;
  }
  uVar5 = FUN_00f64cc0(local_e8,&local_74);
  uVar2 = iVar14 + (uVar5 & 1) + (uVar2 & 1) + (uVar3 & 1) + (uVar4 & 1);
  if (2 < uVar2) {
    uVar2 = 3;
  }
  return uVar2;
}

