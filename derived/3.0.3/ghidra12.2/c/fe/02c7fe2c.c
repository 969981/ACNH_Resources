
/* WARNING: Removing unreachable block (ram,0x02c7ffc8) */
/* WARNING: Removing unreachable block (ram,0x02c7ffe4) */

void FUN_02c7fe2c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  byte bVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *local_a98;
  undefined2 local_a90;
  undefined4 local_a8c;
  undefined **local_a88;
  undefined2 *puStack_a80;
  undefined4 local_a78;
  undefined2 local_a74 [255];
  undefined2 local_876;
  undefined **local_870;
  undefined2 *local_868;
  undefined4 local_860;
  undefined2 local_85c [106];
  undefined2 local_788;
  undefined1 local_786;
  undefined1 local_785;
  undefined4 local_784;
  undefined2 local_780;
  undefined2 local_65e;
  undefined **local_658;
  undefined2 *local_650;
  undefined4 local_648;
  undefined2 local_644 [255];
  undefined2 local_446;
  undefined2 local_440;
  undefined1 local_3e4;
  undefined1 local_388;
  undefined8 local_384;
  undefined4 local_37c;
  undefined1 local_378;
  undefined1 local_374;
  undefined1 auStack_372 [674];
  undefined2 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_78;
  undefined1 local_6c;
  undefined4 local_68;
  
  lVar12 = *(long *)(*(long *)(param_1 + 0x210) + 0x5f8);
  if ((lVar12 != 0) && (lVar10 = *(long *)(lVar12 + 0x220), lVar10 != 0)) {
    iVar1 = *(int *)(lVar10 + 0x10);
    iVar2 = *(int *)(lVar12 + 0x440);
    if ((iVar1 != 0 && iVar1 != iVar2) && (iVar1 == 0 || iVar2 <= iVar1)) {
      puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x18) + (long)iVar2 * 8);
      goto LAB_02c7fe80;
    }
  }
  puVar11 = (undefined8 *)&DAT_05586008;
LAB_02c7fe80:
  uVar6 = *(undefined2 *)puVar11;
  uVar4 = *(undefined1 *)((long)puVar11 + 2);
  puStack_a80 = local_a74;
  uVar5 = *(undefined1 *)((long)puVar11 + 3);
  uVar3 = *(undefined4 *)((long)puVar11 + 4);
  uVar7 = *puVar11;
  local_a90 = 0x100;
  local_876 = 0;
  local_a74[0] = 0;
  local_a78 = 0x100;
  local_868 = local_85c;
  local_85c[0] = 0;
  local_a98 = PTR_DAT_04bb8a58 + 0x10;
  local_860 = 0x100;
  local_648 = 0x100;
  local_65e = 0;
  local_650 = local_644;
  local_644[0] = 0;
  local_446 = 0;
  local_440 = 0;
  local_3e4 = 0;
  local_388 = 0;
  local_384 = 0xfffe00000000;
  local_37c = 0;
  local_870 = &PTR_LAB_04957198;
  local_658 = &PTR_LAB_04957198;
  local_a88 = &PTR_LAB_04957198;
  FUN_0277d4ac((long)&local_384 + 4);
  local_378 = 0;
  local_374 = 0;
  memset(auStack_372,0,0x2a2);
  local_d0 = 0xfffe;
  local_cc = 0;
  uStack_c4 = 0;
  local_78 = 0xfffe;
  local_bc = 0;
  uStack_b4 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  local_9c = 0;
  uStack_94 = 0;
  FUN_0277d4ac(&local_78);
  puVar8 = PTR_DAT_04bb2230;
  local_6c = 0;
  local_68 = 0;
  lVar12 = 0;
  if (*(long *)PTR_DAT_04bb2230 != 0) {
    lVar12 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
  }
  if (DAT_05739db8 != 0) {
    lVar10 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar10 = 0;
    }
    if (*(char *)(lVar10 + 0x86) != '\0') {
      *(undefined1 *)(lVar10 + 0x87) = 1;
    }
  }
  local_78 = uVar7;
  FUN_0338faf0(lVar12 + 0xdc0,&local_a98);
  lVar12 = *(long *)puVar8;
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x28);
  }
  if (*(char *)(lVar12 + 0x18b8) == '\0') {
    bVar9 = 1;
  }
  else {
    bVar9 = (**(code **)(*(long *)(lVar12 + 0x18b0) + 0x18))(lVar12 + 0x18b0);
    *(char *)(lVar12 + 0x18b8) = '\0';
  }
  local_a98 = PTR_DAT_04bb8d40;
  *(byte *)(lVar12 + 0x18b9) = bVar9 & 1;
  local_a8c = *(undefined4 *)(lVar12 + 0x18bc);
  local_a90 = *(undefined2 *)(lVar12 + 0x18b8);
  local_a98 = local_a98 + 0x10;
  FUN_02c63390(&local_a88,lVar12 + 0x18c0);
  local_780 = *(undefined2 *)(lVar12 + 0x1bc8);
  local_a8c = 2;
  local_788 = uVar6;
  local_786 = uVar4;
  local_785 = uVar5;
  local_784 = uVar3;
  FUN_0338fe50(*(undefined8 *)(*(long *)puVar8 + 0x28),0,&local_a98);
  *(undefined4 *)(param_1 + 0x1c760) = 0x10;
  return;
}

