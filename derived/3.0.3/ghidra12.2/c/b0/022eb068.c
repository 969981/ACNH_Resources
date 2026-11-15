
/* WARNING: Removing unreachable block (ram,0x022eb154) */
/* WARNING: Removing unreachable block (ram,0x022eb124) */
/* WARNING: Removing unreachable block (ram,0x022eb134) */
/* WARNING: Removing unreachable block (ram,0x022eb164) */

void FUN_022eb068(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  undefined *local_14a8;
  undefined8 local_14a0;
  undefined8 local_1498;
  undefined8 local_1490;
  undefined4 local_1488;
  undefined4 local_1484;
  undefined8 local_1480;
  undefined4 uStack_1478;
  undefined4 uStack_1474;
  undefined8 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  undefined8 uStack_1458;
  undefined *local_1450;
  undefined *puStack_1448;
  undefined8 local_1440;
  undefined *puStack_1438;
  undefined *local_1430;
  undefined8 uStack_1428;
  undefined *local_1420;
  undefined8 uStack_1418;
  undefined1 auStack_1410 [4984];
  undefined **local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined *local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined5 uStack_48;
  
  piVar7 = (int *)(param_1 + 0x20);
  piVar7[0] = 0;
  piVar7[1] = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x30) = 7;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  if (*(char *)(param_2 + 5) == '\0') {
    local_1490 = *param_2;
    local_1484 = 0x40000000;
    local_1468 = CONCAT71(local_1468._1_7_,1);
    local_14a8 = *(undefined **)((long)param_2 + 0xc);
    local_1480._0_4_ = (uint)local_1480 & 0xffffff00;
    local_1480._4_4_ = 0;
    uStack_1478 = 0;
    uStack_1474 = 0;
    local_1470._0_4_ = 0;
    local_1470._4_4_ = 0;
    local_14a0 = CONCAT44(*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 0x14));
    local_1488 = *(undefined4 *)(param_2 + 1);
    local_1498 = *(undefined8 *)((long)param_2 + 4);
    iVar3 = FUN_016f36e0(&local_14a8);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 2;
      goto LAB_022eb3a0;
    }
  }
  puVar2 = PTR_DAT_04bb27a8;
  local_98 = &local_58;
  local_84 = *(undefined4 *)(param_2 + 1);
  local_58 = PTR_DAT_04bbc248 + 0x10;
  local_50 = 0;
  local_78 = *(undefined4 *)((long)param_2 + 0x14);
  uStack_4c = 0;
  uStack_48 = 0;
  local_90 = 1;
  local_8c = *param_2;
  local_80 = *(undefined8 *)((long)param_2 + 0xc);
  local_74 = *(undefined4 *)(param_2 + 3);
  local_60 = 0;
  lVar5 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar5 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = *(undefined8 *)(lVar5 + 0xa8);
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_68 = 0;
  if (lVar5 != 0) {
    local_68 = *(undefined8 *)(lVar5 + 0xb0);
  }
  if ((*(char *)(param_2 + 5) != '\0') &&
     (local_60 = 0x1000100, *(int *)((long)param_2 + 0x2c) == 1)) {
    local_60 = 0x1010100;
  }
  local_1498 = 0;
  local_1490 = 0;
  local_1488 = 0;
  local_14a8 = PTR_DAT_04bbc238 + 0x10;
  puStack_1448 = PTR_DAT_04bb2018 + 0x10;
  local_14a0 = 0;
  uStack_1478 = 0;
  uStack_1474 = 0;
  local_1468 = 0;
  local_1450 = PTR_DAT_04bbc2a0 + 0x10;
  local_1460 = 0;
  uStack_1458 = 0;
  uStack_1428 = 0;
  puStack_1438 = PTR_DAT_04bbc5d8 + 0x10;
  uStack_1418 = 0;
  local_1440 = 0;
  local_1430 = puStack_1448;
  local_1420 = puStack_1448;
  local_1480 = puStack_1448;
  local_1470 = puStack_1448;
  FUN_01300510(auStack_1410);
  FUN_012f2ed0(&local_14a8,&local_98);
  FUN_022ee0a4(param_1 + 8,&local_58);
  if (*(char *)(param_1 + 0x44) == '\0') {
    if (*(int *)(param_1 + 0x28) != 0) goto LAB_022eb3a0;
    local_14a8 = (undefined *)CONCAT44(local_14a8._4_4_,*piVar7);
    if (*piVar7 == 0) goto LAB_022eb3a0;
  }
  else if (1 < *(uint *)(param_1 + 0x10)) goto LAB_022eb3a0;
  if (local_50 == 5) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    goto LAB_022eb3a0;
  }
  uVar1 = *(uint *)(param_2 + 3);
  local_98 = (undefined **)CONCAT44(local_98._4_4_,uVar1);
  lVar5 = *(long *)puVar2;
  local_14a8 = PTR_DAT_04bbc308 + 0x10;
  if ((int)*(uint *)(lVar5 + 0x7a8) < 1) {
    if ((((*(long *)(lVar5 + 0x698) == 0) ||
         (puVar6 = *(uint **)(*(long *)(lVar5 + 0x698) + 8), puVar6 == (uint *)0x0)) ||
        ((uVar1 < *(uint *)(lVar5 + 0x6b0) &&
         (*(char *)(*(long *)(lVar5 + 0x6b8) + (long)(int)uVar1) == '\0')))) ||
       (((*puVar6 <= uVar1 || (puVar6[1] == 0)) || ((ushort)puVar6[2] == 0)))) goto LAB_022eb38c;
    iVar3 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar3 = 0x1c;
    }
    local_14a0 = (ulong)(puVar6[1] * uVar1 + (uint)(ushort)puVar6[2] * 8 + iVar3) + (long)puVar6;
  }
  else if (uVar1 < *(uint *)(lVar5 + 0x7a8)) {
    if (*(uint *)(lVar5 + 0x798) <= uVar1) {
      uVar1 = 0;
    }
    local_14a0 = *(long *)(*(long *)(lVar5 + 0x7a0) + (ulong)uVar1 * 8);
  }
  else {
LAB_022eb38c:
    local_14a0 = 0;
  }
  uVar4 = FUN_0130dbe0(&local_14a8);
  *(undefined4 *)(param_1 + 0x30) = uVar4;
LAB_022eb3a0:
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 4);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 1);
  if (*(char *)(param_1 + 0x44) == '\0') {
    if (*(int *)(param_1 + 0x28) != 0) {
      return;
    }
    local_14a8 = (undefined *)CONCAT44(local_14a8._4_4_,*piVar7);
    if (*piVar7 == 0) {
      return;
    }
  }
  else if (1 < *(uint *)(param_1 + 0x10)) {
    return;
  }
  FUN_022eaf58(param_1,param_2);
  return;
}

