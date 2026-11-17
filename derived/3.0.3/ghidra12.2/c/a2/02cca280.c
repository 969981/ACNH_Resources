
void FUN_02cca280(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 local_108;
  undefined2 local_100;
  undefined2 local_fe;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  undefined2 local_b0;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined2 local_80;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  puVar8 = PTR_DAT_04bb43c0;
  puVar7 = PTR_DAT_04bb37e0;
  local_108._0_4_ = 6;
  lVar16 = 0;
  plVar1 = param_1 + 0x3f;
  do {
    local_108._0_4_ = (**(code **)(*param_1 + 0x3f0))(param_1,lVar16);
    if ((((int)local_108 != 2) && ((int)local_108 != 3)) &&
       (uVar11 = (**(code **)(*param_1 + 0x428))(param_1,lVar16), (uVar11 & 1) != 0)) {
      local_c0 = 0xfffe;
      FUN_0277d4ac(&local_c0);
      (**(code **)(*param_1 + 0x3d8))(param_1,&local_c0,lVar16);
      lVar17 = *(long *)puVar8;
      uVar9 = FUN_0277d6c4(&local_c0);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          iVar10 = (**(code **)(*param_1 + 0x3f0))(param_1,lVar16);
          uVar9 = (**(code **)(*param_1 + 1000))(param_1,lVar16);
          if (iVar10 == 1) {
            if (uVar9 < 0x28) {
              FUN_02675b70(plVar1,uVar9);
            }
          }
          else if (iVar10 == 0) {
            FUN_0267c820(plVar1,uVar9,puVar7,0);
          }
        }
      }
    }
    lVar16 = lVar16 + 1;
  } while (lVar16 != 10);
  FUN_0267d190(plVar1);
  local_c0 = 0xfffe;
  FUN_0277d4ac(&local_c0);
  local_b8 = 0xfffe;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  FUN_0277d4ac(&local_b8);
  local_b0 = 0xfffe;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  FUN_0277d4ac(&local_b0);
  local_a8 = 0xfffe;
  FUN_0277d4ac();
  local_a0 = 0xfffe;
  FUN_0277d4ac(&local_a0);
  puVar18 = &local_98;
  local_98 = 0xfffe;
  FUN_0277d4ac();
  local_90 = 0xfffe;
  FUN_0277d4ac();
  local_88 = 0xfffe;
  uStack_86 = 0;
  uStack_85 = 0;
  uStack_84 = 0;
  FUN_0277d4ac();
  local_80 = 0xfffe;
  uStack_7e = 0;
  uStack_7d = 0;
  uStack_7c = 0;
  FUN_0277d4ac();
  local_78 = 0xfffe;
  FUN_0277d4ac();
  local_70[0] = 0xfffe;
  FUN_0277d4ac(local_70);
  local_b8 = *(undefined2 *)puVar7;
  uStack_b6 = puVar7[2];
  uStack_b5 = puVar7[3];
  uStack_b4 = *(undefined4 *)(puVar7 + 4);
  local_70[0] = *(undefined8 *)puVar7;
  local_78 = *(undefined8 *)puVar7;
  local_90 = *(undefined8 *)puVar7;
  local_98 = *(undefined8 *)puVar7;
  local_a0 = *(undefined8 *)puVar7;
  local_a8 = *(undefined8 *)puVar7;
  local_c0 = *(undefined8 *)puVar7;
  local_b0 = local_b8;
  uStack_ae = uStack_b6;
  uStack_ad = uStack_b5;
  uStack_ac = uStack_b4;
  local_88 = local_b8;
  uStack_86 = uStack_b6;
  uStack_85 = uStack_b5;
  uStack_84 = uStack_b4;
  local_80 = local_b8;
  uStack_7e = uStack_b6;
  uStack_7d = uStack_b5;
  uStack_7c = uStack_b4;
  iVar10 = (**(code **)(*param_1 + 0x3f0))(param_1,0);
  if ((iVar10 != 2) && (uVar11 = (**(code **)(*param_1 + 0x440))(param_1,0), (uVar11 & 1) != 0)) {
    local_108._0_4_ = 0xfffe;
    local_108._4_4_ = 0;
    FUN_0277d4ac(&local_108);
    (**(code **)(*param_1 + 0x408))(param_1,&local_c0,0);
  }
  iVar10 = (**(code **)(*param_1 + 0x3f0))(param_1,1);
  if ((iVar10 != 2) && (uVar11 = (**(code **)(*param_1 + 0x440))(param_1,1), (uVar11 & 1) != 0)) {
    local_108._0_4_ = 0xfffe;
    local_108._4_4_ = 0;
    FUN_0277d4ac(&local_108);
    (**(code **)(*param_1 + 0x408))(param_1,&local_b8,1);
  }
  iVar10 = (**(code **)(*param_1 + 0x3f0))(param_1,2);
  if ((iVar10 != 2) && (uVar11 = (**(code **)(*param_1 + 0x440))(param_1,2), (uVar11 & 1) != 0)) {
    local_108._0_4_ = 0xfffe;
    local_108._4_4_ = 0;
    FUN_0277d4ac(&local_108);
    (**(code **)(*param_1 + 0x408))(param_1,&local_b0,2);
  }
  iVar10 = (**(code **)(*param_1 + 0x3f0))(param_1,3);
  if ((iVar10 != 2) && (uVar11 = (**(code **)(*param_1 + 0x440))(param_1,3), (uVar11 & 1) != 0)) {
    local_108._0_4_ = 0xfffe;
    local_108._4_4_ = 0;
    FUN_0277d4ac(&local_108);
    (**(code **)(*param_1 + 0x408))(param_1,&local_a8,3);
  }
  iVar10 = (**(code **)(*param_1 + 0x3f0))(param_1,4);
  if ((iVar10 != 2) && (uVar11 = (**(code **)(*param_1 + 0x440))(param_1,4), (uVar11 & 1) != 0)) {
    local_108._0_4_ = 0xfffe;
    local_108._4_4_ = 0;
    FUN_0277d4ac(&local_108);
    (**(code **)(*param_1 + 0x408))(param_1,&local_a0,4);
  }
  iVar10 = (**(code **)(*param_1 + 0x3f0))(param_1,5);
  if ((iVar10 != 2) && (uVar11 = (**(code **)(*param_1 + 0x440))(param_1,5), (uVar11 & 1) != 0)) {
    local_108._0_4_ = 0xfffe;
    local_108._4_4_ = 0;
    FUN_0277d4ac(&local_108);
    (**(code **)(*param_1 + 0x408))(param_1,puVar18,5);
  }
  iVar10 = (**(code **)(*param_1 + 0x3f0))(param_1,6);
  if ((iVar10 != 2) && (uVar11 = (**(code **)(*param_1 + 0x440))(param_1,6), (uVar11 & 1) != 0)) {
    local_108._0_4_ = 0xfffe;
    local_108._4_4_ = 0;
    FUN_0277d4ac(&local_108);
    (**(code **)(*param_1 + 0x408))(param_1,&local_90,6);
  }
  iVar10 = (**(code **)(*param_1 + 0x3f0))(param_1,7);
  if ((iVar10 != 2) && (uVar11 = (**(code **)(*param_1 + 0x440))(param_1,7), (uVar11 & 1) != 0)) {
    local_108._0_4_ = 0xfffe;
    local_108._4_4_ = 0;
    FUN_0277d4ac(&local_108);
    (**(code **)(*param_1 + 0x408))(param_1,&local_88,7);
  }
  iVar10 = (**(code **)(*param_1 + 0x3f0))(param_1,8);
  if ((iVar10 != 2) && (uVar11 = (**(code **)(*param_1 + 0x440))(param_1,8), (uVar11 & 1) != 0)) {
    local_108._0_4_ = 0xfffe;
    local_108._4_4_ = 0;
    FUN_0277d4ac(&local_108);
    (**(code **)(*param_1 + 0x408))(param_1,&local_80,8);
  }
  iVar10 = (**(code **)(*param_1 + 0x3f0))(param_1,9);
  if ((iVar10 != 2) && (uVar11 = (**(code **)(*param_1 + 0x440))(param_1,9), (uVar11 & 1) != 0)) {
    local_108 = 0xfffe;
    FUN_0277d4ac(&local_108);
    (**(code **)(*param_1 + 0x408))(param_1,&local_78,9);
  }
  local_e8 = *(undefined2 *)puVar7;
  local_e5 = puVar7[3];
  local_e6 = puVar7[2];
  local_f0 = *(undefined4 *)puVar7;
  local_ec = *(undefined4 *)(puVar7 + 4);
  lVar16 = *(long *)puVar8;
  local_100 = local_b8;
  local_fe = CONCAT11(uStack_b5,uStack_b6);
  local_fc = CONCAT17(uStack_ad,CONCAT16(uStack_ae,CONCAT24(local_b0,uStack_b4)));
  local_f4 = uStack_ac;
  local_108 = local_c0;
  local_dc = local_90._4_4_;
  uStack_e0 = (undefined4)local_90;
  local_d8 = local_88;
  local_d6 = uStack_86;
  local_d4 = CONCAT17(uStack_7d,CONCAT16(uStack_7e,CONCAT24(local_80,uStack_84)));
  local_d5 = uStack_85;
  local_cc = uStack_7c;
  local_e4 = local_ec;
  local_c8 = local_e8;
  local_c6 = local_e6;
  local_c5 = local_e5;
  local_c4 = local_ec;
  uVar9 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar8 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      puVar4 = &local_a8;
      puVar5 = &local_a8;
      puVar6 = &local_a8;
      puVar12 = &local_f0;
      puVar13 = (undefined1 *)((long)&local_f0 + 2);
      puVar14 = (undefined1 *)((long)&local_f0 + 3);
      puVar15 = &local_ec;
      puVar18 = &local_a8;
      goto LAB_02ccaa2c;
    }
  }
  puVar4 = &local_98;
  puVar5 = &local_98;
  puVar6 = &local_98;
  puVar12 = (undefined4 *)&local_e8;
  puVar13 = &local_e6;
  puVar14 = &local_e5;
  local_f0 = (undefined4)local_a0;
  local_ec = local_a0._4_4_;
  puVar15 = &local_e4;
LAB_02ccaa2c:
  *puVar13 = *(undefined1 *)((long)puVar4 + 2);
  uVar3 = *(undefined1 *)((long)puVar5 + 3);
  uVar2 = *(undefined4 *)((long)puVar6 + 4);
  *(undefined2 *)puVar12 = *(undefined2 *)puVar18;
  *puVar14 = uVar3;
  *puVar15 = uVar2;
  FUN_02cda9f0(plVar1,&local_108);
  return;
}

