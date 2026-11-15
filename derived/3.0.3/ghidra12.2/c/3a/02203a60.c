
void FUN_02203a60(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  uint local_14;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_d0 = "AlwJuneBrideDayCount";
  local_d8 = puVar1;
  iVar3 = FUN_0274ce10(param_1,&local_d8);
  if (5 < iVar3) {
    local_d0 = "EnableDiyRemake";
    local_d8 = puVar1;
    iVar3 = FUN_0274ce10(param_1,&local_d8);
    if (iVar3 != 0) {
      local_d8 = puVar2 + 0x10;
      local_d0 = "PreviousJuneBrideTheme";
      uVar4 = FUN_0274ce10(param_1,&local_d8);
      iVar3 = 0;
      local_14 = 0;
      if ((uVar4 < 3) && (iVar3 = (uint)(uVar4 == 1) << 1, local_14 = uVar4, uVar4 == 0)) {
        iVar3 = 1;
      }
      goto LAB_02203b4c;
    }
  }
  iVar3 = 0;
LAB_02203b4c:
  local_d0 = "CurrentJuneBrideTheme";
  local_d8 = puVar2 + 0x10;
  FUN_0274d104(param_1,&local_d8,iVar3);
  FUN_0252d11c(&local_14);
  if ((byte)local_14 < 8) {
    FUN_033d3e14(&local_d8);
    local_34._0_3_ = CONCAT12(0x70,(undefined2)local_34);
    lVar5 = FUN_033d0598(PTR_DAT_04bb32e0);
    *(undefined8 *)(lVar5 + 0x2ac) = local_b8;
    *(undefined8 *)(lVar5 + 0x2b4) = uStack_b0;
    *(undefined4 *)(lVar5 + 700) = local_a8;
    *(undefined **)(lVar5 + 0x28c) = local_d8;
    *(char **)(lVar5 + 0x294) = local_d0;
    *(undefined8 *)(lVar5 + 0x29c) = local_c8;
    *(undefined8 *)(lVar5 + 0x2a4) = uStack_c0;
    *(undefined2 *)(lVar5 + 0x2c0) = local_a4;
    *(undefined1 *)(lVar5 + 0x2c2) = local_a2;
    *(undefined1 *)(lVar5 + 0x2c3) = local_a1;
    *(undefined4 *)(lVar5 + 0x2c4) = local_a0;
    *(undefined8 *)(lVar5 + 0x2c8) = local_9c;
    *(undefined8 *)(lVar5 + 0x2d0) = local_94;
    *(undefined4 *)(lVar5 + 0x2d8) = local_8c;
    *(undefined4 *)(lVar5 + 0x2dc) = uStack_88;
    *(undefined2 *)(lVar5 + 0x2e0) = local_84;
    *(undefined1 *)(lVar5 + 0x2e2) = local_82;
    *(undefined1 *)(lVar5 + 0x2e3) = local_81;
    *(undefined8 *)(lVar5 + 0x2ec) = local_78;
    *(undefined8 *)(lVar5 + 0x2f4) = uStack_70;
    *(undefined8 *)(lVar5 + 0x2fc) = local_68;
    *(undefined4 *)(lVar5 + 0x2e4) = local_80;
    *(undefined4 *)(lVar5 + 0x2e8) = uStack_7c;
    *(undefined8 *)(lVar5 + 0x304) = uStack_60;
    *(undefined4 *)(lVar5 + 0x30c) = local_58;
    *(undefined2 *)(lVar5 + 0x310) = local_54;
    *(undefined1 *)(lVar5 + 0x312) = local_52;
    *(undefined1 *)(lVar5 + 0x313) = local_51;
    *(undefined4 *)(lVar5 + 0x314) = local_50;
    *(undefined2 *)(lVar5 + 0x318) = local_4c;
    *(undefined1 *)(lVar5 + 0x31a) = local_4a;
    *(undefined1 *)(lVar5 + 0x31b) = local_49;
    *(undefined4 *)(lVar5 + 0x31c) = local_48;
    *(undefined2 *)(lVar5 + 800) = local_44;
    *(undefined1 *)(lVar5 + 0x322) = local_42;
    *(undefined1 *)(lVar5 + 0x323) = local_41;
    *(undefined4 *)(lVar5 + 0x324) = local_40;
    *(undefined4 *)(lVar5 + 0x330) = local_34;
    *(undefined8 *)(lVar5 + 0x328) = local_3c;
  }
  return;
}

