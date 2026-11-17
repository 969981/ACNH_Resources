
/* WARNING: Removing unreachable block (ram,0x02c7fd10) */
/* WARNING: Removing unreachable block (ram,0x02c7fd2c) */

void FUN_02c7fb40(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *local_aa0;
  undefined2 local_a98;
  undefined4 local_a94;
  undefined **local_a90;
  undefined2 *puStack_a88;
  undefined4 local_a80;
  undefined2 local_a7c [255];
  undefined2 local_87e;
  undefined **local_878;
  undefined2 *local_870;
  undefined4 local_868;
  undefined2 local_864 [106];
  undefined2 local_790;
  undefined1 local_78e;
  undefined1 local_78d;
  undefined4 local_78c;
  undefined2 local_788;
  undefined2 local_666;
  undefined **local_660;
  undefined2 *local_658;
  undefined4 local_650;
  undefined2 local_64c [255];
  undefined2 local_44e;
  undefined2 local_448;
  undefined1 local_3ec;
  undefined1 local_390;
  undefined8 local_38c;
  undefined4 local_384;
  undefined1 local_380;
  undefined1 local_37c;
  undefined1 auStack_37a [674];
  undefined2 local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_80;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x1c66c) == 9) {
    *(long *)(param_1 + 0x1c6a8) = param_1;
    *(undefined **)(param_1 + 0x1c6a0) = &DAT_04ab2e28;
    *(undefined1 **)(param_1 + 0x1c6b0) = &LAB_02c7f368;
    *(undefined8 *)(param_1 + 0x1c6b8) = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x210) + 0x5f8);
    if (((lVar10 == 0) || (lVar8 = *(long *)(lVar10 + 0x220), lVar8 == 0)) ||
       (*(int *)(lVar8 + 0x10) == 0 || *(int *)(lVar8 + 0x10) <= *(int *)(lVar10 + 0x440))) {
      puVar9 = (undefined8 *)&DAT_05586008;
    }
    else {
      puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x18) + (long)*(int *)(lVar10 + 0x440) * 8);
    }
    uVar4 = *(undefined2 *)puVar9;
    uVar2 = *(undefined1 *)((long)puVar9 + 2);
    puStack_a88 = local_a7c;
    uVar3 = *(undefined1 *)((long)puVar9 + 3);
    uVar1 = *(undefined4 *)((long)puVar9 + 4);
    uVar5 = *puVar9;
    local_a98 = 0x100;
    local_87e = 0;
    local_a7c[0] = 0;
    local_a80 = 0x100;
    local_870 = local_864;
    local_864[0] = 0;
    local_aa0 = PTR_DAT_04bb8a58 + 0x10;
    local_868 = 0x100;
    local_650 = 0x100;
    local_666 = 0;
    local_658 = local_64c;
    local_64c[0] = 0;
    local_44e = 0;
    local_448 = 0;
    local_3ec = 0;
    local_390 = 0;
    local_38c = 0xfffe00000000;
    local_384 = 0;
    local_878 = &PTR_LAB_04957198;
    local_660 = &PTR_LAB_04957198;
    local_a90 = &PTR_LAB_04957198;
    FUN_0277d4ac((long)&local_38c + 4);
    local_380 = 0;
    local_37c = 0;
    memset(auStack_37a,0,0x2a2);
    local_d8 = 0xfffe;
    local_d4 = 0;
    uStack_cc = 0;
    local_80 = 0xfffe;
    local_c4 = 0;
    uStack_bc = 0;
    local_b4 = 0;
    uStack_ac = 0;
    local_a4 = 0;
    uStack_9c = 0;
    FUN_0277d4ac(&local_80);
    puVar6 = PTR_DAT_04bb2230;
    local_74 = 0;
    local_70 = 0;
    lVar10 = 0;
    if (*(long *)PTR_DAT_04bb2230 != 0) {
      lVar10 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    }
    local_68 = 0xf;
    local_64 = 0;
    if (DAT_05739db8 != 0) {
      lVar8 = DAT_05739da8;
      if (DAT_05739db8 < 1) {
        lVar8 = 0;
      }
      if (*(char *)(lVar8 + 0x86) != '\0') {
        *(undefined1 *)(lVar8 + 0x87) = 1;
      }
    }
    local_80 = uVar5;
    FUN_0338faf0(lVar10 + 0xdc0,&local_aa0);
    lVar10 = *(long *)puVar6;
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x28);
    }
    if (*(char *)(lVar10 + 0x18b8) == '\0') {
      bVar7 = 1;
    }
    else {
      bVar7 = (**(code **)(*(long *)(lVar10 + 0x18b0) + 0x18))(lVar10 + 0x18b0);
      *(char *)(lVar10 + 0x18b8) = '\0';
    }
    local_aa0 = PTR_DAT_04bb8d40;
    *(byte *)(lVar10 + 0x18b9) = bVar7 & 1;
    local_a94 = *(undefined4 *)(lVar10 + 0x18bc);
    local_a98 = *(undefined2 *)(lVar10 + 0x18b8);
    local_aa0 = local_aa0 + 0x10;
    FUN_02c63390(&local_a90,lVar10 + 0x18c0);
    local_788 = *(undefined2 *)(lVar10 + 0x1bc8);
    local_a94 = 1;
    local_790 = uVar4;
    local_78e = uVar2;
    local_78d = uVar3;
    local_78c = uVar1;
    FUN_0338fe50(*(undefined8 *)(*(long *)puVar6 + 0x28),0,&local_aa0);
    *(undefined4 *)(param_1 + 0x1c760) = 0x10;
  }
  return;
}

