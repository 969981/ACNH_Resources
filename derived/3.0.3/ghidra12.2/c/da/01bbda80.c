
void FUN_01bbda80(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *local_160;
  undefined8 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  local_14c = 0;
  local_150 = 0x20;
  local_148 = 0xffffffff;
  uStack_140 = 0xffffffff00000000;
  puStack_158 = &local_80;
  local_138 = 0xffffffff;
  puStack_128 = local_11c;
  local_120 = 0x40;
  local_dd = 0;
  local_11c[0] = 0;
  local_130 = PTR_DAT_04bb2bc0 + 0x10;
  local_c8 = 0x40;
  local_85 = 0;
  local_c4[0] = 0;
  puStack_d0 = local_c4;
  local_160 = PTR_DAT_04bb4e10 + 0x10;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  puVar3 = local_c4 + 0x84;
  if (local_c4 + 0x84 <= (undefined1 *)((long)&local_80 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_80 + 2U);
  }
  local_d8 = local_130;
  memset(puStack_158,0,(size_t)(puVar3 + (-0xe0 - (long)&local_160)));
  lVar13 = *(long *)(param_1 + 0x4c8);
  uVar7 = (**(code **)(*param_2 + 0x60))(param_2);
  uVar8 = (**(code **)(*param_2 + 0x68))(param_2);
  if ((*(long *)(lVar13 + 0x88) == 0) || (*(long *)(lVar13 + 0x90) == 0)) {
    FUN_006f50a0(&local_160,uVar7,uVar8,0);
  }
  else {
    iVar6 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,uVar7);
    if (iVar6 == 9) {
      uVar9 = *(undefined8 *)(lVar13 + 0x88);
    }
    else {
      if (iVar6 != 5) goto LAB_01bbdbdc;
      uVar9 = *(undefined8 *)(lVar13 + 0x90);
    }
    FUN_01ba7cc0(uVar9,&local_160,uVar7,uVar8);
  }
LAB_01bbdbdc:
  lVar13 = (**(code **)(local_160 + 0x18))(&local_160);
  lVar10 = (**(code **)(local_160 + 0x18))(&local_160);
  if (((lVar10 != 0) && (uVar11 = (**(code **)(local_160 + 0x20))(&local_160), lVar13 != 0)) &&
     (*(int *)(param_1 + 0x1e8) < 9)) {
    uVar1 = *(int *)(param_1 + 0x1e8) + 1;
    *(uint *)(param_1 + 0x1e8) = uVar1;
    plVar4 = (long *)(param_1 + 8) + (ulong)uVar1 * 6;
    if (9 < uVar1) {
      plVar4 = (long *)(param_1 + 8);
    }
    *plVar4 = lVar13;
    plVar4[1] = lVar10 + (uVar11 & 0xffffffff) * 2;
    plVar4[2] = (long)&PTR_FUN_048fc6e0;
  }
  iVar6 = *(int *)(param_1 + 0x2c8);
  iVar5 = *(int *)(param_1 + 0x2c0);
  if (iVar6 < iVar5) {
    *(int *)(param_1 + 0x2c8) = iVar6 + 1;
    iVar6 = *(int *)(param_1 + 0x2c4) + iVar6;
    iVar2 = 0;
    if (iVar5 <= iVar6) {
      iVar2 = iVar5;
    }
    puVar12 = (undefined8 *)(*(long *)(param_1 + 0x2b8) + (long)(iVar6 - iVar2) * 0x30);
    *(undefined4 *)((long)puVar12 + 0xc) = 0;
    *(undefined2 *)(puVar12 + 2) = 0;
    *puVar12 = 0;
    *(undefined4 *)((long)puVar12 + 7) = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    *(undefined8 *)((long)puVar12 + 0x25) = 0;
    *puVar12 = *(undefined8 *)(param_1 + 0x208);
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(param_1 + 0x210);
    *(undefined1 *)((long)puVar12 + 9) = *(undefined1 *)(param_1 + 0x211);
    *(undefined1 *)((long)puVar12 + 10) = *(undefined1 *)(param_1 + 0x212);
    *(undefined2 *)((long)puVar12 + 0xc) = *(undefined2 *)(param_1 + 0x214);
    *(undefined2 *)((long)puVar12 + 0xe) = *(undefined2 *)(param_1 + 0x216);
    *(undefined2 *)(puVar12 + 2) = *(undefined2 *)(param_1 + 0x218);
    puVar12[3] = *(undefined8 *)(param_1 + 0x220);
    puVar12[4] = *(undefined8 *)(param_1 + 0x228);
    *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(param_1 + 0x230);
    *(undefined1 *)((long)puVar12 + 0x2c) = *(undefined1 *)(param_1 + 0x234);
  }
  if (*(uint *)(param_1 + 0x1e8) < 10) {
    lVar13 = param_1 + (ulong)*(uint *)(param_1 + 0x1e8) * 0x30;
    *(undefined1 **)(lVar13 + 0x28) = &LAB_01bb654c;
    *(undefined8 *)(lVar13 + 0x30) = 0;
    *(undefined ***)(lVar13 + 0x18) = &PTR_LAB_04a3b780;
    *(long *)(lVar13 + 0x20) = param_1;
  }
  if (*(char *)(param_1 + 0x4ba) != '\0') {
    *(undefined2 *)(param_1 + 0x4ba) = 0x100;
  }
  return;
}

